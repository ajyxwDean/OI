#include <bits/stdc++.h>
#ifndef _TODOLIST_HPP_
using namespace std;
#define IFARR_OVERFLOW iNTid < Max_Size
#define ARRAY_OVERFLOW -1
#define STATUS int
#define OK 1
#define ERROR 0
#define THINGS node
#define NO false
#define YES true
struct node
{
    string name;
    bool bIsOk;
    int tId;
};
struct cs
{
    string name;
};
template <typename T>
inline void fFastread(T &a)
{
    cin >> a;
}
class TodoList
{
private:
    // int iNTid=1;
    vector<node> Todos;
    int Max_Size;
    void fReadMaxSize()
    {
        Max_Size = 1;
        printf("The Max Size: ");
        cin >> Max_Size;
    }
    THINGS fgetThings(string Name, bool bIsOK)
    {
        THINGS thing;
        thing.name = Name;
        thing.bIsOk = bIsOK;
        thing.tId = ++iNTid; //?
        return thing;
    }

public:
    TodoList(string name);
    // THINGS fgetThings(string Name, bool bIsOK);
    STATUS fPushThing(cs a);
    STATUS fCompleteThing(cs a);
    THINGS fSearchThing(cs a);
    STATUS Init(string Name);
    bool isError(THINGS fnt);
    int iNTid = 1;
    TodoList();
    ~TodoList();
};

TodoList::TodoList(string name)
{
    Todos[1].name = name;
}

STATUS TodoList::Init(string Name)
{
    Todos[0].name = Name;
    Todos[0].bIsOk = false;
    Todos[0].tId = iNTid;
    fReadMaxSize();
    iNTid++;
    if (IFARR_OVERFLOW)
    {
        return ERROR;
    }
    else
    {
        return OK;
    }
}

TodoList::TodoList()
{
    Todos[0].name = "Default Name";
    Todos[0].bIsOk = false;
    Todos[0].tId = iNTid;
    fReadMaxSize();
    iNTid++;
}

STATUS TodoList::fPushThing(cs a)
{
    Todos[++iNTid] = fgetThings(a.name, false);
    if (IFARR_OVERFLOW)
        return ERROR;
    else
        return OK;
}

bool TodoList::isError(THINGS fnt)
{
    if (fnt.name == "Error" && fnt.tId == -1 && fnt.bIsOk == NO)
    {
        return YES;
    }
    else
    {
        return NO;
    }
}

THINGS TodoList::fSearchThing(cs a)
{
    node Error;
    for (vector<node>::size_type i = 0; i < Todos.size(); i++)
    {
        if (Todos[i].name == a.name)
        {
            return Todos[i];
        }
    }
    Error.name = "Error";
    Error.tId = -1;
    Error.bIsOk = NO;
    return Error;
}

STATUS TodoList::fCompleteThing(cs a)
{
    Todos[fSearchThing(a).tId - 1].bIsOk = true;
    if (IFARR_OVERFLOW)
        return ERROR;
    else
        return OK;
}

TodoList::~TodoList()
{
}

void FPrintHelp()
{
    // Todo
}

void fSt()
{
    printf("LiFeng Coporation (c)2023-9999\nInput help to Get Help\n");
    // system("pwd");
    // string Path;
    // cin >> Path;
    cout << "LT "
         << "C:/Users/13582"
         << ">";
}

string path;
TodoList __List;

void fPrintGUI(string Path)
{
    // printf("LiFeng Coporation (c)2023-9999\n\n");
    // system("pwd");
    // string Path;
    // cin >> Path;
    cout << "LT "
         << Path
         << ">";
    path = Path;
}
#endif //!_TODOLIST_HPP_