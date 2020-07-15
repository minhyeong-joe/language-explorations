// Some high order functions to
// transform, filter, and reduce
//
// Some other useful methods that are used with below higher order functions:
// vector.cbegin(): const_iterator beginning of vector
// vector.cend(): const_iterator end of vector
// back_inserter(vector): iterator that appends to the back of vector
// lambda function: [capture](params){function body}

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
// #include <execution>
using namespace std;

template <typename T>
void printVector(vector<T> list);

int main(int argc, char const *argv[])
{
    vector<int> list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Original List: ";
    printVector(list);

    // using transform to add one to each element in list
    vector<int> transformedList;
    transform(list.cbegin(), list.cend(), back_inserter(transformedList), [](auto n) {
        return n * 2;
    });
    cout << "Transformed List: ";
    printVector(transformedList);

    // using copy_if to create filteredList
    vector<int> filteredList;
    copy_if(list.cbegin(), list.cend(), back_inserter(filteredList), [](auto n) {
        return n > 5;
    });
    cout << "Filtered List: ";
    printVector(filteredList);

    // using accumulate to reduce
    int acc = accumulate(list.cbegin(), list.cend(), 0, [](auto a, auto b) {
        return a - b;
    });
    cout << "Difference: " << acc << endl;

    // <execution> requires tbb
    // // using reduce
    // acc = reduce(execution::par, list.cbegin(), list.cend(), 0, [](auto a, auto b) {
    //     return a + b;
    // });
    // cout << "Sum: " << acc << endl;

    // // using parallism on subtraction
    // acc = reduce(execution::par, list.cbegin(), list.cend(), 0, [](auto a, auto b) {
    //     return a - b;
    // });
    // cout << "Incorrect Difference: " << acc << endl;

    return 0;
}

template <typename T>
void printVector(vector<T> list)
{
    for_each(list.cbegin(), list.cend(), [](T item) {
        cout << item << " ";
    });
    cout << endl;

    // This for_each is equivalent to
    //
    // for (auto item : list)
    // {
    //     cout << item << " ";
    // }
    // cout << endl;
}
