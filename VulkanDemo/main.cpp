#include <iostream>
#include <vulkan/vulkan.h>
#define VK_MAKE_VERSION(major, minor, patch) \
    (((major) << 22) | ((minor) << 12) | (patch))

int main() {
	printf("HELLO WORLD");
	VkResult errorCode;
	VkApplicationInfo appInfo = {
		VK_STRUCTURE_TYPE_APPLICATION_INFO,
		NULL,
		"VulkanDemo",
		0,
		"VulkanDemoEngine",
		0,
		VK_MAKE_VERSION(1, 0, 0)
	};
	VkInstanceCreateInfo instanceInfo = {
		VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
		NULL,
		NULL,
		&appInfo,
		0,
		NULL,
		0,
		NULL
	};
	VkInstance instance;
	errorCode = vkCreateInstance(&instanceInfo, NULL, &instance);
	if (errorCode != VK_SUCCESS)
		printf("Failed to create Vulkan instance");
	std::cin.get();
	
	return 0;
}