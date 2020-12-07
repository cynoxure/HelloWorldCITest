include("release/CPackConfig.cmake")

if( WIN32 AND NOT CYGWIN)
    set(CPACK_INSTALL_CMAKE_PROJECTS
        "debug;vra_navigation_library;ALL;/"
        "release;vra_navigation_library;ALL;/"
        "relwithdebinfo;vra_navigation_library;ALL;/"
        "minsizerel;vra_navigation_library;ALL;/"
        )
else( )
    set(CPACK_INSTALL_CMAKE_PROJECTS
        "debug;vra_navigation_library;ALL;/"
        "release;vra_navigation_library;ALL;/"
        )
endif( WIN32 AND NOT CYGWIN)
