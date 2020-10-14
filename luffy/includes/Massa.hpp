#pragma once
#include <memory>
#include <stdlib.h>


class Massa{
	private:
		float m;
		float pos, vel, ace, force;
	public:
		Massa (float m, float pos, float vel, float ace);
		float get_massa();
		void set_massa(float massa);
		float get_pos();
		void set_pos(float pos);
		float get_vel();
		void set_vel(float vel);
		float get_ace();
		void set_ace(float ace);
		float get_force();
		void set_force(float force);	
};

