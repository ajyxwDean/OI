#include <bits/stdc++.h>
using namespace std;
//#include "TodoList.hpp"

void p() {
    cout << "LT "
         << "C:/Users/13582"
         << ">";
}

void pui() {
    printf("TodoList Manager [VERSION v1.0]\n");
    printf("(c) LiFeng Coporation . All Right Reserved . \nInput help to Get Help\n");
    // system("pwd");
    // string Path;
    // cin >> Path;
    p();
}

int main(){
    pui();
    string commands;
    string ARgs;
    string ARgs1;
    cin >> commands;
    while (commands == "exit" || commands == "q") {
        //printf("OK");
        cin >> commands;
        // cin >> ARgs;
        if(commands == "cd") {
            cin >> ARgs;
//            fPrintGUI(ARgs);
        }else if(commands == "ct") {
            cin >> ARgs;
    //        __List.Init(ARgs);
        }else if(commands == "help"){
    //        FPrintHelp();
        }else if(commands == "cpl") {
            cin >> ARgs;
        }
        p();
    }
    printf("\nBye~\n");
    return 0;
}