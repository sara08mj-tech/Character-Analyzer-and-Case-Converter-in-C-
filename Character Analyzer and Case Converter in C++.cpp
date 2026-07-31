#include<iostream>
using namespace std;
int main(){
 char c;
 cout<<"Enter a character : ";
 cin>>c;
 if(islower(c)){
 	cout<<"your character "<<c<<" is in lowercase. ";
 	c=toupper(c);
 	cout<<" Its uppercase is "<<c;
 }
 
 else if(isupper(c)){
 	cout<<" your character "<<c<<" is in uppercase. ";
 	c=tolower(c);
 	cout<<" Its lowercase is "<<c;
 }
 
 else if(isdigit(c)){
 	cout<<" your character  "<<c<<" is a digit.";
 	
 }
 else 
 cout<<" your character "<<c<<" special character";
	return 0;
}
