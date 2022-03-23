#include<iostream>
using namespace std;
int main(){
	int n,a[50],i,even=0,odd=0;
	cout<<"size is: ";
	cin>>n;
	cout<<"enter the array: ";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++){
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	cout<<"number of even elements are: "<<even<<endl;
	cout<<"number of odd elements are: "<<odd;
	return 0;
}
