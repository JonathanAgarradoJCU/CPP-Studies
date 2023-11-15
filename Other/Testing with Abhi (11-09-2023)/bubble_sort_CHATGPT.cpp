#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
  for (int i = 0; i < arr.size() - 1; i++) {
    for (int j = 0; j < arr.size() - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
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

  if (n <= 0)
  {
    std::cout << "Invalid input. Please enter a positive number of elements." << std::endl;
    return 1;
  }

  std::vector<int> arr(n); // Create a vector of size n

  std::cout << "Enter " << n << " integers:" << std::endl;

  for (int i = 0; i < n; i++)
  {
    std::cin >> arr[i];
  }

  bubbleSort(arr);

  std::cout << "Sorted array in ascending order: ";
  for (int i = 0; i < arr.size(); i++)
  {
    std::cout << arr[i] << " ";
  }

  std::cout << std::endl;
  return 0;
}
