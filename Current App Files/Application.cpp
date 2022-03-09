#include "Application.hpp"
#include "Player.hpp"
#include "Monster.hpp"

Application *Application::s_Instance;

Application& Application::Get()
{
    if (s_Instance == nullptr)
        s_Instance = new Application();
    return *s_Instance;
}

void Application::Run()
{
    Objects.push_back(new Player());
    Objects.push_back(new Monster());
    for (GameObject* Obj: Objects)
    {
        Obj->Update();
    }
}