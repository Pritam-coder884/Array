#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key)
		return 1;
	}
	return 0;
}
int main(){
	int arr[50],n,key;
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements:\n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter the element you want to search: ";
	cin>>key;
	bool found=search(arr,n,key);
	if(found)
	cout<<key<<" is present in the array";
	else
	cout<<key<<" is not present in the array";
	return 0;
}
