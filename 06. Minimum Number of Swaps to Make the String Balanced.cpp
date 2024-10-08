#include<iostream>
#include<stack>
using namespace std ;

int minSwaps(string s)
{
    int imbalance=0 ;
    int count =0 ;
    

    for (int i=0 ; i<s.size() ; i++)
    {

        if (s[i] == ']')  //when closed bracekts come
            imbalance-- ;
        else //when open bracekts come
            imbalance++ ;

        if (imbalance < 0)
        {
            count++ ;
            imbalance = 1 ;
        }
    }
    return count ;
}


int main ()
{
    cout<<minSwaps("]]][[[") ;   
}
