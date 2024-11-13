#include <bits/stdc++.h>

int sumOfAllDivisors(int n){
	// Write your code here.
	int sum = 0;
	for(int i = 1; i <= n; i++){
		int sqrt_i = sqrt(i);
		int sum2 = 0;
		for (int j = 1; j <= sqrt_i; j++){
			if(i % j == 0){
				sum2 += j;
				if(j != (i/j)){
					sum2 += (i/j);
				}
			}
		}
		sum += sum2;
	}
	return sum;
}

int main(){
    int n = 5;
    std::cout<<sumOfAllDivisors(n)<<std::endl;
}