#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;
vector<string> keypadarr = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    int key = s[0] - '0';
    for (char ch : keypadarr[key - 1])
    {
        keypad(s.substr(1), ans + ch);
    }
}

int main()
{
    keypad("237", "");
}
