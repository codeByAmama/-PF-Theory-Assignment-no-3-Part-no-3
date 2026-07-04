#include <iostream>
using namespace std;
int getLength(char arr[]) {
    int length=0;
    for (int i=0; arr[i]!='\0'; i++) {
        length++;
    }
    return length;
}

int main() {
    char name[40]="Student";
    cout<<"The Lenght of the Word is: "<<getLength(name);
    return 0;
}
