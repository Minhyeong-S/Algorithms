#include<bits/stdc++.h>
using namespace std;

int A, B, C, m, n, cnt[101], cost;

int main(){
    cin >> A >> B >> C;
    for(int i = 0; i < 3; i++){
        cin >> m >> n;
        for(int j = m; j < n; j++)cnt[j]++;
    }
    for(int k = 0; k < 100; k++){
        if(cnt[k]){
            if(cnt[k] == 1) cost += A;
            else if(cnt[k] == 2) cost += B*2;
            else if(cnt[k] == 3) cost += C*3;
        }
    }
    cout << cost << '\n';
    return 0;
}