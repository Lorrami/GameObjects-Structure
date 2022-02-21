#pragma once

#include "../Packages/Vector2f.hpp"
#include "../Packages/Color.hpp"

struct RenderWindow
{
    Vector2f VideoMode{};
    Vector2f Position{};
    Color FillBackground;

    RenderWindow();

    explicit RenderWindow(Vector2f VideoMode) : RenderWindow()
    {
        this->VideoMode = VideoMode;
    }
    explicit RenderWindow(Vector2f VideoMode, Vector2f Position) : RenderWindow()
    {
        this->VideoMode = VideoMode;
        this->Position = Position;
    }
    explicit RenderWindow(Vector2f VideoMode, Vector2f Position, Color FillBackground) : RenderWindow()
    {
        this->VideoMode = VideoMode;
        this->Position = Position;
        this->FillBackground = FillBackground;
    }
};
