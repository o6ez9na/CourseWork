cmake_minimum_required(VERSION 3.24)
project(CourseWork)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc")


add_executable(CourseWork main.cpp Includes/Game/Game.cpp Includes/Game/Game.h Includes/Constants/constans.h Includes/Player/Player.cpp Includes/Player/Player.h Includes/Entity/Entity.cpp Includes/Entity/Entity.h Includes/StateManager/StateManager.cpp Includes/StateManager/StateManager.h)

set(SFML_STATIC_LIBRARIES TRUE)

set(SFML_DIR "F:/SFML/lib/cmake/SFML")

find_package(SFML 2.5.1 COMPONENTS graphics network audio window system REQUIRED)

include_directories(F:/SFML/include)

target_link_libraries(CourseWork sfml-graphics sfml-audio sfml-window sfml-system)

