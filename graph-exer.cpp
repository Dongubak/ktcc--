#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int visited[101]; 
int cnt =0;
vector<vector<int>> g;
void bfs(int num);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vn,en, src, dst;
    cin >> vn >> en;

    g.resize(vn+1,vector<int>());
    for(int i=0; i<en; i++){
        cin >> src>> dst;
        g[src].push_back(dst);
        g[dst].push_back(src);
    }
    bfs(1);
    cout << cnt << '\n';
    return 0;
}

void bfs(int num)
{
    queue<int> q;
    visited[num] = 1;
    q.push(num);
    while(!q.empty())
    {
        int cur = q.front(); q.pop();
        for(auto& dst:g[cur]){
            if(visited[dst] == 0) {
                q.push(dst);
                visited[dst] = 1;
                cnt++;
            }
            
        }
    }
}