#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array:\n";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements of the array are:\n";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/*
Enter the number of elements: 5
Enter the elements of the array:
10
20
30
40
50

The elements of the array are:
10 20 30 40 50
  */
