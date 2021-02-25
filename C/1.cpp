#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>

using namespace std;

int check_minf_xq(bool ar[100][100], int m, int n, int x, int y){
    int sum = 0;
    int vt_h_t = y-1, vt_c_t = x-1, vt_h_d = y+1, vt_c_p = x+1;
    if(vt_h_t<0) vt_h_t = 0;        if(vt_c_t<0) vt_c_t = 0;
    if(vt_h_d>=m) vt_h_d = m-1;     if(vt_c_p>=n) vt_c_p = n-1;
    for(int k=vt_h_t;k<=vt_h_d;k++){
        for(int l=vt_c_t;l<=vt_c_p;l++){
            if(ar[k][l]==true){
                sum++;
            }
        }
    }
    return sum;
}
void ban_do_ket_thuc(char ar[100][100], bool arr[100][100], int a, int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j] == true){
                ar[i][j] = 'M';
            }
        }
    }
}
void in_ban_do(char ar[100][100], bool check[100][100], int a, int b, bool over){
    if(over == true){
        ban_do_ket_thuc(ar, check, a, b);
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout << ar[i][j] << " ";
        }cout << endl;
    }cout << "\n\n\n";
}



int main(){
    srand(time(NULL));
    int m,n,K;
    cout << "Nhap so hang: "; cin >> m;
    cout << "Nhap so cot: ";cin >> n;
    cout << "Nhap so min: ";cin >> K;
    char banDo[100][100];
    bool minf[100][100], over = false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            banDo[i][j] = '*';
            minf[i][j] = false;
        }
    }
    for(int i=0;i<K;i++){
        int x = rand()%m, y=rand()%n;//x: hang, y: cot
        minf[x][y] = true;
    }
    in_ban_do(banDo, minf, m, n, over);
    for(int i=0;i<K;i++){
        int x, y;//x: cot, y: hang
        cout << "Nhap toa do x: "; cin >> x;
        cout << "Nhap toa do y: "; cin >> y;

        if(minf[y][x] == true){
            over = true;
            cout << "YOU ARE DEAD!" << endl;
            in_ban_do(banDo, minf, m, n, over);
            return 0;
        }else{
            cout << check_minf_xq(minf, m, n, x, y) << endl;
            banDo[y][x] = char(check_minf_xq(minf, m, n, x, y)+48);
            in_ban_do(banDo, minf, m, n, over);
        }
    }
    over = true;
    cout << "You win!" << endl;
    in_ban_do(banDo, minf, m, n, over);

    return 0;
}

