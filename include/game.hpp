#ifndef __GAME_HPP__
#define __GAME_HPP__
#include "deck.hpp"
#include "player.hpp"
#include "house.hpp"
#include <vector>
#include <string>

class Game
{
public:
    Game(const std::vector<std::string>& names);
    
    ~Game();
    
    // проводит игру в Blackjack
    void Play();
    
private:
    Deck m_Deck;
    House m_House;
    std::vector<Player> m_Players;
};

#endif