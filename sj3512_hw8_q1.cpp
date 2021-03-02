#include <iostream>
using namespace std;
const int MAX_NUMBER_OF_VALUES = 20;
int minInArray(int arr[], int arrSize);
void printIndices(int arr[], int arrSize, int value);
int main() {
    int arr[MAX_NUMBER_OF_VALUES];
    cout<<"Please enter 20 integers separated by a space:"<<endl;
    for(int i=0; i < MAX_NUMBER_OF_VALUES; i++){
        cin>>arr[i];
    }
    int smallest = minInArray(arr, MAX_NUMBER_OF_VALUES);
    printIndices(arr, MAX_NUMBER_OF_VALUES, smallest);
    return 0;
}
int minInArray(int arr[], int arrSize){
    int i;
    int currDig = arr[0];
    for(i = 0; i < arrSize; i++){
        if(currDig > arr[i]){
            currDig = arr[i];
        }
    }
    return currDig;
}
void printIndices(int arr[], int arrSize, int value){
    int i;
    cout<<"The minimum value is "<<value<<", and it is located in the following indices: ";
    for(i = 0; i < arrSize; i++){
        if(arr[i] == value){
            cout<<i<<" ";
             }

        }
    }
