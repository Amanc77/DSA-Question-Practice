#include <iostream>
using namespace std;

int fun(int n) {
    if (n > 100) {
        return n - 10;
    } else {
        return fun(fun(n + 1));
    }
}

int main() {
    int result = fun(95);
    cout << "Result: " << result << endl;
    return 0;
}
