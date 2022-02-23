#pragma once

struct Vector2f
{
    float x = 0.0f;
    float y = 0.0f;
public:
    Vector2f() = default;

    Vector2f(float xy) : Vector2f()
    {
        this->x = xy;
        this->y = xy;
    }
    Vector2f(float x, float y) : Vector2f()
    {
        this->x = x;
        this->y = y;
    }
};

