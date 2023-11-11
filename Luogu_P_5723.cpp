#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

const int N = 1e5 + 5;

vector <int> primes;
bool np[N];

void init(int n);

int main() 
{
    
    return 0;
}

void init(int n) 
{
    for(int i = 2; i <= n; i++) 
    {
        if (np[i]) continue;
        primes.push_back(i);
        for(int j = i; i * j <= n; j++)
        {
            np[i * j] = true;
        }
    }
}