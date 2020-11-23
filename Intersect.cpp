#include <stdio.h>
#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
	int n;
	cin >> n;
	int s1[n];
	int s2[n];
	for(int i=0 ; i<n ; i++){
		cin >> s1[i];
	}
	for(int i=0 ; i<n ; i++){
		cin >> s2[i];
	}
	sort(s1,s1+n);
	sort(s2,s2+n);
	/*for(int i=0 ;i<n ; i++){
		cout << s1[i] << " ";
		cout << s2[i] << endl;
	}*/
	int n1,n2,c;
	c=n1=n2=0;
	while(1){
		if(s1[n1] == s2[n2]){
			n1++;
			n2++;
			c++;
			if(n1>n || n2>n){
				break;
			}
		}
		else if(s1[n1] > s2[n2]){
			n2++;
			if(n2>n){
				break;
			}
		}
		else if(s2[n2] > s1[n1]){
			n1++;
			if(n1>n){
				break;
			}
		}
	}
	cout << c;
}
