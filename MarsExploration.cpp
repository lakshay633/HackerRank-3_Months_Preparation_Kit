#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    int n=s.length(),a=0;
    for(int i=0;i<n;i+=3)if(s[i]!='S')a++;
    for(int i=1;i<n;i+=3)if(s[i]!='O')a++;
    for(int i=2;i<n;i+=3)if(s[i]!='S')a++;
    return a;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}