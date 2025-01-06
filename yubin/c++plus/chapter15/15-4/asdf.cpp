#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

int main(void){

    bool flag = true;
    string str = "Madam, I'm Adam";

    int l = 0 , r = str.size() - 1;

    while(l<=r) {
        if(isspace(str[l]) || ispunct(str[l])){
            l ++;
            continue;
        }

        if(isspace(str[r]) || ispunct(str[r])){
            r--;
            continue;
        }

        if(tolower(str[l++]) != tolower(str[r--]))
        {
            flag = false;
            break; 
        }
        
    }
    bool a = true;
    int c = 1;
    if(a || c=)
    if(flag == true){
        cout << "ok";
    }
    else {
        cout << "no";
    }

    return 0;
}