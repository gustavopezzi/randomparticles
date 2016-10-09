#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL2/SDL.h>

namespace fire_particles {
    /*************************************************************************/
    // screen class
    /*************************************************************************/
    class screen {
        private:
            SDL_Window *m_window;
            private: SDL_Renderer *m_renderer;
            private: SDL_Texture *m_texture;
            private: Uint32 *m_buffer;
        public:
            screen();
            const static int SCREEN_WIDTH = 800;
            const static int SCREEN_HEIGHT = 600;
            bool init();
            bool process_events();
            void update();
            void set_pixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
            void clear();
            void close();
    };
}

#endif