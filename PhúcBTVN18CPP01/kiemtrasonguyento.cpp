#include <iostream>
#include <math.h>
using namespace std;
int main()
{ int n,s;
cout<<"nhap n de kiem tra:";
cin>>n;
 if (n<2) {cout<< " khong phai so nguyen to";} 
 if (n==2) { cout<< " la so nguyen to";}
 if (n>2) {for (int i=2;i<n;i++) { if (n%i==0) { s++;}}
 if(s==0){ cout<<" la so nguyen to";} else { cout<<" khong la so nguyen to"; }}}
