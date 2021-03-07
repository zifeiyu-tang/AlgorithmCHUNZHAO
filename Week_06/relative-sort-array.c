struct hashTable {
    int key;
    int val;
    UT_hash_handle hh;
};

struct hashTable* hashtable;

struct hashTable* find(int ikey) {
    struct hashTable* tmp;
    HASH_FIND_INT(hashtable, &ikey, tmp);
    return tmp;
}

void insert(int ikey, int ival) {
    struct hashTable* tmp = malloc(sizeof(struct hashTable));
    tmp->key = ikey, tmp->val = ival;
    HASH_ADD_INT(hashtable, key, tmp);
}

int cmp(void* _a, void* _b) {
    int a = *((int*)_a), b = *((int*)_b);
    struct hashTable *fa = find(a), *fb = find(b);
    if (fa == NULL) {
        return fb == NULL ? a - b : 1;
    } else {
        return fb == NULL ? -1 : fa->val - fb->val;
    }
}

int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    hashtable = NULL;
    for (int i = 0; i < arr2Size; ++i) {
        insert(arr2[i], i);
    }
    qsort(arr1, arr1Size, sizeof(int), cmp);
    *returnSize = arr1Size;
    return arr1;
}
/*计数排序*/
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    int upper = 0;
    for (int i = 0; i < arr1Size; i++) {
        upper = fmax(upper, arr1[i]);
    }
    int frequency[upper + 1];
    memset(frequency, 0, sizeof(frequency));
    for (int i = 0; i < arr1Size; i++) {
        frequency[arr1[i]]++;
    }
    int* ans = malloc(sizeof(int) * arr1Size);
    *returnSize = 0;
    for (int i = 0; i < arr2Size; i++) {
        int x = arr2[i];
        for (int j = 0; j < frequency[x]; j++) {
            ans[(*returnSize)++] = x;
        }
        frequency[x] = 0;
    }
    for (int x = 0; x <= upper; x++) {
        for (int i = 0; i < frequency[x]; i++) {
            ans[(*returnSize)++] = x;
        }
    }
    return ans;
}

