#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted halves
void merge(vector<int> &arr, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> left(n1), right(n2);

    // Copy data to temporary vectors
    for (int i = 0; i < n1; i++) left[i] = arr[low + i];
    for (int i = 0; i < n2; i++) right[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = low;

    // Merge the two halves
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left[]
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy remaining elements of right[]
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Recursive merge sort function
void mergeSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // Recursively sort first and second halves
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
}

int main() {
    vector<int> arr = {12, 3, 45, 7, 1, 34, 100, 23};

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted vector: ";
    for (int num : arr) cout << num << " ";

    return 0;
}
