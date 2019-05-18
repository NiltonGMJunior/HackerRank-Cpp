#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{

    int q;
    cin >> q;

    map<string, int> students;

    int type;
    string name;
    int grade;

    map<string, int>::iterator itr;

    for (int i = 0; i < q; ++i)
    {
        cin >> type >> name;
        switch (type)
        {
        case 1:
            cin >> grade;
            itr = students.find(name);
            if (itr != students.end())
                itr->second += grade;
            else
                students.insert(make_pair(name, grade));
            break;
        case 2:
            students.erase(name);
            break;
        case 3:
            itr = students.find(name);
            if (itr != students.end())
                cout << itr->second;
            else
                cout << 0;
            cout << "\n";
            break;
        }
    }

    return 0;
}
