CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
foreach (policy IN ITEMS
    CMP0083 # CMake 3.14
    )
  if (POLICY ${policy})
    cmake_policy(SET ${policy} NEW)
  endif ()
endforeach ()

PROJECT(FactoryPattern)


set(CMAKE_INCLUDE_CURRENT_DIR ON) 
ADD_EXECUTABLE(${PROJECT_NAME}   
FactoryPattern.cpp
 SimpleFactory.cpp SimpleFactory.h
 Circle.cpp Rectangle.cpp  Triangle.cpp
 Circle.h Rectangle.h Triangle.h  Shape.h
)
 
TARGET_LINK_LIBRARIES(${PROJECT_NAME} )