#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
	int x,k;
	cin >> x;
	while(x>0){
		string s,sub1,sub2,sub3;
		cin >> s;
		cin >> k;
		for(int i=0 ; i<k ; i++){
			int a,b;
			cin >> a >> b;
			sub1 = s.substr(0,a-1);
			sub2 = s.substr(a-1,b-a+1);
			reverse(sub2.begin(),sub2.end());
			sub3 = s.substr(b,s.size()-b);
			s = sub1+sub2+sub3;
		}
		cout << s;
		s="";
		if(x!=1)
			cout << endl;
		x--;
	}
	
}
