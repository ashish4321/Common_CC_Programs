#include<iostream>
#include<conio.h>

using namespace std;

int main() {

    
    int counter, n;
    long last = 1, next = 0, sum;
    
    cout << "Enter the Number :";
    cin>>n;

 
    while (next < n / 2) {
        cout << last << "  ";
        sum = next + last;
        next = last;
        last = sum;
    }

   
    getch();
    return 0;
}