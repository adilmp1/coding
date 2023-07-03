#include <iostream>
using namespace std;
    bool isIsomorphic(string s, string t) 
    {
        if(s.size() != t.size())
        {
            return false;
        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                for(int j=i+1;j<s.size();j++)
                {
                    if((s[j]==s[i] && t[i]!=t[j])||(t[j]==t[i] && s[i]!=s[j]))
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
int main()
{
    string s,t;
    s="egg";
    t="add";
    cout<<isIsomorphic(s,t);
}