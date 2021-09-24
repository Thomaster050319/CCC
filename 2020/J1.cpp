//
// Created by tlee0 on 2021-02-18.
//
#include<iostream>



using namespace std;



int main(){

    int s, m , l;
    cin >> s >> m >> l;

    int score = s + 2 * m + 2 * l + 2;

    if (score >= 10){
         cout << "happy" << '\n';


    }else {
        cout << "sad" << '\n';
    }


    return 0;
}

