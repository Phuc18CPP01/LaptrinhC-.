#include <iostream>
using namespace std;
int main()
{ int n; 
float s,sum;
cout<< "tong cac so tu 1+1/2+..+1/n voi n=:";
cin>>n;
for ( int i=1;i<=n;i++) {s=1/(float)i;sum+=s;}
cout<<"tong day so la :"<<sum;}
