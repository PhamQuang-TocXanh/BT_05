#include<iostream>
using namespace std;

int ucln(int a, int b){
    while(a*b!=0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    return a+b;
}

int main(){
    int a,b; cin >> a >> b;

    cout << ucln(a, b);
    return 0;
}

