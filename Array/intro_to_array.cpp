/*
========================================
   Introduction to Arrays in C++
========================================

Definition:
An array is a collection of elements of the same data type 
stored in contiguous memory locations.

Example:
If we want to store marks of 5 students, instead of creating 
5 variables we can use an array.

Syntax:
datatype array_name[size];

Example:
int arr[5];

----------------------------------------
Advantages of Array
----------------------------------------
1. Stores multiple values in a single variable
2. Easy to access using index
3. Efficient memory usage

----------------------------------------
Indexing
----------------------------------------
Array index starts from 0.

Example:
arr[0] -> first element
arr[1] -> second element
arr[2] -> third element

----------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaring an array
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Elements of the array are:\n";

    // Traversing array using loop
    for(int i = 0; i < 5; i++)
    {
        cout << "Element at index " << i << " : " << arr[i] << endl;
    }

    return 0;
}

/*
Elements of the array are:
Element at index 0 : 10
Element at index 1 : 20
Element at index 2 : 30
Element at index 3 : 40
Element at index 4 : 50
  */
