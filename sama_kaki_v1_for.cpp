#include <iostream>
using namespace std;
int main() {
	
	int x,j,b,d;
	
	for(x=1;x<=7;x++) 
	{
		for(j=1;j<=x;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(b=1;b<=7;b++) 
	{
		for(d=7;d>=b;d--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
