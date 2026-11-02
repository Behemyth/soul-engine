export module synodic.soul.engine:core.geometry;

import std;
import synodic.periapsis;
import synodic.soul.core;

export class Vertex : Component
{

public:

	Vertex() = default;
	~Vertex() = default;

	peri::math::Vec3<float> position;
	peri::math::Vec3<float> normal;
	peri::math::Vec2<float> textureCoord;
	peri::math::Vec3<float> velocity;

	std::uint32_t object;

};

export class GUIVertex : Component {

public:

	GUIVertex() = default;
	~GUIVertex() = default;

	peri::math::Vec2<float> position;
	peri::math::Vec2<float> textureCoord;
	std::uint32_t colour;

};

export class Face : Component
{

public:

	Face() = default;
	~Face() = default;

	peri::math::Vec3<std::uint32_t> indices;
	std::uint32_t material; //TODO investigate materials
};

export class BoundingBox : Component
{

public:

	BoundingBox() = default;
	~BoundingBox() = default;

	peri::math::Vec3<float> min;
	peri::math::Vec3<float> max;

};

export class Tet : Component
{

public:

	Tet() = default;
	~Tet() = default;

	peri::math::Vec4<std::uint32_t> indices;
	std::uint32_t material;
	std::uint32_t object;

};
