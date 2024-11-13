#include <bits/stdc++.h>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reverseArray(int arr[], int length){
    for (int i = 0; i < length/2; i++){
        swap(arr[i], arr[length-1-i]);
    }
}

int main(){
    int myArr[5] = {1,2,3,4,5};
    int size = sizeof(myArr)/sizeof(myArr[0]);
    reverseArray(myArr, size);
    for(int i = 0; i < size; i++){
        std::cout << myArr[i] << std::endl;
    }
}