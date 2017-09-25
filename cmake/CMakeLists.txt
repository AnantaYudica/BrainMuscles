cmake_minimum_required (VERSION 2.6)
 
project (BrainMuscles)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

include_directories (${PROJECT_SOURCE_DIR}/../include)

add_subdirectory(BrainMuscles)
add_subdirectory(experiment)