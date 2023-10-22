#include <iostream>

using namespace std;

double function(double x) {
    return x * x * x - 2 * x * x + 4 * x - 8;
}

double bisection(double a, double b, double epsilon) {
    if (function(a) * function(b) >= 0) {
        cerr<< "Invalid range" << std::endl;
        return -1;
    }
    double c;
    while ((b - a) >= epsilon) {
        c = (a + b) / 2;
        if(function(c) == 0.0)
            break;

        if (function(c) * function(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    double a = 1.0;
    double b = 3.0;
    double epsilon = 0.0001;
    double result = bisection(a, b, epsilon);
    if (result != -1) {
        cout<<"SQRT: "<<result<<"\n";
    }
    return 0;
}
