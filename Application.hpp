#pragma once

class Application
{
private:
    int x;
    Application() = default;
public:
    static Application *s_Instance;

    static Application &Get();

    void Run();
};

