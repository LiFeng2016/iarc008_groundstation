INCLUDE_DIRECTORIES(include)

AUX_SOURCE_DIRECTORY(src DIR_EXAMPLE_SRCS)

#ADD_LIBRARY(example_lib STATIC ${DIR_EXAMPLE_SRCS})
#ADD_EXECUTABLE(example_node  example_node.cpp)
#TARGET_LINK_LIBRARIES(example_node  ${LIBS} example_lib)
