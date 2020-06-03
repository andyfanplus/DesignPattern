CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
foreach (policy IN ITEMS
    CMP0083 # CMake 3.14
    )
  if (POLICY ${policy})
    cmake_policy(SET ${policy} NEW)
  endif ()
endforeach ()
PROJECT(SingletonPattern)


set(CMAKE_INCLUDE_CURRENT_DIR ON) 
ADD_EXECUTABLE(${PROJECT_NAME}   
main.cpp
 SingleObject.cpp SingleObject.h
)
 
TARGET_LINK_LIBRARIES(${PROJECT_NAME} )