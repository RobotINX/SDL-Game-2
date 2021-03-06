#ifndef __MODULEPARTICLESYSTEM_H__
#define __MODULEPARTICLESYSTEM_H__

#include<list>
#include "Module.h"
#include "Globals.h"
#include "Point.h"
#include "Timer.h"
#include "Particle.h"

struct SDL_Texture;

class ModuleParticleSystem : public Module
{
public:
	ModuleParticleSystem();
	~ModuleParticleSystem();

	void CreateParticle(particle_info& particle);

	bool Init();
	bool Start();
	update_status Update();
	bool CleanUp();

private:
	std::list<Particle*> particles;
	SDL_Texture* particles_sheet;
};

#endif // __MODULEPARTICLESYSTEM_H__