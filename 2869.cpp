/*#include <iostream>

using namespace std;

int main() {
    int A, B, V;
    cin >> A >> B >> V;

    int count = 0;
    int total = 0;

    while (total < V) {
        count++;
        total += A; // 낮에 올라간 높이를 더합니다.
        if (total >= V) break; // 정상에 도달하면 반복문을 종료합니다.
        total -= B; // 밤에 미끄러진 높이를 뺍니다.
    }

    cout << count << endl;

    return 0;
}       ----> 이거는 시간 초과로.... 안됨 제출이
*/

#include <iostream>

using namespace std;

int main() {
    int A, B, V;
    cin >> A >> B >> V;

    int days = (V - B - 1) / (A - B) + 1;

    cout << days << endl;

    return 0;
}

