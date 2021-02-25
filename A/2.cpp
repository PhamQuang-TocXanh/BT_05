#include<iostream>
using namespace std;
const int x = 100;

long long factorial(int x){
    cout << "x= " << x << " at " << &x << endl;
    if(x==1) return 1;
    return factorial(x-1)*(long long)x;
}

int main(){;
    cout << factorial(x);
    return 0;
}

