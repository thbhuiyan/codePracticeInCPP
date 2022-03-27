
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main() {
	string  str;
	cin >> str;    //Reading input from STDIN
		 if((2*count(str.begin(), str.end(), 'z'))==(count(str.begin(), str.end(), 'o'))){
			 cout<<"Yes";
		 }
		 else{
			 cout<<"No";
		 }
}
