include_directories (${PROJECT_SOURCE_DIR}/../include)


add_executable (Test ${PROJECT_SOURCE_DIR}/../experiment/test/test.cpp)

set_property(TARGET Test PROPERTY FOLDER "Experiment")

target_link_libraries (Test BrainMuscles)

