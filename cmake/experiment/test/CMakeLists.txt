add_subdirectory(simple)

#PROJECT_TEST_DEBUG
add_executable (Test-Debug ${PROJECT_SOURCE_DIR}/../experiment/test/test-debug.cpp)
set_property(TARGET Test-Debug PROPERTY FOLDER experiment/test)
target_link_libraries (Test-Debug BrainMuscles)

#PROJECT_TEST_FILE
add_executable (Test-File ${PROJECT_SOURCE_DIR}/../experiment/test/test-file.cpp)
set_property(TARGET Test-File PROPERTY FOLDER experiment/test)
target_link_libraries (Test-File BrainMuscles)

#PROJECT_TEST_SIMPLE_FUNCTIONAL
add_executable (Test-Simple-Functional ${PROJECT_SOURCE_DIR}/../experiment/test/test-simple-Functional.cpp)
set_property(TARGET Test-Simple-Functional PROPERTY FOLDER experiment/test/simple)
target_link_libraries (Test-Simple-Functional BrainMuscles)

#PROJECT_TEST_SIMPLE_JSON
add_executable (Test-Simple-Json ${PROJECT_SOURCE_DIR}/../experiment/test/test-simple-json.cpp)
set_property(TARGET Test-Simple-Json PROPERTY FOLDER experiment/test/simple)
target_link_libraries (Test-Simple-Json BrainMuscles)

#PROJECT_TEST_SIMPLE_LOG
add_executable (Test-Simple-Log ${PROJECT_SOURCE_DIR}/../experiment/test/test-simple-log.cpp)
set_property(TARGET Test-Simple-Log PROPERTY FOLDER experiment/test/simple)
target_link_libraries (Test-Simple-Log BrainMuscles)

#PROJECT_TEST_SIMPLE_MEMORY
add_executable (Test-Simple-Memory ${PROJECT_SOURCE_DIR}/../experiment/test/test-simple-memory.cpp)
set_property(TARGET Test-Simple-Memory PROPERTY FOLDER experiment/test/simple)
target_link_libraries (Test-Simple-Memory BrainMuscles)

#PROJECT_TEST_SIMPLE_OUTPUT_JSON
add_executable (Test-Simple-Output-Json ${PROJECT_SOURCE_DIR}/../experiment/test/test-simple-output-json.cpp)
set_property(TARGET Test-Simple-Output-Json PROPERTY FOLDER experiment/test/simple/output)
target_link_libraries (Test-Simple-Output-Json BrainMuscles)

#PROJECT_TEST_SIMPLE_TYPE_NAME
add_executable (Test-Simple-Type-Name ${PROJECT_SOURCE_DIR}/../experiment/test/test-simple-type-name.cpp)
set_property(TARGET Test-Simple-Type-Name PROPERTY FOLDER experiment/test/simple/type)
target_link_libraries (Test-Simple-Type-Name BrainMuscles)
