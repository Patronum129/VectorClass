//vector class

#include <math.h>

template<class TYPE>
class vec3
{
public:
	//TODO 1
	TYPE x, y, z;
	
	//TODO 2: constructors
	vec3(const vec3& v)
	{
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
	}

	vec3(const TYPE& x, const TYPE& y, const TYPE& z)
	{
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;
	}
	
	vec3& create(const TYPE& x, const TYPE& y, const TYPE& z)
	{
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;

		return(*this);
	}

	//TODO 3: operators
	vec3 operator + (const vec3& v) const
	{
		vec3 r;

		r.x = x + v.x;
		r.y = y + v.y;
		r.z = z + v.z;

		return(r);
	}

	vec3 operator - (const vec3& v) const
	{
		vec3 r;

		r.x = x - v.x;
		r.y = y - v.y;
		r.z = z - v.z;

		return(r);
	}

	const vec3 operator += (const vec3& v)
	{
		x += v.x;
		y += v.y;
		z += v.z;

		return(*this);
	}

	const vec3 operator -= (const vec3& v)
	{
		x -= v.x;
		y -= v.y;
		z -= v.z;

		return(*this);
	}

	bool operator == (const vec3& v) const
	{
		return (x == v.x && y == v.y && z == v.z);
	}

	//TODO 4: functions
	vec3& Normalize ()
	{
		x = y = z = 1;
		return(*this);
	}

	vec3& Zero()
	{
		x = y = z = 0;
		return(*this);
	}

	bool IsZero() const
	{
		return (x == 0 && y == 0 && z == 0);
	}

	TYPE DistanceTo(const vec3& v) const
	{
		TYPE fx = x - v.x;
		TYPE fy = y - v.y;
		TYPE fz = z - v.z;

		return (TYPE)sqrtf(float(fx * fx) + float(fy * fy) + float(fz * fz));
	}
};
