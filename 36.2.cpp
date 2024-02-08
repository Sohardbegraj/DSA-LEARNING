#include <iostream>
using namespace std;
//                                     selection sort by while loop
void selectionSort(int arr[], int n) {
    int i, j, minIndex;
    i = 0;
    while (i < n - 1) {             // loop run till n-1
        minIndex = i;
        j = i + 1;
        while (j < n) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            j++;
        }
        // Swap elements
        swap(arr[i], arr[minIndex]);
        i++;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
