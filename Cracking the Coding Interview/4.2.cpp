#include<iostream>
#include<stdlib.h>
#include<list>
#include<stack>
using namespace std;

class graph
{
    private:
        int ver;
        list<int> *adj;
        int *visited;
        stack<int> st;
    public:
        graph(int);
        void edge(int, int);
        void print(int);
        bool route(graph, int, int);
};

graph::graph(int v)
{
    this->ver = v;
    adj = new list<int>[v];
    visited = new int[v];
}
void graph :: edge(int v, int w)
{
    adj[v].push_back(w);
//    adj[w].push_back(v);
}
void graph :: print(int u)
{
    auto it = adj[u].begin();
    while(it!=adj[u].end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
}

bool graph :: route(graph g, int s, int v)
{
    if(g.ver==0)
        return false;
    //if(s==v)
      //  return true;
    visited[s]=1;
    auto it = g.adj[s].begin();
    for(int i=0;i<g.adj[s].size();i++)
    {
        int a = *it;
        if(g.visited[a]==0)
        {
            if(a==v)
                return true;
            g.st.push(a);
            it++;
        }
    }
    while(!(g.st.empty()))
    {
        int n = g.st.top();
        g.st.pop();
        return route(g,n,v);
    }

}

int main()
{
    graph g(5);
    g.edge(0,1);
    g.edge(1,2);
    g.edge(1,4);
    g.edge(4,2);
//    g.edge(4,3);
    g.edge(3,1);
    g.edge(0,3);
    if(g.route(g,1,3))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<i<<"-->";
        g.print(i);
    }
    return 0;
}
