CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
foreach (policy IN ITEMS
    CMP0083 # CMake 3.14
    )
  if (POLICY ${policy})
    cmake_policy(SET ${policy} NEW)
  endif ()
endforeach ()

PROJECT(AbstractFactoryPattern)


set(CMAKE_INCLUDE_CURRENT_DIR ON) 

FILE(GLOB FILES "./*.h" "./*.cpp") 

ADD_EXECUTABLE(${PROJECT_NAME}   
${FILES}
)
 
TARGET_LINK_LIBRARIES(${PROJECT_NAME} )