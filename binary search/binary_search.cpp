#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
	int s,e,mid;
	s=0;e=n-1;
	mid=s+(e-s)/2;
	while(s<=e){
		if(arr[mid]==key)
		return mid;
		if(arr[mid]<key)
		s=mid+1;
		else
		e=mid-1;
		mid=s+(e-s)/2;
	}
	return -1;
}
int main(){
	int a[50],i,n,index,key;
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements:\n";  //check elements 87,43,34,12,7
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter element you want to search: ";
	cin>>key;
	index=binarysearch(a,n,key);
	cout<<"index of the element "<<key<<" is "<<index;
	return 0;
}
