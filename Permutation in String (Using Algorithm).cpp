#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std ;

bool checkInclusion(string s1, string s2)
{
    sort(s1.begin(),s1.end()) ;
    do 
    {
        auto it = search(s2.begin(),s2.end(),s1.begin(),s1.end()) ;
        if (it != s2.end())
            return true ;
    } while (next_permutation(s1.begin(),s1.end())) ;
    return false ;
}
int main ()
{
    string s1, s2 ;
    s1 = "abc" ;
    s2 = "eidbaooo" ;
    cout<<checkInclusion(s1,s2) ;
}

