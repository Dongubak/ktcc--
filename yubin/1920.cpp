#include<iostream>
#include<vector>
#include<
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A,B,c;
    cin>>A;
    vector<int> arr;
    for(int i=0;i<A;i++){
        cin>>c;
        arr.push_back(c);
    }
    sort(arr.begin(),arr.end());
    cin>>B;
    for(int i=0;i<B;i++){
        cin>>c;
        auto f= lower_bound(arr.begin(),arr.end(),c);
        if(f != arr.end()){
            if(*f==c){
                cout << '1' << "\n";
            } else{
                cout << '0' << "\n";
            }
        } else{
            cout << '0' << "\n";
        }
    }
    return 0;
}

