#include <iostream> 
using namespace std;




// Write a C++ program that dynamically allocates an array of integers based on user input. 
// Ask the user for the size of the array, allocate memory for the array, and then prompt 
// the user to input the elements. After that, calculate and display the sum of the elements.

// Hint: Use a loop to read the input, allocate memory for the array using new, 
// and then calculate the sum of the elements.


int main(){

    int size, total;

    cout << "Please enter the size of the array: ";
    cin >> size; 
    cout << "Enter your numbers: ";

    int *arr = new int [size] ;

    for (int i = 0; i < size; i++){
        cin >> arr[i]; 

        total += arr[i]; 

    }

cout << "The Total is " << total << endl; 

    delete[] arr; 

    return 0;
}

