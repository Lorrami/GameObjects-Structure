#include <iostream>
#include "Player.hpp"

Player::Player()
{
    Position = 30.0f;
    Size = 20.0f;
    Origin = Size.x/2;
}

void Player::Update()
{
    std::cout << "Player" << std::endl;
}
