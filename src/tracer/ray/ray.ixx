export module synodic.soul.tracer:ray;

import std;
import synodic.periapsis;
import synodic.soul.core;

export class Ray {
public:
	peri::math::Vec4<float> storage;
	peri::math::Vec4<float> origin;
	peri::math::Vec4<float> direction;
	peri::math::Vec2<float> bary;
	std::uint32_t currentHit;
	std::uint32_t resultOffset;
	char job;
};
