
#include<iostream>
using namespace std;

int main(){
    int a, b ;
    cin >> a >> b;

    int diff = b - a;

    if (diff > 0 && diff <= 20){
        cout << "You are speeding and your fine is $100." << endl;
    }
    else if (21 < diff && diff <= 30){
        cout << "You are speeding and your fine is $270." << endl;
    }
    else if (31 <= diff){
        cout << "You are speeding and your fine is $500." << endl;
    }
    else {
        cout << "Congratulations, you are within the speed limit!" << endl;
    }



    return 0;
}