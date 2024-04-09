#include <iostream>

using namespace std;

int main()
{
    int a;
    int count = 1;

    cin >> a;
    
    int add = 6;
    int max = 1;

    while (1)
    {
        if (a <= max) break;    //max 값이 커져서 a보다 커지면 break;
        
        max += add;     // 1line => 7, 2line => 8~19 3line =>20~36;    
        add += 6;       //한 줄당 6의 배수로 커짐, 6,12,18,24
        ++count;
    }

    cout << count << endl;

    return 0;

}
