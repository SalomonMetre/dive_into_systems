#include <bits/stdc++.h>

int sum(int count,int n){
    if (count == n){
        return count;
    }
    return count + sum(count + 1, n);
}

int main(){
    int limit;
    std::cin >> limit;
    std::cout << "Sum from 1 to " << limit << " is : " << sum(1,limit) << std::endl;
}