#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;
void tower_of_hanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }

    tower_of_hanoi(n - 1, src, helper, dest);
    cout << src << " -> " << dest << endl;
    tower_of_hanoi(n - 1, helper, dest, src);
}
int main()
{
    tower_of_hanoi(5, 'A', 'C', 'B');
}
