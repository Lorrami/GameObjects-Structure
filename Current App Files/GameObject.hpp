#pragma once

#include "../IKS/Shapes/RectangleShape.hpp"

class GameObject : public RectangleShape
{
public:
    virtual void Update();
};