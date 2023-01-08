#include<bits/stdc++.h>
using namespace std;

int N, M, psum[100001];

main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    cin >> N >> M;
    for(int i=0; i<N; i++){
        int A;
        cin >> A;
        psum[i+1]=psum[i]+A;
    }
    for(int i=0; i<M; i++){
        int b, c;
        cin >> b >> c;
        cout << psum[c]-psum[b-1] << '\n';
    }
}