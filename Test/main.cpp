#include <iostream>
#include <string>
using namespace std;

void myFunction()
{
    cout << "executed a function" << endl;
}

class MyClass{
  public:
    //instance variables here
    int myNum;
    string myString;

    //constructor
    MyClass(int num, string myS){
        myNum = num;
        myString = myS;
    }
    void method(){
        cout << "run my method" << endl;
    }
};

int main()
{
    /*
    string test = "hi";
    cout << "Hello world!\n";
    cout << "Next Line!" << endl;
    // endl makes a next line
    cout << "endl makes a next line ";

    int num = 15;
    //comments

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

    cout << m << endl;

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


    cout << "\n\n\n\nI want to separate this";
    string myString = "Hello";
    cout << myString[0] << endl;
    // Outputs H


    string test2;
    cout << "Put in a string: ";
    cin >> test2;
    cout << endl;

    cout << "You put in: " << test << endl;

    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;

    cout << max(5, 10)

    bool t = true //output is 1
    */

    string list[3] = {"first", "second", "third"};
    cout << list[0] <<endl;

    string value = "value";
    string* ptr = &value;
    // the %variable saves memory. So you should do that and get used to it. But of course you don't have to.
    cout << ptr << endl;
    cout << value << endl;

    myFunction();

    MyClass obj = MyClass(1, "hi");
    cout << obj.myNum << " " << obj.myString << endl;
    obj.method();
    return 0;
}
