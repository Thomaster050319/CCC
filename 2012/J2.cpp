//
// Created by tlee0 on 2021-07-15.
//

#include<iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if (a > b && b > c && c > d){
        cout << "Fish Diving\n";
    }
    else if (a < b && b < c && c < d){
        cout << "Fish Rising\n";
    }
    else if (a == b && b == c && c == d){
        cout << "Fish At Constant Depth\n";
    }
    else {
        cout << "No Fish\n";
    }




    return 0;
}