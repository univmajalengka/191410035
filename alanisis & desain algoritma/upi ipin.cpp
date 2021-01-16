#include <iostream>
using namespace std;
int angka;
int main(){
	cout<<"masukan angka : ";
	cin>>angka;
    for(int i = 1; i <= angka; i++){
    	
        if((i%3!=0) && (i%5!=0))
		{
		cout<<i<<endl;
		}
        if(i%3==0)
		{
        cout<<"upin"<<endl;
		}
		if(i%5==0)
		{
        	cout<<"ipin"<<endl;
		}
    }
    return 0;
}
