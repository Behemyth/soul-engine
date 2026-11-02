// Dynamic dispatch initialization for Vulkan-Hpp
// When using VULKAN_HPP_DISPATCH_LOADER_DYNAMIC=1, the vulkan module provides the storage for
// vk::detail::defaultDispatchLoaderDynamic; these helpers only initialize it.

module synodic.soul.raster.backend.vulkan;

import vulkan;

void InitializeVulkanDispatcher()
{
	// Initialize the dynamic dispatcher with the minimal set of function pointers
	// needed before instance creation (e.g., vkCreateInstance, vkEnumerateInstanceExtensionProperties)
	vk::detail::defaultDispatchLoaderDynamic.init();
}

void InitializeVulkanDispatcherInstance(vk::Instance instance)
{
	// Initialize instance-level function pointers
	// This loads functions like vkCreateDevice, vkEnumeratePhysicalDevices, etc.
	vk::detail::defaultDispatchLoaderDynamic.init(instance);
}

void InitializeVulkanDispatcherDevice(vk::Device device)
{
	// Initialize device-level function pointers
	// This loads all device-specific functions including extension functions
	// like vkCmdBindDescriptorBuffersEXT, vkGetDescriptorEXT, etc.
	vk::detail::defaultDispatchLoaderDynamic.init(device);
}

