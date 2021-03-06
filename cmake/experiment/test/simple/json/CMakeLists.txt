#EXPERIMENT_TEST_SIMPLE_JSON
set (EXPERIMENT_TEST_SIMPLE_JSON_DIR ${PROJECT_SOURCE_DIR}/../src/experiment/test/simple/json)
set (EXPERIMENT_TEST_SIMPLE_JSON_HEADER_FILES
	${EXPERIMENT_TEST_SIMPLE_JSON_DIR}/Memory.h
	${EXPERIMENT_TEST_SIMPLE_JSON_DIR}/Value.h)
set (EXPERIMENT_TEST_SIMPLE_JSON_SOURCE_FILES
	${EXPERIMENT_TEST_SIMPLE_JSON_DIR}/Memory.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_DIR}/Value.cpp)
#EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION
set (EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_DIR ${EXPERIMENT_TEST_SIMPLE_JSON_DIR}/exception)
set (EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_HEADER_FILES 
	${EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_DIR}/BadCast.h
	${EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_DIR}/UndefinedType.h)
set (EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_SOURCE_FILES
	${EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_DIR}/BadCast.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_DIR}/UndefinedType.cpp)
#EXPERIMENT_TEST_SIMPLE_JSON_HELPER
set (EXPERIMENT_TEST_SIMPLE_JSON_HELPER_DIR ${EXPERIMENT_TEST_SIMPLE_JSON_DIR}/helper)
set (EXPERIMENT_TEST_SIMPLE_JSON_HELPER_HEADER_FILES
	${EXPERIMENT_TEST_SIMPLE_JSON_HELPER_DIR}/Cast.h
	${EXPERIMENT_TEST_SIMPLE_JSON_HELPER_DIR}/Tag.h
	${EXPERIMENT_TEST_SIMPLE_JSON_HELPER_DIR}/Value.h)
set (EXPERIMENT_TEST_SIMPLE_JSON_HELPER_SOURCE_FILES
	${EXPERIMENT_TEST_SIMPLE_JSON_HELPER_DIR}/Cast.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_HELPER_DIR}/Tag.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_HELPER_DIR}/Value.cpp)
#EXPERIMENT_TEST_SIMPLE_JSON_POINTER
set (EXPERIMENT_TEST_SIMPLE_JSON_POINTER_DIR ${EXPERIMENT_TEST_SIMPLE_JSON_DIR}/pointer)
set (EXPERIMENT_TEST_SIMPLE_JSON_POINTER_HEADER_FILES
	${EXPERIMENT_TEST_SIMPLE_JSON_POINTER_DIR}/Value.h)
set (EXPERIMENT_TEST_SIMPLE_JSON_POINTER_SOURCE_FILES
	${EXPERIMENT_TEST_SIMPLE_JSON_POINTER_DIR}/Value.cpp)
#EXPERIMENT_TEST_SIMPLE_JSON_VALUE
set (EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR ${EXPERIMENT_TEST_SIMPLE_JSON_DIR}/value)
set (EXPERIMENT_TEST_SIMPLE_JSON_VALUE_HEADER_FILES
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/Array.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/False.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/Null.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/Number.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/Object.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/String.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/True.h)
set (EXPERIMENT_TEST_SIMPLE_JSON_VALUE_SOURCE_FILES
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/Array.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/False.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/Null.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/Number.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/Object.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/String.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/True.cpp)
#EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER
set (EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR ${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_DIR}/number)
set (EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_HEADER_FILES
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Char.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Double.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Float.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Int.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Long.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/LongDouble.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/LongLong.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Short.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/UnsignedChar.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/UnsignedInt.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/UnsignedLong.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/UnsignedLongLong.h
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/UnsignedShort.h)
set (EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_SOURCE_FILES
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Char.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Double.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Float.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Int.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Long.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/LongDouble.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/LongLong.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/Short.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/UnsignedChar.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/UnsignedInt.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/UnsignedLong.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/UnsignedLongLong.cpp
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_DIR}/UnsignedShort.cpp)
	
