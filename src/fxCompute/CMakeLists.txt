set(LIBNAME fxCompute)


add_library(${LIBNAME}
    ${LIBNAME}.cpp
)

target_include_directories(${LIBNAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
