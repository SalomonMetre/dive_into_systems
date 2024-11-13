#include <bits/stdc++.h>

void bubbleSort(int numbers[], int size){
    for(int i = size - 1; i >= 1; i--){
        for(int j = 0; j < i; j++){
            if(numbers[j] > numbers[j + 1]){
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }
}

int main(){
    int numbers [] = {23, 8, 5, 19, 2, 14, 15, 11, 20, 22};
    ssize_t arraySize = sizeof(numbers)/sizeof(numbers[0]);
    bubbleSort(numbers, arraySize);
    for(auto element : numbers){
        std::cout << element << std::endl;
    }
    return 0;
}