#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

// function argument syntax:
// return-type (*funcVarName)(args...)
void doSomethingOnSmallerValue(int x, int y, void (*cb)(int));

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 5;
    // one-time use anonymous function
    [](int x, int y) {
        cout << x + y << endl;
    } (a, b);

    // different capture clause
    // below will not compile as a and b are not read-only (pass by value)
    // [=]() {
    //     a++;
    //     b++;
    // };
    [&]() {
        a++;
        b++;
    }();
    cout << "[&] By-reference capture clause: " << a << " " << b << endl;
    // [&] is equivalent to passing the modified variables as pass by reference.
    [](int& x, int& y) {
        x++;
        y++;
    }(a, b);
    cout << "Pass by reference: " << a << " " << b << endl;

    // as a callback
    // simple print
    doSomethingOnSmallerValue(a, b, [](int sm) {
        cout << sm << endl;
    });
    
    vector<int> vec = {2, 5, 3, 7};
    sort(vec.begin(), vec.end(), [](const int& a, const int& b) {
        return a > b;
    });
    for (auto v: vec) {
        cout << v << " ";
    }
    cout << endl;
    int doubleSum = accumulate(vec.cbegin(), vec.cend(), 0, [](int a, int b) {
        return a + b * 2;
    });
    cout << doubleSum << endl;

    return 0;
}


void doSomethingOnSmallerValue(int x, int y, void (*cb)(int)) {
    if (x <= y) {
        (*cb)(x);
    } else {
        (*cb)(y);
    }
}
