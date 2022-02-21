#pragma once

#include "../Packages/Vector2f.hpp"
#include "../Packages/Color.hpp"

struct RectangleShape
{
    Vector2f Position;
    Color FillColor;
    Vector2f Size;
    Vector2f Origin;
    float Rotation = 0;

    bool IsCrashed = false;
    void FindIntersection(GameObject *Object);
};