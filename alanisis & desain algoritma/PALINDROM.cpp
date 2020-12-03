#include <iostream>
#include <string.h>
using namespace std;

int main(int getline,char**argv)
 {
    char kata[100];
    cout <<"Masukan Kata :";
    cin>>kata;
    int i,pj;
    pj=strlen(kata);
    for(i=0;i<=pj/2;i++)
    if(kata[i]!=kata[pj-i-1]){
     cout <<kata<< " bukan Palindrom" ;
     i=pj;}
    else {
    cout<< kata<< " adalah Palindrom ";i=pj;}
    return 0;
}
