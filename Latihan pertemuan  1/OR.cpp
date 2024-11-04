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

    bool or_result = a || b;

    cout << "a OR b = " << (or_result ? "true" : "true") << endl;

    return 0;
}