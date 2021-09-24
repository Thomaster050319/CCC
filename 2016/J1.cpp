//
// Created by tlee0 on 2021-02-25.
//
#include<iostream>
#include<string>

using namespace std;

int main(){
    string n1, n2, n3, n4, n5 ,n6;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;

    int wins = 0;
    if (n1 == "W") {
        wins++;
    }
    if (n2 == "W") {
        wins++;
    }
    if (n3 == "W") {
        wins++;
    }
    if (n4 == "W") {
        wins++;
    }
    if (n5 == "W") {
        wins++;
    }
    if (n6 == "W") {
        wins++;
    }

    if (wins >= 5){
        cout << 1 << '\n';
    } else if (wins == 3 || wins == 4) {
        cout << 2 << '\n';

    } else if (wins == 1 || wins == 2) {
        cout << 3 << '\n';
    } else {
        cout << -1 << '\n';
    }
    return 0;
}
