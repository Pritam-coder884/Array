#include<iostream>
using namespace std;
int main(){
	int a[100][100],b[100][100],c[100][100],i,j,r1,c1,r2,c2,sum,k;
	cout<<"Enter the number of rows of 1st matrix: ";
	cin>>r1;
	cout<<"Enter the number of columns of 1st matrix: ";
	cin>>c1;
	cout<<"Enter the number of rows of 2nd matrix: ";
	cin>>r2;
	cout<<"Enter the number of columns of 2nd matrix: ";
	cin>>c2;
	if(c1==r2){
		cout<<"Enter the 1st matrix"<<endl;
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++)
			cin>>a[i][j];
		}
		cout<<"Enter the 2nd matrix"<<endl;
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++)
			cin>>b[i][j];
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				sum=0;
				for(k=0;k<c1;k++){
					sum=sum+(a[i][k]*b[k][j]);
					c[i][j]=sum;
				}
			}
		}
		cout<<"Multiplication of the 2 matrix is"<<endl;
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++)
			cout<<c[i][j]<<"\t";
			cout<<"\n";
		}
	}
	else
	cout<<"Enter valid row or column of the matrices for multiplication property";
}
