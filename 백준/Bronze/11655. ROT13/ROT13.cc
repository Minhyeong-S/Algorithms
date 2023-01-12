#include<bits/stdc++.h>
using namespace std;

string input, output;
int main() {
    getline(cin, input);
    for(int i = 0; i < input.size(); i++){
        if(int(input[i]) >= 65 && int(input[i]) <= 77) {
            output += (input[i] + 13);
        }
        else if(int(input[i]) >= 78 && int(input[i]) <= 90){
            output += (input[i] - 13);
        }
        else if (int(input[i]) >= 97 && int(input[i]) <= 109) {
            output += (input[i] + 13);
        }
        else if (int(input[i]) >= 110 && int(input[i]) <= 122) {
            output += (input[i] - 13);
        }
        else output += input[i];
    }
    cout << output << '\n';
    return 0;
}