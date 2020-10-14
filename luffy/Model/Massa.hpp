#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>


class Massa{
	private:
		float m;
		float pos, vel, ace;
	public:
		Massa (float m, float pos, float vel, float ace): m(this->m), pos(this->pos), vel(this->vel), ace(this->ace) {}
		float get_massa();
		void set_massa(float massa);
		float get_pos();
		void set_pos(float pos);
		float get_vel();
		void set_vel(float vel);
		float get_ace();
		void set_ace(float ace);	
};

