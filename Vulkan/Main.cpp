#define STB_IMAGE_IMPLEMENTATION
#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include "stb_image.h"
#include <crtdbg.h>
#include "VulkanDemo.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Application* application = new VulkanDemo();
	application->run();
	delete application;
	return 0;
};