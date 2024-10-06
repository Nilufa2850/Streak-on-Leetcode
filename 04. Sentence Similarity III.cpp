class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if (sentence1 == sentence2)
        return true ;
    if (sentence1.size() < sentence2.size())
        swap(sentence1,sentence2) ;
    vector<string> v1,v2 ;

    //sentence1 brk into word
    string temp ;
    for (int i=0 ; i<sentence1.size() ; i++)
    {
        if (sentence1[i] != ' ')
            temp += sentence1[i] ;
        else 
        {
            v1.push_back(temp) ;
            temp.clear() ;
        }
    }
    v1.push_back (temp) ;
    temp.clear() ;
    //sentence2 brk into word
    for (int i=0 ; i<sentence2.size() ; i++)
    {
        if (sentence2[i] != ' ')
            temp += sentence2[i] ;
        else 
        {
            v2.push_back(temp) ;
            temp.clear() ;
        }
    }
    v2.push_back (temp) ;


    int i=0,j=0 ;
    int n1=v1.size() ;
    int n2=v2.size() ;

    while (i < n2 && v1[i] == v2[i]) 
        i++;

    while (j < n2 && v1[n1 - j - 1] == v2[n2 - j - 1]) 
        j++;

    return i+j >= n2 ; 
    }
};
