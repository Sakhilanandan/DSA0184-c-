#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float number,floorvalue,crilvale;
	cout<<"enter number";
	cin>>number;
	floorvalue=floor(number);
	crilvale=ceil(number);
	cout<<"floorvalue=="<<floorvalue<<endl
	    <<"cril=="<<crilvale;
	return 0;    

}
