#include<iostream>
using namespace std;

class Box {
private:
    static float interest; 
    int principal;
    int time; 

public:
    
    void getdata() {
        cout << "Enter the principal amount: ";
        cin >> principal;
        cout << "Enter the time (in months): ";
        cin >> time;
    }

    void Calculate_SI() {
        float SI = (principal * time * interest) / 100;
        cout << "Simple Interest: " << SI << endl;
    }

    static void setInterest(float newInterest) {
        interest = newInterest;
    }
};


float Box::interest = 2.3; 

int main() {

    Box b1, b2, b3, b4;

    cout << "Enter data for Box object b1:" << endl;
    b1.getdata();
    cout << "Calculating Simple Interest for b1:" << endl;
    b1.Calculate_SI();

    cout << "Enter data for Box object b2:" << endl;
    b2.getdata();
    cout << "Calculating Simple Interest for b2:" << endl;
    b2.Calculate_SI();

    cout << "Enter data for Box object b3:" << endl;
    b3.getdata();
    cout << "Calculating Simple Interest for b3:" << endl;
    b3.Calculate_SI();

    cout << "Enter data for Box object b4:" << endl;
    b4.getdata();
    cout << "Calculating Simple Interest for b4:" << endl;
    b4.Calculate_SI();
    return 0;
}
