#include<bits/stdc++.h>
using namespace std;

string S, temp;
int main() {
    cin >> S;
    temp = S;
    reverse(temp.begin(), temp.end());
    if(temp == S) cout << 1 << '\n';
    else cout << 0 << '\n';
    return 0;
}