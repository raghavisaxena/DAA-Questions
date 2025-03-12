#include <iostream>
#include <algorithm> // For sort function
using namespace std;

bool hasDuplicates(int arr[], int n) {
    sort(arr, arr + n); // O(n log n) sorting
    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return true; // Duplicate found
        }
    }
    return false; // No duplicates
}

int main() {
    int arr[] = {4, 2, 7, 1, 9, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (hasDuplicates(arr, n)) {
        cout << "Duplicates found in the array." << endl;
    } else {
        cout << "No duplicates in the array." << endl;
    }
    
    return 0;
}
