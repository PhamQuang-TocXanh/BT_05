#include<iostream>
#include<cstdlib>
using namespace std;

int giaithua(int a){
    if(a==1||a==0) return 1;
    return a*(giaithua(a-1));
}

int toHop(int k, int n){
    int tohop = giaithua(n)/(giaithua(k)*giaithua(n-k));
    return tohop;
}

void nhapKN(int *k, int *n, int *soPhanTu){
    for(int i=0;;i++){
        cin >> k[i] >> n[i];
        if(k[i]==-1 && n[i]==-1) return;
        (*soPhanTu)++;
    }
}

int main(){
    int soPhanTu = 0;
    int k[10000], n[10000];
    nhapKN(k, n, &soPhanTu);
    for(int i=0;i<soPhanTu;i++){
        cout << toHop(k[i], n[i]) << endl;
    }
    return 0;
}

