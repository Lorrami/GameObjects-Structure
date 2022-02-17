#include "Application.hpp"
#include <iostream>

Application Application::s_Instance;

Application& Application::Get()
{
    return s_Instance;
}


void Application::Run()
{
    std::cout << "Chlen";
}