#include <iostream>

using namespace std;

typedef int Item;

class List{
    private:
        enum{MAX = 10};
        Item items[MAX]{};
        int top;
    public:
        List();
        bool isempty() const;
        bool isfull() const;
        void add(const Item &);
        void show() const;
        void visit(void (*pf)(Item &));
};

List::List(){
    top = 0;
}
bool List::isempty() const{
    return top == 0;
}
bool List::isfull() const{
    return top == MAX;
}
void List::add(const Item & item){
    if(top < MAX)
        items[top++] = item;
}
void List::visit(void (*pf)(Item &)){
    for(int i = 0; i < top; i++)
        pf(items[i]);
}
void List::show() const{
    if(isempty())
        cout << "List is empty.\n";
    else
        for(int i = 0; i < top; i++)
            cout << "Item #" << i + 1 << ": " << items[i] << "\n";
}
void sqr(int & y){ y *= y; }

int main(){
    List lst;
    int tmp;
    cout << "Enter a number (q to quit): ";
    while(cin >> tmp)
    {
        lst.add(tmp);
        if(lst.isfull()) break;
        cout << "Enter a number (q to quit): ";
    }
    lst.show();
    lst.visit(sqr);
    lst.show();
    return 0;
}
