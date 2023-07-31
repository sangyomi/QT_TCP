cmake_minimum_required(VERSION 3.5)
project(canine_gui LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
find_package(Qt5 CONFIG REQUIRED COMPONENTS Widgets)
find_package(Qt5 COMPONENTS Widgets WebEngineWidgets REQUIRED)

include_directories(
        include
        ${EIGEN3_INCLUDE_DIRS}
        ${canine_util_SOURCE_DIR}/include
)

add_library(${PROJECT_NAME} STATIC
        include/canine_gui/mainwindow.cpp
        include/canine_gui/qcustomplot.cpp
)
add_library(canine_visualizer::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME}
        Qt5::Widgets
        Qt5::WebEngineWidgets
        canine_util
)

