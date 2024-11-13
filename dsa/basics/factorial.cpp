#include <bits/stdc++.h>

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int input;
    std::cin >> input;
    std::cout << "Result : " << fact(input) << std::endl;
}