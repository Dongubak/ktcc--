#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{    ios::sync_with_stdio(0);  
     cin.tie(0);

     string S, P ;
     cin >> S, P ;
     strstr(S.c_str,P.c_str);
     
     if(strstr(S.c_str,P.c_str)!=NULL){
        cout << 1;
     }else{
        cout << 0;
     }
     return 0;

     
     
     
     
     
     
     
     
     
     
     
     
     }
