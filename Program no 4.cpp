#include<iostream>
using namespace std;
double calculateStrikeRate(int runs, int balls){
    return ((double)runs / balls) * 100;
}

int main(){
    int runs, balls;
    cout<<"Enter Runs: ";
    cin>>runs;
    cout<<"Enter Balls: ";
    cin>>balls;
    double strikeRate=calculateStrikeRate(runs, balls);
    cout<<"Strike Rate: "<<strikeRate;
    return 0;
}
