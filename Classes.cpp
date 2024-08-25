#include "Classes.h"

int Card::GetValue() const {
    int value = 0;
    if (m_IsFaceUp)  {
        value = m_Rank;

        if (value > 10) {
            value = 10;
        }
    }

    return value;
}

void Card::Flip() {
    m_IsFaceUp = !(m_IsFaceUp);
}