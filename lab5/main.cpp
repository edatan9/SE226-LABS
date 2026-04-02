#include <iostream>
using namespace std;

double recursive_series(int n) {
    if (n == 0)
        return 0.0;  // base case
    double sign = (n % 2 == 0) ? -1.0 : 1.0;
    return recursive_series(n - 1) + sign * (1.0 / n);
}

int main() {
    int n;
    cout << "\nEnter n for recursive series S_n: ";
    cin >> n;

    double result = recursive_series(n);
    cout << "\nS" << n << " = " << result << endl;

    return 0;
}
