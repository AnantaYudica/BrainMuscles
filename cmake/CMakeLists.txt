cmake_minimum_required (VERSION 2.8)

set (CMAKE_CXX_STANDARD 11)

project (BrainMuscles)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(tool)

include_directories (${PROJECT_SOURCE_DIR}/../include)

add_subdirectory(BrainMuscles)
add_subdirectory(experiment)