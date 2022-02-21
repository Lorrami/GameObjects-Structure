#pragma once

#include "../Packages/Vector2f.hpp"
#include "../Packages/Color.hpp"
#include "CircleShape.hpp"
#include "LineShape.hpp"

struct RectangleShape
{
    Vector2f Position;
    Color FillColor;
    Vector2f Size;
    Vector2f Origin;
    float Rotation = 0;

    bool IsCrashed = false;

    void FindIntersection(RectangleShape *Object);
    void FindIntersection(CircleShape *Object);
    void FindIntersection(LineShape *Object);
};