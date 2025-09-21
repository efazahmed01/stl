#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; // Declare a string

    // Take full line input including spaces
    getline(cin, s);

    // Print size of the string
    cout << s.size() << endl;

    // Resize the string to first 5 characters
    s.resize(5);
    cout << s.size() << " " << s << endl;

    // Check if the string is empty (returns 1 if empty)
    cout << s.empty() << endl;

    // Print the first and last characters
    cout << s.front() << " " << s.back() << endl;

    // Clear the string content
    s.clear();
    cout << s << endl;

    // Append a new string
    s += "Efaz Ahmed";

    // Insert substring at a specific position
    s.insert(5, "Efaz ");
    cout << s << endl;

    // Erase 5 characters starting from position 5
    s.erase(5, 5);
    cout << s << endl;

    // Add a character at the end
    s.push_back('!');

    // Remove the last character
    s.pop_back();

    // Replace part of the string starting from position 5
    s.replace(5, 5, "Daffodil");
    cout << s << endl;

    // Swap with another string
    string m = "Daffodil International University!";
    s.swap(m);
    cout << s << " " << m << endl;

    // Swap back
    s.swap(m);

    // Extract a substring (start at index 6, length 4)
    string sub = s.substr(6, 4);
    cout << sub << endl;

    // Find position of first occurrence of 'a'
    cout << s.find('a') << endl;

    // Find position of last occurrence of 'a'
    cout << s.rfind('a') << endl;

    // Find first occurrence of any character from "abc"
    int pos = s.find_first_of("abc");
    cout << pos << endl;

    // Find last occurrence of any character from "abc"
    pos = s.find_last_of("abc");
    cout << pos << endl;

    // Convert number to string
    string num = to_string(16790.67);
    cout << num << endl;

    // Sort the string lexicographically
    sort(s.begin(), s.end());
    cout << s << endl;

    // Split a string into words using stringstream
    string str = "I love programming";
    stringstream ss(str);
    string word;
    while (ss >> word)
        cout << word << endl;

    // Count a character
    cout << count(s.begin(),s.end(), 'a') << endl;    

    // Check if a character does NOT exist in the string
    string t = "hello";
    if (t.find('z') == string::npos)
        cout << "Not found" << endl;

    // Compare two strings
    string a = "apple", b = "banana";
    if (a.compare(b) < 0)
        cout << "apple comes before banana" << endl;

    // Reverse the string
    reverse(a.begin(), a.end());
    cout << "Reversed: " << a << endl;

    // Count occurrences of a character
    int countA = count(b.begin(), b.end(), 'a');
    cout << "'a' appears: " << countA << " times" << endl;

    // Remove all spaces from a string
    string spaced = "this is a spaced string";
    spaced.erase(remove(spaced.begin(), spaced.end(), ' '), spaced.end());
    cout << spaced << endl;

    // Convert to uppercase using transform
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    cout << b << endl;

    // Replace all 'A's with '@'
    replace(b.begin(), b.end(), 'A', '@');
    cout << b << endl;
}
