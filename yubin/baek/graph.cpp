#include <iostream>
#include <vector>
using namespace std;
int main(){
    int vn,en;
    int src, dst, weight;
    cin >> vn >> en;
    vector<vector<pair<int,int>>>g(vn+1,vector<pair<int,int>>());
    for(int i=0; i<en; i++){
        cin>>src>>dst>>weight;
        g[src].push_back({dst,weight});
    }
}