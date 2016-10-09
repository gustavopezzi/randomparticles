#include <stdlib.h>
#include "swarm.h"

namespace fire_particles {
    /*************************************************************************/
    // swarm constructor
    /*************************************************************************/
    swarm::swarm() {
        m_particles = new particle[NPARTICLES];
    }

    /*************************************************************************/
    // swarm destructor
    /*************************************************************************/
    swarm::~swarm() {
        delete [] m_particles;
    }

    /*************************************************************************/
    // swarm particles update
    /*************************************************************************/
    void swarm::update() {
        for (int i = 0; i < swarm::NPARTICLES; i++) {
            m_particles[i].update();
        }
    }
}