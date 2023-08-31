#include <vector>
using namespace std;
typedef int VexType;
#define MAXL 10005 //MAX Long
typedef int STATUS;
#define OK 1
#define ERROR 0
struct VexNode {
    VexType Data;
    vector <VexType> Link;
};
// vector < vector <VexNode> > AdjList;
class Gph {
private:
    vector < vector <VexNode> > AdjList;
    vector < vector <VexNode> > AdjMatrix;
    size_t ENum; /// @brief Edge Num
    size_t VNum; /// @brief vertex Num
public:
    void insertVex(VexNode vertex);
    STATUS deleteVex();
    Gph() {
        Gph::ENum = 0;
        VNum = 0;
        vector <VexNode> tmp;
        AdjList.push_back(tmp);
    }
    Gph(VexNode vex) {
        vector<VexNode> tmp;
        tmp.push_back(vex);
        AdjList.push_back(tmp);
    }
};
//insertVex deleteVex
void Gph::insertVex(VexNode vertex) {
    vector <VexNode> Vert;
    Gph::AdjList.push_back(Vert);
    for(vector<VexType>::iterator it = vertex.Link.begin(); it != vertex.Link.end(); it++) {
        Gph::AdjList[*it].push_back(vertex);
    }
}

STATUS Gph::deleteVex() {
    
}