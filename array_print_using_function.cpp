#include<iostream>
using namespace std;
void printarray(int arr[],int size){
	cout<<"printing the array elements: ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int a[50],i,n;
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	printarray(a,n);
	return 0;
}
