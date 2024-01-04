#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
}

int main() {
    cout << "Enter the number of terms: ";
    int n;
    cin >> n;

    cout << "Fibonacci series up to " << n << " terms: ";
    printFibonacciSeries(n);
    cout << endl;

    int ans = fibonacci(n - 1);  
    cout << "Sum of first " << n << " elements of Fibonacci series: " << ans << endl;

    return 0;
}
