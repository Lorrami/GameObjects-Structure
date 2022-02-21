#pragma once

#include "../IKS/Packages/Vector2f.hpp"
#include "../IKS/Shapes/RectangleShape.hpp"
#include "../IKS/Shapes/CircleShape.hpp"
#include "../IKS/Shapes/LineShape.hpp"
#include "../IKS/Window/RenderWindow.hpp"

class Application
{
private:
    Application() = default;
public:
    RectangleShape Rect{Vector2f(60.0f, 60.0f), Color::Red};
    CircleShape Circle;
    LineShape Line;

    RenderWindow Window;
    RenderWindow Window1 {{190.0f, 190.0f}};

    static Application *s_Instance;
    static Application &Get();
    void Run();
};

