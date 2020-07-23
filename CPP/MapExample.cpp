#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    // map. sort the pair internally
    map<int, string> orderedMap;
    orderedMap.insert(pair<int,string>(3, "A"));
    orderedMap.insert(pair<int,string>(1, "B"));
    orderedMap.insert(pair<int,string>(2, "C"));
    for (pair<int,string> p : orderedMap) {
        cout << p.first << ":" << p.second << endl;
    }
    cout << endl;
    // insert same key does not replace
    orderedMap.insert(pair<int,string>(3, "D"));
    for (auto it = orderedMap.cbegin(); it != orderedMap.cend(); it++) {
        cout << it->first << ":" << it->second << endl;
    }
    cout << endl;
    // access using key
    orderedMap[1] = "D";
    orderedMap.at(3) = "E";
    cout << "Key 1: " << orderedMap.find(1)->second << endl;
    cout << "Key 3: " << orderedMap.find(3)->second << endl;
    cout << endl;
    // erase key-value
    orderedMap.erase(3);
    auto it = orderedMap.find(3);
    if (it != orderedMap.end()) {
        cout << "Key 3: " << orderedMap.find(3)->second << endl;
    } else {
        cout << "Key 3 is not found" << endl;
    }
    cout << endl;

    // unordered map
    unordered_map<int, string> unorderedMap;
    unorderedMap.insert(make_pair(3, "A"));
    unorderedMap.insert(make_pair(1, "B"));
    unorderedMap.insert(make_pair(2, "C"));
    for (auto it = unorderedMap.cbegin(); it != unorderedMap.cend(); it++) {
        cout << it->first << ":" << it->second << endl;
    }
    return 0;
}
