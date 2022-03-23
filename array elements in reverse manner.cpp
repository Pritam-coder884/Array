#include<iostream>
using namespace std;
int main(){
	int n,a[50],i;
	cout<<"size is: ";
	cin>>n;
	cout<<"enter the array: ";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"array in reverse manner\n";
	for(i=n-1;i>=0;i--)
	cout<<a[i];
	return 0;
}
