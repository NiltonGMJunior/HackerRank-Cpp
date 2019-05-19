#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


vector<int> parseInts(string str) {
	vector<int> ints;
    string delim = ",";

    auto start = 0U;
    auto end = str.find(delim);

    while (end != string::npos)
    {
        ints.push_back(stoi(str.substr(start, end - start)));
        start = end + delim.length();
        end = str.find(delim, start);
    }

    ints.push_back(stoi(str.substr(start, end - start)));

    return ints;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}