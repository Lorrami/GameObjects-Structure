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
    Rect.FillColor = Color::Red;
    Rect.Origin = {Rect.Size.x/2};
    Rect.FindIntersection(&Rect);

    Circle.FillColor = Color::Yellow;
    Circle.Position = {10.0f, 70.0f};
    Circle.Origin = {Rect.Size.x/2};
    Circle.Rotation = 10;
    Circle.FindIntersection(&Rect);

    std::cout << Rect.Position.x << std::endl;
    std::cout << Circle.Position.x << std::endl;
    std::cout << Line.Position.x << std::endl;
    std::cout << Window.VideoMode.x << std::endl;
    std::cout << Window1.VideoMode.x << std::endl;
}