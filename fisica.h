#ifndef FISICA_H
#define FISICA_H

#include <stddef.h>
#include <stdbool.h>
#include "config.h"

enum dim{
    X,
    Y,
};

typedef struct{
    float pos[2];   
    float vel[2];   
    float dir; //radianes
}mov_t;

double comp_vel(double vi, double a, double dt);

double comp_pos(double pi, double vi, double dt);

/**
 * @brief 
 * Funcion para trasladar objetos
 * @param obj 
 * @param gravX 
 * @param gravY 
 * @param chorro 
 */
void mov_obj(mov_t *obj, int gravX, int gravY, bool chorro);


#endif /* FISICA_H */
