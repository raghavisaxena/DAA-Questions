#include <iostream>
#include <cstdlib> // For rand()
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int left, int right) {
    int randomIndex = left + rand() % (right - left + 1);
    swap(arr[randomIndex], arr[right]); // Random pivot selection
    int pivot = arr[right];
    int i = left;

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);
    return i;
}

int quickSelect(int arr[], int left, int right, int k) {
    if (left <= right) {
        int pi = partition(arr, left, right);
        
        if (pi == k) return arr[pi];
        else if (pi > k) return quickSelect(arr, left, pi - 1, k);
        else return quickSelect(arr, pi + 1, right, k);
    }
    return -1; // Should never reach here
}

int findKthSmallest(int arr[], int n, int k) {
    return quickSelect(arr, 0, n - 1, k - 1);
}

int findKthLargest(int arr[], int n, int k) {
    return quickSelect(arr, 0, n - 1, n - k);
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Change K value as needed
    
    cout << k << "th smallest element: " << findKthSmallest(arr, n, k) << endl;
    cout << k << "th largest element: " << findKthLargest(arr, n, k) << endl;
    
    return 0;
}