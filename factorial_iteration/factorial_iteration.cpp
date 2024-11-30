#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

long long int factorial(long long int n) {
    if (n < 0) {
        cout << " Factorial is not defined." << endl;
        return -1;
    }
    long long int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    long long int num;
    cout << "Enter a number";
    cin >> num;

    auto start = high_resolution_clock::now();

    long long int result = factorial(num);

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<nanoseconds>(end - start).count();

    if (result != -1) {
        cout << "Factorial of " << num << " is: " << result << endl;
    }

    cout << "The Execution time: " << duration << " nanoseconds" << endl;

    return 0;
}
