#ifndef __HOUSE_HPP__
#define __HOUSE_HPP__
#include <string>
#include "generic_player.hpp"

class House : public GenericPlayer
{
public:
    House(const std::string& name = "House");
    
    virtual ~House();
    
    // показывает, хочет ли дилер продолжать брать карты
    virtual bool IsHitting() const;
    
    // переворачивает первую карту
    void FlipFirstCard();
};


#endif