#include <bits/stdc++.h>



int main(){
    int numbers [8] = {19,13,8,2,11,5,3,21};
    ssize_t arraySize = sizeof(numbers)/sizeof(numbers[0]);
    selection_sort(numbers, arraySize);
    for(auto element : numbers){
        std::cout << element << std::endl;
    }
}