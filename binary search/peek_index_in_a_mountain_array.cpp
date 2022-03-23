#include<iostream>
using namespace std;
int peek_index(int arr[],int n){
	int s=0,e=n-1;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]<arr[mid+1])
		s=mid+1;  
		else
		e=mid;
		mid=s+(e-s)/2;
	}
	return e;
}
int main(){
	int a[5]={3,5,4,1};
	cout<<"The peek index in the mountain array is: "<<peek_index(a,5);
	return 0;
}
