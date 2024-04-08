#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    int* C = new int[T];

    for (int i = 0; i < T; i++)
    {
        cin >> C[i];
    }
    for (int i = 0; i < T; ++i) {
        // 쿼터, 다임, 니켈, 페니의 개수 계산
        int quarters = C[i] / 25;
        C[i] %= 25;

        int dimes = C[i] / 10;
        C[i] %= 10;

        int nickels = C[i] / 5;
        C[i] %= 5;

        int pennies = C[i];

        cout << quarters << " " << dimes << " " << nickels << " " << pennies << endl;
    }

    return 0;
}
