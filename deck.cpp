// // Name: Smit Pravinbhai Lila
// // Class: CECS 325-02
// // Project Name (Prog 1 - Fibonacci Solitaire )
// // Due Date: 09/26/2023

// // I certify that this program is my own original work. I did not copy any part of this program from
// // any other source. I further certify that I typed each and every line of code in this program.

// attempt 3 

#include "Deck.h"
#include "Card.h"
#include <ctime>
#include <cstdlib>
#include <iostream> 
#include <vector>


using namespace std;

Deck::Deck()
{
    // int a = 0;
    vector<char> suit;
    vector<char> rank;
    
    
    suit.push_back('S');
    suit.push_back('H');
    suit.push_back('D');
    suit.push_back('C');

    rank.push_back('A');
    rank.push_back('2');
    rank.push_back('3');
    rank.push_back('4');
    rank.push_back('5');
    rank.push_back('6');
    rank.push_back('7');
    rank.push_back('8');
    rank.push_back('9');
    rank.push_back('T');
    rank.push_back('J');
    rank.push_back('Q');
    rank.push_back('K');

    // char suit[4] = {'S', 'H', 'D', 'C'};
    // char rank[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            v.push_back(Card(rank[j], suit[i]));
            // a++;
        }
    }
    card = -1;
}

void Deck::newDeck()
{
    Deck();
}

Card Deck::deal()
{
    if (card < 51)
    {
        // card++;
        // return arr[card];
        card++;
        return v[card];
    }
    else
    {
        return Card('0', 'E');
    }
}

void Deck::shuffle()
{
    srand(time(0));
    Card c;
    for(int i = 0; i < 52; i++)
    {
        int a = i + (rand() % (52 - i)); 
        c = v[i];
        v[i] = v[a];
        v[a] = c;
    }
    card = -1; 
}

bool Deck::isEmpty()
{
    return card == 51; 
}

void Deck::show()
{
    int a = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            v[a].show();
            a++;
        }
        cout << "\n";
    }
}
