#pragma once
namespace point3d {
	class Point3D
	{
		int x;
		int y;
		int z;
	public:
		Point3D(int x, int y, int z) : x{ x }, y{ y }, z{ z } {};
	};
}

