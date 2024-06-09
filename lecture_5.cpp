#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Enter 1st Num: ";
	cin>>a;
	cout<<"Enter 2nd Num: ";
	cin>>b;
	cout<<"Enter 3rd Num: ";
	cin>>c;
	cout<<"Enter 4th Num: ";
	cin>>d;
	// comparing two numbers which gives bool value.
	cout<<(a>b)<<endl;
	cout<<(b>c)<<endl;
	cout<<(c>d)<<endl;
	cout<<(d>a)<<endl;
	
	//using and operator
	
	cout<<(a<b && c<d)<<endl;
	
	//using or operator
	
	cout<<(a<b || c<d)<<endl;
	return 0;
}
