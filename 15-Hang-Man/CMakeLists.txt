cmake_minimum_required(VERSION 3.12)
project(Hangman)

add_executable(hangman
    src/main.cpp
    src/HangmanEngine.cpp
    src/HangmanFrontendTUI.cpp
    src/JSONParser.cpp
)

target_include_directories(hangman PRIVATE src)

target_compile_features(hangman PRIVATE cxx_std_17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)