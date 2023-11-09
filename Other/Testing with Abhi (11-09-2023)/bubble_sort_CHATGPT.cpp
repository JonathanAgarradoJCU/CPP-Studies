#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input. Please enter a positive number of elements." << std::endl;
        return 1;
    }

    int arr[n];

    std::cout << "Enter " << n << " integers:" << std::endl;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    bubbleSort(arr, n);

    std::cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
