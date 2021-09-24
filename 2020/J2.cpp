//
// Created by tlee0 on 2021-02-25.
//
#include<iostream>

using namespace std;

int main(){
    int p, n, r;
    cin >> p >> n >> r;

    int each_day = n;
    int total = n;
    int days = 0;

    while (total <= p){
        total = total + each_day * r;
        each_day = each_day * r;
        days++;
    }

    cout << days << '\n';

    return 0;
}
