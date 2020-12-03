#include <iostream>
using namespace std;

int main(){
	int a[7]={1,2,2,5,4,4,1};
	int b=1000000;
	int c=0;
	
	for(int i=0;i<7;i++){
		c=a[i]*b;
		cout<<c<<endl;
		b=b/10;
	}
	return 0;
}
