#include <bits/stdc++.h>



int main(){
    int numbers [9] = {21, 2, 1, 8, 34, 3, 5, 13, 1};
    ssize_t size = sizeof(numbers) / sizeof(numbers[0]);
    mergeSort(numbers, 0, size - 1);
    for(auto element : numbers){
        std::cout << element << std::endl;
    }
}