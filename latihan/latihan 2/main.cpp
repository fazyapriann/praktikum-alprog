#include <iostream>
using namespace std;

void pyramid(int tinggi, int variasi) {

    // Piramida rata kiri
    if (variasi == 0 || variasi > 2 || variasi < 0) {
        for (int i = 1; i <= tinggi; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    // Piramida rata kanan
    else if (variasi == 1) {
        for (int i = 1; i <= tinggi; i++) {
            for (int spasi = tinggi - i; spasi > 0; spasi--) {
                cout << " ";
            }
            for (int bintang = 1; bintang <= i; bintang++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    // Piramida center
    else if (variasi == 2) {
        for (int i = 1; i <= tinggi; i++) {
            for (int spasi = tinggi - i; spasi > 0; spasi--) {
                cout << " ";
            }
            for (int bintang = 1; bintang <= (2 * i - 1); bintang++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}

int main() {
    cout << "pyramid(5, 0)\n";
    pyramid(5, 0);

    cout << "\npyramid(5, 1)\n";
    pyramid(5, 1);

    cout << "\npyramid(5, 2)\n";
    pyramid(5, 2);

    return 0;
}
