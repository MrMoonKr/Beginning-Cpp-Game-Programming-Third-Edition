cmake_minimum_required( VERSION 3.30 )

project( "Beginning C++ Game Programming 3rd Edition" 
    VERSION 1.0.0
    LANGUAGES CXX
)

set( CMAKE_CXX_STANDARD 20 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )

# 의존 패키지

find_package( SFML COMPONENTS Network Graphics Window Audio System CONFIG REQUIRED )
# target_link_libraries( main PRIVATE SFML::Network SFML::Graphics SFML::Window SFML::Audio SFML::System )

# If you want SFML to provide an implementation of main():
# target_link_libraries( main PRIVATE SFML::Main )



# 하위 프로젝트

add_subdirectory( "Timber/Chapter00" )
add_subdirectory( "Timber/Chapter01" )


