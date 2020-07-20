#include <set>
#include <unordered_set>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // C++'s set is by default ordered internally.
    int arr[] = {1, 3, 2, 3, 2, 3, 4, 1, 5};
    int size = sizeof(arr)/sizeof(*arr);
    set<int> setA(arr, arr+size);
    for (int value: arr) {
        cout << value << " ";
    }
    cout << endl;
    for (int value: setA) {
        cout << value << " ";
    }
    cout << endl;
    // using unordered_set
    unordered_set<int> setB(arr, arr+size);
    for (int value: setB) {
        cout << value << " ";
    }
    cout << endl;

    // because it is ordered, set's find() takes O(log N)
    int target = 4;
    set<int>::const_iterator it = setA.find(target);
    if (it != setA.end()) {
        cout << target << " Found" << endl;
    } else {
        cout << target << " Not Found" << endl;
    }
    // use case 1:
    // removing duplicates and sort
    vector<int> myVector = { 2, 3, 6, 2, 5, 3, 8, 7, 6, 3, 4, 8};
    for (int v: myVector) {
        cout << v << " ";
    }
    cout << endl;
    set<int> tempSet(myVector.begin(), myVector.end());
    myVector.assign(tempSet.begin(), tempSet.end());
    for (int v: myVector) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
