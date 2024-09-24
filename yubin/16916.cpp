#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{    ios::sync_with_stdio(0);  
     cin.tie(0);
     char str1[1000001];
     char str2[1000001]; 

     scanf("%s %s", str1, str2);
     if(strstr(str1,str2)!=NULL){
        cout << 1;
     }else{
        cout << 0;
     }
     return 0;

     
     
     
     
     
     
     
     
     
     
     
     
     }
