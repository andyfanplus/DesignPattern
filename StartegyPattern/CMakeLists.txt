CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
foreach (policy IN ITEMS
    CMP0083 # CMake 3.14
    )
  if (POLICY ${policy})
    cmake_policy(SET ${policy} NEW)
  endif ()
endforeach ()
PROJECT(StrategyPattern)


set(CMAKE_INCLUDE_CURRENT_DIR ON) 
ADD_EXECUTABLE(${PROJECT_NAME}   
StrategyPattern.cpp
 BubbleSortingStategy.cpp BubbleSortingStategy.h
 InsertionSort.cpp InsertionSort.h
 SortingStrategy.cpp SortingStrategy.h
 QuickSortingStategy.cpp QuickSortingStategy.h
)



TARGET_LINK_LIBRARIES(${PROJECT_NAME} )