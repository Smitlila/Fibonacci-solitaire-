// // Name: Smit Pravinbhai Lila
// // Class: CECS 325-02
// // Project Name (Prog 1 - Fibonacci Solitaire )
// // Due Date: 09/26/2023

// // I certify that this program is my own original work. I did not copy any part of this program from
// // any other source. I further certify that I typed each and every line of code in this program.

//attempt 3

#ifndef DECK_H

#define DECK_H

#include"Card.h"

#include <iostream>

using namespace std;

class Deck
{
    private:
        // Card arr[52];
        vector<Card> v;
        int card = -1;
        
    public:
        Deck( ); // constructor which creates a deck of 52 cards. Ace of Spades on top, followed by the rest of the spades in order, followed by Hearts, Diamonds and Clubs.
        void newDeck(); // reset the deck so it looks like a new deck.
        Card deal( ); // deal a card from the top of the deck.
        void shuffle( ); // shuffle the cards in the deck.
        bool isEmpty( ); // true is deck is empty, false if the deck is not empty
        void show( ); // show all the cards in the deck: 13 columns and 4 rows.
};
#endif