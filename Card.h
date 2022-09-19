#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#pragma once


#endif // CARD_H_INCLUDED

class Card
{
public:
enum class e_suit { Diamonds = 'D', Hearts = 'H', Clubs = 'C', Spades = 'S' };
enum class e_value  { two = 2,three = 3,four = 4,five = 5,six = 6,seven = 7,eight =8,
                      nine =9,ten =10,Jack = 10,Queen = 10,King = 10,Ace = 1};
//============================================================================================================

e_suit c_suit;
e_value c_value;
bool c_upPosition = 0;
    Card (){}
    Card (e_suit suit , e_value value, bool upPosition) : c_suit(suit), c_value(value), c_upPosition(upPosition){}

    void Flip() { c_upPosition = !c_upPosition; };

    e_value GetValue() { return c_value; };
};
//============================================================================================================
/*class Hand
{
public:
vector <Card*>  m_Cards;

    Hand (){}
    Hand (vector <Card*>  m_Cards) {}

    void Add (Card* pCard)
    {
        m_Cards.push_back(pCard);
    }

    void Clear ()
    {
        m_Cards.clear();
    }
//============================================================================================================
    int GetValue ()
    {
        int vsum=0;
        for (size_t i=0; i<m_Cards.size(); i++)
        {
            if (vsum < 21)
            {
                if ((static_cast <int> (m_Cards[i] -> c_value)) != 1)
                {
                    vsum += (static_cast <int> (m_Cards[i] -> c_value));
                }
                else if ((vsum + 10)>21)
                    {
                        vsum += (static_cast <int> (m_Cards[i] -> c_value));
                    }
                    else vsum += 11;
            } else vsum += (static_cast <int> (m_Cards[i] -> c_value));
        }
        cout <<  vsum << " - sum " << endl;

        return  vsum;
    }
//============================================================================================================
    void printHand()
    {
        for (size_t i=0; i<m_Cards.size(); i++)
        {
            cout << " ' "<< static_cast <char> (m_Cards[i] ->c_suit) << " ' ";
            cout << static_cast <int> (m_Cards[i] ->c_value) << " ' ";
            cout <<  m_Cards[i] ->c_upPosition << " ' " << endl;
        }
    }
};
//============================================================================================================

*/
