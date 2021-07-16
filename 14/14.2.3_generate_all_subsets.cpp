#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;

void subsets(i64 n, vector<i64> nums)
{
    for (int mask = 0; mask < (1 << n); mask++)
    {
        cout << "{";
        for (int j = 0; j < n; j++)
        {
            if ((1 << j) & mask)
            {
                cout << nums[j] << ",";
            }
        }
        cout << "}" << endl;
    }
}

int main()
{
    subsets(4, {1, 2, 3, 4});
}
