#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[]) {
    int A;
    string B;
    string C; 
    cin >> A;
    cin >> B;
    cin >> C;
    
    cout << A * (B[2] - '0') << "\n";
    cout << A * (B[1] - '0') << "\n";
    cout << A * (B[0] - '0') << "\n";
    cout << A * (C[0] - '0') << "\n";
    cout << A * stoi(B) << "\n";

    cout << argc ;
    return 0;
}