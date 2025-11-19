set(LIBNAME startup)


add_library(${LIBNAME}
    startup.cpp
)

target_include_directories(${LIBNAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
