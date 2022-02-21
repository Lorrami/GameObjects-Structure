#pragma once

struct Vector2f
{
    float x;
    float y;
public:
    Vector2f() = default;

    Vector2f(float x) : Vector2f()
    {
        this->x = x;
        this->y = x;
    }
    Vector2f(float x, float y) : Vector2f()
    {
        this->x = x;
        this->y = y;
    }
};

