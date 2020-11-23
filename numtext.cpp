#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	string digi[100]={"zero","one","two","three","four","five","six","seven","eight","nine",
				"ten","eleven","twelve", "thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen",
				"twenty","twenty-one","twenty-two","twenty-three","twenty-four","twenty-five","twenty-six",
				"twenty-seven","twenty-eight","twenty-nine","thirty","thirty-one","thirty-two","thirty-three",
				"thirty-four","thirty-five","thirty-six","thirty-seven","thirty-eight","thirty-nine",
				"forty","forty-one","forty-two","forty-three","forty-four","forty-five","forty-six","forty-seven",
				"forty-eigth","forty-nine","fifty","fifty-one","fifty-two","fifty-three","fifty-four","fifty-five",
				"fifty-six","fifty-seven","fifty-eight","fifty-nine","sixty", "sixty-one","sixty-two","sixty-three",
				"sixty-four","sixty-five","sixty-six","sixty-seven","sixty-eight","sixty-nine","seventy","seventy-one",
				"seventy-two","seventy-three","seventy-four","seventy-five","seventy-six","seventy-seven",
				"seventy-eight","seventy-nine","eighty","eighty-one","eighty-two","eighty-three","eighty-four",
				"eighty-five","eighty-six","eighty-seven","eighty-eight","eighty-nine","ninety","ninety-one",
				"ninety-two","ninety-three","ninety-four","ninety-five","ninety-six","ninety-seven",
				"ninety-eight","ninety-nine"};
	int x;
	cin >> x;
	for(int i=0 ; i<x ; i++){
		int num;
		cin >> num;
		if(num==0)
			cout << "zero";
		if(num<0)
			return 0;
		if(num == 10000){
			cout << digi[num/1000] << " thousand ";
			num-=10001;
		}		
		if(num > 999){
			int a;
			a = num/1000;
			num -= a*1000;
			cout << digi[a] << " thousand " ;
		}
		if(num > 99){
			int a;
			a = num/100;
			num -= a*100;
			cout << digi[a] << " hundred ";
		}
		if(num < 100 && num >0){
			cout << digi[num];
		}
		cout << endl;
	}
}
