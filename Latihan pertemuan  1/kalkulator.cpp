#include <iostream>
using namespace std;

int main() {
    double angka1, angka2;
    char operasi;

    // Menerima input dari pengguna
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Masukkan operator (+, -, *, /, %): ";
    cin >> operasi;

    // Menghitung dan menampilkan hasil berdasarkan operasi
    switch (operasi) {
        case '+':
            cout << angka1 << " + " << angka2 << " = " << (angka1 + angka2) << endl;
            break;
        case '-':
            cout << angka1 << " - " << angka2 << " = " << (angka1 - angka2) << endl;
            break;
        case '*':
            cout << angka1 << " * " << angka2 << " = " << (angka1 * angka2) << endl;
            break;
        case '/':
            if (angka2 != 0) {
                cout << angka1 << " / " << angka2 << " = " << (angka1 / angka2) << endl;
            } else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
            }
            break;
        case '%':
            if (static_cast<int>(angka2) != 0) {
                cout << angka1 << " % " << angka2 << " = " << (static_cast<int>(angka1) % static_cast<int>(angka2)) << endl;
            } else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
            }
            break;
        default:
            cout << "Error: Operator tidak valid!" << endl;
            break;
    }

    return 0;
}
