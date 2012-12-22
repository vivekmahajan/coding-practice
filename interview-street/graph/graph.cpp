#include <iostream>
#include <queue>
#include <vector>
#include <stack>

using namespace std;

class graph{
    private:
        //vector of vectors. Pair can be used to store the node as well as the weight
        vector< vector< pair<int, float> > > g;
        
    public:
        graph(int); //one arguement is the number of nodes in the graph
        void insert_edge(int, int, float);//edge and the weight related to it
        void bfs(int);
        void dfs(int);
    

};

graph::graph(int n){
    for(int i=0; i < n; i++){
        vector< pair<int, float> > temp;
        g.push_back(temp);
    }

}

void graph::insert_edge(int a, int b, float weight=0.0){
    pair<int, float> p1, p2;
    p1.first = b-1;
    p1.second = weight;
    p2.first = a-1;
    p2.second = weight;
    g[a-1].push_back(p1);
    g[b-1].push_back(p2);
    
}

void graph::dfs(int start){
    stack<int> st;
    vector<bool> visited;//for keeping track of the visited nodes
    for(int i=0; i<g.size(); i++){
        visited.push_back(false);
    }
    
    st.push(start);
    visited[start] = true;
    while(!st.empty()){
        int node = st.top();
        st.pop();
        cout << node << " ";
        vector< pair<int, float> >::iterator it;
        for(it=g[node].begin(); it < g[node].end(); it++){
            if(!visited[(*it).first]){
                visited[(*it).first] = true;
                st.push((*it).first);
            }
        }
    }
    
}

void graph::bfs(int start){
    queue<int> q;
    vector<bool> visited;
    for(int i=0; i<g.size(); i++){
        visited.push_back(false);
    }
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
        vector< pair<int, float> >::iterator it;
        for(it=g[node].begin(); it < g[node].end(); it++){
            if(!visited[(*it).first]){
                visited[(*it).first] = true;
                q.push((*it).first);
            }
        }
    }
    
}
int main(){
    //the bidirectional graph as an input
    int no_nodes, no_edges, a, b;
    cin >> no_nodes;
    cin >> no_edges;
    graph g = graph(no_nodes);
    for(int i=0; i<no_edges; i++){
        cin >> a >> b;
        g.insert_edge(a, b);
    }
    g.bfs(0);
    cout << endl <<endl;
    g.dfs(0);
}
