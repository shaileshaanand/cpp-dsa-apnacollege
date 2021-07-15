#include <bits/stdc++.h>

#define fo(i, n) for (i = 0; i < n; i++)
#define loop(i, a, b) for (i = a; i < b; i++)
#define PI 3.1415926535897932384626
#define all(v) v.begin(), v.end()
typedef int32_t i32;
typedef int64_t i64;

// using namespace std;
using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::multimap;
using std::multiset;
using std::pair;
using std::set;
using std::string;
using std::vector;

i64 randint(i64 l, i64 u)
{
    return l + (rand() % u);
}

template <typename T>
void readarray(T *arr, size_t l)
{
    i64 i;
    fo(i, l)
    {
        std::cin >> arr[i];
    }
}
template <typename T>
vector<T> readvector(size_t l)
{
    vector<T> vec;
    size_t i;
    T a;
    for (i = 0; i < l; i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    return vec;
}
template <typename T>
void readmatrix(i64 rows, i64 columns, std::vector<std::vector<T>> &matrix)
{
    i64 num;
    i64 i, j;
    i64 arr[columns];
    fo(i, rows)
    {
        matrix[i] = std::vector<i64>(columns);
        fo(j, columns)
        {
            cin >> num;
            matrix[i][j] = num;
        }
    }
}

template <typename T>
string joinarray(T *arr, size_t l, std::string sep = " ")
{
    size_t i;
    std::ostringstream out;
    fo(i, l)
    {
        if (i == l - 1)
        {
            out << arr[i];
        }
        else
        {
            out << arr[i] << sep;
        }
    }
    return out.str();
}

template <typename T>
string joinvector(std::vector<T> vec, std::string sep = " ")
{
    size_t i;
    std::ostringstream out;
    for (i = 0; i < vec.size(); i++)
    {
        if (i == vec.size() - 1)
        {
            out << vec[i];
        }
        else
        {
            out << vec[i] << sep;
        }
    }
    return out.str();
}
template <typename T>
void display(T x)
{
    cout << x << endl;
}
template <typename T, typename U>
void display(T x, U y)
{
    cout << x << " " << y << endl;
}
template <typename T>
map<T, i64> counter(vector<T> vec)
{
    map<T, i64> rmap;
    for (auto elem : vec)
    {
        if (rmap.find(elem) == rmap.end())
        {
            rmap[elem] = 1;
        }
        else
        {
            rmap[elem]++;
        }
    }
    return rmap;
}
auto solve(i64 n, vector<i64> const &nums)
{
    i64 i, j, k, a, b, c;
    auto counts = counter(nums);
    fo(i, n)
    {
        if (counts[nums[i]] > 1)
        {
            return i + 1;
        }
    }
    return (i64)(0);
}

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    i64 n_test_cases = 1;
    // cin >> n_test_cases;
    while (n_test_cases--)
    {
        i64 n;
        cin >> n;
        auto nums = readvector<i64>(n);
        display(solve(n, nums));
    }
    return 0;
}
