#include <iostream>
using namespace std;

int kj(int j, int m, int d){
    int td;
    td=(j*3600)+(m*60)+d;
    return td;
}
int main()
{
	int jam1,menit1,detik1;
 
	cout<<"masukan jam 1 =",cin>>jam1;
	cout<<"masukan menit 1 =",cin>>menit1;
	cout<<"masukan detik 1 =",cin>>detik1;
	
	int jam2,menit2,detik2;
 
	cout<<"masukan jam 2 =",cin>>jam2;
	cout<<"masukan menit 2 =",cin>>menit2;
	cout<<"masukan detik 2 =",cin>>detik2;
	
	cout<<"jumlah detik 1 ="<<kj(jam1,menit1,menit1)<<endl;
	cout<<"jumlah detik 2 ="<<kj(jam2,menit2,detik2)<<endl;
	int jumlah;
	jumlah=kj(jam2,menit2,detik2) - kj(jam1,menit1,menit1);
	cout<<"hasil = "<<jumlah;
}