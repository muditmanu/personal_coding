#include<iostream>

using namespace std;

int reverse(int);

int main(){
	int no_of_cases,res,num1,num2;
	cin >> no_of_cases;
	for(int i = 0;i < no_of_cases;i++){
		cin >> num1;
		cin >> num2;
		res = reverse(reverse(num1) + reverse(num2));
		cout << res << endl;
	}
}

int reverse(int num){
	int res = 0;
	int temp;
	while(num != 0){
		temp = num%10;
		res = res * 10 + temp;
		num = num/10;
	}
	return res;
}
