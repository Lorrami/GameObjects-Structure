cmake_minimum_required(VERSION 3.21)
project(IKS)

set(CMAKE_CXX_STANDARD 14)

set(ENGINE_SOURCES
        "Current App Files/main.cpp"
        "Current App Files/Application.cpp"
        "Current App Files/GameObject.cpp"
        "Current App Files/Player.cpp"
        "Current App Files/Monster.cpp"
        "IKS/Window/RenderWindow.cpp"
        "IKS/Shapes/DefaultShape.cpp"
        "IKS/Shapes/RectangleShape.cpp"
        "IKS/Shapes/LineShape.cpp"
        "IKS/Shapes/CircleShape.cpp"
        "IKS/Packages/Vector2f.cpp"
        "IKS/Packages/Color.cpp"
        )

add_executable(IKS ${ENGINE_SOURCES})
