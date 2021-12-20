#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!\n";
    cout << "Next Line!" << endl;
    // endl makes a next line
    cout << "endl makes a next line ";

    int num = 15;
    //comments
    /*
    multi
    line
    comments
    */
    cout << num;

    cout << " String added with a integer variable: " << num << endl;

    int x, y, z;
    x = 1;
    y = 2;
    z = 3;
    cout << x << " " << y << " " << z << endl;

    const int CAN_NEVER_CHANGE = -3;

    cout << CAN_NEVER_CHANGE << endl;

    cout << "input: " << endl;
    int m;
    cin >> m;

    cout << m;
    return 0;
}
