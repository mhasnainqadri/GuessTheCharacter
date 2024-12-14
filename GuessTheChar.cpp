#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;
main()
{
    srand(time(0));
    int random=(rand()%26)+1,tries=0,win_status=0,shutdown=0;
    char ca=96+random,ug,play_again;
    while(1)
    {
        cout<<"Guess the Character between a-z : ";
        ug=getche();
        tries++;
        cout<<"\n\n";
        if(ug==ca)
        {
            cout<<"Congratulations !\nYou have guessed it right ...";
            cout<<"\nTries taken : "<<tries;
            tries=0;
            win_status=1;
        }
        else if(ug<ca)
        {
            cout<<"You have guessed lower than the Correct Answer ...";
        }
        else
        {
            cout<<"You have guessed higher than the Correct Answer ...";
        }
        getch();
        system("cls");
        if(win_status==1)
        {
            win_status=0;
            while(1)
            {
                cout<<"Do you want to play again ? (y/n) : ";
                play_again=getch();
                system("cls");
                if(play_again=='y'||play_again=='Y')
                {
                    random=(rand()%26)+1,tries=0;
                    ca=96+random;
                    break;
                }
                else if(play_again=='n'||play_again=='N')
                {
                    shutdown=1;
                    break;
                }
                else
                {
                    cout<<"Invalid Choice ...\nPress any key to try again ...";
                    getch();
                    system("cls");
                }
            }
        }
        if(shutdown==1)
        {
            break;
        }
    }
}