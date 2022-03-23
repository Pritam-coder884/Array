#include<iostream>
using namespace std;
int main(){
	int arr[50],n,i;
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"The reverse array is\n";
	for(i=n-1;i>=0;i--)
	cout<<arr[i]<<" ";
	return 0;
}
