#include "Card.h"

#include "Deck.h"

using namespace std;

Card :: Card()
{
    rank = '0';
    suit = '0'; 
}

Card :: Card(char r, char s)
{
    rank = r;
    suit = s;
};

void Card :: show()
{
    if(rank == 'T')
    {
        cout << "10" << suit << " ";
    }
    else{
        cout << rank << suit << " ";
    }
    
};

int Card :: getValue()
{
    int value;
    if(rank == 'A')
    {
        value = 1;
    }
    else if(rank == 'T' || rank == 'J' || rank == 'Q' || rank == 'K')
    {
        value = 10;
    }
    else
        value = ((int) rank - 48);
    return value;
};
