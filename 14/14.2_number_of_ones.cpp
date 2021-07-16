#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;
i64 number_of_ones(i64 n)
{
    i64 count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n >>= 1;
    }
    return count;
}
int main()
{
    i64 n;
    cin >> n;
    cout << number_of_ones(n) << endl;
}
