#include <bits/stdc++.h>



int main(){
    int numbers [8] = {2, 5, 1, -20, 13, 8, 21, 0};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    quickSort(numbers, 0, size - 1);
    for(auto element : numbers){
        std::cout << element << std::endl;
    }
}
