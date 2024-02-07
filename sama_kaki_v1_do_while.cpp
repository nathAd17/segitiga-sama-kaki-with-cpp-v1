#include <iostream>
using namespace std;
int main() {
	
	int x,j,b,d;
	
	x=1;
	 
	do {
		j=1;
		do {
			cout<<"*";
			j++;
		} while(j<=x);
		cout<<endl;
		x++;
	} while(x<=7);
	b=1;
	 
	do {
		d=7;
		do {
			cout<<"*";
			d--;
		} while(d>=b);
		cout<<endl;
		b++;
	} while(b<=7);
	
	return 0;
}
