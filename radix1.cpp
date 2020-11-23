#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main (){
	int x,y;
	int sum=0;
	cin >> x ;
	for(int i=0 ; i<x ; i++){
		string s;
		cin >> y >> s;
		for(int j=0 ; j<s.length() ; j++){
			int z=int(s[j])-48;
			sum+=z*(pow(y,s.length()-j-1));
		}
		cout << sum <<endl;
		sum=0;
	}
}
