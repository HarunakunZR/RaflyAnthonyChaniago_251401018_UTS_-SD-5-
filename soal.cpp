#include <iostream>
using namespace std;

int main() {
    int arr[2][3][4];
    int nilai = 2;

    // Mengisi array dengan kelipatan 2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                arr[i][j][k] = nilai;
                nilai += 2;
            }
        }
    }

    // Menampilkan isi array dalam bentuk 3 lapis tabel (masing-masing 3x4)
    for (int i = 0; i < 3; i++) {
        cout << "Lapis ke-" << (i + 1) << " (Tabel " << 3 << "x" << 4 << "):\n";
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << "\n";
        }
        cout << "------------------------------\n";
    }
    
    return 0;
}