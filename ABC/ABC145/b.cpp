#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; i++)
#define INF 1001001001
#define LINF (1LL << 62)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void solv() {
    int N;
    string S;
    cin >> N >> S;
    if(N%2 != 0){
        cout << "No" << endl;
        return;
    }
    rep(i,N/2){
        if(S[i] != S[N/2+i] ){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main() {
    solv();
    return 0;
}