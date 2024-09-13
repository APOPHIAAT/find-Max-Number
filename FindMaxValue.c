// PSEUDOCODE

// Define an array called elements with sample numbers.
// Determine the count of elements in elements by dividing the total size of the array by the size of one element.
// Set largest_value to the first element of elements.
// Iterate over each position from 1 to count_of_elements - 1:
// Check if elements[position] is greater than largest_value.
// If true, update largest_value to elements[position].
// End Iteration
// Display largest_value


#include <stdio.h>

int main() {
    // Define the array with some example values
    int elements[] = {10, 20, 4, 45, 99};
    int count_of_elements = sizeof(elements) / sizeof(elements[0]);
    
    // Set the largest value to the first element of the array
    int largest_value = elements[0];
    
    // Iterate over each position from 1 to count_of_elements - 1
    for (int position = 1; position < count_of_elements; position++) {
        // Check if the current element is greater than largest_value
        if (elements[position] > largest_value) {
            // Update largest_value if current element is greater
            largest_value = elements[position];
        }
    }
    
    // Display the largest value
    printf("The largest value in the array is %d\n", largest_value);
    
    return 0;
}
