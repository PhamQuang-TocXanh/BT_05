#include<cmath>
#include<iostream>
#include<cstdlib>
using namespace std;

string nhi_phan(int n){
    string nhiPhan;
    while(n>0){
        char s = n%2 + 48;
        n=n/2;
        nhiPhan = s + nhiPhan;
    }
    return nhiPhan;
}

int thap_phan(string s){
    int mu = 0, thapPhan=0;
    for(int i=s.size()-1;i>=0;i--){
        thapPhan+= pow(2, mu)*(s[i]-48);
        mu++;
    }
    return thapPhan;
}

int main(){
    int n; cin >> n;
    cout<< nhi_phan(n) << endl << thap_phan(nhi_phan(n));
    return 0;
}

