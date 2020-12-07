include("release/CPackConfig.cmake")

if( WIN32 AND NOT CYGWIN)
    set(CPACK_INSTALL_CMAKE_PROJECTS
        "debug;HelloWorld;ALL;/"
        "release;HelloWorld;ALL;/"
        )
else( )
    set(CPACK_INSTALL_CMAKE_PROJECTS
        "debug;HelloWorld;ALL;/"
        "release;HelloWorld;ALL;/"
        )
endif( WIN32 AND NOT CYGWIN)
