#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    i = 1;
    while (i < n) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            // Shift elements to the right
            arr[j + 1] = arr[j];
            j--;
        }
        // Place the key at its correct position
        arr[j + 1] = key;
        i++;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
