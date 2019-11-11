project(lab4)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab4
  ./lab4.cpp)

set(CMAKE_CXX_FLAGS
  "${CMAKE_CXX_FLAGS} -Wall -Wextra")
