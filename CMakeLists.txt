cmake_minimum_required(VERSION 3.12)
project(COMP220FinalProject18)

set(CMAKE_CXX_STANDARD 14)

add_executable(COMP220FinalProject18
        .idea/codeStyles/Project.xml
        .idea/COMP220FinalProject18.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/workspace.xml
        cmake-build-debug/CMakeCache.txt
        CMakeLists.txt
        main.cpp ConcessionItem.cpp ConcessionItem.h ConcessionStand.h LinkedList.cpp LinkedList.h LinkedNode.cpp LinkedNode.h)
