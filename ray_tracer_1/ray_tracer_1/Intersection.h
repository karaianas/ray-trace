////////////////////////////////////////
// Intersection.h
////////////////////////////////////////

#pragma once

#include "Color.h"
#include "Core.h"
class Material;

////////////////////////////////////////////////////////////////////////////////

class Intersection {
public:
	Intersection()			{HitDistance=1e10; Mtl=0;}

public:
	// Ray intersection data
	float HitDistance;
	glm::vec3 Position;
	glm::vec3 Normal;
	Material *Mtl;

	// Shaded color
	Color Shade;
};

////////////////////////////////////////////////////////////////////////////////
