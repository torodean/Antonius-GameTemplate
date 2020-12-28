
set(LOGISTICS_SRC Currency.cpp StatBlock.cpp)
set(LOGISTICS_HDR Currency.h StatBlock.h)

add_library(LOGISTICS_LIB "${LOGISTICS_SRC};${LOGISTICS_HDR}")