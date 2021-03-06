//==============================================================================
// SDL Tutorial 1 A massive change. I've changed everything about this project.
//==============================================================================
#ifndef _CAPP_H_
    #define _CAPP_H_

#include <SDL/SDL.h>

#include "Define.h"

#include "CArea.h"
#include "CCamera.h"
#include "CEntity.h"
#include "CEvent.h"
#include "CSurface.h"

//==============================================================================
class CApp : public CEvent {
    private:
        bool            Running;

        SDL_Surface*    Surf_Display;

    public:
        CApp();

        int OnExecute();

    public:
        bool OnInit();

        void OnEvent(SDL_Event* Event);

        	void OnKeyDown(SDLKey sym, SDLMod mod, Uint16 unicode);

            void OnExit();

        void OnLoop();

        void OnRender();

        void OnCleanup();
};

//==============================================================================

#endif
