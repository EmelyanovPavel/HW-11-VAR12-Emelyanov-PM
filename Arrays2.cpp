// homework 11.
#include <iostream>
#include <algorithm>
#include <vector>

// //Task 1. A sequence of integers is given.
// //12. Count the number of maximum elements.

void task1() {
    int size, k;
    std::cout << "Enter an array size:\n";
    std::cin >> size;

    int* arr = new int[size];
    std::cout << "Enter an array:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    auto max = std::max_element(arr, arr + size);
    k = std::count_if(arr, arr + size, [&](int i) { return i == *max; });
    std::cout << "The number of the maximum elements: " << k << std::endl;
    delete[] arr;

}

// //Task 2. A sequence of integers is given.
// //12.  Insert a new element after all the elements that are multiples of their number.

void task2()
{

    // Creating a vector with the original data
    std::vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Output the original vector
    std::cout << "Source vector: [ ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "]" << std::endl;

    // Creating a new vector for the result
    std::vector<int> result;

    // Using the iterator to iterate through the elements
    for (size_t i = 0; i < numbers.size(); i++) {
        // Adding the current element
        result.push_back(numbers[i]);

        // Checking the condition: an element is a multiple of its index + 1
        if (numbers[i] % (i + 1) == 0) {
            // Вставляем новый элемент 
            result.push_back(numbers[i] + 1);
        }
    }

    // Displaying the result
    std::cout << "Modified vector: [ ";
    for (const auto& num : result) {
        std::cout << num << " ";
    }
    std::cout << "]" << std::endl;
   
}

int main()
{
    task1();
    task2();

    return 0;
}
