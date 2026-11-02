export module synodic.soul.tracer:film;

import std;
import synodic.periapsis;

export class Film {
public:
	Film();
	~Film();

	peri::math::Vec2<std::uint32_t> resolutionPrev;
	peri::math::Vec2<std::uint32_t> resolution;
	peri::math::Vec2<std::uint32_t> resolutionMax;

	float resolutionRatio;

	peri::math::Vec4<float>* results;
	std::int32_t* hits;
};
