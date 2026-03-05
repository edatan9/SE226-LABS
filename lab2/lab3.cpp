#include <iostream>
using namespace std;

int main() {
    //Task 1
    int n;
    cout << "Task 1: Enter a positive integer greater than 1: ";
    cin >> n;
    while (n <= 1) {
        cout << "Please enter a number greater than 1: ";
        cin >> n;
    }

    int steps = 0;
    int current = n;

    cout << "Hailstone sequence: ";
    while (current != 1) {
        cout << current << " → ";
        if (current % 2 == 0)
            current /= 2;
        else
            current = 3 * current + 1;
        steps++;
    }
    cout << 1 << endl;
    cout << "Total steps: " << steps << "\n\n";

    //Task 2
    cout << "Task 2: Enter a number between 10 and 100: ";
    cin >> n;
    while (n < 10 || n > 100) {
        cout << "Invalid input. Please enter a number between 10 and 100: ";
        cin >> n;
    }

    int fizzCount = 0, buzzCount = 0, fizzBuzzCount = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % 7 == 0) {
            cout << "(" << i << " is skipped)" << endl;
            continue;
        }
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
            fizzBuzzCount++;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
            fizzCount++;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
            buzzCount++;
        } else {
            cout << i << endl;
        }
    }

    cout << "--- Summary ---" << endl;
    cout << "Fizz count : " << fizzCount << endl;
    cout << "Buzz count : " << buzzCount << endl;
    cout << "FizzBuzz count : " << fizzBuzzCount << "\n\n";

    //Task 3
    cout << "Task 3: Enter a number between 3 and 9: ";
    cin >> n;

    while (n < 3 || n > 9) {
        cout << "Invalid input. Please enter a number between 3 and 9: ";
        cin >> n;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 0; j < i; ++j)
            cout << "*";
        cout << endl;
    }

    return 0;
}