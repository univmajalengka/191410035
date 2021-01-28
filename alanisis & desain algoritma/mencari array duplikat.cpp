#include<iostream>
using namespace std;

int main(){
	//Inisialisasi array     
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 9,3};     
        
    //Hitung panjang array    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    cout<<"Duplikat Pada Larik : \n";    
    //Mencari Elemen Duplikat   
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j])    
                cout<<"\n" << arr[j];    
        }    
    }    
    return 0;    
}
