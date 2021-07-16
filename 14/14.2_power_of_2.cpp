#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;

bool is_power_of_2(int n)
{
    return (n && !(n & (n - 1)));
}

int main()
{
    cout << is_power_of_2(8) << endl;
    cout << is_power_of_2(9) << endl;
    cout << is_power_of_2(1024) << endl;
}
