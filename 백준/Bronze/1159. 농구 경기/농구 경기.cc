#include<bits/stdc++.h>
using namespace std;

int n, cnt[26];
string S, ret;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> S;
        cnt[S[0] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(cnt[i] >= 5) ret += (i + 97);
    }
    if(ret.size()) cout << ret << '\n';
    else cout << "PREDAJA" << '\n';
    return 0;
}