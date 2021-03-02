#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string str);
int main() {
    string userString;
    cout<<"Please enter a word: ";
    getline(cin, userString);
    bool pal = isPalindrome(userString);
    if(pal == true){
        cout<<userString<<" is a palindrome"<<endl;
    }
    else{
        cout<<userString<<" is not a palindrome"<<endl;
    }
    return 0;
}
bool isPalindrome(string str){
    int i;
    int j;
    for(i = 0; i < str.length(); i++){
        for(j = str.length() - 1; j >= 0; j--){
            if(str[i] == str[j]){
                return true;
            }
            else{
                return false;
            }
        }
    }
}