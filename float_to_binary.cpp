#include <bits/stdc++.h>

using namespace std;

void out_float(float f){
    size_t size = sizeof(f);
    unsigned char * p = (unsigned char *) &f;
    p += size-1;
    while (size--) {
        int n;
        for (n=0; n<8; n++){
            putchar('0' + (*p & 128 ? 1 : 0));
            *p <<= 1;
        }
        p--;
    }
    putchar('\n');
}

int main(){
    float num;
    cin>>num;
    out_float(num);
    cout<<bitset<sizeof num*8>(*(long unsigned int*)(&num))<<endl;
    return 0;
}