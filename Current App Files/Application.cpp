#include "Application.hpp"
#include <iostream>

Application *Application::s_Instance;

Application& Application::Get()
{
    if (s_Instance == nullptr)
        s_Instance = new Application();
    return *s_Instance;
}

void Application::Run()
{
    Objects.push_back(new GameObject());
    for (GameObject* Obj: Objects)
    {
        std::cout << Obj->Size.x << " " << Obj->Size.y;
    }
}