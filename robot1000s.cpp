#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main() {
	int n,e;
	char s[100];
	gets(s);
	int c;
	int sum=0;
	cin >> c;
	int a,b;
	a=0;
	b=c-1;
	int count;
	count = strlen(s)-1;
	while(count>0){
		n=e=0;
		for(int i=0 ; i<strlen(s) ; i++){
			if(i == a || i == b ){
				continue;
			}	
			if(s[i] == 'N'){
				n+=1;
			}			
			if(s[i] == 'S'){
				n-=1;
			}			
			if(s[i] == 'E'){
				e+=1;
			}				
			if(s[i] == 'W'){
				e-=1;
			}
		}//NNEESW
		if(n<0)
			n*=-1;
		if(e<0)
			e*=-1;	
		if(n+e > sum)
			sum = n+e;
		a+=1;
		b+=1;
		count-=1;
	}
	cout << sum*2;
}
