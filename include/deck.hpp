#ifndef __DECK_HPP__
#define __DECK_HPP__
#include "hand.hpp"
#include "generic_player.hpp"

class Deck : public Hand
{
public:
    Deck();
    
    virtual ~Deck();
    
    // создает стандартную колоду из 52 карт
    void Populate();
    
    // тасует карты
    void Shuffle();
    
    // раздает одну карту в руку
    void Deal(Hand& aHand);
    
    // дает дополнительные карты игроку
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};

#endif 