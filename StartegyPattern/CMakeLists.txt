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