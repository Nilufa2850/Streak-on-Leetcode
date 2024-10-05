#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std ;

bool checkInclusion(string s1, string s2)
{
    if (s1.size() > s2.size()) return false;
    vector<int> v1(26,0),v2(26,0) ;
    for (int i=0 ; i<s1.size() ; i++)
    {
        v1[s1[i] - 'a']++ ;
        v2[s2[i] - 'a']++ ;
    }
    if (v1 == v2)
        return true ;
    for (int i=s1.size() ; i<s2.size() ; i++)
    {
        v2[s2[i] - 'a']++ ;
        v2[s2[i-s1.size()] - 'a']-- ;

        if (v1 == v2)
            return true ;
    }
    return false ;
}
int main ()
{
    string s1, s2 ;
    s1 = "abc" ;
    s2 = "eidbcaooo" ;
    cout<<checkInclusion(s1,s2) ;
}

