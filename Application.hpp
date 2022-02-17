class Application
{
private:
    int x;
public:
    static Application s_Instance;

    static Application &Get();

    void Run();
};

