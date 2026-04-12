#include <stdio.h>
int linSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    return -1;
  }
}

int main() {
    int array[] = {64, 25, 12, 22, 11};
    int key = 12;
    int n = sizeof(array) / sizeof(array[0]);

    int result = linSearch(array, n, key);

    if (result != -1) {
        printf("Element %d found at index: %d\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
} 
