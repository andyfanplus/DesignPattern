CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
foreach (policy IN ITEMS
    CMP0083 # CMake 3.14
    )
  if (POLICY ${policy})
    cmake_policy(SET ${policy} NEW)
  endif ()
endforeach ()

PROJECT(DesignPattern)

ADD_SUBDIRECTORY(StartegyPattern)
ADD_SUBDIRECTORY( FactoryPattern)
ADD_SUBDIRECTORY(SingletonPattern)
ADD_SUBDIRECTORY(AbstractFactory)
ADD_SUBDIRECTORY(FactoryMethod)
ADD_SUBDIRECTORY(State)
ADD_SUBDIRECTORY(Decorator)
ADD_SUBDIRECTORY(Observer)
ADD_SUBDIRECTORY(Adapter)
#ADD_EXECUTABLE(${PROJECT_NAME}    main.cpp)

#TARGET_LINK_LIBRARIES(${PROJECT_NAME} )