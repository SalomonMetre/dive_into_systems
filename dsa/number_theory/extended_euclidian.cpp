#include <bits/stdc++.h>

int extended_euclidian(int a, int b, int &x, int &y){
    int x1 = 1, x2 = 0, y1 = 0, y2 = 1;
    int q, r;
    while(b != 0){
        r = a % b;
        q = a / b;
        a = b;
        b = r;

        int temp1 = x1 - q * x2;
        int temp2 = y1 - q * y2;

        x1 = x2;
        y1 = y2;

        x2 = temp1;
        y2 = temp2;
    }

    x = x1;
    y = y1;

    return a;
}

int main(){
    int x, y;
    int a = 32, b = 23;
    int gcd = extended_euclidian(a,b, x,y);
    std::cout << "gcd is : " << gcd << ", and " << gcd << " = " << a << " * " << x << " + " << b << " * " << y <<std::endl; 
}