#include  <iostream>
#include  <vector>
#include  <queue>

using namespace std;

int visited[101]={0,}; 
int cnt =0;
int vn,en=0;

void bfs(int num , vector<vector<int>> g)
{
    queue<int> q;
    visited[num] = 1; 
    q.push(num);
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        for(int i=0; i<g[cur].size(); i++)
        {
            if(visited[g[cur][i]] == 1) continue;
            q.push(g[cur][i]);
            visited[g[cur][i]] = 1;
            cnt++;
        }
    }

}

int main()
{
    
    cin >> vn;
    cin >> en;
    vector<vector<int>> g(vn+1);   
    
    for(int i=0; i<en; i++)
    {
        int src, dst;
        cin>>src>>dst;
        g[src].push_back(dst);
        g[dst].push_back(src);
    }
    
    bfs(1,g);
    cout << cnt << '\n';
    return 0;
}