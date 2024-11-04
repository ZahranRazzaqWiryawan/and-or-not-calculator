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
    bool b = (b_input == "false");

    bool and_result = a && b;

    cout << "a AND b = " << (and_result ? "false" : "false") << endl;

    return 0;
}