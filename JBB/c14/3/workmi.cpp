#include <iostream>
#include <cstring>
#include "workermi.h"
const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    QueueTp<Worker*> queue;

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter  s: singer  "
            << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;

        Worker * pt;
        switch(choice)
        {
            case 'w': pt = new Waiter;
                      break;
            case 's': pt = new Singer;
                      break;
            case 't': pt = new SingingWaiter;
                      break;
        }
        cin.get();
        pt->Set();
        queue.enqueue(pt);
    }


    cout << "\nHere is your staff:\n";
    int i; Worker * pnt;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        queue.dequeue(pnt);
        pnt->Show();
    }
    cout << "Bye.\n";

    return 0;
}