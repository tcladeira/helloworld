#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the strings
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int size = 5;
    string arr[size] = {"banana", "apple", "orange", "grape", "kiwi"};

    // Sort the array of strings using Bubble Sort
    bubbleSort(arr, size);

    // Print the sorted array
    cout << "Sorted array of strings: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}