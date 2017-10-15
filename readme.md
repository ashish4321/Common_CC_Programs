#This repo maintains common programs, used for competitive coding, in C++
//THIS IS A PROGRAM IN C++ TO CHECK IF A NUMBER IS A PALINDROME OR NOT
#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome";
     else
         cout << " The number is not a palindrome";

    return 0;
}
