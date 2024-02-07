#include <iostream>
using namespace std;
int main() {
	
	int x,j,b,d;
	
	x=1;
	while(x<=7) 
	{
		j=1;
		while(j<=x)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		x++;
	}
	b=1;
	while(b<=7) 
	{
		d=7;
		while(d>=b)
		{
			cout<<"*";
			d--;
		}
		cout<<endl;
		b++;
	}
	
	return 0;
}
