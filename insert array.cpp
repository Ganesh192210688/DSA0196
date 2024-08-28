#include <iostream>

int main() {
    int n, pos, element;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n + 1];

    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the element to be inserted: ";
    std::cin >> element;

    std::cout << "Enter the position where the element is to be inserted (1-based index): ";
    std::cin >> pos;

    pos -= 1;

    for (int i = n; i > pos; --i) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;

    std::cout << "Array after insertion:\n";
    for (int i = 0; i <= n; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
