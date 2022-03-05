# CMakeList.txt : CMake project for Paint3d, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Paint3d")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)


set(VTK_DIR $ENV{VTK_DIR})

find_package(VTK REQUIRED)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)

set(FORMS_DIR     "${CMAKE_SOURCE_DIR}/ui")
set(INCLUDE_DIR   "${CMAKE_SOURCE_DIR}/include")
set(SOURCE_DIR    "${CMAKE_SOURCE_DIR}/src")
set(RESOURCE_DIR  "${CMAKE_SOURCE_DIR}/qrc")

message(STATUS "***************ui include dir:       ${FORMS_DIR}")
message(STATUS "***************include include dir:  ${INCLUDE_DIR}")
message(STATUS "***************src include dir:      ${SOURCE_DIR}")
message(STATUS "***************resource include dir: ${RESOURCE_DIR}")

include_directories(${FORMS_DIR})
include_directories(${INCLUDE_DIR})
include_directories(${SOURCE_DIR})
include_directories(${RESOURCE_DIR})

file (GLOB REF_FILES  "${RESOURCE_DIR}/*.qrc")

file(GLOB_RECURSE SOURCES
    "${FORMS_DIR}/*.ui"
    "${INCLUDE_DIR}/*.h"
    "${SOURCE_DIR}/*.cpp"
    "${RESOURCE_DIR}/*.qrc"
)
message(STATUS "***************SOURCES is: ${SOURCES}")
message(STATUS "***************resource include dir: ${REF_FILES}")

set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_AUTOUIC_SEARCH_PATHS} ${FORMS_DIR})


# Add source to this project's executable.
#add_executable (Paint3d   "src/Main.cpp")

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Paint3d
        MANUAL_FINALIZATION
        ${SOURCES}
    )

else()

        add_executable(Paint3d
            ${PROJECT_SOURCES}
        )

endif()

# TODO: Add tests and install targets if needed.
target_link_libraries( Paint3d PRIVATE  ${VTK_LIBRARIES})
target_link_libraries( Paint3d PRIVATE  Qt${QT_VERSION_MAJOR}::Widgets)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Paint3d)
endif()
 set( CMAKE_INSTALL_PREFIX "${CMAKE_SOURCE_DIR}/bin")
 message(STATUS "***************CMAKE_INSTALL_PREFIX include dir: ${CMAKE_INSTALL_PREFIX}")
install (TARGETS Paint3d
         LIBRARY DESTINATION lib
         RUNTIME DESTINATION bin)
include(InstallRequiredSystemLibraries)
#set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
#set(CPACK_PACKAGE_VERSION_MAJOR "${Tutorial_VERSION_MAJOR}")
#set(CPACK_PACKAGE_VERSION_MINOR "${Tutorial_VERSION_MINOR}")
include(CPack)       