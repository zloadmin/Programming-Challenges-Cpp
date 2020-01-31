#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

    string m[3] = {"Bill", "Mike", "Ivan"};
    string f[3] = {"Kira", "Olga", "Mira"};
    int r = rand() % 3;
    string i;
    do
    {
        cout << "Change type of name Male or Female [m/f]: ";
        cin >> i;
        if(i == "m") {
            cout << m[r] << '\n';
            return 0;
        }
        if(i == "f") {
            cout << f[r] << '\n';
            return 0;
        }
    } while(i != "m" && i != "f");
    return 0;
}
