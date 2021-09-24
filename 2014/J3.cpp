//
// Created by tlee0 on 2021-09-19.
//

#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    int antonio = 100;
    int david = 100;

    vector <int> store_a;
    vector <int> store_d;

    for (int i = 0; i < n ; i++){
        int a , b;
        cin >> a >> b;
        store_a.push_back(a);
        store_d.push_back(b);
    }

    int inc_index = 0;
    for(int i = 0; i < n; i++) {
        if(store_a[inc_index] < store_d[inc_index]){
            antonio -= store_d[inc_index];
        } else if(store_a[inc_index] > store_d[inc_index]){
            david -= store_a[inc_index];
        }
        inc_index++;

    }
    cout << antonio << '\n';
    cout << david << '\n';






    return 0;
}


