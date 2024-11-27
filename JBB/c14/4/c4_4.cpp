#include <iostream>
#include <cstring>
#include "person.h"
const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    LawBreaker lb("Buster","Scruggs",1,2);
    auto crd = lb.PokerPlayer::Draw();

    lb.Show();
    crd.Show();

    Citizen * lolas[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "c: citizen  p: pokerplayer  "
            << "g: gunslayer  l: lawbreaker  q: quit\n";
        cin >> choice;
        while (strchr("cpglq", choice) == NULL)
        {
            cout << "Please enter a c, p, g, l, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
            case 'c': lolas[ct] = new Citizen;
                      break;
            case 'p': lolas[ct] = new PokerPlayer;
                      break;
            case 'g': lolas[ct] = new Gunslinger;
                      break;
            case 'l': lolas[ct] = new LawBreaker;
                      break;
        }
        cin.get();
        lolas[ct]->Set();
    }

    cout << "\nList of people:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }
    for (i = 0; i < ct; i++)
        delete lolas[i];
    cout << "Bye.\n";
    return 0;
}