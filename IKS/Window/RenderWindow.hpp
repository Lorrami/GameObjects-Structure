#pragma once

#include "../Packages/Vector2f.hpp"
#include "../Packages/Color.hpp"

struct RenderWindow
{
    Vector2f VideoMode{};
    Vector2f Position{};
    Color FillBackground;

    explicit RenderWindow(Vector2f VideoMode = Vector2f(1280.0f, 720.0f), Vector2f Position = Vector2f(30.0f, 30.0f), Color FillBackground = Color::Red)
    {
        this->VideoMode = VideoMode;
        this->Position = Position;
        this->FillBackground = FillBackground;
    }
};
