//
// Created by tlee0 on 2021-02-18.
//
#include<iostream>

using namespace std;



int main(){

    int b1, b2, b3, a1, a2 , a3;

    cin >> b1 >> b2 >> b3 >> a1 >> a2 >> a3;

    int apple_score = (a1 * 3) + (a2 * 2) + (a3 * 1);
    int banana_score = (b1 * 3) + (b2 * 2) + (b3 * 1);
    if(apple_score < banana_score){
        cout<<"A"<< '\n';

    }
    else if(apple_score == banana_score){
        cout << "T" << '\n';
    }

    else{
        cout<<"B" << '\n';
    }

    return 0;
}

