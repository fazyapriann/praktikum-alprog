#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mengenkripsi kalimat
string encrypt(string text) {
    for (int i = 0; i < text.length(); i++) {
        char c = tolower(text[i]);
        if (c == 'a' || c == 'i' || c == 'u' ||
            c == 'e' || c == 'o') {
            text[i] = '*';
        }
    }
    return text;
}

int main() {
    string result = encrypt("Yogyakarta");
    cout << "Result: " << result << endl;
    return 0;
}
