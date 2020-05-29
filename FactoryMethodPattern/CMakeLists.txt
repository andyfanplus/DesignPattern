PROJECT(FactoryMethodPattern)


set(CMAKE_INCLUDE_CURRENT_DIR ON) 
ADD_EXECUTABLE(${PROJECT_NAME}   
FactoryMethodPattern.cpp
 Circle.cpp Rectangle.cpp  Triangle.cpp
 Circle.h Rectangle.h Triangle.h  Shape.h
)
 
TARGET_LINK_LIBRARIES(${PROJECT_NAME} )