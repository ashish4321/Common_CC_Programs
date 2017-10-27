#include<iostream>
#include<conio.h>

using namespace std;

//Function
long factorial(int);

int main() {

   
    int counter, n;

    
    cout << "Enter the Number :";
    cin>>n;

   
    cout << n << " Factorial Value Is " << factorial(n);

 
    getch();
    return 0;
}



long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}