#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
class graph{
private:
    int num_of_vertices;
    vector<int> *adj;//vector to store adjacency matrix
    public:

    graph(int v );
    void addedge(int from ,int to );
    void dfs(int start);
    void bfs(int start);
    void draw();
};

graph::graph(int v){
    this->num_of_vertices = v;
    adj = new vector<int>[v];//this creates 2 d vector
}

void graph::addedge(int from, int to){
adj[from].push_back( to ); // this adds the "to" variable to the list of "from" variable
}

void graph::bfs(int start){
    bool* visited = new bool[this->num_of_vertices]();// creates array of bool type

    queue<int> st;
    st.push(start);
    vector<int>::iterator i ; // to iterate using STL functions for vector
    while(!st.empty()){

        int top = st.front();
        cout<<top<<" ";
        st.pop();

        visited[top] = true;//to make the top element as visited

        for (i = adj[top].begin(); i != adj[top].end();i++){
            if(!visited[*i]){
                st.push(*i);
            }
        }
    }
}

void graph::dfs(int start){
    bool* visited = new bool[this->num_of_vertices]();// creates array of bool type

    stack<int> st;
    st.push(start);
    vector<int>::iterator i ; // to iterate using STL functions for vector
    while(!st.empty()){

        int top = st.top();
        cout<<top<<" ";
        st.pop();

        visited[top] = true;//to make the top element as visited

        for (i = adj[top].begin(); i != adj[top].end();i++){
            if(!visited[*i]){
                st.push(*i);
            }
        }
    }
}
void graph::draw(){
int i,j ;
for (i=0;i<this->num_of_vertices;i++){
        cout<<i<<"-";
    for(j=0;j<adj[i].size();j++){
        cout<<adj[i][j]<<"-";
    }
    cout<<endl;
}
cout<<endl;
}
int main() {
graph g(4);
g.addedge(0,1);
g.addedge(0,2);
g.addedge(1,2);
g.addedge(2,0);
g.addedge(2,3);
g.addedge(3,3);
g.draw();
//g->dfs(2);
cout<<"DFS"<<endl;
g.dfs(2);
cout<<endl;
cout<<"BFS"<<endl;
g.bfs(2);


return 0;
}

