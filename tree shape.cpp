#include <iostream>
#include <string>
using namespace std;

int main() {
    
    double a = 101, b = 100;
    cout << a++ << endl;
    cout << a + b << endl;

    if (a <= b) {
        cout << "false" << endl;
    } else {
        cout << "true" << endl;
    }

    string name = "ganesh";
    cout << name << endl;

    cout << "    *    " << endl;
    cout << "   * *   " << endl;
    cout << "  * * *  " << endl;
    cout << " * * * * " << endl;
    cout << "* * * * *" << endl;

    return 0;
}
