#include <iostream>
#include <limits.h>
using namespace std;

int findMin(int arr[], int size) {
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    findMin(arr, n);
    return 0;
}
