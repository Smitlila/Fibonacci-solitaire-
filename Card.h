// // Name: Smit Pravinbhai Lila
// // Class: CECS 325-02
// // Project Name (Prog 1 - Fibonacci Solitaire )
// // Due Date: 09/26/2023

// // I certify that this program is my own original work. I did not copy any part of this program from
// // any other source. I further certify that I typed each and every line of code in this program.

// attempt 3

#ifndef CARD_H

#define CARD_H

#include <iostream>

using namespace std;

class Card
{
    private:
        char suit;
        char rank;
    public:
        Card( ); // create a “default” card
        Card( char r, char s ); // constructor to create a card, setting the rank and suit
        int getValue( ); // return the point value of the card. Ace = 1, 2 thru 10, Jack = 10, Queen = 10, King = 10
        void show( ); // display the card using 2 fields... Ace of Spade
};
#endif