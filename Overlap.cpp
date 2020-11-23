#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int x,y,w,h,x1,y1,w1,h1;
	cin >> x >> y >> w >> h ;
	cin >> x1 >> y1 >> w1 >> h1;
	if(x1<x+w && y1<y+h && (x<=x1 && y<=y1)){
		if(x+w>x1+w1 && y+h>y1+h1)
			cout << (w1-x1)*(h1-y1);
		else
		 cout << ((x+w)-x1)*((y+h)-y1);
	}
	else if(x+w>x1 && y+h>y1){
		cout << ((x1+w1)-x)*((y1+h1)-y);
	}
	else{
		cout << 0;
	}
}
