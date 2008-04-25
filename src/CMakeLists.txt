if(WIN32)
  set(SRC StarTimerWin32.cpp)
else(WIN32)
  set(SRC StarTimerLinux.cpp)
endif(WIN32)

set(HEADERS ../include/StarUtils/StarExceptions.h  
            ../include/StarUtils/StarExport.h
            ../include/StarUtils/StarSingleton.h  
            ../include/StarUtils/StarTimer.h)

source_group($HEADERS)
add_library(StarUtils ${SRC} ${HEADERS})

install(TARGETS StarUtils
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
