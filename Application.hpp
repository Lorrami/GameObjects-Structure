#pragma once

#include "Packages/Vector2f.hpp"
#include "Shapes/RectangleShape.hpp"

class Application
{
private:
    RectangleShape Rect;
    Application() = default;
public:
    static Application *s_Instance;
    static Application &Get();
    void Run();
};

