#include<iostream>
using namespace std;
int main(){
	int a,b,c,large;
	cout<<"enter the values";
	cin>>a>>b>>c;
	large=((a>b && a>c)?a:((b>a && b>c)?b:c) ) ;
	cout<<large;
	return 0;
}
