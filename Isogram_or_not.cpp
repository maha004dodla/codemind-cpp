#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>mp;
    set<int>st;
    for(auto i:s)
    {
        mp[i]++;
    }
    for(auto i:mp)
    {
        st.insert(i.second);
    }
    if(st.size()==1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}