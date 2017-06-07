include_directories (${PROJECT_SOURCE_DIR}/../include)

add_executable (Test-Debug ${PROJECT_SOURCE_DIR}/../experiment/test/test-debug.cpp)

set_property(TARGET Test-Debug PROPERTY FOLDER "experiment")

target_link_libraries (Test-Debug BrainMuscles)

