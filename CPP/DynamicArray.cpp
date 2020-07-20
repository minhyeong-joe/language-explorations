#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    // using vector of type integer
    vector<int> arr = {0, 2, 4, 6};
    // iterator
    for (auto it = arr.cbegin(); it != arr.cend(); it++)
    {
        cout << *it << endl;
    }
    // handy methods
    cout << "size: " << arr.size() << endl;
    // append
    arr.push_back(8);
    // insert to specific index: one use case: arr.cbegin() + index
    arr.insert(arr.cbegin() + 2, 3);
    // remove, one possible Iterator Where: arr.cbegin() + index
    arr.erase(arr.cbegin() + 3);
    for (auto n : arr)
    {
        cout << n << endl;
    }
    cout << "new size: " << arr.size() << endl;
    return 0;
}
