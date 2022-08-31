#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>vec;
    string str;
    while(cin>>str)
    {
        vec.push_back(str);
    }
    sort(vec.begin(),vec.end(),[](string& str1,string& str2)->bool{return str1<str2;});
    auto ite = unique(vec.begin(),vec.end());
    vec.erase(ite, vec.end());
    for(auto e:vec)
    {
        cout<<e<<endl;
    }
    return 0;
}