#include<iostream>

using namespace std;

int main(){
	int num;
	while(cin >> num){
		if(num != 42){
			cout << num << endl;
		}else{
			break;
		}
	}
	return 0;
}

