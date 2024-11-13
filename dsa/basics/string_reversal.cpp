#include <bits/stdc++.h>
#include <string>

bool isPalindrome(std::string s)
{
    int size = s.size();
    for (int i = 0; i < size / 2; i++)
        if (s[i] != s[size - 1 - i])
            return false;  
    return true; 
}

int main(){
    std::string name = "radar";  // Use std::string
    std::cout << isPalindrome(name) << std::endl;  // Output the result
}
