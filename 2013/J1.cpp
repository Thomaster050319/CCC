#include<iostream>

using namespace std;

int main() {
    int a , b;
    cin >> a >> b;
    int diff = b - a;

    if (diff > 0){
        cout << b + diff << endl;
    }
    else{
        cout << b << endl;
    }

    return 0;
}

