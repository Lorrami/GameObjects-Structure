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
    std::cout << "Chlen";
}