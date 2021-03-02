#include <iostream>
#include <string>
using namespace std;
int main() {
    string firstName, middleInitial, lastName;

    cin>>firstName;
    cin>>middleInitial;
    middleInitial = middleInitial[0];
    cin>>lastName;

    cout<<lastName<<", "<<firstName<<" "<<middleInitial<<"."<<endl;
    return 0;
}