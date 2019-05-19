#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
#include <map>

using namespace std;

// Retrieves a map that relates all attributes and values of a tag. Could return an empty map, if there are no attributes.
map<string, string> get_attribute_value_map(const string& str)
{
    map<string, string> attributes_table;
    string attribute, value;

    // Checks if there is any attributes to be returned.
    if (str.find(" ") != string::npos)
    {
        while (true)
        {
            auto start = str.find(" ") + 1;
            auto end = str.find(" ", start);
        }

    }

    return attributes_table;
}

// Retrieves a string of concatenated tags tag1[.tag2.[tag3...]] from a deque of open tags.
string get_key_from_tags(const deque<string>& open_tags)
{
    string key = open_tags[0];
    for (int iii = 1; iii < open_tags.size(); ++iii)
        key += "." + open_tags[iii];
    return key;
}

// Retrieves tag name from an input line of the form <tag_name[ attribute1 = "value1"[ attribute2 = "value2"]...]>.
string get_tag_name(const string& str)
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

    // Deque to manage open tags.
    deque<string> open_tags;

    // Placeholders for current tag (line input) and tag name.
    string current_tag, tag_name;

    while(n--)
    {
        // Reads the whole line as a new tag.
        getline(cin, current_tag);
        while (current_tag.size() == 0)
            getline(cin, current_tag);
        
        // Reads tag name.
        tag_name = get_tag_name(current_tag);

        // Verifies if tag is being closed.
        if (tag_name[0] == '/')
            open_tags.pop_back();
        // Otherwise, pushes tag to back of deque.
        else
            open_tags.push_back(tag_name);
    }

    return 0;
}
