#include<iostream>
using namespace std;
int main()
{
    cout << "Character\tASCII Value\n";
    for (char ch = 'A';ch <= 'Z';ch++) {
        cout << ch << "\t\t" << int(ch) << endl;
    }
    return 0;
}  