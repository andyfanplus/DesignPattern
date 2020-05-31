PROJECT(SingletonPattern)


set(CMAKE_INCLUDE_CURRENT_DIR ON) 
ADD_EXECUTABLE(${PROJECT_NAME}   
main.cpp
 SingleObject.cpp SingleObject.h
)
 
TARGET_LINK_LIBRARIES(${PROJECT_NAME} )