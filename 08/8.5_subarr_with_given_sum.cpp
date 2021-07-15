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
auto subArraySum(int n, int sum, vector<i64> arr)
{
    /* Initialize curr_sum as value of
    first element and starting point as 0 */
    i64 curr_sum = arr[0], start = 0, i;

    /* Add elements one by one to curr_sum and
    if the curr_sum exceeds the sum,
    then remove starting element */
    for (i = 1; i <= n; i++)
    {
        // If curr_sum exceeds the sum,
        // then remove the starting elements
        while (curr_sum > sum && start < i - 1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        // If curr_sum becomes equal to sum,
        // then return true
        if (curr_sum == sum)
        {
            // cout << "Sum found between indexes "
            //      << start << " and " << i - 1;
            std::ostringstream out;
            out << start + 1 << " " << i;
            return out.str();
        }

        // Add this element to curr_sum
        if (i < n)
            curr_sum = curr_sum + arr[i];
    }

    // If we reach here, then no subarray
    return string("-1");
}

auto solve(i64 n, i64 s, vector<i64> nums)
{
    i64 i = 0, j = 0, current_sum = nums[0], st = 0, en = 0;
    bool found = false;
    while (current_sum != s && st < n - 1 && en < n - 1)
    {

        if (current_sum > s)
        {
            if (st == en)
            {
                st++;
                en++;
                current_sum = nums[st];
            }
            else
            {

                current_sum -= nums[st];
                st++;
            }
        }
        else if (current_sum < s)
        {
            en++;
            current_sum += nums[en];
        }
    }
    st++;
    en++;
    if (current_sum == s)
    {
        std::ostringstream s;
        s << st << " " << en;
        return s.str();
    }

    return string("-1");
}
void stress()
{
    i64 nt = 0, i;
    while (true)
    {
        i64 n = randint(1, 1000);
        vector<i64> nums;
        fo(i, n)
        {
            nums.push_back(randint(1, 3000));
        }
        i64 sum = randint(1, 20000);
        auto mysum = solve(n, sum, nums);
        auto corsum = solve(n, sum, nums);
        if (mysum != "-1")
        {
            display(n, sum);
            display(joinvector(nums));
            display(mysum, corsum);
        }

        if (mysum != corsum)
        {
            break;
        }
    }
}
int main()
{
    // stress();
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    i64 n_test_cases = 1;
    cin >> n_test_cases;
    while (n_test_cases--)
    {
        i64 n, s;
        cin >> n >> s;
        auto nums = readvector<i64>(n);
        display(subArraySum(n, s, nums));
    }
    return 0;
}
