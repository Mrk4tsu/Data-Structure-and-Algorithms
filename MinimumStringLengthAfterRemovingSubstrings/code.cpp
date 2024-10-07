#include<iostream>
#include <string>
#include <stack>
using namespace std;

int minLenght(string s){
	stack<char> stack;
	
	for(char c : s){
	if(!stack.empty() && ((stack.top() == 'A' && c == 'B') || (stack.top() == 'C' && c == 'D'))){
		stack.pop();
	}
		else{
			stack.push(c);
		}
	}
	return stack.size();
}
int main(){
	// Ví dụ chạy thử
	string s1 = "ABFCACDB";
	string s2 = "ACBBD";
	
	cout << minLenght(s1) << endl; 
	cout << minLenght(s2) <<endl;
	
	return 0;
}
