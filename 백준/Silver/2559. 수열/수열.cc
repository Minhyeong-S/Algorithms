#include<bits/stdc++.h>
using namespace std;

int N, K, arr[100001], psum[100001];
vector<int> sum;

int main(){
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        psum[i+1] = psum[i] + arr[i];
    }
    for(int i = 0; i < N - K + 1; i++){
        sum.push_back(psum[K+i] - psum[i]);
    }
    sort(sum.begin(), sum.end());
    cout << sum[N-K] << '\n';
}