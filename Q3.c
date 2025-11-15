//REMOVES DUPLICATES FROM ARRAY AND PRINTS UNIQUE ELEMENTS ONLY
#include <stdio.h>
int removeDuplicates(int nums[], int Size) {
    int j = 1;
    for (int i = 1; i < Size; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}
int main() {
    int n, i;
    printf("Enter number of elements in an array\n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter element no %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    int k = removeDuplicates(arr, n);
    printf("Total no of Unique Elements = %d\n", k);
    printf("Array after removing duplicates: ");
    for (i = 0;i < k;i++) {
        printf("%d ", arr[i]);
    }
}