#pragma once

#include <iostream>

struct RectangleShape
{
    std::Vector2f Position;
    Color FillColor;
    Vector2f Size;
    Vector2f Origin;
    float Rotation = 0;

    bool IsCrashed = false;
    void FindIntersection(RectangleShape *Object);
};