#include <bits/stdc++.h>

using namespace std;

string decimal_to_binary(int num){
    string temp = "";
    while(num>0){
        temp += to_string(num%2);
        num/=2;
    }
    string answer;
    for(int i = temp.size()-1; i>=0; i--)
        answer += temp[i]; 
    return answer;
}

int main(){
    int num;
    cin>>num;
    cout<<decimal_to_binary(num)<<"\n";
}