#include <string>
#include <algorithm>
#include <iostream>

using namespace std;
int n = 0;
int cal = 0;
int j, i;
string t, a;

int main(){
string re;

	for(i = 100; i <= 999; i++){
		for(j = 999; j > 10; j--){
			//cout << i << "*"<< j << "\n";
			cal = i * j;
	  		if (cal > n){
				a = to_string(cal);
				t = a;
				reverse(a.begin(), a.end());
				if (t == a){
					n = i * j;
					//cout << i << "*" << j << "=" << n <<"\n"; 
				}
			}
		}
	}
	cout <<"The largest palindromic is: " << n <<"\n"; 
}