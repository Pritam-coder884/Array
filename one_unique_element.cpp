//this code is valid for one unique element only
#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,2,3},i,res=0;
	for(i=0;i<5;i++)
	res=res^arr[i];
	cout<<res;
	return 0;
}
