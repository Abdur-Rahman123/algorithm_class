#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
if(a==0)
{
return b; 
}
else 
{
return gcd(b%a,a); 
}
}

int main() {
	int c=gcd(36,60);
cout<<c;
	return 0;
}