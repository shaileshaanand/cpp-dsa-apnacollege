#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;

template <typename T>
vector<i64> insertion_sort_vector(vector<T> arr)
{
    for (i64 i = 0; i < arr.size() - 1; i++)
    {
        for (i64 j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[i])
            {
                i64 t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    return arr;
}

template <typename T>
vector<i64> selection_sort_vector2(vector<T> arr)
{
    for (i64 i = 0; i < arr.size() - 1; i++)
    {
        i64 min = INT64_MAX;
        for (i64 j = i + 1; j < arr.size(); j++)
            if (arr[j] < arr[min])
                min = j;
        i64 t = arr[min];
        arr[min] = arr[i];
        arr[i] = t;
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
    auto sorted = selection_sort_vector2(arr);
    for (auto num : sorted)
    {
        cout << num << " ";
    }
}
