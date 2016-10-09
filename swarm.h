#ifndef SWARM_H_
#define SWARM_H_

#include "particle.h"

namespace fire_particles {
    /*************************************************************************/
    // swarm class
    /*************************************************************************/
    class swarm {
        private:
            particle * m_particles;
        public:
            const static int NPARTICLES = 1000;
            swarm();
            virtual ~swarm();
            const particle * const get_particles() { return m_particles; }
            void update();
    };
}

#endif