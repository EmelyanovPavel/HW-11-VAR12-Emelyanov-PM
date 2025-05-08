// Homework 11.
#include <iostream>
#include <algorithm>
#include <vector>

////Task 1. A sequence of integers is given.
////12. Count the number of maximum elements.

void task1()
{

    // Creating a new vector for storing numbers
    std::vector<int> numbers;

    // Getting the size of the vector from the user
    int size;
    std::cout << "Enter the array size: ";
    std::cin >> size;

    // Filling the vector with values
    std::cout << "Enter the numbers:" << std::endl;
    for (int i = 0; i < size; i++) {
        int value;
        std::cout << "Element [" << i << "]: ";
        std::cin >> value;
        numbers.push_back(value);
    }

    // Finding the maximum element
    //Using the max_element algorithm to find the maximum value
    auto max_element = std::max_element(numbers.begin(), numbers.end());

    // Calculating the number of maximum elements
    // Using the count algorithm to count the number of maximum elements
    int max_count = std::count(numbers.begin(), numbers.end(), *max_element);

    // Displaying the result
    std::cout << "Maximum value: " << *max_element << std::endl;
    std::cout << "Number of maximum elements: " << max_count << std::endl;

}

// //Task 2. A sequence of integers is given.
// //12.  Insert a new element after all the elements that are multiples of their number.

void task2()
{

    // Creating a new vector for storing numbers
    std::vector<int> numbers;

    // Getting the size of the vector from the user
    int size;
    std::cout << "Enter the array size: ";
    std::cin >> size;

    // Filling the vector with values
    std::cout << "Enter the numbers:" << std::endl;
    for (size_t i = 0; i < size; i++) {
        int value;
        std::cout << "Element [" << i << "]: ";
        std::cin >> value;
        numbers.push_back(value);
    }

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
            // Inserting a new element
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
