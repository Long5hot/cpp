#include<iostream>
using namespace std;

namespace SBI {
    int accno = 3456;
    int balance = 10000;
    void welcome() {
        cout << "Welcome to SBI" << endl;
    }
}

namespace AXIS {
    int accno = 1234;
    int balance = 5000;
    void welcome() {
        cout << "Welcome to AXIS" << endl;
    }
}

main(){

    using namespace AXIS;

    cout << "accno = " << accno << endl;
    welcome();
    
}