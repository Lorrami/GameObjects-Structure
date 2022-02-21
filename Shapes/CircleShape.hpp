#pragma once

#include "../Packages/Vector2f.hpp"
#include "../Packages/Color.hpp"
#include "RectangleShape.hpp"
#include "LineShape.hpp"

struct CircleShape
{
    Vector2f Position;
    Color FillColor;
    Vector2f Size;
    Vector2f Origin;
    float Rotation = 0;

    bool IsCrashed = false;

    void FindIntersection(CircleShape *Object);
    void FindIntersection(RectangleShape *Object);
    void FindIntersection(LineShape *Object);
};
