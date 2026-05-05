cmake_minimum_required(VERSION 3.21)

project(MiniUiBuild LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()
qt_policy(SET QTP0001 NEW)

qt_add_executable(MiniUiBuild
    main.cpp
    Counter.h
    Counter.cpp
)

qt_add_qml_module(MiniUiBuild
    URI MiniUiBuild
    VERSION 1.0
    QML_FILES
        Main.qml
)

target_link_libraries(MiniUiBuild
    PRIVATE Qt6::Quick
)