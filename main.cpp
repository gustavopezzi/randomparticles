#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <SDL2/SDL.h>
#include "screen.h"
#include "particle.h"
#include "swarm.h"

using namespace std;
using namespace fire_particles;

/*************************************************************************/
// main function
/*************************************************************************/
int main() {
    srand(time(NULL));

    screen scr;
    swarm swarm_cloud;

    scr.init();

    /* render loop */
    while (true) {
        int elapsed = SDL_GetTicks();

        scr.clear();
        swarm_cloud.update();

        const particle * const particles = swarm_cloud.get_particles();

        for (int i = 0; i < swarm::NPARTICLES; i++) {
            particle p = particles[i];
            int x = (p.x + 1) * (screen::SCREEN_WIDTH / 2);
            int y = (p.y + 1) * (screen::SCREEN_HEIGHT / 2);

            scr.set_pixel(x, y, 255, 255, 255);
        }

        scr.update();

        if (!scr.process_events()) {
            break;
        }
    }

    scr.close();

    return 0;
}