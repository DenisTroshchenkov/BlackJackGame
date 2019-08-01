#include "player.hpp"
#include <iostream>
#include <string>

bool Player::IsHitting() const
{
    std::cout << m_Name << ", do you want a hit? (Y/N): ";
    char response;
    std::cin >> response;
    return (response == 'y' || response == 'Y');
}

void Player::Win() const
{
    std::cout << m_Name << " wins.\n";
}

void Player::Lose() const
{
    std::cout << m_Name << " loses.\n";
}

void Player::Push() const
{
    std::cout << m_Name << " pushes.\n";
}

Player::Player(const std::string& name) {
    m_Name = name;
}

Player::~Player()
{}