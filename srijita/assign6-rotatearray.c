#include <stdio.h>
void reverseArray(int arr[], int start, int end) 
{
    int temp;
    while (start < end) 
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotateArray(int arr[], int n, int k) 
{
    k = k % n;
    reverseArray(arr, 0, n - 1);
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n - 1);
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
}
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    rotateArray(arr, n, k);
    printf("Rotated array is: \n");
    printArray(arr, n);
    return 0;
}