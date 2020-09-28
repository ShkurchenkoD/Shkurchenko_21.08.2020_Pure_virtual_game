#include <ctime>
#include "Warrior.h"
#include "Wizard.h"
#include "Group.h"
#include <thread>
#include <chrono>
int main()
{
    srand(time(0));
    int choice;
    int choice2;
    cout << "Choose your player:\n1.Warrior.\n2.Wizard.\n3.Random choice." << endl;
    cin >> choice;
    cout << "Choose an opponent:\n1.Warrior.\n2.Wizard.\n3.Random choice." << endl;
    cin >> choice2;
    cout << "\t\t     Let`s play!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "\t\t     ~~~ 3 ~~~" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "\t\t     ~~~ 2 ~~~" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "\t\t     ~~~ 1 ~~~" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    Unit* player1 = nullptr;
    Unit* player2 = nullptr;
    if(choice==1)
        player1 = new Warrior();
    else if(choice==2)
       player1 = new Wizard();
    else if (choice == 3)
    {
        int tmp_c = rand() % 2 + 1;
        choice = tmp_c;
        if (choice == 1)
            player1 = new Warrior();
        else if (choice == 2)
            player1 = new Wizard();
    }

    if (choice2 == 1)
        player2 = new Warrior();
    else if (choice2 == 2)
        player2 = new Wizard();
    else if (choice2 == 3)
    {
        int tmp_c = rand() % 2 + 1;
        choice2 = tmp_c;
        if (choice2 == 1)
            player2 = new Warrior();
        else if (choice2 == 2)
            player2 = new Wizard();
    }

    

    int num = 1;
    while (player1->isAlive() && player2->isAlive())
    {
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\t     ~~~~~=== Round " << num++ << " ===~~~~~" << endl;
        cout << player1->getName() << ": " << player1->getHp() << "\t\t|\t" << player2->getName() << ": " << player2->getHp() << endl;
        player1->attack(player2);
        player2->attack(player1);
    }
    cout << player1->getName() << ": " << player1->getHp() << "\t\t|\t" << player2->getName() << ": " << player2->getHp() << endl;
    
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\nBattle is over!\nIn the "<<num<<" round ";
    if (player1->isAlive())
    {
        cout << player1->getName() << " won!" << endl;
    }
    else if (player2->isAlive())
    {
        cout << player2->getName() << " won!" << endl;
    }
    else
    {
        cout << "Draw!" << endl;
    }
    this_thread::sleep_for(chrono::seconds(4));

    cout << "Game over!" << endl;
    this_thread::sleep_for(chrono::seconds(3));
    delete player1;
    delete player2;

  
   // Unit* player1 = new Warrior;
   // Unit* player2 = new Wizard;
   // Group a("A-group");
   // Group b(a);
   // cout << "Group a:" << endl;
   // for (int i = 0; i < a.getSize(); ++i)
   // {
   //     a[i]->attack(player1);
   //     player1->attack(a[i]);
   // }
   // cout << "Group b:" << endl;
   // for (int i = 0; i < a.getSize(); ++i)
   // {
   //     b[i]->attack(player2);
   //     player2->attack(b[i]);
   // }
   // delete player1;
   // delete player2;

   // Unit* player3 = new Warrior;
   // Unit* player4 = new Wizard;
   // Group c("C-group");
   // Group d = move(c);
   ///* cout << "Group c:" << endl;
   // for (int i = 0; i < c.getSize(); ++i)
   // {
   //     c[i]->attack(player3);
   //     player3->attack(c[i]);
   // }*/
   // cout << "Group d:" << endl;
   // for (int i = 0; i < c.getSize(); ++i)
   // {
   //     d[i]->attack(player4);
   //     player4->attack(d[i]);
   // }
   // delete player3;
   // delete player4;

   // Unit* player5 = new Warrior;
   // Unit* player6 = new Wizard;
   // Group e("E-group");
   // Group f("Test");
   // f = e;
   // cout << "Group e:" << endl;
   // for (int i = 0; i < e.getSize(); ++i)
   // {
   //     e[i]->attack(player5);
   //     player5->attack(e[i]);
   // }
   // cout << "Group f:" << endl;
   // for (int i = 0; i < e.getSize(); ++i)
   // {
   //     f[i]->attack(player6);
   //     player6->attack(f[i]);
   // }
   // delete player5;
   // delete player6;

   // Unit* player7 = new Warrior;
   // Unit* player8 = new Wizard;
   // Group j("G-group");
   // Group k("Test");
   // k = move(j);
   // /*cout << "Group e:" << endl;
   // for (int i = 0; i < j.getSize(); ++i)
   // {
   //     j[i]->attack(player7);
   //     player7->attack(j[i]);
   // }*/
   // cout << "Group f:" << endl;
   // for (int i = 0; i < j.getSize(); ++i)
   // {
   //     k[i]->attack(player8);
   //     player8->attack(k[i]);
   // }
   // delete player7;
   // delete player8;

}
