#pragma once

#include "../Packages/Vector2f.hpp"
#include "../Packages/Color.hpp"
#include "RectangleShape.hpp"
#include "CircleShape.hpp"

struct LineShape
{
    Vector2f Position;
    Color FillColor;
    Vector2f Size;
    Vector2f Origin;
    float Rotation = 0;

    bool IsCrashed = false;

    void FindIntersection(LineShape *Object);
    void FindIntersection(RectangleShape *Object);
    void FindIntersection(CircleShape *Object);
};
