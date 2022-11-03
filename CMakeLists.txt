# DimitriiTrater

cmake_minimum_required(VERSION 3.23)

project(untitled)

set(CMAKE_CXX_STANDARD 14)


set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc")

set(SFML_STATIC_LIBRARIES TRUE)

set(SFML_DIR "C:/Users/1/CLionProjects/libs/SFML-2.5.1/lib/cmake/SFML")



set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")

find_package(SFML 2.5 REQUIRED graphics network audio window system)

add_executable(
    untitled "main.cpp"

    # Some std functional
    "Standart Tools/tools.cpp" "Standart Tools/tools.h" 
    
    # Start project
    "Start Files/start_file.cpp" "Start Files/start_file.h" 
    
    # First laboratory
    "1lab/lesson.cpp" "1lab/lesson.h" 
    
    # Second laboratory
    "2lab/lesson_two.cpp" "2lab/lesson_two.h"
    
    # Third laboratory
    "3lab/Header Files/general_header.h" 
    "3lab/Source Files/1task.cpp"  
    "3lab/Source Files/2task.cpp" 
    "3lab/Source Files/3task.cpp" 
    "3lab/Source Files/4task.cpp" 
    "3lab/Source Files/5task.cpp" 
    "3lab/Source Files/6task.cpp" 
    "3lab/Source Files/7task.cpp" 
    "3lab/Source Files/8task.cpp" 
    "3lab/Source Files/9task.cpp" 
    "3lab/Source Files/10task.cpp" 
    
    # Fourth laboratory
    "4lab/General/file_for_four_lab.cpp" "4lab/General/file_for_four_lab.h" 
    "4lab/Source Files/1task.cpp" "4lab/Header Files/1task.h" 
    "4lab/Source Files/2task.cpp" "4lab/Header Files/2task.h" 
    "4lab/Source Files/3task.cpp" "4lab/Header Files/3task.h" 
    "4lab/Source Files/4task.cpp" "4lab/Header Files/4task.h" 
    "4lab/Source Files/5task.cpp" "4lab/Header Files/5task.h" 
    "4lab/Source Files/6task.cpp" "4lab/Header Files/6task.h" 
    "4lab/Source Files/7task.cpp" "4lab/Header Files/7task.h"
    "4lab/Source Files/8task.cpp" "4lab/Header Files/8task.h"
    "4lab/Source Files/9task.cpp" "4lab/Header Files/9task.h"
    "4lab/Source Files/10task.cpp" "4lab/Header Files/10task.h"

)

target_link_libraries(untitled sfml-graphics)