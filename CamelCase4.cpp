#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void split(string s){
    string ans="";
    int n=s.size();
    if(s[2]=='M'){
        n=n-2;
        ans+=s[4];
    }
    else if(s[2]=='C')ans+=tolower(s[4]);
    else ans+=s[4];
    for(int i=5;i<n;i++){
        if(isupper(s[i])){
            ans+=  ' ';
            ans+=tolower(s[i]);
        }
        else ans+=s[i];
    }
    cout<<ans<<endl;
}
void combine(string s){
    string ans="";
    int n=s.size();
    for(int i=4;i<n;i++){
        if(s[i]==' '){
            ans+=toupper(s[++i]);
            continue;
        }
        else ans+=s[i];
    }
    if(s[2]=='M')ans+="()";
    else if(s[2]=='C')ans[0]=toupper(ans[0]);
    cout<<ans<<endl;
}

int main() {
    string str;
    while (getline(cin, str)){
        str.erase(remove(str.begin(), str.end(), '\r'), str.end());
        if(str[0]=='S')
            split(str);
        else
            combine(str);
    }
    return 0;
}
