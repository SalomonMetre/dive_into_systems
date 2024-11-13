#include <bits/stdc++.h>



int main(){
    int arrayExample [10] = {23, 19, 5, 30, 40, 1, 2, 9, 13, 11};
    ssize_t arraySize = sizeof(arrayExample) / sizeof(arrayExample[0]);
    insertionSort(arrayExample, arraySize);
    for(auto element : arrayExample){
        std::cout<< element << std::endl;
    }
}