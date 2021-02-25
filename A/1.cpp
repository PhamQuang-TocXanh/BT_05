#include<iostream>
using namespace std;
int main(){
    int a1=1;
    int a[1000];
    int a2=2;
    char b[1000];
    for(int i=0;i<3;i++){
        cout << "a->" << &a[i] << endl;
    }// dia chi cua cac bien cach nhau 4 byte , = voi kich thuoc cua int
    for(int i=0;i<3;i++){
        cout << "b->" << (void*)&b[i] << endl;
    }// dia chi cua cac bien cach nhau 1 byte , = voi kich thuoc cua char
    cout << "a1->" << &a1 << endl;
    cout << "a2->" << &a2 << endl;
    return 0;
}

