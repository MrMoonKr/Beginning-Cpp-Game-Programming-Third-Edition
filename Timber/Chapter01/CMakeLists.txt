set( target Chapter01 )

set( Chapter01_SOURCES
    Timber.cpp
)

add_executable( ${target} 
    ${Chapter01_SOURCES} 
)

target_link_libraries( ${target} PRIVATE 
    SFML::Network 
    SFML::Graphics 
    SFML::Window 
    SFML::Audio 
    SFML::System 
)

# 게임 에셋 복사

add_custom_command(
    TARGET ${target} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_CURRENT_SOURCE_DIR}/fonts $<TARGET_FILE_DIR:${target}>/fonts
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_CURRENT_SOURCE_DIR}/graphics $<TARGET_FILE_DIR:${target}>/graphics
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_CURRENT_SOURCE_DIR}/sound $<TARGET_FILE_DIR:${target}>/sound
    COMMENT "Copying game assets to build output directory"
)