#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    vector<bool> a(26,false);
    int n=s.size();
    for(int i=0;i<n;i++){
        char c = tolower(s[i]);
        if(c>='a' && c<='z')a[c-'a']=true;
    }
    int i=0;
    string res = "not pangram";
    while(i<26){
        if(!a[i]) return res;
        i++;
    }
    res="pangram";
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}