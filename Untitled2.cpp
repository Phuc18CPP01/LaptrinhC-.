#include <iostream>
#include <math.h>
using namespace std;
int main()
{ int n,s;
cout<<"nhap n de kiem tra:";
cin>>n;
 if (n<2) {cout<< " khong phai so nguyen to";} else { 
 if (n==2) { cout<< " la so nguyen to";}}
 for (int i=2;i<=n-1;i++) { if (n%i==0) { s++;}}
 if(s==0){ cout<<" la so nguyen to";} else { cout<<" khong la so nguyen to"; }}
