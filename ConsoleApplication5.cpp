#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	if (a == 1)
	{
		cout << "666";
		return 0;
	}
	int num = 0;
	while (true)
	{
		num++;
		a--;
		//666000~666999 그리고 1666000~1666999 등등..의 숫자를 처리하기 위한 첫째 if문
		if (num % 1000 == 667)
		{
			for (int i = 0; i < 10; i++)
			{
				if (a == 0)
				{
					cout << num - 1 << "00" << i;
					return 0;
				}
				else {
					a--;
				}
			}
			for (int i = 10; i < 100; i++)
			{
				if (a == 0)
				{
					cout << num - 1 << "0" << i;
					return 0;
				}
				else {
					a--;
				}
			}
			for (int i = 100; i < 1000; i++)
			{
				if (a == 0)
				{
					cout << num - 1 << i;
					return 0;
				}
				else {
					if (i == 999) a = a;
					else a--;
					
				
				}
			}
		}
		//66000~66999.... 966000~966999 등의 숫자 처리하기 위한 두번째 if문
		else if (num % 100 == 67)
		{
			for (int i = 0; i < 10; i++)
			{
				if (a == 0)
				{
					cout << num - 1 << "60" << i;
					return 0;
				}
				else {
					a--;
				}
			}
			for (int i = 10; i < 100; i++)
			{
				if (a == 0)
				{
					cout << num - 1 << "6" << i;
					return 0;
				}
				else {
					if (i == 99) a = a;
					else a--;
				}
			}
			
		}
		//6660~6669 그리고... 96660~96669 등의 숫자 처리하기 위한 세번째 if문
		else if(num%10 ==7)
		{
			for (int i = 0; i < 10; i++)
			{
				if (a == 0)
				{
					cout << num - 1 << "66" << i;
					return 0;
				}
				else {
					if (i == 9) a = a;
					else a--;
				}

			}
			
		}

		else if (a == 0)
		{
			cout << num - 1 << "666";
			return 0;
		}
		
		
	}
	



	
}