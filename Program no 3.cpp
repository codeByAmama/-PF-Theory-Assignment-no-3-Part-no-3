#include<iostream>
using namespace std;
int findGCD(int a, int b) {
    while (b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
	int a,b;
	cout<<"Enter the Value for a: ";
	cin>>a;
	cout<<"Enter the Value for b: ";
	cin>>b;
    cout<<findGCD(a, b); Display "Strike Rate: [Result]".
    return 0;
}
