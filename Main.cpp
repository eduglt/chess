#include "Frame.h"

int main()
{
	Frame frame;
	if (frame.Construct(800,800, 1, 1))
	{
		frame.Start();
	}
}
