#pragma once

#include "../IKS Engine/Packages/Vector2f.hpp"
#include "../IKS Engine/Shapes/RectangleShape.hpp"

class Application
{
private:
    Application() = default;
public:
    RectangleShape Rect;
    static Application *s_Instance;
    static Application &Get();
    void Run();
};

