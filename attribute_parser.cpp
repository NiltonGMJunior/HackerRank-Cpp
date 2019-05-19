#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <map>

using namespace std;

// pair<string, string> get_attribute_value_pair(const string& str)
// {
//     pair<string, string> attribute_value;
//     string attribute, value, delimiter_attribute, delimiter_value;
//     delimiter_attribute = " ";
//     delimiter_value = "\"";

//     auto start = 0U;
//     auto end = str.find(delimiter_attribute);
//     attribute = str.substr(start, end - start);
    
//     start = str.find(delimiter_value, end);
//     value = str.substr(start, string::npos - 1);

//     attribute_value.first = attribute;
//     attribute_value.second = value;

//     return attribute_value;
// }

string get_tag_name(string str)
{
    // Tag name to be returned
    string tag_name;

    // Verify if tag has any attributes, and retrieves what is in between "<" and the first space
    if (str.find(" ") != string::npos)
        tag_name = str.substr(1, str.find(" ") - 1);
    // Otherwise, considers no blank spaces in the input string and retrieves what is in between "<" and >"
    else
        tag_name = str.substr(1, str.size() - 2);
    
    return tag_name;
}

int main() {
    // Reads number of input lines and queries.
    int n, q;
    cin >> n >> q;

    // Stack to manage open tags.
    stack<string> open_tags;

    // Placeholders for current tag (line input) and tag name
    string current_tag, tag_name;

    while(n--)
    {
        // Reads the whole line as a new tag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, current_tag);

        // Reads tag name
        tag_name = get_tag_name(current_tag);
        cout << tag_name << "\n";
    }

    return 0;
}
