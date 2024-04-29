
#include <iostream>
#include <list>
using namespace std;

bool decimal(int num) {
	//for (int i = 2; i < num; i++)
	//{
	//	if (num % i == 0) {
	//		return false;
	//	}
	//	else
	//	{
	//		return true;
	//	}
	//}						위 코드로는 1, 2, 3, 을 구분하기가 어려워짐

	if (num <= 1) {
		return false;
	}
	if (num <= 3) { return true; }	//2,3 은 소수가 맞음
	if (num > 4 && num <= 1000)
	{
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0) {
				return false;
			}
			//else
			//{
			//	return true;		//return true 가 조건문 안에 있어서 반복문이 한 번만 실행된 후 함수가 종료되게됨 
			//}
		}
		return true;
	}
}


int main(){
	int n,dec;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> dec;
		if (decimal(dec) == true)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}

