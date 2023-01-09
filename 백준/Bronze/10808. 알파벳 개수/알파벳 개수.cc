#include<bits/stdc++.h>
using namespace std;

string S;
int arr[26];

int main(){
    cin >> S;
    for(char a : S){
        arr[a - 'a']++;
    }
    for(int i = 0; i < 26; i++) cout << arr[i] << " ";
    cout << '\n';
    return 0;
}