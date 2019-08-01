#ifndef __GENERIC_PLAYER_HPP__
#define __GENERIC_PLAYER_HPP__
#include <iostream>
#include <string>
#include "hand.hpp"

class GenericPlayer : public Hand
{
    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);
    
public:
    GenericPlayer(const std::string& name = "");
    
    virtual ~GenericPlayer();
    
    // показывает, хочет ли игрок продолжать брать карты
    // Для класса GenericPlayer функция не имеет своей реализации,
    // т.к. для игрока и дилера это будут разные функции
    virtual bool IsHitting() const = 0;
    
    // возвращает значение, если у игрока перебор -
    // сумму очков большую 21
    // данная функция не виртуальная, т.к. имеет одинаковую реализацию
    // для игрока и дилера
    bool IsBusted() const;
    
    // объявляет, что игрок имеет перебор
    // функция одинакова как для игрока, так и для дилера
    void Bust() const;
    
protected:
    std::string m_Name;
};

#endif