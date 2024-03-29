#include "house.hpp"
#include <iostream>
#include <string>

bool House::IsHitting() const
{
    return (GetTotal() <= 16);
}

void House::FlipFirstCard()
{
    if (!(m_Cards.empty()))
    {
        m_Cards[0]->Flip();
    }
    else
    {
        std::cout << "No card to flip!\n";
    }
}

House::House(const std::string& name)
{
    m_Name = name; 
}

House::~House()
{}