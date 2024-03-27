#include <iostream>
using namespace std;

bool cekDuplikat(int arr[], int panjangArr) {
    for (int i = 0; i < panjangArr - 1; i++) {
        for (int j = i + 1; j < panjangArr; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main(void) {
    int arrA[] = {2, 1, 3, 1};
    int panjangArr = sizeof(arrA) / sizeof(arrA[0]); // Menghitung panjang array

    // Nested loop untuk menampilkan semua pasangan yang diuji
    for (int i = 0; i < panjangArr - 1; i++) {
        for (int j = i + 1; j < panjangArr; j++) {
            cout << "Menguji pasangan: " << arrA[i] << " dan " << arrA[j] << endl;
        }
    }

    cout << endl;

    // Memanggil fungsi cekDuplikat dan menampilkan hasil
    cout << (cekDuplikat(arrA, panjangArr) ? "Duplikat ditemukan." : "Tidak ada duplikat.") << endl;
    
    return 0;
}