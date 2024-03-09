#include <iostream>
#include <string>
using namespace std;

enum CardRank 
{
    ACE = 1, TWO, THREE, FOUR, FIVE,
    SIX, SEVEN, EIGHT, NINE, TEN,
    JACK, QUEEN, KING
};

enum CardSuit 
{
    CLUBS, DIAMONDS, HEARTS, SPADES
};

struct Card 
{
    CardRank rank;
    CardSuit suit;
};

void displayCard(Card card) 
{
    string rankStr;
    switch (card.rank) 
    {
    case ACE: rankStr = "ACE"; break;
    case TWO: rankStr = "TWO"; break;
    case THREE: rankStr = "THREE"; break;
    case FOUR: rankStr = "FOUR"; break;
    case FIVE: rankStr = "FIVE"; break;
    case SIX: rankStr = "SIX"; break;
    case SEVEN: rankStr = "SEVEN"; break;
    case EIGHT: rankStr = "EIGHT"; break;
    case NINE: rankStr = "NINE"; break;
    case TEN: rankStr = "TEN"; break;
    case JACK: rankStr = "JACK"; break;
    case QUEEN: rankStr = "QUEEN"; break;
    case KING: rankStr = "KING"; break;
    }

    std::string suitStr;
    switch (card.suit)
    {
    case CLUBS: suitStr = "CLUBS"; break;
    case DIAMONDS: suitStr = "DIAMONDS"; break;
    case HEARTS: suitStr = "HEARTS"; break;
    case SPADES: suitStr = "SPADES"; break;
    }

    cout << "Карта: " << rankStr << " из " << suitStr << endl;
}

int main() 
{
    setlocale(LC_ALL, "ru");
    Card card = { ACE, HEARTS };
    displayCard(card);

    return 0;
}