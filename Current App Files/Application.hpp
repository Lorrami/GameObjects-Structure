#pragma once

#include "../IKS Engine/Packages/Vector2f.hpp"
#include "../IKS Engine/Shapes/RectangleShape.hpp"
#include "../IKS Engine/Shapes/CircleShape.hpp"
#include "../IKS Engine/Shapes/LineShape.hpp"

class Application
{
private:
    Application() = default;
public:
    RectangleShape Rect;
    CircleShape Circle;
    LineShape Line;
    static Application *s_Instance;
    static Application &Get();
    void Run();
};

