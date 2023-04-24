project(geometry)
cmake_minimum_required(VERSION 3.22)

add_library(${PROJECT_NAME}
    src/circle.cpp
    src/rectangle.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

add_executable(main
    main.cpp
)

target_link_libraries(main
    ${PROJECT_NAME}
)
