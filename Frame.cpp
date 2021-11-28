#include "Frame.h"

using std::min;

using olc::Pixel;

Frame::Frame()
{
	sAppName = "chess";
}

bool Frame::OnUserCreate()
{
	return true;
}

bool Frame::OnUserUpdate(float fElapsedTime)
{
	Clear(olc::BLACK);
	unsigned tile_size = min(ScreenWidth(), ScreenHeight()) / 8;
	for (int i = 0; i < 8; i++)
	{
		for (int j= 0; j < 8; j++)
		{
			// if 
			FillRect(i * tile_size, j * tile_size, tile_size, tile_size, (i+j) % 2 == 0 ? olc::WHITE : olc::BLACK);
		}
	}
	return true;
}
