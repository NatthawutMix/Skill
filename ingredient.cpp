#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n,m;
	int count=0;
	cin >> n >> m;
	for(int i=0 ; i<n ; i++){
		int a,b,c,x,y,z;
		cin >> a>>b>>c>>x>>y>>z;
		if(x/a>count)
			count = x/a;
		if(y/b>count)
			count = y/b;
		if(z/c>count)
			count = z/c;
		while(x%a!=0 && x/a!=count){
			x+=x;
		}
		while(y%b!=0 && y/b!=count){
			y+=y;
		}
		while(z%c!=0 && z/c!=count){
			z+=z;
		}
		cout <<x <<" "<<y<<" "<<z;
	}	
	cout << count;
}
