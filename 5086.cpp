#include <iostream>

using namespace std;
void result(int first, int second) {
	if (second % first == 0)
	{
		cout << "factor" << endl;
	}
	else if (first % second == 0)
	{
		cout << "multiple" << endl;
	}
	else
	{
		cout << "neither" << endl;
	}
}
int main() {


	while (true)
	{
		int first, second;
		cin >> first>>second;
		if (first == 0 && second == 0)
			break;
		
		result(first, second);
	}
	return 0;
}