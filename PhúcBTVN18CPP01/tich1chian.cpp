#include <iostream>
using namespace std;
int main()
{ int n;
float s=1;
cout<< " Nhap dãy 1+1/2+1/3+.. 1/n voi n tu ban phim:";
cin>>n;
for (float i=1;i<=n;i++){ s*=1/i;}
cout << "tich la"<< s;}
