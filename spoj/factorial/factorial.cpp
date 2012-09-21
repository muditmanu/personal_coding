#include <iostream>

using namespace std;

int factorial(int);

int main(){
	int no_of_cases,num,res;
	cin >> no_of_cases;
	for(int i = 0;i < no_of_cases;i++){
		cin >> num;
		res = factorial(num);
		cout << res << endl;
	}
}

int factorial(int num){
	int res = 0;
	while(num != 0){
		res = res + num/5;
		num = num/5;
	}
	return res;
}
