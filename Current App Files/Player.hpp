#pragma once

#include "GameObject.hpp"

class Player : public GameObject
{
public:
    Player();
    void Update() override;
};

