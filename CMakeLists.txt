project(sdl_maps)

set(MyProjectSources CTile.cpp CSurface.cpp CMap.cpp CEvent.cpp CEntity.cpp CCamera.cpp CArea.cpp CApp_OnRender.cpp CApp_OnLoop.cpp CApp_OnInit.cpp CApp_OnEvent.cpp CApp_OnCleanup.cpp CApp.cpp CAnimation.cpp)

link_libraries (
   SDLmain
   SDL_image
   SDL
)

add_executable(sdl_maps ${MyProjectSources})
install(TARGETS sdl_maps RUNTIME DESTINATION bin)
