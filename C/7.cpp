#include<iostream>
using namespace std;

void Print(int dau_cach, int kp_dau_cach){
    for(int i=0;i<dau_cach;i++) cout << " ";

    for(int i=0;i< kp_dau_cach;i++) cout << "*";
}

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        Print(n-i-1, i*2+1);
        cout << endl;
    }
    return 0;
}

