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
