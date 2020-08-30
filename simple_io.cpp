#include <bits/stdc++.h>

using namespace std;

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    string simple_word;
    cout << "Write a word: ";
    // It stops to read when it find a blank space or a new line
    cin >> simple_word;
    cout << "Echoing word: " << simple_word << "\n";
    // Ignores the last space or new line
    cin.ignore();
    
    string a_whole_sentence;
    cout << "\nWrite a sentence: ";
    // Get a line with spaces
    getline(cin, a_whole_sentence);
    
    cout << "Echoing sentence: " << a_whole_sentence << "\n";
}