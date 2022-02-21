#pragma once

#include "../Packages/Vector2f.hpp"
#include "../Packages/Color.hpp"

struct RenderWindow
{
    Vector2f VideoMode{};
    Vector2f Position{};
    Color FillBackground;

    RenderWindow();
};
