cmake_minimum_required(VERSION 3.22)

project(nrip2)

# creates the variable EXEC and sets it to nrip2
set(EXEC nrip2)


set(CMAKE_CXX_STANDARD 20)

# Add modules
add_subdirectory(src/startup)
add_subdirectory(src/inputProcessor)


# Add the executable
add_executable(${EXEC} src/main.cpp)

# Link modules into the executable
target_link_libraries(${EXEC} PRIVATE startup inputProcessor)