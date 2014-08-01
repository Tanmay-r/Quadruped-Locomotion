#ifndef ODEBODIES_H
#define ODEBODIES_H

#include <GL/glut.h>
#include <ode/ode.h>
#include <iostream>
#include "helper.h"

class ODEBodies
{
private:
	//Private Objects
	helper * global_helper;

    dBodyID back_link_1_body;
    dBodyID back_link_2_body;
    dBodyID back_link_3_body;
	dBodyID ball_body;

    dGeomID back_link_1_geom;
    dGeomID back_link_2_geom;
    dGeomID back_link_3_geom;
	dGeomID ball_geom;
	dGeomID plane_geom;

    dMass back_link_1_mass;
    dMass back_link_2_mass;
    dMass back_link_3_mass;
	dMass ball_mass;

	//Private Methods
    void set_ball();
    void set_back();
    void set_plane();

public:
	//Constructor
    ODEBodies(helper * global_helper);

    //Public Methods
    void init();

    //Getters
    dBodyID getBallBody();
    dBodyID getBackLink1Body();
    dBodyID getBackLink2Body();
    dBodyID getBackLink3Body();
    dGeomID getBallGeom();
    dMass getBallMass();
    dGeomID getPlaneGeom();
    helper * getGlobalHelper();
};

#endif // ODEBODIES_H
