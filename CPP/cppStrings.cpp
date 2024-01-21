#include <iostream>
#include <string>
using namespace std;

int main() {
    /* string greeting = "Hello";
    cout << greeting <<endl;

    string firstName = "Satoru";
    string lastName = "Gojo";
    string fullName = firstName + " " + lastName;
    cout << fullName <<endl;

    string firstName1 = "Itachi ";
    string lastName1 = "Uchiha";
    string fullName1 = firstName1.append(lastName1);
    cout << fullName1 <<endl; */

    int x = 25;
    int y = 6;
    int z = x + y;
    cout << z <<endl;

    string myNum1 = "25";
    string myNum2 = "6";
    string strNum = myNum1 + myNum2;
    cout << strNum <<endl; 

    string s = "S";
    int n = 78;
    //string ns = n + s;
    //cout << ns <<endl;
    //int sn = s + n;
    //cout << sn <<endl;

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the String is : " << txt.length() << endl;

    string name = "Gojo Satoru";
    cout << "The length of the name is : " << name.size() << endl;

    cout << name[5] <<endl;

    name[0] = 'k';
    cout << name <<endl;
    name[0] = 'G';
    cout << name <<endl;

    string splChar = "\tWe are from \"Uchiha\" clan";
    cout << splChar <<endl;

    string sinQuo = "\n\nIt\'s Alright\\Ok...";
    cout << sinQuo << endl;

    /* string inName;
    cout << "Enter Your Name : " <<endl;
    cin >> inName;
    cout << "Your name is : " << inName <<endl; */

    string inStr;
    cout << "Enter your name : " <<endl;
    getline(cin, inStr);
    cout << "Your name is : " << inStr <<endl;

    return 0;
}