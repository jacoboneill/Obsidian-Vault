cmake_minimum_required(VERSION 3.10)

project(MyCalculatorProject)

# Set the C++ standard to use (e.g., C++11)
set(CMAKE_CXX_STANDARD 11)

# Define the source files
set(SOURCE_FILES
    src/calculator.cpp
    src/main.cpp
)

# Specify the output directory for the generated binary
set(./build ${CMAKE_BINARY_DIR}/bin)

# Create the executable from the source files
add_executable(calculate ${SOURCE_FILES})

