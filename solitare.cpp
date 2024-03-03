// // Name: Smit Pravinbhai Lila
// // Class: CECS 325-02
// // Project Name (Prog 1 - Fibonacci Solitaire )
// // Due Date: 09/26/2023

// // I certify that this program is my own original work. I did not copy any part of this program from
// // any other source. I further certify that I typed each and every line of code in this program.


// attempt 3 

#include "Deck.h"
#include "Card.h"
#include "deck.cpp"
#include "card.cpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

Deck deck;
Card card;
int play_count;
int pile = 0, sum = 0;
bool win_game;

bool perfectSquare(int x)
{
    int a = sqrt(x);
    return (a * a == x);
};
bool isFibo(int n)
{
    return perfectSquare(5 * n * n + 4) || perfectSquare(5 * n * n - 4);
};

void playGame(){
    while(!deck.isEmpty())
    {
        card = deck.deal();
        card.show();
        sum += card.getValue();

        if(isFibo(sum))
        {
            cout<<" Fibo: "<< sum << "\n" << endl;
            pile++;
            sum = 0;
        }
    }
    if (sum!=0)
    {
        cout<<"Last pile NOT Fibo:" << sum << endl;
        cout << "\nloser in "<< pile << " piles!\n" << endl;
    }
    else
    {
        cout << "\nwinner in " << pile<<" piles!\n"<<endl;
        win_game = true;
    }
    
};


int main(){
    int user_choice;   
    bool a = true; 
    

    while(a == true)
    {
        cout<< "Welcome to Fibonacci Solitaire! \n 1) Create New Deck \n 2) Display Deck \n 3) Shuffle Deck \n 4) Play Fibo Solitaire Internal \n 5) Win Fibo Solitaire \n 6) Exit" << endl;
        cin >> user_choice;

        if(user_choice == 1)
        {
            deck.newDeck();
        }
        else if(user_choice == 2) 
        {
            deck.show();
        }
        else if (user_choice == 3)
        {
            deck.shuffle();
        }
        else if (user_choice == 4)
        {
            cout << "Playing Fibonacci Solitaire!!!\n" << endl;
            deck.shuffle();
            playGame();
            play_count++;
            cout << "games played: " << play_count << "\n" << endl;
            sum = 0;
            pile = 0;
        }
        else if (user_choice == 5)
        {
            while(win_game == false)
            {
                deck.shuffle();
                playGame();
                play_count++;
                cout << "games played: " << play_count << "\n"<< endl;
                sum = 0;
                pile = 0;
            }
        }
        else if (user_choice == 6)
        {
            a =false;
        }
        else{
            cout<<"Invalid Input"<<endl;
        }
    }
};



