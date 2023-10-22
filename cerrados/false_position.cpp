#include <bits/stdc++.h>

using namespace std;

// Función creada
double Fx(double x){
    return (pow(x,3)-x-1);
}

double false_position(double a, double b, int n, double error){
    double fa = Fx(a);
    double fb = Fx(b);
    double c, fc;
    while(n--){
        //Formula
        c=(a*Fx(b)-b*Fx(a))/(Fx(b)-Fx(a));
        fc = Fx(c);
        if(abs(fc)<=error){
            return c;
        }
        if(abs(b-a)<=error){
            c=(a+b)/2;
            return c;
        }
        if(fc*fb>0)
            a=c;
        if(fa*fc>0)
            b=c;
    }
    return c;
}

int main(){
    double a, b, error;
    int n;
    cin>>a>>b>>n>>error;
    double sqrt_f = false_position(a, b, n, error);
    cout<<setprecision(15)<<sqrt_f<<"\n";
    return 0;
}