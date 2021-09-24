//
// Created by tlee0 on 2021-03-04.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        char symbol;
        cin >> num;
        cin >> symbol;

        cout << string(num, symbol) << '\n';
   }







    return 0;
}