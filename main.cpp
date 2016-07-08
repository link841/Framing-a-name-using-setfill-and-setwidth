#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Please enter your first name!
//*****************
//*               *
//* Hello, Kevin! *
//*               *
//*****************

int main(){
    // Read the first name from the user
    cout << "Please enter your first name!" << endl;
    string name;
    int n;
    cin >> name;

    //combine with hello to get greeting
    const string greeting=" Hello, "+ name + "! ";
    //get the length of greeting
    n=greeting.length();

    //print ************** pattern
    cout << setfill('*') << setw(n+2) << "" << endl<< setfill(' ');
    //print *            * pattern
    cout << "*" << setw(n) << "" << "*" << endl;
    //print * Hello,   ! * pattern
    cout << "*" << greeting << "*" << endl;
    //print *            * pattern
    cout << "*" << setw(n) << "" << "*" << endl;
    //print ************** pattern
    cout << setfill('*') << setw(n+2) << "" << endl<< setfill(' ');

    return 0;
}

