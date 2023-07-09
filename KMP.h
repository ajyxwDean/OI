#include <bits/stdc++.h>
#ifndef _KMP_H_

using std::string;
typedef int itn;

/// @brief Get The Array Next in the KMP Algorithm
/// @param aPattern the Pattern String of KMP Substring Search
/// @param aNext Function will put the result in this array.
/// @return Nothing
void getNext(int *next, const string &s)
{
    int j = -1;
    next[0] = j;
    for (int i = 1; i < s.size(); i++)
    {
        while (j >= 0 && s[i] != s[j + 1])
        {                
            j = next[j]; 
        }
        if (s[i] == s[j + 1])
        {
            j++;
        }
        next[i] = j;
    }
}
int KMP_substrSearch(string haystack, string needle)
{
    if (needle.size() == 0)
    {
        return 0;
    }
    int next[1000005];
    getNext(next, needle);
    int j = -1; 
    for (int i = 0; i < haystack.size(); i++)
    {
        while (j >= 0 && haystack[i] != needle[j + 1])
        {                
            j = next[j]; 
        }
        if (haystack[i] == needle[j + 1])
        {        
            j++; 
        }
        if (j == (needle.size() - 1))
        {
            return (i - needle.size() + 1);
        }
    }
    return -1;
}

#endif //!_KMP_H_