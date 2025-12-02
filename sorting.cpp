#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    // If lengths differ → not anagram
    if (s1.length() != s2.length()) {
        cout << "Not Anagrams";
        return 0;
    }

    // Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Compare
    if (s1 == s2)
        cout << "Strings are Anagrams";
    else
        cout << "Strings are NOT Anagrams";

    return 0;
}
