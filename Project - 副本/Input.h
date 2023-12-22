#ifndef _INPUT_H_
#define _INPUT_H_

#include "Variable.h"

void init() {
    // std::system("echo off");
    // std::system("powershell New-Item -Path C:\\Temp\\stuData.tmp -Type File -Force");
    // std::system("echo off & cls");
    inp.open("C:\\Temp\\stuData.tmp", std::ios::in);
    if(!inp.is_open()) {
        std::cerr << "ERROR : CANNOT OPEN THE FILE !";
        exit(-INF);
    }
}

inline long long Rand(long long mod, ll Seed) {
    std::srand(Seed);
	int res = ((1ll * std::rand()) << 28) ^ (std::rand() << 14) ^ std::rand();
	return res % mod;
}

void readFile () {
    cnt = 0;
    std::string x1;
    while(getline(inp, x1)) {
        vStu.push_back(Stu(cnt, x1));
        cnt ++;
    }
}

#endif