#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    string word;
    int vowelCount = 0, consCount = 0, otherCount = 0;

    cout << "Enter words (q to quit): ";
    while (cin >> word && word != "q") {
        if (isalpha(word[0])) {
            if (isVowel(word[0])) {
                vowelCount++;
            } else {
                consCount++;
            }
        } else {
            otherCount++;
        }
    }

    cout << vowelCount << " words beginning with vowels\n";
    cout << consCount << " words beginning with consonants\n";
    cout << otherCount << " others\n";

    return 0;
}
