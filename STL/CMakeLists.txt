aux_source_directory(. DIR_LIB_SRCS)

add_library (STL ${DIR_LIB_SRCS} link_list.cpp)
