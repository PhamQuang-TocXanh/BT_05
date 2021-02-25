#include<iostream>
#include<cmath>
using namespace std;

int lamTron1(float x){
    float du = x - int(x);
    if(du>=0.5) x = ceil(x);
    else x = floor(x);
    return x;
}

int lamTron2(float x){
    float du = x - int(x);
    if(du>=0.5) x = int(x)+1;
    else x = int(x);
    return x;
}

int main(){
    double x; cin >> x;
    cout << lamTron2(x);
    return 0;
}

