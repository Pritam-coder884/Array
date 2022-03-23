#include<iostream>
using namespace std;
int pivot(int arr[],int n){
	int s=0,e=n-1;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]>=arr[0])
		s=mid+1;
		else
		e=mid;
		mid=s+(e-s)/2;
	}
	return e;
}
int main(){
	int a[5]={8,10,17,1,3};
	cout<<"The index where the array is rotate(pivoted point): "<<pivot(a,5);
	return 0;
}
