#include <iostream>
#include <cstring>

using namespace std;

struct customer {
    char fullname[35];
    double payment;
};
typedef customer Item;
class Stack {
	private:
    	enum {MAX = 10};  
    	Item items[MAX]{};  
    	int top; 

	public:
    	Stack() { top = 0; }
    	bool isempty() const;
    	bool isfull() const;
    	bool push(const Item & item);
    	bool pop(Item & item);
};

bool Stack::isempty() const {
    return top == 0;
}
bool Stack::isfull() const {
    return top == MAX;
}
bool Stack::push(const Item & item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    } else {
        return false;
    }
}
bool Stack::pop(customer & item) {
    if (top > 0) {
        item = items[--top];
        return true;
    } else {
        return false;
    }
}
int main(){
    Stack st;
    char ch;
    double total = 0;
    customer po;
    cout << "Pleace enter A to add customer, \n"
         << "P to process a PO, or Q to quit.\n";
    while(cin >> ch && toupper(ch) != 'Q'){
        while(cin.get() != '\n')
            continue;
        if(!isalpha(ch)){
            cout << '\a';
            continue;
        }
        switch(ch){
            case 'A':
            case 'a': cout << "Enter full name: ";
                      cin.get(po.fullname, 35);
                      while(cin.get() != '\n')
                          continue;
                      cout << "Enter payment amount: ";
                      cin >> po.payment;
                      if(st.isfull())
                          cout << "stack already full\n";
                      else
                          st.push(po);
                      break;
            case 'P':
            case 'p': if(st.isempty()){
                          cout << "stack already empty\n";
                      }
                      else {
                          st.pop(po);
                          cout << "PO #" << (total += po.payment) << " popped\n";
                      }
                      break;
        }
        cout << "Please enter A to add customer, P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}