#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <map>

using namespace std;

string get_tag_name(string str)
{
    // Tag name to be returned.
    string tag_name;

    // Verify if tag has any attributes, and retrieves what is in between "<" and the first space.
    if (str.find(" ") != string::npos)
        tag_name = str.substr(1, str.find(" ") - 1);
    // Otherwise, considers no blank spaces in the input string and retrieves what is in between "<" and >".
    else
        tag_name = str.substr(1, str.size() - 2);
    
    return tag_name;
}

int main() {
    // Reads number of input lines and queries.
    int n, q;
    cin >> n >> q;

    // Map that relates a tag to another map, that relates attributes and values
    map<string, map<string, string>> tags_table;

    // Stack to manage open tags.
    stack<string> open_tags;

    // Placeholders for current tag (line input) and tag name.
    string current_tag, tag_name;

    while(n--)
    {
        // Reads the whole line as a new tag.
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, current_tag);

        // Reads tag name.
        tag_name = get_tag_name(current_tag);
        cout << tag_name << "\n";
    }

    return 0;
}
