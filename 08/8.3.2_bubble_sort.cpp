#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;

template <typename T>
vector<i64> insertion_sort_vector(vector<T> arr)
{
    for (i64 i = 1; i < arr.size(); i++)
    {
        i64 current = arr[i];
        i64 j = i - 1;
        while (arr[j] > current && j >= 0)
        {

            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    return arr;
}

int main()
{
    i64 n;
    cin >> n;
    vector<i64> arr(n, 0);
    for (i64 i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    auto sorted = insertion_sort_vector(arr);
    for (auto num : sorted)
    {
        cout << num << " ";
    }
}
