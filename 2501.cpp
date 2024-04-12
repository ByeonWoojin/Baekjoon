#include <iostream>

using namespace std;

int main() {
	int N, K = 0;
	cin >> N >> K;
	int divisor = 0;
	for (int i = 1; i <= N; i++)
	{
		if (N%i == 0)
		{
			--K;
			if (K == 0)
			{
				divisor = i;
			}
		}

	}
	cout << divisor << endl;

	return 0;
}