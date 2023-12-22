#ifndef _VARIABLE_H_
#define _VARIABLE_H_

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <stdint.h>
#include <fstream>
#include <windows.h>
#include <ctime>
#include <string>

using std::cin;
using std::cout;
using std::sort;
using std::unique;
using ll = long long ;
using srt = short;
const int INF = 0x7fffffff;
using _FILE = std::fstream;
using _INFILE = std::ifstream;
using _OUTFILE = std::ofstream;

struct Stu {
    int id;
    std::string name;
    // srt x;
    // srt y;
    Stu(){id = -1, name = ""; /*x = y = 0.0;*/}
    Stu(int aa, std::string bb) {id = aa, name = bb ;}
};
#include <vector>
std::vector< Stu > vStu;


_INFILE inp;
_OUTFILE out;

int count;
int cnt = 0;


void readFile () ;
void init() ;
inline long long Rand(long long mod = 100000000, ll Seed = ((1ll * std::time(0)) << 28) ^ (std::rand() << 14) ^ std::time(0)) ;
void print (std::string name) ;

#endif