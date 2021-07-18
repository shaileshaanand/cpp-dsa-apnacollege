#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;
void show_substrings(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << "`" << ans << "`" << endl;
        return;
    }

    char ch = s[0];
    string rest = s.substr(1);
    show_substrings(rest, ans);
    show_substrings(rest, ans + ch);
    show_substrings(rest, ans + std::to_string(int(ch)));
}
int main()
{
    show_substrings("AB", "");
}
