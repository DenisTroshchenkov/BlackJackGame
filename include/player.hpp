#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__
#include <string>
#include "generic_player.hpp"

class Player : public GenericPlayer
{
public:
    Player(const std::string& name = "");
    
    virtual ~Player();
    
    // показывает, хочет ли игрок продолжать брать карты
    virtual bool IsHitting() const;
    
    // объявляет, что игрок победил
    void Win() const;
    
    // объявляет, что игрок проиграл
    void Lose() const;
    
    // объявляет ничью
    void Push() const;
};

#endif