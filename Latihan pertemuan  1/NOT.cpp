#include <iostream>
#include <string>

using namespace std;

int main() {
    string a_input, b_input;

    cout << "Masukan nilai a (true/false): ";
    cin >> a_input;
    cout << "Masukan nilai b (true/false): ";
    cin >> b_input;

    bool a = (a_input == "true");
    bool b = (b_input == "true");

    bool not_a_result = !a;  // Ini harus false
    bool not_b_result = !b;  // Ini harus true

    cout << "not a = " << (not_a_result ? "false" : "false") << endl;
    cout << "not b = " << (not_b_result ? "true" : "true") << endl;

    return 0;
}