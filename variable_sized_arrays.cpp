#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>> arrays;

    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;

        vector<int> array;
        long num;

        for (int j = 0; j < k; ++j)
        {
            cin >> num;
            array.push_back(num);
        }

        arrays.push_back(array);
    }

    int x, y;

    for (int i = 0; i < q; ++i)
    {
        cin >> x >> y;
        cout << arrays[x][y] << "\n";
    }
    
    return 0;
}