include_directories (${PROJECT_SOURCE_DIR}/../include)

add_executable (Type-Container-Array ${PROJECT_SOURCE_DIR}/../experiment/type/container/type-container-array.cpp)

set_property(TARGET Type-Container-Array PROPERTY FOLDER "experiment")

target_link_libraries (Type-Container-Array BrainMuscles)

