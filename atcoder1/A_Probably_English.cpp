#include <bits/stdc++.h>
#include <iostream>
using namespace std;


using namespace std;

bool isMatch(string word) {
    string matchWords[] = {"and", "not", "that", "the", "you"};
    for (const string& match : matchWords) {
        if (word == match) {
            return true;
        }
    }
    return false;
}

int main() {
    int N;
    cin >> N;

    bool foundMatch = false;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;

        if (isMatch(word)) {
            foundMatch = true;
            break;
        }
    }

    if (foundMatch) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}