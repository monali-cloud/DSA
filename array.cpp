#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int freq[26] = {0};   // stores frequency for lowercase letters

    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            freq[c - 'a']++;
        }
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char('a' + i) << " = " << freq[i] << endl;
        }
    }

    return 0;
}
