#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;


enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};

class Card {
public:
    enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

    friend ostream& operator<<(ostream& os, const Card& aCard);
    Card(rank r = ACE, suit s = SPADES, bool ifu = true) : m_Rank(r), m_Suit(s), m_IsFaceUp(ifu) {}
    int GetValue() const;
    void Flip();
private:
    rank m_Rank;
    suit m_Suit;
    bool m_IsFaceUp;
};
