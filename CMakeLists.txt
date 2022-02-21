cmake_minimum_required(VERSION 3.21)
project(GameObjects_Structure)

set(CMAKE_CXX_STANDARD 14)

set(ENGINE_SOURCES
        "Current App Files/main.cpp"
        "Current App Files/Application.cpp"
        "IKS Engine/Window/RenderWindow.cpp"
        "IKS Engine/Shapes/DefaultShape.cpp"
        "IKS Engine/Shapes/RectangleShape.cpp"
        "IKS Engine/Shapes/LineShape.cpp"
        "IKS Engine/Shapes/CircleShape.cpp"
        "IKS Engine/Packages/Vector2f.cpp"
        "IKS Engine/Packages/Color.cpp"
        )

add_executable(Shooter ${ENGINE_SOURCES})
