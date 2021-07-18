#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;
void show_permutations(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        show_permutations(s.substr(0, i) + s.substr(i + 1), ans + s[i]);
    }
}
int main()
{ 
    show_permutations("abcdef", "");
}
