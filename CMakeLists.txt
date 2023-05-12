cmake_minimum_required(VERSION 3.25)
project(QtTCPClient)

set(CMAKE_AUTOMOC ON)
find_package(Qt5 CONFIG REQUIRED COMPONENTS Widgets)

set(CMAKE_PREFIX_PATH "/usr/lib/x86_64-linux-gnu")  # Qt 설치 경로
find_package(Qt5 COMPONENTS Widgets Network REQUIRED)

include_directories(include)

add_executable(QtTCPClient src/main.cpp src/JoystickOnex.cpp src/TcpCommunication.cpp canine_gui/include/canine_gui/mainwindow.cpp canine_gui/include/canine_gui/qcustomplot.cpp)

add_subdirectory(canine_gui)

include_directories(
        ${canine_gui_SOURCE_DIR}/include
)

target_link_libraries(QtTCPClient Qt5::Widgets Qt5::Network)

target_link_libraries(QtTCPClient pthread)
