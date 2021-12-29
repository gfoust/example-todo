# CMakeList.txt : CMake project for BigToDo, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (todo "main.cpp" "console.cpp" "console.hpp" "db.cpp" "db.hpp" "todo.hpp" "todo.cpp" "types.hpp")

# TODO: Add tests and install targets if needed.
