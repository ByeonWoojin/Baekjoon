#include <iostream>
#include <vector>
using namespace std;


bool isPerfect(int num, vector<int>&divisors);

int main()
{

	while (true)
	{
		int n;
		cin >> n;
		if (n == -1)
		{
			break;
		}
		vector<int> divisors;
		if (isPerfect(n, divisors)) {
			cout << n << " = ";
			for (int i = 0; i < divisors.size(); i++)
			{
				cout << divisors[i];
				if (i != divisors.size() -1)
				{
					cout << " + ";
				}
			}
			cout << endl;
		}
		else
		{
			cout << n << " is NOT perfect." << endl;
		}


	}
}
	bool isPerfect(int num, vector<int>&divisors) {
		int sum = 0;
		for (int i = 1; i <= num / 2; ++i) {
			if (num % i == 0) {
				sum += i;
				divisors.push_back(i);		
			}
		}
		return sum == num;
	}

