#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    double sum = 0.0;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];  
    }

    double average = sum / n;

    cout << "The average of the elements in the array is: " << average << endl;

    return 0;
}
