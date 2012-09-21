#include <iostream>

using namespace std;

int main()
{
	int digits[20] = {0};
	int digits_carry = 0;
	int no_of_cases;
	int loop;
	int fact;
	int i,j,k,s;
	long long int temp;
	cin >> no_of_cases;	
	for(i = 0;i < no_of_cases;i++)
	{
		cin >> fact;		
		for(s = 0;s < 20;s++)
		{
			digits[s] = 0;
		}	
		digits[0] = fact;
		k = fact - 1;
		j = 0;
		while(k > 0 && j < 20)
		{
			if((digits[j] == 0 && j == 0)||(digits[j] == 0 && j == 1))
			{
				j++;
				continue;
			}
			temp = ((long long int)digits[j] * k);
			digits[j] = temp%1000000000 + digits_carry;
			digits_carry = temp/1000000000;
			if(digits[j+1] != 0)
			{
				j++;
				continue;
			}
			if(digits_carry != 0 && digits[j+1] == 0)
			{
				digits[j+1] = digits_carry;
				digits_carry = 0;
				j = 0;
				k--;
				continue;
			}
			if(digits_carry == 0 && digits[j+1] == 0)
			{
				j = 0;
				k--;
				continue;
			}
		}
		k = 19;
		while(digits[k] == 0)
		{
			k--;
		}
		loop = k;
		for(k = loop;k >= 0;k--)
		{
			if(digits[k] == 0)
			{
				cout << "00000000";
			}
			else if((digits[k]/100000000) == 0 && (digits[k]/10000000) != 0 && digits[k+1] != 0)
			{
				cout << "0";
			}
			else if((digits[k]/10000000) == 0 && (digits[k]/1000000) != 0 && digits[k+1] != 0)
			{
				cout << "00";
			}
			else if((digits[k]/1000000) == 0 && (digits[k]/100000) != 0 && digits[k+1] != 0)
			{
				cout << "000";
			}					
			cout << digits[k];
		}
		cout << "\n";
	}
	return 0;
}
