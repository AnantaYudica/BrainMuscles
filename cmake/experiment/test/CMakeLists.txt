include_directories (${PROJECT_SOURCE_DIR}/../include)

#PROJECT_TEST_DEBUG
add_executable (Test-Debug ${PROJECT_SOURCE_DIR}/../experiment/test/test-debug.cpp)
set_property(TARGET Test-Debug PROPERTY FOLDER experiment/test)
target_link_libraries (Test-Debug BrainMuscles)

#PROJECT_TEST_FILE
add_executable (Test-File ${PROJECT_SOURCE_DIR}/../experiment/test/test-file.cpp)
set_property(TARGET Test-File PROPERTY FOLDER experiment/test)
target_link_libraries (Test-File BrainMuscles)

#PROJECT_TEST_SIMPLE_LOG
add_executable (Test-Simple-Log ${PROJECT_SOURCE_DIR}/../experiment/test/test-simple-log.cpp)
set_property(TARGET Test-Simple-Log PROPERTY FOLDER experiment/test/simple)
target_link_libraries (Test-Simple-Log BrainMuscles)

#PROJECT_TEST_SIMPLE_MEMORY
add_executable (Test-Simple-Memory ${PROJECT_SOURCE_DIR}/../experiment/test/test-simple-memory.cpp)
set_property(TARGET Test-Simple-Memory PROPERTY FOLDER experiment/test/simple)
target_link_libraries (Test-Simple-Memory BrainMuscles)
