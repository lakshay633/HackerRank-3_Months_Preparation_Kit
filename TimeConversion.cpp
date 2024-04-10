#include <bits/stdc++.h>
using namespace std;
string timeConversion(string s) {
    string ans = "";
    if (s[8] == 'A') {
        if (s[0] == '1' && s[1] == '2') {
            ans += "00";
        } else {
            ans += s[0];
            ans += s[1];
        }
    } else {
        if (s[0] == '1' && s[1] == '2') {
            ans += "12";
        } else {
            int hour = (s[0] - '0') * 10 + (s[1] - '0') + 12;
            ans += to_string(hour);
        }
    }
    for (int i = 2; i < 8; i++)ans += s[i];
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
