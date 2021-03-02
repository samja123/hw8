#include <iostream>
#include <string>

using namespace std;
bool isDigitANumber(int i);

int main() {
    int i;
    
    string userInput;
    cout << "Please enter a line of text"<<endl;
    getline(cin, userInput);
    for (i = 0; i <= userInput.length(); i++){
        if(userInput[i] == ' '){
            i++;
            while(isDigitANumber(userInput[i]) == true) {
                userInput[i]='x';
                i++;
            }
        }
        if((userInput[0] < '0' && userInput[0] > '9')){
            i++;
            while(isDigitANumber(userInput[i]) == false) {
                userInput[i]=userInput[i];
                i++;
            }
        }

    }

    cout<<userInput<<endl;

    return 0;

}
bool isDigitANumber(int i){
        if(i >= '0' && i <= '9') {
            return true;
        }
    return false;
}
