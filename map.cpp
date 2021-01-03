#include "map.h"

void Map::SetMap()
{
	Window m;
	m.Wind();
	MapCoord = m.GetBufferInfo();
	SCREEN_MAP.resize(MapCoord.Y);
	for (auto& a : SCREEN_MAP)
		a.resize(MapCoord.X);

	for (int i = 0; i < MapCoord.Y; i++)
	{
		for (int b = 0; b < MapCoord.X; b++)
		{
			SCREEN_MAP[i][b] = ' ';
		}
	}
	for (auto a : SCREEN_MAP)
		std::cout << a;
}
