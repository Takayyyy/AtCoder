#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; i++)
#define INF 1001001001
#define LINF (1LL << 62)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void solv() {
    int m;
    cin >> m;
    if(m < 100){
        cout << "00" << endl;
    }
    else if(m <= 5000){
        printf("%02d\n",m / 100 );
    }
    else if(m <= 30000){
        cout << m / 1000 + 50 << endl;
    }
    else if(m >= 35000 and m <= 70000){
        cout << (m / 1000 - 30) / 5 + 80 << endl;
    }
    else if(m >= 70000){
        cout << "89" << endl;
    }
}

int main() {
    solv();
    return 0;
}