#SOURCE_GROUP
set (SG_HEADER_STR "Header Files")
set (SG_SOURCE_STR "Source Files")
source_group (${SG_HEADER_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_HEADER_FILES})
source_group (${SG_SOURCE_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_SOURCE_FILES})
#SOURCE_GROUP_EXCEPTION
set (SG_HEADER_EXCEPTION_STR "${SG_HEADER_STR}\\exception")
set (SG_SOURCE_EXCEPTION_STR "${SG_SOURCE_STR}\\exception")
source_group (${SG_HEADER_EXCEPTION_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_HEADER_FILES})
source_group (${SG_SOURCE_EXCEPTION_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_SOURCE_FILES})
#SOURCE_GROUP_HELPER
set (SG_HEADER_HELPER_STR "${SG_HEADER_STR}\\helper")
set (SG_SOURCE_HELPER_STR "${SG_SOURCE_STR}\\helper")
source_group (${SG_HEADER_HELPER_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_HELPER_HEADER_FILES})
source_group (${SG_SOURCE_HELPER_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_HELPER_SOURCE_FILES})
#SOURCE_GROUP_POINTER
set (SG_HEADER_POINTER_STR "${SG_HEADER_STR}\\pointer")
set (SG_SOURCE_POINTER_STR "${SG_SOURCE_STR}\\pointer")
source_group (${SG_HEADER_POINTER_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_POINTER_HEADER_FILES})
source_group (${SG_SOURCE_POINTER_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_POINTER_SOURCE_FILES})
#SOURCE_GROUP_VALUE
set (SG_HEADER_VALUE_STR "${SG_HEADER_STR}\\value")
set (SG_SOURCE_VALUE_STR "${SG_SOURCE_STR}\\value")
source_group (${SG_HEADER_VALUE_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_HEADER_FILES})
source_group (${SG_SOURCE_VALUE_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_SOURCE_FILES})
#SOURCE_GROUP_VALUE_NUMBER
set (SG_HEADER_VALUE_NUMBER_STR "${SG_HEADER_VALUE_STR}\\number")
set (SG_SOURCE_VALUE_NUMBER_STR "${SG_SOURCE_VALUE_STR}\\number")
source_group (${SG_HEADER_VALUE_NUMBER_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_HEADER_FILES})
source_group (${SG_SOURCE_VALUE_NUMBER_STR} FILES ${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_SOURCE_FILES})

#HEADER_LISTS
set (HEADER_LIST
	${EXPERIMENT_TEST_SIMPLE_JSON_HEADER_FILES}
	${EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_HEADER_FILES}
	${EXPERIMENT_TEST_SIMPLE_JSON_HELPER_HEADER_FILES}
	${EXPERIMENT_TEST_SIMPLE_JSON_POINTER_HEADER_FILES}
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_HEADER_FILES}
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_HEADER_FILES})
#SOURCE_LISTS
set (SOURCE_LIST
	${EXPERIMENT_TEST_SIMPLE_JSON_SOURCE_FILES}
	${EXPERIMENT_TEST_SIMPLE_JSON_EXCEPTION_SOURCE_FILES}
	${EXPERIMENT_TEST_SIMPLE_JSON_HELPER_SOURCE_FILES}
	${EXPERIMENT_TEST_SIMPLE_JSON_POINTER_SOURCE_FILES}
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_SOURCE_FILES}
	${EXPERIMENT_TEST_SIMPLE_JSON_VALUE_NUMBER_SOURCE_FILES})
#MAIN_SOURCE
set(EXPERIMENT_TEST_SIMPLE_JSON_MAIN_SOURCE ${EXPERIMENT_TEST_SIMPLE_JSON_DIR}/json_main.cpp)
#ALL_SOURCE
set(EXPERIMENT_TEST_SIMPLE_JSON_ALL_SOURCE ${EXPERIMENT_TEST_SIMPLE_JSON_MAIN_SOURCE} ${HEADER_LIST} ${SOURCE_LIST})
#MAIN
add_executable (Json ${EXPERIMENT_TEST_SIMPLE_JSON_ALL_SOURCE})
set_property(TARGET Json PROPERTY FOLDER experiment/test/simple)
target_link_libraries (Json BrainMuscles)
#PRE_BUILD
set (EXPERIMENT_TEST_SIMPLE_JSON_LIST ${PROJECT_BINARY_DIR}/list/experiment_test_simple_json.list)
file(REMOVE ${EXPERIMENT_TEST_SIMPLE_JSON_LIST})
foreach(SOURCE_FILE ${EXPERIMENT_TEST_SIMPLE_JSON_ALL_SOURCE})
	get_filename_component(ABSOLUTE_SOURCE_FILE ${SOURCE_FILE} ABSOLUTE)
	file(APPEND ${EXPERIMENT_TEST_SIMPLE_JSON_LIST} "${ABSOLUTE_SOURCE_FILE}\n")
endforeach(SOURCE_FILE)
add_custom_command(TARGET Json PRE_BUILD COMMAND PreBuild -d --list --source-column ${EXPERIMENT_TEST_SIMPLE_JSON_LIST} COMMENT "PreBuild Check")