#include<iostream>
#include<string>

using namespace std;

int main(){

    string userInput;
    cout<<"Please enter a line of text:"<<endl;
    getline(cin, userInput);

    int prev = 0;
    int i;
    int j;

    for(i=0; i <= userInput.length(); i++){
        //if we are at the end of a word or the end of a sentence
        if(userInput[i] == ' ' || i + 1 == userInput.length()){
            for(j=prev; j<i; j++){
                if(userInput[j] <= '0' || userInput[j] >= '9')
                    break;
            }
            if(j==i){
                for(j=prev; j<i; j++){
                    userInput[j] = 'x';
                }
            }
            prev = i+1;
        }
    }
    cout<<userInput<<endl;
    return 0;
}