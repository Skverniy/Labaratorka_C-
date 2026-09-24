#include <iostream>
#include <string>   
#include <sstream>
using namespace std;

int main() {
    string s;
    int n;

    cout << "1. Enter string: ";
    getline(cin, s);
    n = s.find(",-") + s.find("-,");
    cout << (n >= 0 ? "Yes ,-\n" : "No ,-\n");

    cout << "2. Enter string: ";
    getline(cin, s);
    istringstream iss(s);
    string w;
    cout << "Words with t: ";
    while (iss >> w)
        if (w.find('t') != string::npos || w.find('T') != string::npos)
            cout << w << " ";
    cout << endl;

    cout << "3. Enter string: ";
    getline(cin, s);
    n = s.find(':');
    if (n == -1) cout << "No colon\n";
    else cout << "Symbols before ':': " << n << endl;

    cout << "4. Enter string: ";
    getline(cin, s);
    int a = s.find('('), b = s.find(')');
    if (a != -1 && b > a) s.erase(a, b - a + 1);
    cout << "Result: " << s << endl;

    return 0;
}