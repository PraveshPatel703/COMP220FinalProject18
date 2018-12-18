cmake_minimum_required(VERSION 3.12)
project(COMP220FinalProject18)

set(CMAKE_CXX_STANDARD 14)

add_executable(COMP220FinalProject18 MasterTester.cpp Movie.cpp Movie.h Boxoffice/BoxOffice.cpp Boxoffice/BoxOffice.h
        ADTs/LinkedList.h ADTs/LinkedNode.h ADTs/List.h ADTs/ArrayList.cpp ADTs/ArrayList.h ArrayLib.h Concessions/ConcessionItem.cpp Concessions/ConcessionItem.h Boxoffice/TheaterRoom.cpp Concessions/ConcessionStand.h ADTs/MapLinkedNode.inl
        ADTs/MapLinkedList.inl Concessions/ConcessionStand.cpp MovieTheater.cpp MovieTheater.h ADTS/LinkedPriorityQueueFastDequeue.h ADTs/LinkedPriorityQueueFastDequeue.inl ADTs/PriorityLinkedNode.h ADTs/PriorityLinkedNode.inl ADTs/PriorityQueue.h main.cpp)

