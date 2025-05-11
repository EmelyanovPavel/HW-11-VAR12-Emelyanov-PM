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
    std::cout << "Enter the vector size: ";
    std::cin >> size;

    // Filling the vector with values
    std::cout << "Enter the numbers:" << std::endl;
    for (int i = 0; i < size; i++) 
    {
        int value;
        std::cout << "Element [" << i << "]: ";
        std::cin >> value;
        numbers.push_back(value);
    }

    // Finding the maximum element
    // Using the max_element algorithm to find the maximum value
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

void insertElements(std::vector<int>& arr, int newValue) 
{
    // Getting iterators for the beginning and end of the vector
    auto start = arr.begin();
    auto end = arr.end();
    
    // Creating a copy of the iterator for iteration
    auto it = start;
    
    // going through the vector from the end
    for(size_t i = arr.size() - 1; i >= 0; i--) 
    {
        // Checking the multiplicity
        if(*(start + i) % (i + 1) == 0) 
        {
            // Inserting a new element after the current one
            arr.insert(start + i + 1, newValue);
            
            // Inserting a new element after the current one
            end = arr.end();
        }
    }
}

void task2() 
{
    int n;
    std::cout << "Enter the vector size: ";
    std::cin >> n;
    
    std::vector<int> numbers;
    std::cout << "Enter the vector elements:" << std::endl;
    for(int i = 0; i < n; i++) 
    {
        int value;
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> value;
        numbers.push_back(value);
    }
    
    int newValue;
    std::cout << "Enter the value to insert: ";
    std::cin >> newValue;
    
    insertElements(numbers, newValue);
    
    std::cout << "The vector with inserted element(s):" << std::endl;
    for(int num : numbers) 
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
   
}

int main()
{
    task1();
    task2();

    return 0;
}
