#ifndef FRAME_H
#define FRAME_H

#include "Chess.h"
#include "olcPixelGameEngine.h"

class Frame : public olc::PixelGameEngine
{
public:
	Frame();
public:
	bool OnUserCreate() override;
	bool OnUserUpdate(float fElapsedTime) override;
private:
	Chess *board;
};

#endif // FRAME_H
