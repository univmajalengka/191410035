#include<iostream>
using namespace std;
int main()
{ 
	int a[3][4][2]= {{2,3,4},{5,6,7,8},{9,0}};
	int b[3][4][2]= {{2,3,4},{5,6,7,8},{9,0}};
	int c[3][4][2];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++)
		    for(int k=0;k<2;k++){
		    c[i][j][k]=a[i][j][k]+b[i][j][k];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++)
		for(int k=0;k<2;k++){
			cout<<c[i][j][k]<<"";
		}
		cout<<endl;
	}
}
