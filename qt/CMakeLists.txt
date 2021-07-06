cmake_minimum_required(VERSION 3.19)
#brew search qt .. brew install q5@5
set(CMAKE_CXX_STANDARD 11)
set (CMAKE_PREFIX_PATH "/usr/local/Cellar/qt@5/5.15.2/lib/cmake")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package(Qt5Widgets REQUIRED)
add_executable(FimicsC2000
#        src/QtMain.cpp
        src/first1/main.cpp
        src/first1/mypushbutton.cpp
        src/first1/mypushbutton.h
        src/first1/mywidget.h
        src/first1/mywidget.cpp
        )

target_link_libraries(FimicsC2000 Qt5::Widgets)
