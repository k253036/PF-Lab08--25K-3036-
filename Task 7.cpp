#include <stdio.h>

int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int arr[10], x, index;

    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &x);

    index = search(arr, 10, x);

    if (index == -1)
        printf("Number not found\n");
    else
        printf("Number found at index %d\n", index);

    return 0;
}
