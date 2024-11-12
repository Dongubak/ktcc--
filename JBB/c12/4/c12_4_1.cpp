#include "stack.h"
#include <iostream>

int main(){
    Stack st1(5);
    int x = 1;
    while(!st1.isfull())
        st1.push(x++);
    Stack st2 = st1;
    Stack st3(st2);
    Item val {};
    std::cout << "stack st1:\n";
    while(st1.pop(val))
        std::cout << val << '\n';
    std::cout << "stack st2:\n";
    while(st2.pop(val))
        std::cout << val << '\n';
    std::cout << "stack st3:\n";
    while(st3.pop(val))
        std::cout << val << '\n';
    return 0;
}