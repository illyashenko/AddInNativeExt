#include "SleepExt.h"

void ExtSleep(int delay)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(delay));
}
