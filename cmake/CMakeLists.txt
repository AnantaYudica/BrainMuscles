cmake_minimum_required (VERSION 3.0.2)
 
project (BrainMuscles)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(tool)

include_directories (${PROJECT_SOURCE_DIR}/../include)

add_subdirectory(BrainMuscles)
add_subdirectory(experiment)