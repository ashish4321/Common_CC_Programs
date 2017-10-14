#include <iostream>
#include <stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	int len = str.length();
	for(int i=0;i<len/2;i++)
	{
		char temp = str[i];
		str[i] = str[len - i - 1 ];
		str[len - i - 1] = temp;
	}
	cout<<str<<endl;
	return 0;
}