#include<iostream>
using namespace std;
string s(string x){
    cout << &x << endl;
    return x;
}

int main(){
    string f="qhj";
    cout << &f << endl;
    cout << s(f);
    return 0;
}

//a:
//mang duoc truyen theo co che pass-by-reference

//b:
//string duoc truyen theo co che pass-by-value
