#pragma once

#include "vector"
#include "../IKS/Packages/Vector2f.hpp"
#include "../IKS/Window/RenderWindow.hpp"
#include "GameObject.hpp"

class Application
{
private:
    Application() = default;
    std::vector<GameObject*> Objects;
public:
    static Application *s_Instance;
    static Application &Get();
    void Run();
};

