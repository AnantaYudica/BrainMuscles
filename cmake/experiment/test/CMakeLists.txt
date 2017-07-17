include_directories (${PROJECT_SOURCE_DIR}/../include)

add_executable (Test-File ${PROJECT_SOURCE_DIR}/../experiment/test/test-file.cpp)

add_executable (Test-Debug ${PROJECT_SOURCE_DIR}/../experiment/test/test-debug.cpp)

set_property(TARGET Test-File PROPERTY FOLDER experiment/test)

set_property(TARGET Test-Debug PROPERTY FOLDER experiment/test)

target_link_libraries (Test-Debug BrainMuscles)
target_link_libraries (Test-File BrainMuscles)

