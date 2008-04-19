if(WIN32)
  set(SRC StarTimerLinux.cpp)
else(WIN32)
  set(SRC StarTimerLinux.cpp)
endif(WIN32)

add_library(StarUtils ${SRC})

install(TARGETS StarUtils
        RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib)
