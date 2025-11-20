set(LIBNAME newtonRaphsonIteration)


add_library(${LIBNAME}
    ${LIBNAME}.cpp
)

target_include_directories(${LIBNAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
   
)

# WE ALSO USE THESE MODULES, ADD THEM HERE
# SAME AS THE MAIN CMAKELISTS, LIKE THE LAST LINE

target_link_libraries(${LIBNAME}
    PUBLIC
        fxCompute
        differentiate
)