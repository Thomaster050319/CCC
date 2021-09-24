#include<iostream>

using namespace std;

int main(){
    int N , K ;
    cin >> N >> K;

    int shiftySum = N;

    for (int i = 0; i < K ; i++){
        N = N * 10;
        shiftySum += N;

    }
    cout <<  shiftySum << endl;

    return 0;
}
