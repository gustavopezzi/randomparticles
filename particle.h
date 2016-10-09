#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace fire_particles {
    /*************************************************************************/
    // particle struct
    /*************************************************************************/
    struct particle {
        public:
            double x;
            double y;
            double x_speed;
            double y_speed;
            particle();
            virtual ~particle();
            void update();
    };
}

#endif