#include <iostream>
#include <iomanip>

int main() {
    using namespace std; 

    bool flag;
    cout << "unesi true - false" << endl;
    cin >> flag;
    cout << boolalpha << flag << endl;
    int a = 255;
    cout << "hex " << hex << a << endl;
    cout << "dec " << dec << a << endl;
    cout << "oct " << oct << a << endl;
    double pi = 3.141592;
    cout << "pi = " << scientific << uppercase;
    cout << setprecision(7) << setw(20) << setfill('0') << pi << endl;

    return 0;
}
