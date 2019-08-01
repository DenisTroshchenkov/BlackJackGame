#ifndef __HAND_HPP__
#define __HAND_HPP__
#include <vector>
#include "card.hpp"

class Hand
{
public:
    Hand();
    // виртуальный деструктор
    virtual ~Hand();
    
    // добавляет карту в руку
    void Add(Card* pCard);
    
    // очищает руку от карт
    void Clear();
    
    //получает сумму очков карт в руке, присваивая тузу
    // значение 1 или 11 в зависимости от ситуации
    int GetTotal() const;
    
protected:
    std::vector<Card*> m_Cards;
};


#endif