cmake_minimum_required(VERSION 3.16)

project(sensor_reading VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(appsensor_reading
    main.cpp
    Counter.h
    Counter.cpp
)

qt_add_qml_module(appsensor_reading
    URI sensor_reading
    VERSION 1.0
    QML_FILES Main.qml
)

target_link_libraries(appsensor_reading
    PRIVATE Qt6::Quick
)
