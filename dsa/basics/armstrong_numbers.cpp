#include <bits/stdc++.h>

bool checkArmstrong(int n){
	//Write your code here
	int nb_digits = log10(n) + 1;
	int result = 0, remainder, initial_n = n;
	while(n > 0){
		remainder = n % 10;
		result += pow(remainder, nb_digits);
		n /= 10;
	}
	return result == initial_n;
}

int main(){
    std::cout<<checkArmstrong(1)<<std::endl;
    return 0;
}