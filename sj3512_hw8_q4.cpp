#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;

const int MAX_ARRAY_SIZE = 10;
const int PIN_ARRAY_SIZE = 5;
const int ACTUAL_PIN_NUMBER[PIN_ARRAY_SIZE] = {1, 2, 3, 4, 5};

void randomizeArray(int *arr, int arrSize);
void printArray(int arr[], int arrSize);
void userPinToArray(int value, int arr[]);
bool isMatch(int value, int arr[], int arr2[], const int arr3[]);
int main() {

    int passwordArray[PIN_ARRAY_SIZE];
    int pinArray[MAX_ARRAY_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int randomArray[MAX_ARRAY_SIZE];
    int userPin;

    cout<<"Please enter your PIN according to the following mapping: "<<endl;
    cout<<"PIN: ";
    printArray(pinArray, MAX_ARRAY_SIZE);
    cout<<"NUM: ";
    randomizeArray(randomArray, MAX_ARRAY_SIZE);
    printArray(randomArray, MAX_ARRAY_SIZE);
    cin>>userPin;
    userPinToArray(userPin, passwordArray);
    bool match = false;
    match = isMatch(PIN_ARRAY_SIZE, passwordArray, randomArray, ACTUAL_PIN_NUMBER);
    if(match == false){
        cout<<"Your PIN is correct"<<endl;
    }
    else{
        cout<<"Your PIN is not correct"<<endl;
    }

    return 0;
}

void printArray(int arr[], int arrSize){
    int i;
    for (i = 0; i < arrSize; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void randomizeArray(int arr[], int arrSize){
    int i;
    int randomNum;
    srand(time(0));
    for(i = 0; i < arrSize; i++){
        randomNum = (rand() % 10);
        arr[i] = randomNum;
    }
}

void userPinToArray(int value, int arr[]){
    arr[0] = value / 10000;
    arr[1] = (value / 1000) % 10;
    arr[2] = (value / 100) % 10;
    arr[3] = (value / 10) % 10;
    arr[4] = value % 10;
}

bool isMatch(int value, int arr[], int arr2[], const int arr3[]){
    int i;
    for (i = 0; i < value; i++){
        if(arr[i] != arr2[arr3[i]]){
            return true;
        }
        else{
            return false;
        }
    }

}