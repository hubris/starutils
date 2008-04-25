if(WIN32)
  set(SRC StarTimerWin32.cpp)
else(WIN32)
  set(SRC StarTimerLinux.cpp)
endif(WIN32)

add_library(StarUtils ${SRC})

target_link_libraries(StarUtils winmm)

install(TARGETS StarUtils
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
