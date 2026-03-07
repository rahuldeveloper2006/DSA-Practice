/*no we write a program to check a number is prime number or not.
  its time complexity is O(n)
its space complexity is O(1)
  for example :- 7
  output :-The number is a prime number
*/


#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "The number is a Prime number." << endl;
    else
        cout << "The number is NOT a Prime number." << endl;

    return 0;
}
