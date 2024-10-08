#include <iostream>
using namespace std;
int main() {
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Reversed array:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
