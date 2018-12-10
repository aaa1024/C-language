#include <iostream>
#include <queue>

using namespace std;

bool DFSvisited[50];  //?????ı???
bool BFSvisited[50];  //????ѵı???
string path[1000];
//?߱?ڵ?????һ??adjvex????洢?ڽӵ?λ???һ??nextָ????ָ??һ???ڵ?typedef struct EdgeNode {
    int adjvex;
    struct EdgeNode * next;
} EdgeNode;

//?????ڵ?????һ??data????洢??ݣ?һ??firstedge????ָ??߱?ĵ?????ڵ?typedef struct {
    string data;
    EdgeNode * firstedge;
} AdjList;

//???adjList[15]??????????????5?ĵ?λ?????Ȼ??umVertex,numEdge?һ??ͼ?Ķ?????ͱ??
typedef struct {
    AdjList adjList[15];
    int numVertex,numEdge;
} GraphAdjList;

int local(GraphAdjList G,string val) {
    for(int i=0; i<G.numVertex; i++)
    {
        if(G.adjList[i].data==val)
            return i;
    }
    return -1;
}

void CreateGraph(GraphAdjList & G) {
    int i,j,k;
    string v1,v2;
    EdgeNode * e,* p,*q;
    cout<<"?????????ͱ????????ո???:"<<endl;
    cin>>G.numVertex>>G.numEdge;
    cout<<"????????Ϣ??"<<endl;
    for(i=0; i<(G.numVertex); i++)
    {
        cout<<"??<<i+1<<"?????㣺"<<endl;
        cin>>G.adjList[i].data;
        G.adjList[i].firstedge=NULL;
    }
    for(k=0; k<(G.numEdge); k++)
    {
        cout<<"????ߣ?Vi,Vj????Ķ?????:"<<endl;
        cin>>v1>>v2;
        i=local(G,v1);
        j=local(G,v2);

        if(G.adjList[i].firstedge==NULL)
        {
            e= new EdgeNode;
            e->adjvex=j;
            e->next=NULL;
            G.adjList[i].firstedge=e;
        }
        else
        {
            p=G.adjList[i].firstedge;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            e = new EdgeNode;
            e->adjvex=j;
            e->next=NULL;
            p->next=e;
        }
        if(G.adjList[j].firstedge==NULL)
        {
            e= new EdgeNode;
            e->adjvex=i;
            e->next=NULL;
            G.adjList[j].firstedge=e;
        }
        else
        {
            p=G.adjList[j].firstedge;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            e = new EdgeNode;
            e->adjvex=i;
            e->next=NULL;
            p->next=e;
        }
    }
}

void Prin(GraphAdjList G) {
    cout<<"???????ڽӱ?????ʾ??"<<endl;
    for(int i=0; i<G.numVertex; i++)
    {
        cout<<G.adjList[i].data;             //??????????
        EdgeNode * e = G.adjList[i].firstedge;
        while(e)                              //Ȼ????ʼ??????ÿ???߱???洢??ڽӵ????        {
            cout<<"-->"<<e->adjvex;
            e=e->next;
        }
        cout<<endl;
    }
}

void DFS(GraphAdjList  G,int i) {

    EdgeNode * p;
    DFSvisited[i]=true;
    cout<<G.adjList[i].data<<"  ";
    p=G.adjList[i].firstedge;
    while(p) {
        if(!DFSvisited[p->adjvex])
            DFS(G,p->adjvex);
        p=p->next;
    }
}

void DFSTraverse(GraphAdjList  G) {
    for(int i=0; i<G.numVertex; i++)
        DFSvisited[i]=false;
    for(int i=0; i<G.numVertex; i++) {
        if(!DFSvisited[i])
            DFS(G,i);
    }
}

void BFSTraverse(GraphAdjList  G) {
    EdgeNode * p;
    queue<int>q;
    for(int i=0; i<G.numVertex; i++)
        BFSvisited[i]=false;
    for(int i=0; i<G.numVertex; i++) {
        if(!BFSvisited[i]) {
            BFSvisited[i]=true;
            cout<<G.adjList[i].data<<"  ";
            q.push(i);
            while(!q.empty()) {
                int count =q.front();
                q.pop();
                p=G.adjList[count].firstedge;
                while(p) {
                    if(!BFSvisited[p->adjvex]) {
                        BFSvisited[p->adjvex]=true;
                        cout<<G.adjList[p->adjvex].data<<"  ";
                        q.push(p->adjvex);
                    }
                    p=p->next;
                }
            }
        }
    }
}


void DestoryGraph(GraphAdjList & G) {
    EdgeNode * p = NULL;
    for(int i=0; i<G.numVertex; i++) {
        p=G.adjList[i].firstedge;
        while(p) {
            EdgeNode * temp = p;
            p=p->next;
            delete temp;
        }
        G.adjList[i].firstedge=NULL;
    }
}
bool flag = false;
int DFS_ALL(GraphAdjList G, int st, int ed, int count, int k) {

    EdgeNode* p;

    DFSvisited[st] = true;
    count += 1;
    path[count] = G.adjList[st].data;
    if (st == ed && k == count) {
        flag = true;
        for (int i = 0; i <= k; i++) {
            cout << path[i] << "->";
        }
        cout << "end" << endl;
    }
    if (count >= k) {
        DFSvisited[st]
         = false;
        return flag;
    }
    p = G.adjList[st].firstedge;
    while(p) {
        if(!DFSvisited[p->adjvex])
            DFS_ALL(G,p->adjvex, ed, count, k);
        p=p->next;
    }
    DFSvisited[st] = false;
    return flag;
};

int main() {
    int st, ed;
    string stS, edS;
    GraphAdjList G;
    CreateGraph(G);
    Prin(G);
    cout << endl;
    DFSTraverse(G);
    cout << endl;
    BFSTraverse(G);
    cout << endl;
    int k;
    cin >> stS >> edS >> k;
    for (int i = 0; i < sizeof(DFSvisited); i++) {
        DFSvisited[i] = false;
    }
    flag = false;
    st = local(G, stS);
    ed = local(G, edS);
    if (!DFS_ALL(G, st, ed, -1, k)) {
        cout << "????? << endl;
    }

    return 0;
}

