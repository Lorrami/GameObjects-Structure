#pragma once

#include "Packages/Vector2f.hpp"

class Application
{
private:
    Vector2f Vector = {30.0f};
    Application() = default;
public:
    static Application *s_Instance;
    static Application &Get();
    void Run();
};

