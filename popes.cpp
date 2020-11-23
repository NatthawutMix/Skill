#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<int> c;
	vector<int> :: iterator c1;
	int x,y;
	cin >> x >> y;
	for(int i=0 ; i<y ; i++){
		int s;
		cin >> s;
		c.push_back(s);
	}
	int n=0;
	int min;
	int max=0;
	int local;
	int count;
	while(n<c.size()){
		c1 = upper_bound(c.begin(),c.end(),c[n]+x-1);
		count = (c1-c.begin())-n;
		if(count>max){
			min=c[n];
			local=c[c1-c.begin()-1];
			max = count;
		}
		n++;
	}
	cout << max  << " " << min  << " " << local;
}
