#include <iostream>
#include <string>
using namespace std;

int main()
{
    string test = "hi";
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

    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1;
    cout << d1 << endl;


    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl;  // Outputs 1 (true)
    cout << isFishTasty << endl;  // Outputs 0 (false)

    char a = 65, b = 66, c = 67;
    cout << a << endl; //ascii values
    cout << b << endl;
    cout << c << endl;

    return 0;
}
