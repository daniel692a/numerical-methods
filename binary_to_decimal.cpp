#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int binary_to_decimal(int num){
    string temp = to_string(num);
    int power = temp.size()-1;
    double answer = 0;
    for(auto c: temp){
        if(c=='1'){
            answer += (pow(double(2), double(power)));
        }
        power--;
    }
    return answer;
}

int main(){
    int num;
    cin>>num;
    cout<<binary_to_decimal(num);
}