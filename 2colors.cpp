#include<iostream>
using namespace std;
#include<vector>
bool dfs(int node,int parentcolor,vector<bool>&visited,vector<int>&color,vector<int>adj[])
{
    for(int j=0;j<adj[node].size();j++)
    {
        if(!visited[adj[node][j]])
        {
            visited[adj[node][j]]=1;
            if(parentcolor==0)
            {
                color[adj[node][j]]=1;
            }
            else{
                color[adj[node][j]]=0;
            }
            bool c=dfs(adj[node][j],color[adj[node][j]],visited,color,adj);
            if(c==0)
            return 0;
        }
        else{
            if(parentcolor==color[adj[node][j]])
            return false;
        }
        return 1;

    }
   
}

int main()

{
    //given adjacency listss
    cout<<"enter the number of vertices"<<endl;
    int n;
    cin>>n;
    vector<int>adj[n];
    adj[0].push_back((1,2,3));
    adj[1].push_back((0,2,3));
    adj[2].push_back((0,1));
    adj[3].push_back((0,1));
    vector<int>color(n,-1);
    vector<bool>visited(n,0);
    int node=0;
    int parentcolor=0;
color[node]=0;
    bool check=dfs(node,parentcolor,visited,color,adj);
    cout<<check;
    return 0;
}
