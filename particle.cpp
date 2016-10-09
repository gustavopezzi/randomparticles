#include <stdlib.h>
#include "particle.h"

#define SPEED_FACTOR 0.003;

namespace fire_particles {
    /*************************************************************************/
    // particle constructor
    /*************************************************************************/
    particle::particle() {
        x = ((2.0 * rand()) / RAND_MAX) - 1;
        y = ((2.0 * rand()) / RAND_MAX) - 1;
        x_speed = (((2.0 * rand()) / RAND_MAX) - 1) * SPEED_FACTOR;
        y_speed = (((2.0 * rand()) / RAND_MAX) - 1) * SPEED_FACTOR;
    }

    /*************************************************************************/
    // particle destructor
    /*************************************************************************/
    particle::~particle() { }

    /*************************************************************************/
    // particle update
    /*************************************************************************/
    void particle::update() {
        x += x_speed;
        y += y_speed;

        if (x <= -1.0 || x >= 1.0) {
            x_speed = -x_speed;
        }

        if (y <= -1.0 || y >= 1.0) {
            y_speed = -y_speed;
        }
    }
}