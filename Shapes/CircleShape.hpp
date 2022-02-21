#pragma once

#include "../Packages/Vector2f.hpp"
#include "../Packages/Color.hpp"

struct CircleShape
{
    Vector2f Position{};
    Color FillColor;
    Vector2f Size{};
    Vector2f Origin{};
    float Rotation;

    bool IsCrashed = false;

    template <typename T>
    void FindIntersection(T *Object);

    CircleShape();
};
template<typename T>
void CircleShape::FindIntersection(T *Object)
{
    if (this->Position.x + this->Origin.x > Object->Position.x - Object->Origin.x
        && this->Position.y + this->Origin.y > Object->Position.y - Object->Origin.y

        && this->Position.x - this->Origin.x < Object->Position.x + Object->Origin.x
        && this->Position.y - this->Origin.y < Object->Position.y + Object->Origin.y)
    {
        this->IsCrashed = true;
    }
}
