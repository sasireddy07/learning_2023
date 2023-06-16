#include <stdio.h>

void summation(int arr[], int length) {
    int sum = 0,i;
    for ( i = 0; i < length; i++) {
        sum = sum + arr[i];
        i++;
    }
    printf("Sum is: %d\n", sum);
}

int main() {
    int length;
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    int arr[length],i;
    printf("Enter the array elements:\n");
    for ( i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    summation(arr, length);

    return 0;
}
