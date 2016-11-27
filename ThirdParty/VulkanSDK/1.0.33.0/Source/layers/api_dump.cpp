
/* Copyright (c) 2015-2016 The Khronos Group Inc.
 * Copyright (c) 2015-2016 Valve Corporation
 * Copyright (c) 2015-2016 LunarG, Inc.
 * Copyright (C) 2015-2016 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Author: Lenny Komow <lenny@lunarg.com>
 */
 
/*
 * This file is generated from the Khronos Vulkan XML API Registry.
 */
 
#include "api_dump.h"
#include "vulkan/vulkan.h"

#include "vk_layer_table.h"
#include "vk_layer_extension_utils.h"
#include "vk_layer_utils.h"

using std::ostream;
using std::string;

ostream& dump_text_VkFenceCreateInfo(const VkFenceCreateInfo& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
ostream& dump_text_VkWin32SurfaceCreateInfoKHR(const VkWin32SurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
ostream& dump_text_VkAllocationCallbacks(const VkAllocationCallbacks& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkCommandBufferAllocateInfo(const VkCommandBufferAllocateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkImageFormatProperties(const VkImageFormatProperties& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkExtent3D(const VkExtent3D& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkApplicationInfo(const VkApplicationInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkClearDepthStencilValue(const VkClearDepthStencilValue& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPresentInfoKHR(const VkPresentInfoKHR& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSpecializationMapEntry(const VkSpecializationMapEntry& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSpecializationInfo(const VkSpecializationInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkClearAttachment(const VkClearAttachment& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkClearRect(const VkClearRect& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkCommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDescriptorPoolSize(const VkDescriptorPoolSize& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDebugMarkerMarkerInfoEXT(const VkDebugMarkerMarkerInfoEXT& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkCommandBufferBeginInfo(const VkCommandBufferBeginInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkGraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkImageResolve(const VkImageResolve& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDisplayPresentInfoKHR(const VkDisplayPresentInfoKHR& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDebugReportCallbackCreateInfoEXT(const VkDebugReportCallbackCreateInfoEXT& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSparseImageMemoryBind(const VkSparseImageMemoryBind& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkImageSubresource(const VkImageSubresource& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkOffset3D(const VkOffset3D& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkFormatProperties(const VkFormatProperties& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkVertexInputBindingDescription(const VkVertexInputBindingDescription& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDedicatedAllocationImageCreateInfoNV(const VkDedicatedAllocationImageCreateInfoNV& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_XLIB_KHR)
ostream& dump_text_VkXlibSurfaceCreateInfoKHR(const VkXlibSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_XLIB_KHR
ostream& dump_text_VkPhysicalDeviceFeatures(const VkPhysicalDeviceFeatures& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkBindSparseInfo(const VkBindSparseInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkMemoryBarrier(const VkMemoryBarrier& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkVertexInputAttributeDescription(const VkVertexInputAttributeDescription& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkBufferMemoryBarrier(const VkBufferMemoryBarrier& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkRect2D(const VkRect2D& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSparseMemoryBind(const VkSparseMemoryBind& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkImageMemoryBarrier(const VkImageMemoryBarrier& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkViewport(const VkViewport& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineCacheCreateInfo(const VkPipelineCacheCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPhysicalDeviceSparseProperties(const VkPhysicalDeviceSparseProperties& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkInstanceCreateInfo(const VkInstanceCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDisplayPropertiesKHR(const VkDisplayPropertiesKHR& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDisplayModeParametersKHR(const VkDisplayModeParametersKHR& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkShaderModuleCreateInfo(const VkShaderModuleCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineRasterizationStateRasterizationOrderAMD(const VkPipelineRasterizationStateRasterizationOrderAMD& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDisplayModePropertiesKHR(const VkDisplayModePropertiesKHR& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSparseImageFormatProperties(const VkSparseImageFormatProperties& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPhysicalDeviceLimits(const VkPhysicalDeviceLimits& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDedicatedAllocationBufferCreateInfoNV(const VkDedicatedAllocationBufferCreateInfoNV& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkExternalImageFormatPropertiesNV(const VkExternalImageFormatPropertiesNV& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPhysicalDeviceProperties(const VkPhysicalDeviceProperties& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDisplayPlaneCapabilitiesKHR(const VkDisplayPlaneCapabilitiesKHR& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDisplayPlanePropertiesKHR(const VkDisplayPlanePropertiesKHR& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkExternalMemoryImageCreateInfoNV(const VkExternalMemoryImageCreateInfoNV& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDedicatedAllocationMemoryAllocateInfoNV(const VkDedicatedAllocationMemoryAllocateInfoNV& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSparseImageMemoryRequirements(const VkSparseImageMemoryRequirements& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkExportMemoryAllocateInfoNV(const VkExportMemoryAllocateInfoNV& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
ostream& dump_text_VkImportMemoryWin32HandleInfoNV(const VkImportMemoryWin32HandleInfoNV& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
ostream& dump_text_VkLayerProperties(const VkLayerProperties& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
ostream& dump_text_VkExportMemoryWin32HandleInfoNV(const VkExportMemoryWin32HandleInfoNV& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
ostream& dump_text_VkMemoryRequirements(const VkMemoryRequirements& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkImageSubresourceRange(const VkImageSubresourceRange& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkBufferCreateInfo(const VkBufferCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkStencilOpState(const VkStencilOpState& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkRenderPassCreateInfo(const VkRenderPassCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
ostream& dump_text_VkWin32KeyedMutexAcquireReleaseInfoNV(const VkWin32KeyedMutexAcquireReleaseInfoNV& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WIN32_KHR
ostream& dump_text_VkExtensionProperties(const VkExtensionProperties& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkComponentMapping(const VkComponentMapping& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkImageViewCreateInfo(const VkImageViewCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineColorBlendStateCreateInfo(const VkPipelineColorBlendStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkAttachmentDescription(const VkAttachmentDescription& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSubpassDescription(const VkSubpassDescription& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkMappedMemoryRange(const VkMappedMemoryRange& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkRenderPassBeginInfo(const VkRenderPassBeginInfo& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_XCB_KHR)
ostream& dump_text_VkXcbSurfaceCreateInfoKHR(const VkXcbSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_XCB_KHR
ostream& dump_text_VkAttachmentReference(const VkAttachmentReference& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSubresourceLayout(const VkSubresourceLayout& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkComputePipelineCreateInfo(const VkComputePipelineCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSubpassDependency(const VkSubpassDependency& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkBufferCopy(const VkBufferCopy& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkValidationFlagsEXT(const VkValidationFlagsEXT& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDeviceCreateInfo(const VkDeviceCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkOffset2D(const VkOffset2D& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkExtent2D(const VkExtent2D& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineColorBlendAttachmentState(const VkPipelineColorBlendAttachmentState& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
ostream& dump_text_VkWaylandSurfaceCreateInfoKHR(const VkWaylandSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
ostream& dump_text_VkDispatchIndirectCommand(const VkDispatchIndirectCommand& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkImageSubresourceLayers(const VkImageSubresourceLayers& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkQueryPoolCreateInfo(const VkQueryPoolCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkImageCopy(const VkImageCopy& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPushConstantRange(const VkPushConstantRange& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkMemoryAllocateInfo(const VkMemoryAllocateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDeviceQueueCreateInfo(const VkDeviceQueueCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDrawIndexedIndirectCommand(const VkDrawIndexedIndirectCommand& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDrawIndirectCommand(const VkDrawIndirectCommand& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_MIR_KHR)
ostream& dump_text_VkMirSurfaceCreateInfoKHR(const VkMirSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_MIR_KHR
ostream& dump_text_VkMemoryHeap(const VkMemoryHeap& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkImageBlit(const VkImageBlit& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkImageCreateInfo(const VkImageCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSamplerCreateInfo(const VkSamplerCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkMemoryType(const VkMemoryType& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDescriptorBufferInfo(const VkDescriptorBufferInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkDescriptorImageInfo(const VkDescriptorImageInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkWriteDescriptorSet(const VkWriteDescriptorSet& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPhysicalDeviceMemoryProperties(const VkPhysicalDeviceMemoryProperties& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSurfaceCapabilitiesKHR(const VkSurfaceCapabilitiesKHR& object, const ApiDumpSettings& settings, int indents);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
ostream& dump_text_VkAndroidSurfaceCreateInfoKHR(const VkAndroidSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents);
#endif // VK_USE_PLATFORM_ANDROID_KHR
ostream& dump_text_VkEventCreateInfo(const VkEventCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkCopyDescriptorSet(const VkCopyDescriptorSet& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkBufferImageCopy(const VkBufferImageCopy& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkBufferViewCreateInfo(const VkBufferViewCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSemaphoreCreateInfo(const VkSemaphoreCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSubmitInfo(const VkSubmitInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkQueueFamilyProperties(const VkQueueFamilyProperties& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkCommandPoolCreateInfo(const VkCommandPoolCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkSurfaceFormatKHR(const VkSurfaceFormatKHR& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkPipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkFramebufferCreateInfo(const VkFramebufferCreateInfo& object, const ApiDumpSettings& settings, int indents);


ostream& dump_text_VkClearColorValue(const VkClearColorValue& object, const ApiDumpSettings& settings, int indents);
ostream& dump_text_VkClearValue(const VkClearValue& object, const ApiDumpSettings& settings, int indents);

//=========================== Type Implementations ==========================//

inline ostream& dump_text_uint32_t(uint32_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_int32_t(int32_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_float(float object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_uint8_t(uint8_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << (uint32_t) object;
}
inline ostream& dump_text_uint64_t(uint64_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_char(char object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_size_t(size_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}

//========================= Basetype Implementations ========================//

inline ostream& dump_text_VkSampleMask(VkSampleMask object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkFlags(VkFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkDeviceSize(VkDeviceSize object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkBool32(VkBool32 object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}

//======================= System Type Implementations =======================//

#if defined(VK_USE_PLATFORM_XCB_KHR)
inline ostream& dump_text_xcb_connection_t(const xcb_connection_t* object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XCB_KHR
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline ostream& dump_text_HINSTANCE(const HINSTANCE object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_XCB_KHR)
inline ostream& dump_text_xcb_visualid_t(const xcb_visualid_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XCB_KHR
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline ostream& dump_text_HANDLE(const HANDLE object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_MIR_KHR)
inline ostream& dump_text_MirConnection(const MirConnection object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_MIR_KHR
#if defined(VK_USE_PLATFORM_MIR_KHR)
inline ostream& dump_text_MirSurface(const MirSurface object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_MIR_KHR
#if defined(VK_USE_PLATFORM_XLIB_KHR)
inline ostream& dump_text_VisualID(const VisualID object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XLIB_KHR
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline ostream& dump_text_HWND(const HWND object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline ostream& dump_text_SECURITY_ATTRIBUTES(const SECURITY_ATTRIBUTES* object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_XCB_KHR)
inline ostream& dump_text_xcb_window_t(const xcb_window_t object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XCB_KHR
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline ostream& dump_text_DWORD(const DWORD object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
inline ostream& dump_text_ANativeWindow(const ANativeWindow* object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR
#if defined(VK_USE_PLATFORM_XLIB_KHR)
inline ostream& dump_text_Display(const Display* object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XLIB_KHR
#if defined(VK_USE_PLATFORM_XLIB_KHR)
inline ostream& dump_text_Window(const Window object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XLIB_KHR
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
inline ostream& dump_text_wl_display(const wl_display object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
inline ostream& dump_text_wl_surface(const wl_surface object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

//========================== Handle Implementations =========================//

inline ostream& dump_text_VkDescriptorSetLayout(const VkDescriptorSetLayout object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkDescriptorPool(const VkDescriptorPool object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkDebugReportCallbackEXT(const VkDebugReportCallbackEXT object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkDescriptorSet(const VkDescriptorSet object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkRenderPass(const VkRenderPass object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkCommandBuffer(const VkCommandBuffer object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkBuffer(const VkBuffer object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkPipelineCache(const VkPipelineCache object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkQueryPool(const VkQueryPool object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkPipeline(const VkPipeline object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkImage(const VkImage object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkSurfaceKHR(const VkSurfaceKHR object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkPhysicalDevice(const VkPhysicalDevice object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkFence(const VkFence object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkEvent(const VkEvent object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkBufferView(const VkBufferView object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkDisplayKHR(const VkDisplayKHR object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkShaderModule(const VkShaderModule object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkInstance(const VkInstance object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkSampler(const VkSampler object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkSemaphore(const VkSemaphore object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkSwapchainKHR(const VkSwapchainKHR object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkDisplayModeKHR(const VkDisplayModeKHR object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkQueue(const VkQueue object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkCommandPool(const VkCommandPool object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkDevice(const VkDevice object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkPipelineLayout(const VkPipelineLayout object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkFramebuffer(const VkFramebuffer object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkDeviceMemory(const VkDeviceMemory object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_VkImageView(const VkImageView object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}

//=========================== Enum Implementations ==========================//

ostream& dump_text_VkPresentModeKHR(VkPresentModeKHR object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_PRESENT_MODE_IMMEDIATE_KHR (";
        break;
    case 1:
        settings.stream() << "VK_PRESENT_MODE_MAILBOX_KHR (";
        break;
    case 2:
        settings.stream() << "VK_PRESENT_MODE_FIFO_KHR (";
        break;
    case 3:
        settings.stream() << "VK_PRESENT_MODE_FIFO_RELAXED_KHR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkCompareOp(VkCompareOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_COMPARE_OP_NEVER (";
        break;
    case 1:
        settings.stream() << "VK_COMPARE_OP_LESS (";
        break;
    case 2:
        settings.stream() << "VK_COMPARE_OP_EQUAL (";
        break;
    case 3:
        settings.stream() << "VK_COMPARE_OP_LESS_OR_EQUAL (";
        break;
    case 4:
        settings.stream() << "VK_COMPARE_OP_GREATER (";
        break;
    case 5:
        settings.stream() << "VK_COMPARE_OP_NOT_EQUAL (";
        break;
    case 6:
        settings.stream() << "VK_COMPARE_OP_GREATER_OR_EQUAL (";
        break;
    case 7:
        settings.stream() << "VK_COMPARE_OP_ALWAYS (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkBlendFactor(VkBlendFactor object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_BLEND_FACTOR_ZERO (";
        break;
    case 1:
        settings.stream() << "VK_BLEND_FACTOR_ONE (";
        break;
    case 2:
        settings.stream() << "VK_BLEND_FACTOR_SRC_COLOR (";
        break;
    case 3:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR (";
        break;
    case 4:
        settings.stream() << "VK_BLEND_FACTOR_DST_COLOR (";
        break;
    case 5:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR (";
        break;
    case 6:
        settings.stream() << "VK_BLEND_FACTOR_SRC_ALPHA (";
        break;
    case 7:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA (";
        break;
    case 8:
        settings.stream() << "VK_BLEND_FACTOR_DST_ALPHA (";
        break;
    case 9:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA (";
        break;
    case 10:
        settings.stream() << "VK_BLEND_FACTOR_CONSTANT_COLOR (";
        break;
    case 11:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR (";
        break;
    case 12:
        settings.stream() << "VK_BLEND_FACTOR_CONSTANT_ALPHA (";
        break;
    case 13:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA (";
        break;
    case 14:
        settings.stream() << "VK_BLEND_FACTOR_SRC_ALPHA_SATURATE (";
        break;
    case 15:
        settings.stream() << "VK_BLEND_FACTOR_SRC1_COLOR (";
        break;
    case 16:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR (";
        break;
    case 17:
        settings.stream() << "VK_BLEND_FACTOR_SRC1_ALPHA (";
        break;
    case 18:
        settings.stream() << "VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkBlendOp(VkBlendOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_BLEND_OP_ADD (";
        break;
    case 1:
        settings.stream() << "VK_BLEND_OP_SUBTRACT (";
        break;
    case 2:
        settings.stream() << "VK_BLEND_OP_REVERSE_SUBTRACT (";
        break;
    case 3:
        settings.stream() << "VK_BLEND_OP_MIN (";
        break;
    case 4:
        settings.stream() << "VK_BLEND_OP_MAX (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkComponentSwizzle(VkComponentSwizzle object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_COMPONENT_SWIZZLE_IDENTITY (";
        break;
    case 1:
        settings.stream() << "VK_COMPONENT_SWIZZLE_ZERO (";
        break;
    case 2:
        settings.stream() << "VK_COMPONENT_SWIZZLE_ONE (";
        break;
    case 3:
        settings.stream() << "VK_COMPONENT_SWIZZLE_R (";
        break;
    case 4:
        settings.stream() << "VK_COMPONENT_SWIZZLE_G (";
        break;
    case 5:
        settings.stream() << "VK_COMPONENT_SWIZZLE_B (";
        break;
    case 6:
        settings.stream() << "VK_COMPONENT_SWIZZLE_A (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkCommandBufferLevel(VkCommandBufferLevel object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_COMMAND_BUFFER_LEVEL_PRIMARY (";
        break;
    case 1:
        settings.stream() << "VK_COMMAND_BUFFER_LEVEL_SECONDARY (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkFormat(VkFormat object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_FORMAT_UNDEFINED (";
        break;
    case 1:
        settings.stream() << "VK_FORMAT_R4G4_UNORM_PACK8 (";
        break;
    case 2:
        settings.stream() << "VK_FORMAT_R4G4B4A4_UNORM_PACK16 (";
        break;
    case 3:
        settings.stream() << "VK_FORMAT_B4G4R4A4_UNORM_PACK16 (";
        break;
    case 4:
        settings.stream() << "VK_FORMAT_R5G6B5_UNORM_PACK16 (";
        break;
    case 5:
        settings.stream() << "VK_FORMAT_B5G6R5_UNORM_PACK16 (";
        break;
    case 6:
        settings.stream() << "VK_FORMAT_R5G5B5A1_UNORM_PACK16 (";
        break;
    case 7:
        settings.stream() << "VK_FORMAT_B5G5R5A1_UNORM_PACK16 (";
        break;
    case 8:
        settings.stream() << "VK_FORMAT_A1R5G5B5_UNORM_PACK16 (";
        break;
    case 9:
        settings.stream() << "VK_FORMAT_R8_UNORM (";
        break;
    case 10:
        settings.stream() << "VK_FORMAT_R8_SNORM (";
        break;
    case 11:
        settings.stream() << "VK_FORMAT_R8_USCALED (";
        break;
    case 12:
        settings.stream() << "VK_FORMAT_R8_SSCALED (";
        break;
    case 13:
        settings.stream() << "VK_FORMAT_R8_UINT (";
        break;
    case 14:
        settings.stream() << "VK_FORMAT_R8_SINT (";
        break;
    case 15:
        settings.stream() << "VK_FORMAT_R8_SRGB (";
        break;
    case 16:
        settings.stream() << "VK_FORMAT_R8G8_UNORM (";
        break;
    case 17:
        settings.stream() << "VK_FORMAT_R8G8_SNORM (";
        break;
    case 18:
        settings.stream() << "VK_FORMAT_R8G8_USCALED (";
        break;
    case 19:
        settings.stream() << "VK_FORMAT_R8G8_SSCALED (";
        break;
    case 20:
        settings.stream() << "VK_FORMAT_R8G8_UINT (";
        break;
    case 21:
        settings.stream() << "VK_FORMAT_R8G8_SINT (";
        break;
    case 22:
        settings.stream() << "VK_FORMAT_R8G8_SRGB (";
        break;
    case 23:
        settings.stream() << "VK_FORMAT_R8G8B8_UNORM (";
        break;
    case 24:
        settings.stream() << "VK_FORMAT_R8G8B8_SNORM (";
        break;
    case 25:
        settings.stream() << "VK_FORMAT_R8G8B8_USCALED (";
        break;
    case 26:
        settings.stream() << "VK_FORMAT_R8G8B8_SSCALED (";
        break;
    case 27:
        settings.stream() << "VK_FORMAT_R8G8B8_UINT (";
        break;
    case 28:
        settings.stream() << "VK_FORMAT_R8G8B8_SINT (";
        break;
    case 29:
        settings.stream() << "VK_FORMAT_R8G8B8_SRGB (";
        break;
    case 30:
        settings.stream() << "VK_FORMAT_B8G8R8_UNORM (";
        break;
    case 31:
        settings.stream() << "VK_FORMAT_B8G8R8_SNORM (";
        break;
    case 32:
        settings.stream() << "VK_FORMAT_B8G8R8_USCALED (";
        break;
    case 33:
        settings.stream() << "VK_FORMAT_B8G8R8_SSCALED (";
        break;
    case 34:
        settings.stream() << "VK_FORMAT_B8G8R8_UINT (";
        break;
    case 35:
        settings.stream() << "VK_FORMAT_B8G8R8_SINT (";
        break;
    case 36:
        settings.stream() << "VK_FORMAT_B8G8R8_SRGB (";
        break;
    case 37:
        settings.stream() << "VK_FORMAT_R8G8B8A8_UNORM (";
        break;
    case 38:
        settings.stream() << "VK_FORMAT_R8G8B8A8_SNORM (";
        break;
    case 39:
        settings.stream() << "VK_FORMAT_R8G8B8A8_USCALED (";
        break;
    case 40:
        settings.stream() << "VK_FORMAT_R8G8B8A8_SSCALED (";
        break;
    case 41:
        settings.stream() << "VK_FORMAT_R8G8B8A8_UINT (";
        break;
    case 42:
        settings.stream() << "VK_FORMAT_R8G8B8A8_SINT (";
        break;
    case 43:
        settings.stream() << "VK_FORMAT_R8G8B8A8_SRGB (";
        break;
    case 44:
        settings.stream() << "VK_FORMAT_B8G8R8A8_UNORM (";
        break;
    case 45:
        settings.stream() << "VK_FORMAT_B8G8R8A8_SNORM (";
        break;
    case 46:
        settings.stream() << "VK_FORMAT_B8G8R8A8_USCALED (";
        break;
    case 47:
        settings.stream() << "VK_FORMAT_B8G8R8A8_SSCALED (";
        break;
    case 48:
        settings.stream() << "VK_FORMAT_B8G8R8A8_UINT (";
        break;
    case 49:
        settings.stream() << "VK_FORMAT_B8G8R8A8_SINT (";
        break;
    case 50:
        settings.stream() << "VK_FORMAT_B8G8R8A8_SRGB (";
        break;
    case 51:
        settings.stream() << "VK_FORMAT_A8B8G8R8_UNORM_PACK32 (";
        break;
    case 52:
        settings.stream() << "VK_FORMAT_A8B8G8R8_SNORM_PACK32 (";
        break;
    case 53:
        settings.stream() << "VK_FORMAT_A8B8G8R8_USCALED_PACK32 (";
        break;
    case 54:
        settings.stream() << "VK_FORMAT_A8B8G8R8_SSCALED_PACK32 (";
        break;
    case 55:
        settings.stream() << "VK_FORMAT_A8B8G8R8_UINT_PACK32 (";
        break;
    case 56:
        settings.stream() << "VK_FORMAT_A8B8G8R8_SINT_PACK32 (";
        break;
    case 57:
        settings.stream() << "VK_FORMAT_A8B8G8R8_SRGB_PACK32 (";
        break;
    case 58:
        settings.stream() << "VK_FORMAT_A2R10G10B10_UNORM_PACK32 (";
        break;
    case 59:
        settings.stream() << "VK_FORMAT_A2R10G10B10_SNORM_PACK32 (";
        break;
    case 60:
        settings.stream() << "VK_FORMAT_A2R10G10B10_USCALED_PACK32 (";
        break;
    case 61:
        settings.stream() << "VK_FORMAT_A2R10G10B10_SSCALED_PACK32 (";
        break;
    case 62:
        settings.stream() << "VK_FORMAT_A2R10G10B10_UINT_PACK32 (";
        break;
    case 63:
        settings.stream() << "VK_FORMAT_A2R10G10B10_SINT_PACK32 (";
        break;
    case 64:
        settings.stream() << "VK_FORMAT_A2B10G10R10_UNORM_PACK32 (";
        break;
    case 65:
        settings.stream() << "VK_FORMAT_A2B10G10R10_SNORM_PACK32 (";
        break;
    case 66:
        settings.stream() << "VK_FORMAT_A2B10G10R10_USCALED_PACK32 (";
        break;
    case 67:
        settings.stream() << "VK_FORMAT_A2B10G10R10_SSCALED_PACK32 (";
        break;
    case 68:
        settings.stream() << "VK_FORMAT_A2B10G10R10_UINT_PACK32 (";
        break;
    case 69:
        settings.stream() << "VK_FORMAT_A2B10G10R10_SINT_PACK32 (";
        break;
    case 70:
        settings.stream() << "VK_FORMAT_R16_UNORM (";
        break;
    case 71:
        settings.stream() << "VK_FORMAT_R16_SNORM (";
        break;
    case 72:
        settings.stream() << "VK_FORMAT_R16_USCALED (";
        break;
    case 73:
        settings.stream() << "VK_FORMAT_R16_SSCALED (";
        break;
    case 74:
        settings.stream() << "VK_FORMAT_R16_UINT (";
        break;
    case 75:
        settings.stream() << "VK_FORMAT_R16_SINT (";
        break;
    case 76:
        settings.stream() << "VK_FORMAT_R16_SFLOAT (";
        break;
    case 77:
        settings.stream() << "VK_FORMAT_R16G16_UNORM (";
        break;
    case 78:
        settings.stream() << "VK_FORMAT_R16G16_SNORM (";
        break;
    case 79:
        settings.stream() << "VK_FORMAT_R16G16_USCALED (";
        break;
    case 80:
        settings.stream() << "VK_FORMAT_R16G16_SSCALED (";
        break;
    case 81:
        settings.stream() << "VK_FORMAT_R16G16_UINT (";
        break;
    case 82:
        settings.stream() << "VK_FORMAT_R16G16_SINT (";
        break;
    case 83:
        settings.stream() << "VK_FORMAT_R16G16_SFLOAT (";
        break;
    case 84:
        settings.stream() << "VK_FORMAT_R16G16B16_UNORM (";
        break;
    case 85:
        settings.stream() << "VK_FORMAT_R16G16B16_SNORM (";
        break;
    case 86:
        settings.stream() << "VK_FORMAT_R16G16B16_USCALED (";
        break;
    case 87:
        settings.stream() << "VK_FORMAT_R16G16B16_SSCALED (";
        break;
    case 88:
        settings.stream() << "VK_FORMAT_R16G16B16_UINT (";
        break;
    case 89:
        settings.stream() << "VK_FORMAT_R16G16B16_SINT (";
        break;
    case 90:
        settings.stream() << "VK_FORMAT_R16G16B16_SFLOAT (";
        break;
    case 91:
        settings.stream() << "VK_FORMAT_R16G16B16A16_UNORM (";
        break;
    case 92:
        settings.stream() << "VK_FORMAT_R16G16B16A16_SNORM (";
        break;
    case 93:
        settings.stream() << "VK_FORMAT_R16G16B16A16_USCALED (";
        break;
    case 94:
        settings.stream() << "VK_FORMAT_R16G16B16A16_SSCALED (";
        break;
    case 95:
        settings.stream() << "VK_FORMAT_R16G16B16A16_UINT (";
        break;
    case 96:
        settings.stream() << "VK_FORMAT_R16G16B16A16_SINT (";
        break;
    case 97:
        settings.stream() << "VK_FORMAT_R16G16B16A16_SFLOAT (";
        break;
    case 98:
        settings.stream() << "VK_FORMAT_R32_UINT (";
        break;
    case 99:
        settings.stream() << "VK_FORMAT_R32_SINT (";
        break;
    case 100:
        settings.stream() << "VK_FORMAT_R32_SFLOAT (";
        break;
    case 101:
        settings.stream() << "VK_FORMAT_R32G32_UINT (";
        break;
    case 102:
        settings.stream() << "VK_FORMAT_R32G32_SINT (";
        break;
    case 103:
        settings.stream() << "VK_FORMAT_R32G32_SFLOAT (";
        break;
    case 104:
        settings.stream() << "VK_FORMAT_R32G32B32_UINT (";
        break;
    case 105:
        settings.stream() << "VK_FORMAT_R32G32B32_SINT (";
        break;
    case 106:
        settings.stream() << "VK_FORMAT_R32G32B32_SFLOAT (";
        break;
    case 107:
        settings.stream() << "VK_FORMAT_R32G32B32A32_UINT (";
        break;
    case 108:
        settings.stream() << "VK_FORMAT_R32G32B32A32_SINT (";
        break;
    case 109:
        settings.stream() << "VK_FORMAT_R32G32B32A32_SFLOAT (";
        break;
    case 110:
        settings.stream() << "VK_FORMAT_R64_UINT (";
        break;
    case 111:
        settings.stream() << "VK_FORMAT_R64_SINT (";
        break;
    case 112:
        settings.stream() << "VK_FORMAT_R64_SFLOAT (";
        break;
    case 113:
        settings.stream() << "VK_FORMAT_R64G64_UINT (";
        break;
    case 114:
        settings.stream() << "VK_FORMAT_R64G64_SINT (";
        break;
    case 115:
        settings.stream() << "VK_FORMAT_R64G64_SFLOAT (";
        break;
    case 116:
        settings.stream() << "VK_FORMAT_R64G64B64_UINT (";
        break;
    case 117:
        settings.stream() << "VK_FORMAT_R64G64B64_SINT (";
        break;
    case 118:
        settings.stream() << "VK_FORMAT_R64G64B64_SFLOAT (";
        break;
    case 119:
        settings.stream() << "VK_FORMAT_R64G64B64A64_UINT (";
        break;
    case 120:
        settings.stream() << "VK_FORMAT_R64G64B64A64_SINT (";
        break;
    case 121:
        settings.stream() << "VK_FORMAT_R64G64B64A64_SFLOAT (";
        break;
    case 122:
        settings.stream() << "VK_FORMAT_B10G11R11_UFLOAT_PACK32 (";
        break;
    case 123:
        settings.stream() << "VK_FORMAT_E5B9G9R9_UFLOAT_PACK32 (";
        break;
    case 124:
        settings.stream() << "VK_FORMAT_D16_UNORM (";
        break;
    case 125:
        settings.stream() << "VK_FORMAT_X8_D24_UNORM_PACK32 (";
        break;
    case 126:
        settings.stream() << "VK_FORMAT_D32_SFLOAT (";
        break;
    case 127:
        settings.stream() << "VK_FORMAT_S8_UINT (";
        break;
    case 128:
        settings.stream() << "VK_FORMAT_D16_UNORM_S8_UINT (";
        break;
    case 129:
        settings.stream() << "VK_FORMAT_D24_UNORM_S8_UINT (";
        break;
    case 130:
        settings.stream() << "VK_FORMAT_D32_SFLOAT_S8_UINT (";
        break;
    case 131:
        settings.stream() << "VK_FORMAT_BC1_RGB_UNORM_BLOCK (";
        break;
    case 132:
        settings.stream() << "VK_FORMAT_BC1_RGB_SRGB_BLOCK (";
        break;
    case 133:
        settings.stream() << "VK_FORMAT_BC1_RGBA_UNORM_BLOCK (";
        break;
    case 134:
        settings.stream() << "VK_FORMAT_BC1_RGBA_SRGB_BLOCK (";
        break;
    case 135:
        settings.stream() << "VK_FORMAT_BC2_UNORM_BLOCK (";
        break;
    case 136:
        settings.stream() << "VK_FORMAT_BC2_SRGB_BLOCK (";
        break;
    case 137:
        settings.stream() << "VK_FORMAT_BC3_UNORM_BLOCK (";
        break;
    case 138:
        settings.stream() << "VK_FORMAT_BC3_SRGB_BLOCK (";
        break;
    case 139:
        settings.stream() << "VK_FORMAT_BC4_UNORM_BLOCK (";
        break;
    case 140:
        settings.stream() << "VK_FORMAT_BC4_SNORM_BLOCK (";
        break;
    case 141:
        settings.stream() << "VK_FORMAT_BC5_UNORM_BLOCK (";
        break;
    case 142:
        settings.stream() << "VK_FORMAT_BC5_SNORM_BLOCK (";
        break;
    case 143:
        settings.stream() << "VK_FORMAT_BC6H_UFLOAT_BLOCK (";
        break;
    case 144:
        settings.stream() << "VK_FORMAT_BC6H_SFLOAT_BLOCK (";
        break;
    case 145:
        settings.stream() << "VK_FORMAT_BC7_UNORM_BLOCK (";
        break;
    case 146:
        settings.stream() << "VK_FORMAT_BC7_SRGB_BLOCK (";
        break;
    case 147:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK (";
        break;
    case 148:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK (";
        break;
    case 149:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK (";
        break;
    case 150:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK (";
        break;
    case 151:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK (";
        break;
    case 152:
        settings.stream() << "VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK (";
        break;
    case 153:
        settings.stream() << "VK_FORMAT_EAC_R11_UNORM_BLOCK (";
        break;
    case 154:
        settings.stream() << "VK_FORMAT_EAC_R11_SNORM_BLOCK (";
        break;
    case 155:
        settings.stream() << "VK_FORMAT_EAC_R11G11_UNORM_BLOCK (";
        break;
    case 156:
        settings.stream() << "VK_FORMAT_EAC_R11G11_SNORM_BLOCK (";
        break;
    case 157:
        settings.stream() << "VK_FORMAT_ASTC_4x4_UNORM_BLOCK (";
        break;
    case 158:
        settings.stream() << "VK_FORMAT_ASTC_4x4_SRGB_BLOCK (";
        break;
    case 159:
        settings.stream() << "VK_FORMAT_ASTC_5x4_UNORM_BLOCK (";
        break;
    case 160:
        settings.stream() << "VK_FORMAT_ASTC_5x4_SRGB_BLOCK (";
        break;
    case 161:
        settings.stream() << "VK_FORMAT_ASTC_5x5_UNORM_BLOCK (";
        break;
    case 162:
        settings.stream() << "VK_FORMAT_ASTC_5x5_SRGB_BLOCK (";
        break;
    case 163:
        settings.stream() << "VK_FORMAT_ASTC_6x5_UNORM_BLOCK (";
        break;
    case 164:
        settings.stream() << "VK_FORMAT_ASTC_6x5_SRGB_BLOCK (";
        break;
    case 165:
        settings.stream() << "VK_FORMAT_ASTC_6x6_UNORM_BLOCK (";
        break;
    case 166:
        settings.stream() << "VK_FORMAT_ASTC_6x6_SRGB_BLOCK (";
        break;
    case 167:
        settings.stream() << "VK_FORMAT_ASTC_8x5_UNORM_BLOCK (";
        break;
    case 168:
        settings.stream() << "VK_FORMAT_ASTC_8x5_SRGB_BLOCK (";
        break;
    case 169:
        settings.stream() << "VK_FORMAT_ASTC_8x6_UNORM_BLOCK (";
        break;
    case 170:
        settings.stream() << "VK_FORMAT_ASTC_8x6_SRGB_BLOCK (";
        break;
    case 171:
        settings.stream() << "VK_FORMAT_ASTC_8x8_UNORM_BLOCK (";
        break;
    case 172:
        settings.stream() << "VK_FORMAT_ASTC_8x8_SRGB_BLOCK (";
        break;
    case 173:
        settings.stream() << "VK_FORMAT_ASTC_10x5_UNORM_BLOCK (";
        break;
    case 174:
        settings.stream() << "VK_FORMAT_ASTC_10x5_SRGB_BLOCK (";
        break;
    case 175:
        settings.stream() << "VK_FORMAT_ASTC_10x6_UNORM_BLOCK (";
        break;
    case 176:
        settings.stream() << "VK_FORMAT_ASTC_10x6_SRGB_BLOCK (";
        break;
    case 177:
        settings.stream() << "VK_FORMAT_ASTC_10x8_UNORM_BLOCK (";
        break;
    case 178:
        settings.stream() << "VK_FORMAT_ASTC_10x8_SRGB_BLOCK (";
        break;
    case 179:
        settings.stream() << "VK_FORMAT_ASTC_10x10_UNORM_BLOCK (";
        break;
    case 180:
        settings.stream() << "VK_FORMAT_ASTC_10x10_SRGB_BLOCK (";
        break;
    case 181:
        settings.stream() << "VK_FORMAT_ASTC_12x10_UNORM_BLOCK (";
        break;
    case 182:
        settings.stream() << "VK_FORMAT_ASTC_12x10_SRGB_BLOCK (";
        break;
    case 183:
        settings.stream() << "VK_FORMAT_ASTC_12x12_UNORM_BLOCK (";
        break;
    case 184:
        settings.stream() << "VK_FORMAT_ASTC_12x12_SRGB_BLOCK (";
        break;
    case 1000054007:
        settings.stream() << "VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkDescriptorType(VkDescriptorType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DESCRIPTOR_TYPE_SAMPLER (";
        break;
    case 1:
        settings.stream() << "VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER (";
        break;
    case 2:
        settings.stream() << "VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE (";
        break;
    case 3:
        settings.stream() << "VK_DESCRIPTOR_TYPE_STORAGE_IMAGE (";
        break;
    case 4:
        settings.stream() << "VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER (";
        break;
    case 5:
        settings.stream() << "VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER (";
        break;
    case 6:
        settings.stream() << "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER (";
        break;
    case 7:
        settings.stream() << "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER (";
        break;
    case 8:
        settings.stream() << "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC (";
        break;
    case 9:
        settings.stream() << "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC (";
        break;
    case 10:
        settings.stream() << "VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkRasterizationOrderAMD(VkRasterizationOrderAMD object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_RASTERIZATION_ORDER_STRICT_AMD (";
        break;
    case 1:
        settings.stream() << "VK_RASTERIZATION_ORDER_RELAXED_AMD (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkStencilOp(VkStencilOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_STENCIL_OP_KEEP (";
        break;
    case 1:
        settings.stream() << "VK_STENCIL_OP_ZERO (";
        break;
    case 2:
        settings.stream() << "VK_STENCIL_OP_REPLACE (";
        break;
    case 3:
        settings.stream() << "VK_STENCIL_OP_INCREMENT_AND_CLAMP (";
        break;
    case 4:
        settings.stream() << "VK_STENCIL_OP_DECREMENT_AND_CLAMP (";
        break;
    case 5:
        settings.stream() << "VK_STENCIL_OP_INVERT (";
        break;
    case 6:
        settings.stream() << "VK_STENCIL_OP_INCREMENT_AND_WRAP (";
        break;
    case 7:
        settings.stream() << "VK_STENCIL_OP_DECREMENT_AND_WRAP (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkStructureType(VkStructureType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_STRUCTURE_TYPE_APPLICATION_INFO (";
        break;
    case 1:
        settings.stream() << "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO (";
        break;
    case 2:
        settings.stream() << "VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO (";
        break;
    case 3:
        settings.stream() << "VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO (";
        break;
    case 4:
        settings.stream() << "VK_STRUCTURE_TYPE_SUBMIT_INFO (";
        break;
    case 5:
        settings.stream() << "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO (";
        break;
    case 6:
        settings.stream() << "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE (";
        break;
    case 7:
        settings.stream() << "VK_STRUCTURE_TYPE_BIND_SPARSE_INFO (";
        break;
    case 8:
        settings.stream() << "VK_STRUCTURE_TYPE_FENCE_CREATE_INFO (";
        break;
    case 9:
        settings.stream() << "VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO (";
        break;
    case 10:
        settings.stream() << "VK_STRUCTURE_TYPE_EVENT_CREATE_INFO (";
        break;
    case 11:
        settings.stream() << "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO (";
        break;
    case 12:
        settings.stream() << "VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO (";
        break;
    case 13:
        settings.stream() << "VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO (";
        break;
    case 14:
        settings.stream() << "VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO (";
        break;
    case 15:
        settings.stream() << "VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO (";
        break;
    case 16:
        settings.stream() << "VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO (";
        break;
    case 17:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO (";
        break;
    case 18:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO (";
        break;
    case 19:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO (";
        break;
    case 20:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO (";
        break;
    case 21:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO (";
        break;
    case 22:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO (";
        break;
    case 23:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO (";
        break;
    case 24:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO (";
        break;
    case 25:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO (";
        break;
    case 26:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO (";
        break;
    case 27:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO (";
        break;
    case 28:
        settings.stream() << "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO (";
        break;
    case 29:
        settings.stream() << "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO (";
        break;
    case 30:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO (";
        break;
    case 31:
        settings.stream() << "VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO (";
        break;
    case 32:
        settings.stream() << "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO (";
        break;
    case 33:
        settings.stream() << "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO (";
        break;
    case 34:
        settings.stream() << "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO (";
        break;
    case 35:
        settings.stream() << "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET (";
        break;
    case 36:
        settings.stream() << "VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET (";
        break;
    case 37:
        settings.stream() << "VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO (";
        break;
    case 38:
        settings.stream() << "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO (";
        break;
    case 39:
        settings.stream() << "VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO (";
        break;
    case 40:
        settings.stream() << "VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO (";
        break;
    case 41:
        settings.stream() << "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO (";
        break;
    case 42:
        settings.stream() << "VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO (";
        break;
    case 43:
        settings.stream() << "VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO (";
        break;
    case 44:
        settings.stream() << "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER (";
        break;
    case 45:
        settings.stream() << "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER (";
        break;
    case 46:
        settings.stream() << "VK_STRUCTURE_TYPE_MEMORY_BARRIER (";
        break;
    case 47:
        settings.stream() << "VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO (";
        break;
    case 48:
        settings.stream() << "VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO (";
        break;
    case 1000008000:
        settings.stream() << "VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR (";
        break;
    case 1000007000:
        settings.stream() << "VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR (";
        break;
    case 1000009000:
        settings.stream() << "VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR (";
        break;
    case 1000006000:
        settings.stream() << "VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR (";
        break;
    case 1000022002:
        settings.stream() << "VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT (";
        break;
    case 1000018000:
        settings.stream() << "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD (";
        break;
    case 1000003000:
        settings.stream() << "VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR (";
        break;
    case 1000011000:
        settings.stream() << "VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT (";
        break;
    case 1000026002:
        settings.stream() << "VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV (";
        break;
    case 1000056001:
        settings.stream() << "VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV (";
        break;
    case 1000057001:
        settings.stream() << "VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV (";
        break;
    case 1000058000:
        settings.stream() << "VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV (";
        break;
    case 1000001001:
        settings.stream() << "VK_STRUCTURE_TYPE_PRESENT_INFO_KHR (";
        break;
    case 1000061000:
        settings.stream() << "VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT (";
        break;
    case 1000002001:
        settings.stream() << "VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR (";
        break;
    case 1000004000:
        settings.stream() << "VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR (";
        break;
    case 1000005000:
        settings.stream() << "VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkDebugReportObjectTypeEXT(VkDebugReportObjectTypeEXT object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT (";
        break;
    case 1:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT (";
        break;
    case 2:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT (";
        break;
    case 3:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT (";
        break;
    case 4:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT (";
        break;
    case 5:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT (";
        break;
    case 6:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT (";
        break;
    case 7:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT (";
        break;
    case 8:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT (";
        break;
    case 9:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT (";
        break;
    case 10:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT (";
        break;
    case 11:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT (";
        break;
    case 12:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT (";
        break;
    case 13:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT (";
        break;
    case 14:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT (";
        break;
    case 15:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT (";
        break;
    case 16:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT (";
        break;
    case 17:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT (";
        break;
    case 18:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT (";
        break;
    case 19:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT (";
        break;
    case 20:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT (";
        break;
    case 21:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT (";
        break;
    case 22:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT (";
        break;
    case 23:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT (";
        break;
    case 24:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT (";
        break;
    case 25:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT (";
        break;
    case 26:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT (";
        break;
    case 27:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT (";
        break;
    case 28:
        settings.stream() << "VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkAttachmentLoadOp(VkAttachmentLoadOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_ATTACHMENT_LOAD_OP_LOAD (";
        break;
    case 1:
        settings.stream() << "VK_ATTACHMENT_LOAD_OP_CLEAR (";
        break;
    case 2:
        settings.stream() << "VK_ATTACHMENT_LOAD_OP_DONT_CARE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkImageViewType(VkImageViewType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_1D (";
        break;
    case 1:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_2D (";
        break;
    case 2:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_3D (";
        break;
    case 3:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_CUBE (";
        break;
    case 4:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_1D_ARRAY (";
        break;
    case 5:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_2D_ARRAY (";
        break;
    case 6:
        settings.stream() << "VK_IMAGE_VIEW_TYPE_CUBE_ARRAY (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkFrontFace(VkFrontFace object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_FRONT_FACE_COUNTER_CLOCKWISE (";
        break;
    case 1:
        settings.stream() << "VK_FRONT_FACE_CLOCKWISE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkFilter(VkFilter object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_FILTER_NEAREST (";
        break;
    case 1:
        settings.stream() << "VK_FILTER_LINEAR (";
        break;
    case 1000015000:
        settings.stream() << "VK_FILTER_CUBIC_IMG (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkAttachmentStoreOp(VkAttachmentStoreOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_ATTACHMENT_STORE_OP_STORE (";
        break;
    case 1:
        settings.stream() << "VK_ATTACHMENT_STORE_OP_DONT_CARE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkDebugReportErrorEXT(VkDebugReportErrorEXT object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DEBUG_REPORT_ERROR_NONE_EXT (";
        break;
    case 1:
        settings.stream() << "VK_DEBUG_REPORT_ERROR_CALLBACK_REF_EXT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkSamplerMipmapMode(VkSamplerMipmapMode object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SAMPLER_MIPMAP_MODE_NEAREST (";
        break;
    case 1:
        settings.stream() << "VK_SAMPLER_MIPMAP_MODE_LINEAR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkSamplerAddressMode(VkSamplerAddressMode object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SAMPLER_ADDRESS_MODE_REPEAT (";
        break;
    case 1:
        settings.stream() << "VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT (";
        break;
    case 2:
        settings.stream() << "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE (";
        break;
    case 3:
        settings.stream() << "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER (";
        break;
    case 4:
        settings.stream() << "VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkImageType(VkImageType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_IMAGE_TYPE_1D (";
        break;
    case 1:
        settings.stream() << "VK_IMAGE_TYPE_2D (";
        break;
    case 2:
        settings.stream() << "VK_IMAGE_TYPE_3D (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkBorderColor(VkBorderColor object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK (";
        break;
    case 1:
        settings.stream() << "VK_BORDER_COLOR_INT_TRANSPARENT_BLACK (";
        break;
    case 2:
        settings.stream() << "VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK (";
        break;
    case 3:
        settings.stream() << "VK_BORDER_COLOR_INT_OPAQUE_BLACK (";
        break;
    case 4:
        settings.stream() << "VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE (";
        break;
    case 5:
        settings.stream() << "VK_BORDER_COLOR_INT_OPAQUE_WHITE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkInternalAllocationType(VkInternalAllocationType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkPolygonMode(VkPolygonMode object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_POLYGON_MODE_FILL (";
        break;
    case 1:
        settings.stream() << "VK_POLYGON_MODE_LINE (";
        break;
    case 2:
        settings.stream() << "VK_POLYGON_MODE_POINT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkPipelineBindPoint(VkPipelineBindPoint object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_PIPELINE_BIND_POINT_GRAPHICS (";
        break;
    case 1:
        settings.stream() << "VK_PIPELINE_BIND_POINT_COMPUTE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkSubpassContents(VkSubpassContents object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SUBPASS_CONTENTS_INLINE (";
        break;
    case 1:
        settings.stream() << "VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkImageTiling(VkImageTiling object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_IMAGE_TILING_OPTIMAL (";
        break;
    case 1:
        settings.stream() << "VK_IMAGE_TILING_LINEAR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkPhysicalDeviceType(VkPhysicalDeviceType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_PHYSICAL_DEVICE_TYPE_OTHER (";
        break;
    case 1:
        settings.stream() << "VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU (";
        break;
    case 2:
        settings.stream() << "VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU (";
        break;
    case 3:
        settings.stream() << "VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU (";
        break;
    case 4:
        settings.stream() << "VK_PHYSICAL_DEVICE_TYPE_CPU (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkColorSpaceKHR(VkColorSpaceKHR object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_COLOR_SPACE_SRGB_NONLINEAR_KHR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkSystemAllocationScope(VkSystemAllocationScope object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SYSTEM_ALLOCATION_SCOPE_COMMAND (";
        break;
    case 1:
        settings.stream() << "VK_SYSTEM_ALLOCATION_SCOPE_OBJECT (";
        break;
    case 2:
        settings.stream() << "VK_SYSTEM_ALLOCATION_SCOPE_CACHE (";
        break;
    case 3:
        settings.stream() << "VK_SYSTEM_ALLOCATION_SCOPE_DEVICE (";
        break;
    case 4:
        settings.stream() << "VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkPrimitiveTopology(VkPrimitiveTopology object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_POINT_LIST (";
        break;
    case 1:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_LINE_LIST (";
        break;
    case 2:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP (";
        break;
    case 3:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST (";
        break;
    case 4:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP (";
        break;
    case 5:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN (";
        break;
    case 6:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY (";
        break;
    case 7:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY (";
        break;
    case 8:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY (";
        break;
    case 9:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY (";
        break;
    case 10:
        settings.stream() << "VK_PRIMITIVE_TOPOLOGY_PATCH_LIST (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkLogicOp(VkLogicOp object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_LOGIC_OP_CLEAR (";
        break;
    case 1:
        settings.stream() << "VK_LOGIC_OP_AND (";
        break;
    case 2:
        settings.stream() << "VK_LOGIC_OP_AND_REVERSE (";
        break;
    case 3:
        settings.stream() << "VK_LOGIC_OP_COPY (";
        break;
    case 4:
        settings.stream() << "VK_LOGIC_OP_AND_INVERTED (";
        break;
    case 5:
        settings.stream() << "VK_LOGIC_OP_NO_OP (";
        break;
    case 6:
        settings.stream() << "VK_LOGIC_OP_XOR (";
        break;
    case 7:
        settings.stream() << "VK_LOGIC_OP_OR (";
        break;
    case 8:
        settings.stream() << "VK_LOGIC_OP_NOR (";
        break;
    case 9:
        settings.stream() << "VK_LOGIC_OP_EQUIVALENT (";
        break;
    case 10:
        settings.stream() << "VK_LOGIC_OP_INVERT (";
        break;
    case 11:
        settings.stream() << "VK_LOGIC_OP_OR_REVERSE (";
        break;
    case 12:
        settings.stream() << "VK_LOGIC_OP_COPY_INVERTED (";
        break;
    case 13:
        settings.stream() << "VK_LOGIC_OP_OR_INVERTED (";
        break;
    case 14:
        settings.stream() << "VK_LOGIC_OP_NAND (";
        break;
    case 15:
        settings.stream() << "VK_LOGIC_OP_SET (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkValidationCheckEXT(VkValidationCheckEXT object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_VALIDATION_CHECK_ALL_EXT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkSharingMode(VkSharingMode object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SHARING_MODE_EXCLUSIVE (";
        break;
    case 1:
        settings.stream() << "VK_SHARING_MODE_CONCURRENT (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkDynamicState(VkDynamicState object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_DYNAMIC_STATE_VIEWPORT (";
        break;
    case 1:
        settings.stream() << "VK_DYNAMIC_STATE_SCISSOR (";
        break;
    case 2:
        settings.stream() << "VK_DYNAMIC_STATE_LINE_WIDTH (";
        break;
    case 3:
        settings.stream() << "VK_DYNAMIC_STATE_DEPTH_BIAS (";
        break;
    case 4:
        settings.stream() << "VK_DYNAMIC_STATE_BLEND_CONSTANTS (";
        break;
    case 5:
        settings.stream() << "VK_DYNAMIC_STATE_DEPTH_BOUNDS (";
        break;
    case 6:
        settings.stream() << "VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK (";
        break;
    case 7:
        settings.stream() << "VK_DYNAMIC_STATE_STENCIL_WRITE_MASK (";
        break;
    case 8:
        settings.stream() << "VK_DYNAMIC_STATE_STENCIL_REFERENCE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkVertexInputRate(VkVertexInputRate object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_VERTEX_INPUT_RATE_VERTEX (";
        break;
    case 1:
        settings.stream() << "VK_VERTEX_INPUT_RATE_INSTANCE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkResult(VkResult object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_SUCCESS (";
        break;
    case 1:
        settings.stream() << "VK_NOT_READY (";
        break;
    case 2:
        settings.stream() << "VK_TIMEOUT (";
        break;
    case 3:
        settings.stream() << "VK_EVENT_SET (";
        break;
    case 4:
        settings.stream() << "VK_EVENT_RESET (";
        break;
    case 5:
        settings.stream() << "VK_INCOMPLETE (";
        break;
    case -1:
        settings.stream() << "VK_ERROR_OUT_OF_HOST_MEMORY (";
        break;
    case -2:
        settings.stream() << "VK_ERROR_OUT_OF_DEVICE_MEMORY (";
        break;
    case -3:
        settings.stream() << "VK_ERROR_INITIALIZATION_FAILED (";
        break;
    case -4:
        settings.stream() << "VK_ERROR_DEVICE_LOST (";
        break;
    case -5:
        settings.stream() << "VK_ERROR_MEMORY_MAP_FAILED (";
        break;
    case -6:
        settings.stream() << "VK_ERROR_LAYER_NOT_PRESENT (";
        break;
    case -7:
        settings.stream() << "VK_ERROR_EXTENSION_NOT_PRESENT (";
        break;
    case -8:
        settings.stream() << "VK_ERROR_FEATURE_NOT_PRESENT (";
        break;
    case -9:
        settings.stream() << "VK_ERROR_INCOMPATIBLE_DRIVER (";
        break;
    case -10:
        settings.stream() << "VK_ERROR_TOO_MANY_OBJECTS (";
        break;
    case -11:
        settings.stream() << "VK_ERROR_FORMAT_NOT_SUPPORTED (";
        break;
    case -12:
        settings.stream() << "VK_ERROR_FRAGMENTED_POOL (";
        break;
    case -1000013000:
        settings.stream() << "VK_NV_EXTENSION_1_ERROR (";
        break;
    case -1000012000:
        settings.stream() << "VK_ERROR_INVALID_SHADER_NV (";
        break;
    case -1000003001:
        settings.stream() << "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR (";
        break;
    case -1000011001:
        settings.stream() << "VK_ERROR_VALIDATION_FAILED_EXT (";
        break;
    case -1000001004:
        settings.stream() << "VK_ERROR_OUT_OF_DATE_KHR (";
        break;
    case -1000000001:
        settings.stream() << "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkImageLayout(VkImageLayout object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_IMAGE_LAYOUT_UNDEFINED (";
        break;
    case 1:
        settings.stream() << "VK_IMAGE_LAYOUT_GENERAL (";
        break;
    case 2:
        settings.stream() << "VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL (";
        break;
    case 3:
        settings.stream() << "VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL (";
        break;
    case 4:
        settings.stream() << "VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL (";
        break;
    case 5:
        settings.stream() << "VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL (";
        break;
    case 6:
        settings.stream() << "VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL (";
        break;
    case 7:
        settings.stream() << "VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL (";
        break;
    case 8:
        settings.stream() << "VK_IMAGE_LAYOUT_PREINITIALIZED (";
        break;
    case 1000001002:
        settings.stream() << "VK_IMAGE_LAYOUT_PRESENT_SRC_KHR (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkPipelineCacheHeaderVersion(VkPipelineCacheHeaderVersion object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 1:
        settings.stream() << "VK_PIPELINE_CACHE_HEADER_VERSION_ONE (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkIndexType(VkIndexType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_INDEX_TYPE_UINT16 (";
        break;
    case 1:
        settings.stream() << "VK_INDEX_TYPE_UINT32 (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}
ostream& dump_text_VkQueryType(VkQueryType object, const ApiDumpSettings& settings, int indents)
{
    switch((int64_t) object)
    {
    case 0:
        settings.stream() << "VK_QUERY_TYPE_OCCLUSION (";
        break;
    case 1:
        settings.stream() << "VK_QUERY_TYPE_PIPELINE_STATISTICS (";
        break;
    case 2:
        settings.stream() << "VK_QUERY_TYPE_TIMESTAMP (";
        break;
    default:
        settings.stream() << "UNKNOWN (";
    }
    return settings.stream() << object << ")";
}

//========================= Bitmask Implementations =========================//

ostream& dump_text_VkBufferCreateFlagBits(VkBufferCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_BUFFER_CREATE_SPARSE_BINDING_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_BUFFER_CREATE_SPARSE_ALIASED_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkCommandPoolResetFlagBits(VkCommandPoolResetFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkFormatFeatureFlagBits(VkFormatFeatureFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT", settings.stream(), is_first);
    if(object & 512)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT", settings.stream(), is_first);
    if(object & 1024)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_BLIT_SRC_BIT", settings.stream(), is_first);
    if(object & 2048)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_BLIT_DST_BIT", settings.stream(), is_first);
    if(object & 4096)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT", settings.stream(), is_first);
    if(object & 8192)
        is_first = dump_text_bitmaskOption("VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkSampleCountFlagBits(VkSampleCountFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_1_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_2_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_4_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_8_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_16_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_32_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_SAMPLE_COUNT_64_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkMemoryHeapFlagBits(VkMemoryHeapFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_MEMORY_HEAP_DEVICE_LOCAL_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkDisplayPlaneAlphaFlagBitsKHR(VkDisplayPlaneAlphaFlagBitsKHR object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkDependencyFlagBits(VkDependencyFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_DEPENDENCY_BY_REGION_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkSparseMemoryBindFlagBits(VkSparseMemoryBindFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SPARSE_MEMORY_BIND_METADATA_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkDescriptorPoolCreateFlagBits(VkDescriptorPoolCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkFenceCreateFlagBits(VkFenceCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_FENCE_CREATE_SIGNALED_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkMemoryPropertyFlagBits(VkMemoryPropertyFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_MEMORY_PROPERTY_HOST_COHERENT_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_MEMORY_PROPERTY_HOST_CACHED_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkAttachmentDescriptionFlagBits(VkAttachmentDescriptionFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkImageCreateFlagBits(VkImageCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_SPARSE_BINDING_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_SPARSE_ALIASED_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkSurfaceTransformFlagBitsKHR(VkSurfaceTransformFlagBitsKHR object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkColorComponentFlagBits(VkColorComponentFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COLOR_COMPONENT_R_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_COLOR_COMPONENT_G_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_COLOR_COMPONENT_B_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_COLOR_COMPONENT_A_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkExternalMemoryHandleTypeFlagBitsNV(VkExternalMemoryHandleTypeFlagBitsNV object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkCullModeFlagBits(VkCullModeFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 0)
        is_first = dump_text_bitmaskOption("VK_CULL_MODE_NONE", settings.stream(), is_first);
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_CULL_MODE_FRONT_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_CULL_MODE_BACK_BIT", settings.stream(), is_first);
    if(object & 0x00000003)
        is_first = dump_text_bitmaskOption("VK_CULL_MODE_FRONT_AND_BACK", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkQueryResultFlagBits(VkQueryResultFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_QUERY_RESULT_64_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_QUERY_RESULT_WAIT_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_QUERY_RESULT_WITH_AVAILABILITY_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_QUERY_RESULT_PARTIAL_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkCommandBufferUsageFlagBits(VkCommandBufferUsageFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkStencilFaceFlagBits(VkStencilFaceFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_STENCIL_FACE_FRONT_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_STENCIL_FACE_BACK_BIT", settings.stream(), is_first);
    if(object & 0x00000003)
        is_first = dump_text_bitmaskOption("VK_STENCIL_FRONT_AND_BACK", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkCompositeAlphaFlagBitsKHR(VkCompositeAlphaFlagBitsKHR object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkExternalMemoryFeatureFlagBitsNV(VkExternalMemoryFeatureFlagBitsNV object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkShaderStageFlagBits(VkShaderStageFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_VERTEX_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_GEOMETRY_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_FRAGMENT_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_COMPUTE_BIT", settings.stream(), is_first);
    if(object & 0x0000001F)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_ALL_GRAPHICS", settings.stream(), is_first);
    if(object & 0x7FFFFFFF)
        is_first = dump_text_bitmaskOption("VK_SHADER_STAGE_ALL", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkQueryControlFlagBits(VkQueryControlFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_QUERY_CONTROL_PRECISE_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkImageUsageFlagBits(VkImageUsageFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_TRANSFER_SRC_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_TRANSFER_DST_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_SAMPLED_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_STORAGE_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkImageAspectFlagBits(VkImageAspectFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_IMAGE_ASPECT_COLOR_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_IMAGE_ASPECT_DEPTH_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_IMAGE_ASPECT_STENCIL_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_IMAGE_ASPECT_METADATA_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkQueueFlagBits(VkQueueFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_QUEUE_GRAPHICS_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_QUEUE_COMPUTE_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_QUEUE_TRANSFER_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_QUEUE_SPARSE_BINDING_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkSparseImageFormatFlagBits(VkSparseImageFormatFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkPipelineCreateFlagBits(VkPipelineCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_CREATE_DERIVATIVE_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkPipelineStageFlagBits(VkPipelineStageFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_VERTEX_INPUT_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_VERTEX_SHADER_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT", settings.stream(), is_first);
    if(object & 512)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT", settings.stream(), is_first);
    if(object & 1024)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT", settings.stream(), is_first);
    if(object & 2048)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT", settings.stream(), is_first);
    if(object & 4096)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_TRANSFER_BIT", settings.stream(), is_first);
    if(object & 8192)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT", settings.stream(), is_first);
    if(object & 16384)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_HOST_BIT", settings.stream(), is_first);
    if(object & 32768)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT", settings.stream(), is_first);
    if(object & 65536)
        is_first = dump_text_bitmaskOption("VK_PIPELINE_STAGE_ALL_COMMANDS_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkCommandPoolCreateFlagBits(VkCommandPoolCreateFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COMMAND_POOL_CREATE_TRANSIENT_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkCommandBufferResetFlagBits(VkCommandBufferResetFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkBufferUsageFlagBits(VkBufferUsageFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_TRANSFER_SRC_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_TRANSFER_DST_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_STORAGE_BUFFER_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_INDEX_BUFFER_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_VERTEX_BUFFER_BIT", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkDebugReportFlagBitsEXT(VkDebugReportFlagBitsEXT object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_DEBUG_REPORT_INFORMATION_BIT_EXT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_DEBUG_REPORT_WARNING_BIT_EXT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_DEBUG_REPORT_ERROR_BIT_EXT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_DEBUG_REPORT_DEBUG_BIT_EXT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkAccessFlagBits(VkAccessFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_ACCESS_INDIRECT_COMMAND_READ_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_ACCESS_INDEX_READ_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_ACCESS_UNIFORM_READ_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_ACCESS_INPUT_ATTACHMENT_READ_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_ACCESS_SHADER_READ_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_ACCESS_SHADER_WRITE_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_ACCESS_COLOR_ATTACHMENT_READ_BIT", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT", settings.stream(), is_first);
    if(object & 512)
        is_first = dump_text_bitmaskOption("VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT", settings.stream(), is_first);
    if(object & 1024)
        is_first = dump_text_bitmaskOption("VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT", settings.stream(), is_first);
    if(object & 2048)
        is_first = dump_text_bitmaskOption("VK_ACCESS_TRANSFER_READ_BIT", settings.stream(), is_first);
    if(object & 4096)
        is_first = dump_text_bitmaskOption("VK_ACCESS_TRANSFER_WRITE_BIT", settings.stream(), is_first);
    if(object & 8192)
        is_first = dump_text_bitmaskOption("VK_ACCESS_HOST_READ_BIT", settings.stream(), is_first);
    if(object & 16384)
        is_first = dump_text_bitmaskOption("VK_ACCESS_HOST_WRITE_BIT", settings.stream(), is_first);
    if(object & 32768)
        is_first = dump_text_bitmaskOption("VK_ACCESS_MEMORY_READ_BIT", settings.stream(), is_first);
    if(object & 65536)
        is_first = dump_text_bitmaskOption("VK_ACCESS_MEMORY_WRITE_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}
ostream& dump_text_VkQueryPipelineStatisticFlagBits(VkQueryPipelineStatisticFlagBits object, const ApiDumpSettings& settings, int indents)
{
    bool is_first = true;
    //settings.formatNameType(stream, indents, name, type_string) << object;
    settings.stream() << object;
    if(object & 1)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT", settings.stream(), is_first);
    if(object & 2)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT", settings.stream(), is_first);
    if(object & 4)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT", settings.stream(), is_first);
    if(object & 8)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT", settings.stream(), is_first);
    if(object & 16)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT", settings.stream(), is_first);
    if(object & 32)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT", settings.stream(), is_first);
    if(object & 64)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT", settings.stream(), is_first);
    if(object & 128)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT", settings.stream(), is_first);
    if(object & 256)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT", settings.stream(), is_first);
    if(object & 512)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT", settings.stream(), is_first);
    if(object & 1024)
        is_first = dump_text_bitmaskOption("VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT", settings.stream(), is_first);
    if(!is_first)
        settings.stream() << ")";
    return settings.stream();
}

//=========================== Flag Implementations ==========================//

inline ostream& dump_text_VkFormatFeatureFlags(VkFormatFeatureFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkFormatFeatureFlagBits((VkFormatFeatureFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkSampleCountFlags(VkSampleCountFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkSampleCountFlagBits((VkSampleCountFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkBufferCreateFlags(VkBufferCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkBufferCreateFlagBits((VkBufferCreateFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkShaderStageFlags(VkShaderStageFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkShaderStageFlagBits((VkShaderStageFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkCommandPoolResetFlags(VkCommandPoolResetFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCommandPoolResetFlagBits((VkCommandPoolResetFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkFenceCreateFlags(VkFenceCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkFenceCreateFlagBits((VkFenceCreateFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkMemoryHeapFlags(VkMemoryHeapFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkMemoryHeapFlagBits((VkMemoryHeapFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkDependencyFlags(VkDependencyFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkDependencyFlagBits((VkDependencyFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkSparseMemoryBindFlags(VkSparseMemoryBindFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkSparseMemoryBindFlagBits((VkSparseMemoryBindFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkMemoryPropertyFlags(VkMemoryPropertyFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkMemoryPropertyFlagBits((VkMemoryPropertyFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkImageCreateFlags(VkImageCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkImageCreateFlagBits((VkImageCreateFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkAttachmentDescriptionFlags(VkAttachmentDescriptionFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkAttachmentDescriptionFlagBits((VkAttachmentDescriptionFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkQueryResultFlags(VkQueryResultFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkQueryResultFlagBits((VkQueryResultFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkDisplayPlaneAlphaFlagsKHR(VkDisplayPlaneAlphaFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkDisplayPlaneAlphaFlagBitsKHR((VkDisplayPlaneAlphaFlagBitsKHR) object, settings, indents);
}
inline ostream& dump_text_VkSurfaceTransformFlagsKHR(VkSurfaceTransformFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkSurfaceTransformFlagBitsKHR((VkSurfaceTransformFlagBitsKHR) object, settings, indents);
}
inline ostream& dump_text_VkBufferUsageFlags(VkBufferUsageFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkBufferUsageFlagBits((VkBufferUsageFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkCullModeFlags(VkCullModeFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCullModeFlagBits((VkCullModeFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkCommandBufferUsageFlags(VkCommandBufferUsageFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCommandBufferUsageFlagBits((VkCommandBufferUsageFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkColorComponentFlags(VkColorComponentFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkColorComponentFlagBits((VkColorComponentFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkExternalMemoryHandleTypeFlagsNV(VkExternalMemoryHandleTypeFlagsNV object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkExternalMemoryHandleTypeFlagBitsNV((VkExternalMemoryHandleTypeFlagBitsNV) object, settings, indents);
}
inline ostream& dump_text_VkImageUsageFlags(VkImageUsageFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkImageUsageFlagBits((VkImageUsageFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkStencilFaceFlags(VkStencilFaceFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkStencilFaceFlagBits((VkStencilFaceFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkCompositeAlphaFlagsKHR(VkCompositeAlphaFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCompositeAlphaFlagBitsKHR((VkCompositeAlphaFlagBitsKHR) object, settings, indents);
}
inline ostream& dump_text_VkQueryControlFlags(VkQueryControlFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkQueryControlFlagBits((VkQueryControlFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkExternalMemoryFeatureFlagsNV(VkExternalMemoryFeatureFlagsNV object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkExternalMemoryFeatureFlagBitsNV((VkExternalMemoryFeatureFlagBitsNV) object, settings, indents);
}
inline ostream& dump_text_VkPipelineStageFlags(VkPipelineStageFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkPipelineStageFlagBits((VkPipelineStageFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkPipelineCreateFlags(VkPipelineCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkPipelineCreateFlagBits((VkPipelineCreateFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkQueueFlags(VkQueueFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkQueueFlagBits((VkQueueFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkSparseImageFormatFlags(VkSparseImageFormatFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkSparseImageFormatFlagBits((VkSparseImageFormatFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkDescriptorPoolCreateFlags(VkDescriptorPoolCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkDescriptorPoolCreateFlagBits((VkDescriptorPoolCreateFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkCommandPoolCreateFlags(VkCommandPoolCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCommandPoolCreateFlagBits((VkCommandPoolCreateFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkImageAspectFlags(VkImageAspectFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkImageAspectFlagBits((VkImageAspectFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkQueryPipelineStatisticFlags(VkQueryPipelineStatisticFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkQueryPipelineStatisticFlagBits((VkQueryPipelineStatisticFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkAccessFlags(VkAccessFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkAccessFlagBits((VkAccessFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkCommandBufferResetFlags(VkCommandBufferResetFlags object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkCommandBufferResetFlagBits((VkCommandBufferResetFlagBits) object, settings, indents);
}
inline ostream& dump_text_VkDebugReportFlagsEXT(VkDebugReportFlagsEXT object, const ApiDumpSettings& settings, int indents)
{
    return dump_text_VkDebugReportFlagBitsEXT((VkDebugReportFlagBitsEXT) object, settings, indents);
}


inline ostream& dump_text_VkQueryPoolCreateFlags(VkQueryPoolCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkPipelineLayoutCreateFlags(VkPipelineLayoutCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
inline ostream& dump_text_VkWin32SurfaceCreateFlagsKHR(VkWin32SurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
inline ostream& dump_text_VkPipelineMultisampleStateCreateFlags(VkPipelineMultisampleStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkDisplaySurfaceCreateFlagsKHR(VkDisplaySurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_MIR_KHR)
inline ostream& dump_text_VkMirSurfaceCreateFlagsKHR(VkMirSurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_MIR_KHR
inline ostream& dump_text_VkPipelineVertexInputStateCreateFlags(VkPipelineVertexInputStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkInstanceCreateFlags(VkInstanceCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_XLIB_KHR)
inline ostream& dump_text_VkXlibSurfaceCreateFlagsKHR(VkXlibSurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XLIB_KHR
inline ostream& dump_text_VkPipelineDepthStencilStateCreateFlags(VkPipelineDepthStencilStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkPipelineCacheCreateFlags(VkPipelineCacheCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkDescriptorSetLayoutCreateFlags(VkDescriptorSetLayoutCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkPipelineViewportStateCreateFlags(VkPipelineViewportStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkRenderPassCreateFlags(VkRenderPassCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkImageViewCreateFlags(VkImageViewCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkPipelineTessellationStateCreateFlags(VkPipelineTessellationStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
inline ostream& dump_text_VkAndroidSurfaceCreateFlagsKHR(VkAndroidSurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR
inline ostream& dump_text_VkSamplerCreateFlags(VkSamplerCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_XCB_KHR)
inline ostream& dump_text_VkXcbSurfaceCreateFlagsKHR(VkXcbSurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_XCB_KHR
inline ostream& dump_text_VkEventCreateFlags(VkEventCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
inline ostream& dump_text_VkWaylandSurfaceCreateFlagsKHR(VkWaylandSurfaceCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR
inline ostream& dump_text_VkBufferViewCreateFlags(VkBufferViewCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkShaderModuleCreateFlags(VkShaderModuleCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkPipelineRasterizationStateCreateFlags(VkPipelineRasterizationStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkPipelineShaderStageCreateFlags(VkPipelineShaderStageCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkSemaphoreCreateFlags(VkSemaphoreCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkSwapchainCreateFlagsKHR(VkSwapchainCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkSubpassDescriptionFlags(VkSubpassDescriptionFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkDisplayModeCreateFlagsKHR(VkDisplayModeCreateFlagsKHR object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkMemoryMapFlags(VkMemoryMapFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkDeviceQueueCreateFlags(VkDeviceQueueCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkPipelineColorBlendStateCreateFlags(VkPipelineColorBlendStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkDeviceCreateFlags(VkDeviceCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkPipelineInputAssemblyStateCreateFlags(VkPipelineInputAssemblyStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkPipelineDynamicStateCreateFlags(VkPipelineDynamicStateCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkFramebufferCreateFlags(VkFramebufferCreateFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}
inline ostream& dump_text_VkDescriptorPoolResetFlags(VkDescriptorPoolResetFlags object, const ApiDumpSettings& settings, int indents)
{
    return settings.stream() << object;
}

//======================= Func Pointer Implementations ======================//

inline ostream& dump_text_PFN_vkVoidFunction(PFN_vkVoidFunction object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_PFN_vkDebugReportCallbackEXT(PFN_vkDebugReportCallbackEXT object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_PFN_vkInternalAllocationNotification(PFN_vkInternalAllocationNotification object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_PFN_vkReallocationFunction(PFN_vkReallocationFunction object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_PFN_vkFreeFunction(PFN_vkFreeFunction object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_PFN_vkAllocationFunction(PFN_vkAllocationFunction object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}
inline ostream& dump_text_PFN_vkInternalFreeNotification(PFN_vkInternalFreeNotification object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        return settings.stream() << object;
    else
        return settings.stream() << "address";
}

//========================== Struct Implementations =========================//

ostream& dump_text_VkFenceCreateInfo(const VkFenceCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkFenceCreateFlags>(object.flags, settings, "VkFenceCreateFlags", "flags", indents + 1, dump_text_VkFenceCreateFlags);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
ostream& dump_text_VkWin32SurfaceCreateInfoKHR(const VkWin32SurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkWin32SurfaceCreateFlagsKHR>(object.flags, settings, "VkWin32SurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkWin32SurfaceCreateFlagsKHR);
    dump_text_value<const HINSTANCE>(object.hinstance, settings, "HINSTANCE", "hinstance", indents + 1, dump_text_HINSTANCE);
    dump_text_value<const HWND>(object.hwnd, settings, "HWND", "hwnd", indents + 1, dump_text_HWND);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
ostream& dump_text_VkAllocationCallbacks(const VkAllocationCallbacks& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const void*>(object.pUserData, settings, "void*", "pUserData", indents + 1, dump_text_void);
    dump_text_value<const PFN_vkAllocationFunction>(object.pfnAllocation, settings, "PFN_vkAllocationFunction", "pfnAllocation", indents + 1, dump_text_PFN_vkAllocationFunction);
    dump_text_value<const PFN_vkReallocationFunction>(object.pfnReallocation, settings, "PFN_vkReallocationFunction", "pfnReallocation", indents + 1, dump_text_PFN_vkReallocationFunction);
    dump_text_value<const PFN_vkFreeFunction>(object.pfnFree, settings, "PFN_vkFreeFunction", "pfnFree", indents + 1, dump_text_PFN_vkFreeFunction);
    dump_text_value<const PFN_vkInternalAllocationNotification>(object.pfnInternalAllocation, settings, "PFN_vkInternalAllocationNotification", "pfnInternalAllocation", indents + 1, dump_text_PFN_vkInternalAllocationNotification);
    dump_text_value<const PFN_vkInternalFreeNotification>(object.pfnInternalFree, settings, "PFN_vkInternalFreeNotification", "pfnInternalFree", indents + 1, dump_text_PFN_vkInternalFreeNotification);
    return settings.stream();
}
ostream& dump_text_VkCommandBufferAllocateInfo(const VkCommandBufferAllocateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkCommandPool>(object.commandPool, settings, "VkCommandPool", "commandPool", indents + 1, dump_text_VkCommandPool);
    dump_text_value<const VkCommandBufferLevel>(object.level, settings, "VkCommandBufferLevel", "level", indents + 1, dump_text_VkCommandBufferLevel);
    dump_text_value<const uint32_t>(object.commandBufferCount, settings, "uint32_t", "commandBufferCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkImageFormatProperties(const VkImageFormatProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkExtent3D>(object.maxExtent, settings, "VkExtent3D", "maxExtent", indents + 1, dump_text_VkExtent3D);
    dump_text_value<const uint32_t>(object.maxMipLevels, settings, "uint32_t", "maxMipLevels", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxArrayLayers, settings, "uint32_t", "maxArrayLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSampleCountFlags>(object.sampleCounts, settings, "VkSampleCountFlags", "sampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkDeviceSize>(object.maxResourceSize, settings, "VkDeviceSize", "maxResourceSize", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
ostream& dump_text_VkExtent3D(const VkExtent3D& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.width, settings, "uint32_t", "width", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.height, settings, "uint32_t", "height", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.depth, settings, "uint32_t", "depth", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkApplicationInfo(const VkApplicationInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const char*>(object.pApplicationName, settings, "const char*", "pApplicationName", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.applicationVersion, settings, "uint32_t", "applicationVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const char*>(object.pEngineName, settings, "const char*", "pEngineName", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.engineVersion, settings, "uint32_t", "engineVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.apiVersion, settings, "uint32_t", "apiVersion", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkDebugMarkerObjectNameInfoEXT(const VkDebugMarkerObjectNameInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDebugReportObjectTypeEXT>(object.objectType, settings, "VkDebugReportObjectTypeEXT", "objectType", indents + 1, dump_text_VkDebugReportObjectTypeEXT);
    dump_text_value<const uint64_t>(object.object, settings, "uint64_t", "object", indents + 1, dump_text_uint64_t);
    dump_text_value<const char*>(object.pObjectName, settings, "const char*", "pObjectName", indents + 1, dump_text_cstring);
    return settings.stream();
}
ostream& dump_text_VkClearDepthStencilValue(const VkClearDepthStencilValue& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const float>(object.depth, settings, "float", "depth", indents + 1, dump_text_float);
    dump_text_value<const uint32_t>(object.stencil, settings, "uint32_t", "stencil", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkPresentInfoKHR(const VkPresentInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.waitSemaphoreCount, settings, "uint32_t", "waitSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSemaphore>(object.pWaitSemaphores, object.waitSemaphoreCount, settings, "const VkSemaphore*", "const VkSemaphore", "pWaitSemaphores", indents + 1, dump_text_VkSemaphore);
    dump_text_value<const uint32_t>(object.swapchainCount, settings, "uint32_t", "swapchainCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSwapchainKHR>(object.pSwapchains, object.swapchainCount, settings, "const VkSwapchainKHR*", "const VkSwapchainKHR", "pSwapchains", indents + 1, dump_text_VkSwapchainKHR);
    dump_text_array<const uint32_t>(object.pImageIndices, object.swapchainCount, settings, "const uint32_t*", "const uint32_t", "pImageIndices", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkResult>(object.pResults, object.swapchainCount, settings, "VkResult*", "VkResult", "pResults", indents + 1, dump_text_VkResult);
    return settings.stream();
}
ostream& dump_text_VkPipelineVertexInputStateCreateInfo(const VkPipelineVertexInputStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineVertexInputStateCreateFlags>(object.flags, settings, "VkPipelineVertexInputStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineVertexInputStateCreateFlags);
    dump_text_value<const uint32_t>(object.vertexBindingDescriptionCount, settings, "uint32_t", "vertexBindingDescriptionCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkVertexInputBindingDescription>(object.pVertexBindingDescriptions, object.vertexBindingDescriptionCount, settings, "const VkVertexInputBindingDescription*", "const VkVertexInputBindingDescription", "pVertexBindingDescriptions", indents + 1, dump_text_VkVertexInputBindingDescription);
    dump_text_value<const uint32_t>(object.vertexAttributeDescriptionCount, settings, "uint32_t", "vertexAttributeDescriptionCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkVertexInputAttributeDescription>(object.pVertexAttributeDescriptions, object.vertexAttributeDescriptionCount, settings, "const VkVertexInputAttributeDescription*", "const VkVertexInputAttributeDescription", "pVertexAttributeDescriptions", indents + 1, dump_text_VkVertexInputAttributeDescription);
    return settings.stream();
}
ostream& dump_text_VkSpecializationMapEntry(const VkSpecializationMapEntry& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.constantID, settings, "uint32_t", "constantID", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.offset, settings, "uint32_t", "offset", indents + 1, dump_text_uint32_t);
    dump_text_value<const size_t>(object.size, settings, "size_t", "size", indents + 1, dump_text_size_t);
    return settings.stream();
}
ostream& dump_text_VkSpecializationInfo(const VkSpecializationInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.mapEntryCount, settings, "uint32_t", "mapEntryCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSpecializationMapEntry>(object.pMapEntries, object.mapEntryCount, settings, "const VkSpecializationMapEntry*", "const VkSpecializationMapEntry", "pMapEntries", indents + 1, dump_text_VkSpecializationMapEntry);
    dump_text_value<const size_t>(object.dataSize, settings, "size_t", "dataSize", indents + 1, dump_text_size_t);
    dump_text_value<const void*>(object.pData, settings, "const void*", "pData", indents + 1, dump_text_void);
    return settings.stream();
}
ostream& dump_text_VkClearAttachment(const VkClearAttachment& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageAspectFlags>(object.aspectMask, settings, "VkImageAspectFlags", "aspectMask", indents + 1, dump_text_VkImageAspectFlags);
    dump_text_value<const uint32_t>(object.colorAttachment, settings, "uint32_t", "colorAttachment", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkClearValue>(object.clearValue, settings, "VkClearValue", "clearValue", indents + 1, dump_text_VkClearValue);
    return settings.stream();
}
ostream& dump_text_VkDebugMarkerObjectTagInfoEXT(const VkDebugMarkerObjectTagInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDebugReportObjectTypeEXT>(object.objectType, settings, "VkDebugReportObjectTypeEXT", "objectType", indents + 1, dump_text_VkDebugReportObjectTypeEXT);
    dump_text_value<const uint64_t>(object.object, settings, "uint64_t", "object", indents + 1, dump_text_uint64_t);
    dump_text_value<const uint64_t>(object.tagName, settings, "uint64_t", "tagName", indents + 1, dump_text_uint64_t);
    dump_text_value<const size_t>(object.tagSize, settings, "size_t", "tagSize", indents + 1, dump_text_size_t);
    dump_text_value<const void*>(object.pTag, settings, "const void*", "pTag", indents + 1, dump_text_void);
    return settings.stream();
}
ostream& dump_text_VkClearRect(const VkClearRect& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkRect2D>(object.rect, settings, "VkRect2D", "rect", indents + 1, dump_text_VkRect2D);
    dump_text_value<const uint32_t>(object.baseArrayLayer, settings, "uint32_t", "baseArrayLayer", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.layerCount, settings, "uint32_t", "layerCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkCommandBufferInheritanceInfo(const VkCommandBufferInheritanceInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkRenderPass>(object.renderPass, settings, "VkRenderPass", "renderPass", indents + 1, dump_text_VkRenderPass);
    dump_text_value<const uint32_t>(object.subpass, settings, "uint32_t", "subpass", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkFramebuffer>(object.framebuffer, settings, "VkFramebuffer", "framebuffer", indents + 1, dump_text_VkFramebuffer);
    dump_text_value<const VkBool32>(object.occlusionQueryEnable, settings, "VkBool32", "occlusionQueryEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkQueryControlFlags>(object.queryFlags, settings, "VkQueryControlFlags", "queryFlags", indents + 1, dump_text_VkQueryControlFlags);
    dump_text_value<const VkQueryPipelineStatisticFlags>(object.pipelineStatistics, settings, "VkQueryPipelineStatisticFlags", "pipelineStatistics", indents + 1, dump_text_VkQueryPipelineStatisticFlags);
    return settings.stream();
}
ostream& dump_text_VkPipelineShaderStageCreateInfo(const VkPipelineShaderStageCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineShaderStageCreateFlags>(object.flags, settings, "VkPipelineShaderStageCreateFlags", "flags", indents + 1, dump_text_VkPipelineShaderStageCreateFlags);
    dump_text_value<const VkShaderStageFlagBits>(object.stage, settings, "VkShaderStageFlagBits", "stage", indents + 1, dump_text_VkShaderStageFlagBits);
    dump_text_value<const VkShaderModule>(object.module, settings, "VkShaderModule", "module", indents + 1, dump_text_VkShaderModule);
    dump_text_value<const char*>(object.pName, settings, "const char*", "pName", indents + 1, dump_text_cstring);
    dump_text_pointer<const VkSpecializationInfo>(object.pSpecializationInfo, settings, "const VkSpecializationInfo*", "pSpecializationInfo", indents + 1, dump_text_VkSpecializationInfo);
    return settings.stream();
}
ostream& dump_text_VkDescriptorPoolSize(const VkDescriptorPoolSize& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDescriptorType>(object.type, settings, "VkDescriptorType", "type", indents + 1, dump_text_VkDescriptorType);
    dump_text_value<const uint32_t>(object.descriptorCount, settings, "uint32_t", "descriptorCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkDebugMarkerMarkerInfoEXT(const VkDebugMarkerMarkerInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const char*>(object.pMarkerName, settings, "const char*", "pMarkerName", indents + 1, dump_text_cstring);
    dump_text_array<const float>(object.color, 4, settings, "float[4]", "float", "color", indents + 1, dump_text_float);
    return settings.stream();
}
ostream& dump_text_VkCommandBufferBeginInfo(const VkCommandBufferBeginInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkCommandBufferUsageFlags>(object.flags, settings, "VkCommandBufferUsageFlags", "flags", indents + 1, dump_text_VkCommandBufferUsageFlags);
    if(false)
    dump_text_pointer<const VkCommandBufferInheritanceInfo>(object.pInheritanceInfo, settings, "const VkCommandBufferInheritanceInfo*", "pInheritanceInfo", indents + 1, dump_text_VkCommandBufferInheritanceInfo);
    else
        dump_text_special("UNUSED", settings, "const VkCommandBufferInheritanceInfo*", "pInheritanceInfo", indents + 1);
    return settings.stream();
}
ostream& dump_text_VkGraphicsPipelineCreateInfo(const VkGraphicsPipelineCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineCreateFlags>(object.flags, settings, "VkPipelineCreateFlags", "flags", indents + 1, dump_text_VkPipelineCreateFlags);
    dump_text_value<const uint32_t>(object.stageCount, settings, "uint32_t", "stageCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkPipelineShaderStageCreateInfo>(object.pStages, object.stageCount, settings, "const VkPipelineShaderStageCreateInfo*", "const VkPipelineShaderStageCreateInfo", "pStages", indents + 1, dump_text_VkPipelineShaderStageCreateInfo);
    dump_text_pointer<const VkPipelineVertexInputStateCreateInfo>(object.pVertexInputState, settings, "const VkPipelineVertexInputStateCreateInfo*", "pVertexInputState", indents + 1, dump_text_VkPipelineVertexInputStateCreateInfo);
    dump_text_pointer<const VkPipelineInputAssemblyStateCreateInfo>(object.pInputAssemblyState, settings, "const VkPipelineInputAssemblyStateCreateInfo*", "pInputAssemblyState", indents + 1, dump_text_VkPipelineInputAssemblyStateCreateInfo);
    dump_text_pointer<const VkPipelineTessellationStateCreateInfo>(object.pTessellationState, settings, "const VkPipelineTessellationStateCreateInfo*", "pTessellationState", indents + 1, dump_text_VkPipelineTessellationStateCreateInfo);
    dump_text_pointer<const VkPipelineViewportStateCreateInfo>(object.pViewportState, settings, "const VkPipelineViewportStateCreateInfo*", "pViewportState", indents + 1, dump_text_VkPipelineViewportStateCreateInfo);
    dump_text_pointer<const VkPipelineRasterizationStateCreateInfo>(object.pRasterizationState, settings, "const VkPipelineRasterizationStateCreateInfo*", "pRasterizationState", indents + 1, dump_text_VkPipelineRasterizationStateCreateInfo);
    dump_text_pointer<const VkPipelineMultisampleStateCreateInfo>(object.pMultisampleState, settings, "const VkPipelineMultisampleStateCreateInfo*", "pMultisampleState", indents + 1, dump_text_VkPipelineMultisampleStateCreateInfo);
    dump_text_pointer<const VkPipelineDepthStencilStateCreateInfo>(object.pDepthStencilState, settings, "const VkPipelineDepthStencilStateCreateInfo*", "pDepthStencilState", indents + 1, dump_text_VkPipelineDepthStencilStateCreateInfo);
    dump_text_pointer<const VkPipelineColorBlendStateCreateInfo>(object.pColorBlendState, settings, "const VkPipelineColorBlendStateCreateInfo*", "pColorBlendState", indents + 1, dump_text_VkPipelineColorBlendStateCreateInfo);
    dump_text_pointer<const VkPipelineDynamicStateCreateInfo>(object.pDynamicState, settings, "const VkPipelineDynamicStateCreateInfo*", "pDynamicState", indents + 1, dump_text_VkPipelineDynamicStateCreateInfo);
    dump_text_value<const VkPipelineLayout>(object.layout, settings, "VkPipelineLayout", "layout", indents + 1, dump_text_VkPipelineLayout);
    dump_text_value<const VkRenderPass>(object.renderPass, settings, "VkRenderPass", "renderPass", indents + 1, dump_text_VkRenderPass);
    dump_text_value<const uint32_t>(object.subpass, settings, "uint32_t", "subpass", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkPipeline>(object.basePipelineHandle, settings, "VkPipeline", "basePipelineHandle", indents + 1, dump_text_VkPipeline);
    dump_text_value<const int32_t>(object.basePipelineIndex, settings, "int32_t", "basePipelineIndex", indents + 1, dump_text_int32_t);
    return settings.stream();
}
ostream& dump_text_VkImageResolve(const VkImageResolve& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageSubresourceLayers>(object.srcSubresource, settings, "VkImageSubresourceLayers", "srcSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_value<const VkOffset3D>(object.srcOffset, settings, "VkOffset3D", "srcOffset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkImageSubresourceLayers>(object.dstSubresource, settings, "VkImageSubresourceLayers", "dstSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_value<const VkOffset3D>(object.dstOffset, settings, "VkOffset3D", "dstOffset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkExtent3D>(object.extent, settings, "VkExtent3D", "extent", indents + 1, dump_text_VkExtent3D);
    return settings.stream();
}
ostream& dump_text_VkDisplayPresentInfoKHR(const VkDisplayPresentInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkRect2D>(object.srcRect, settings, "VkRect2D", "srcRect", indents + 1, dump_text_VkRect2D);
    dump_text_value<const VkRect2D>(object.dstRect, settings, "VkRect2D", "dstRect", indents + 1, dump_text_VkRect2D);
    dump_text_value<const VkBool32>(object.persistent, settings, "VkBool32", "persistent", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
ostream& dump_text_VkDebugReportCallbackCreateInfoEXT(const VkDebugReportCallbackCreateInfoEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDebugReportFlagsEXT>(object.flags, settings, "VkDebugReportFlagsEXT", "flags", indents + 1, dump_text_VkDebugReportFlagsEXT);
    dump_text_value<const PFN_vkDebugReportCallbackEXT>(object.pfnCallback, settings, "PFN_vkDebugReportCallbackEXT", "pfnCallback", indents + 1, dump_text_PFN_vkDebugReportCallbackEXT);
    dump_text_value<const void*>(object.pUserData, settings, "void*", "pUserData", indents + 1, dump_text_void);
    return settings.stream();
}
ostream& dump_text_VkSparseImageMemoryBind(const VkSparseImageMemoryBind& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageSubresource>(object.subresource, settings, "VkImageSubresource", "subresource", indents + 1, dump_text_VkImageSubresource);
    dump_text_value<const VkOffset3D>(object.offset, settings, "VkOffset3D", "offset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkExtent3D>(object.extent, settings, "VkExtent3D", "extent", indents + 1, dump_text_VkExtent3D);
    dump_text_value<const VkDeviceMemory>(object.memory, settings, "VkDeviceMemory", "memory", indents + 1, dump_text_VkDeviceMemory);
    dump_text_value<const VkDeviceSize>(object.memoryOffset, settings, "VkDeviceSize", "memoryOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkSparseMemoryBindFlags>(object.flags, settings, "VkSparseMemoryBindFlags", "flags", indents + 1, dump_text_VkSparseMemoryBindFlags);
    return settings.stream();
}
ostream& dump_text_VkImageSubresource(const VkImageSubresource& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageAspectFlags>(object.aspectMask, settings, "VkImageAspectFlags", "aspectMask", indents + 1, dump_text_VkImageAspectFlags);
    dump_text_value<const uint32_t>(object.mipLevel, settings, "uint32_t", "mipLevel", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.arrayLayer, settings, "uint32_t", "arrayLayer", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkOffset3D(const VkOffset3D& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const int32_t>(object.x, settings, "int32_t", "x", indents + 1, dump_text_int32_t);
    dump_text_value<const int32_t>(object.y, settings, "int32_t", "y", indents + 1, dump_text_int32_t);
    dump_text_value<const int32_t>(object.z, settings, "int32_t", "z", indents + 1, dump_text_int32_t);
    return settings.stream();
}
ostream& dump_text_VkFormatProperties(const VkFormatProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkFormatFeatureFlags>(object.linearTilingFeatures, settings, "VkFormatFeatureFlags", "linearTilingFeatures", indents + 1, dump_text_VkFormatFeatureFlags);
    dump_text_value<const VkFormatFeatureFlags>(object.optimalTilingFeatures, settings, "VkFormatFeatureFlags", "optimalTilingFeatures", indents + 1, dump_text_VkFormatFeatureFlags);
    dump_text_value<const VkFormatFeatureFlags>(object.bufferFeatures, settings, "VkFormatFeatureFlags", "bufferFeatures", indents + 1, dump_text_VkFormatFeatureFlags);
    return settings.stream();
}
ostream& dump_text_VkSparseImageMemoryBindInfo(const VkSparseImageMemoryBindInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImage>(object.image, settings, "VkImage", "image", indents + 1, dump_text_VkImage);
    dump_text_value<const uint32_t>(object.bindCount, settings, "uint32_t", "bindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseImageMemoryBind>(object.pBinds, object.bindCount, settings, "const VkSparseImageMemoryBind*", "const VkSparseImageMemoryBind", "pBinds", indents + 1, dump_text_VkSparseImageMemoryBind);
    return settings.stream();
}
ostream& dump_text_VkVertexInputBindingDescription(const VkVertexInputBindingDescription& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.binding, settings, "uint32_t", "binding", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.stride, settings, "uint32_t", "stride", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkVertexInputRate>(object.inputRate, settings, "VkVertexInputRate", "inputRate", indents + 1, dump_text_VkVertexInputRate);
    return settings.stream();
}
ostream& dump_text_VkDedicatedAllocationImageCreateInfoNV(const VkDedicatedAllocationImageCreateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBool32>(object.dedicatedAllocation, settings, "VkBool32", "dedicatedAllocation", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_XLIB_KHR)
ostream& dump_text_VkXlibSurfaceCreateInfoKHR(const VkXlibSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkXlibSurfaceCreateFlagsKHR>(object.flags, settings, "VkXlibSurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkXlibSurfaceCreateFlagsKHR);
    dump_text_value<const Display*>(object.dpy, settings, "Display*", "dpy", indents + 1, dump_text_Display);
    dump_text_value<const Window>(object.window, settings, "Window", "window", indents + 1, dump_text_Window);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_XLIB_KHR
ostream& dump_text_VkPhysicalDeviceFeatures(const VkPhysicalDeviceFeatures& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkBool32>(object.robustBufferAccess, settings, "VkBool32", "robustBufferAccess", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.fullDrawIndexUint32, settings, "VkBool32", "fullDrawIndexUint32", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.imageCubeArray, settings, "VkBool32", "imageCubeArray", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.independentBlend, settings, "VkBool32", "independentBlend", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.geometryShader, settings, "VkBool32", "geometryShader", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.tessellationShader, settings, "VkBool32", "tessellationShader", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sampleRateShading, settings, "VkBool32", "sampleRateShading", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.dualSrcBlend, settings, "VkBool32", "dualSrcBlend", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.logicOp, settings, "VkBool32", "logicOp", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.multiDrawIndirect, settings, "VkBool32", "multiDrawIndirect", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.drawIndirectFirstInstance, settings, "VkBool32", "drawIndirectFirstInstance", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.depthClamp, settings, "VkBool32", "depthClamp", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.depthBiasClamp, settings, "VkBool32", "depthBiasClamp", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.fillModeNonSolid, settings, "VkBool32", "fillModeNonSolid", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.depthBounds, settings, "VkBool32", "depthBounds", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.wideLines, settings, "VkBool32", "wideLines", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.largePoints, settings, "VkBool32", "largePoints", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.alphaToOne, settings, "VkBool32", "alphaToOne", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.multiViewport, settings, "VkBool32", "multiViewport", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.samplerAnisotropy, settings, "VkBool32", "samplerAnisotropy", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.textureCompressionETC2, settings, "VkBool32", "textureCompressionETC2", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.textureCompressionASTC_LDR, settings, "VkBool32", "textureCompressionASTC_LDR", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.textureCompressionBC, settings, "VkBool32", "textureCompressionBC", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.occlusionQueryPrecise, settings, "VkBool32", "occlusionQueryPrecise", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.pipelineStatisticsQuery, settings, "VkBool32", "pipelineStatisticsQuery", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.vertexPipelineStoresAndAtomics, settings, "VkBool32", "vertexPipelineStoresAndAtomics", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.fragmentStoresAndAtomics, settings, "VkBool32", "fragmentStoresAndAtomics", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderTessellationAndGeometryPointSize, settings, "VkBool32", "shaderTessellationAndGeometryPointSize", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderImageGatherExtended, settings, "VkBool32", "shaderImageGatherExtended", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageImageExtendedFormats, settings, "VkBool32", "shaderStorageImageExtendedFormats", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageImageMultisample, settings, "VkBool32", "shaderStorageImageMultisample", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageImageReadWithoutFormat, settings, "VkBool32", "shaderStorageImageReadWithoutFormat", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageImageWriteWithoutFormat, settings, "VkBool32", "shaderStorageImageWriteWithoutFormat", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderUniformBufferArrayDynamicIndexing, settings, "VkBool32", "shaderUniformBufferArrayDynamicIndexing", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderSampledImageArrayDynamicIndexing, settings, "VkBool32", "shaderSampledImageArrayDynamicIndexing", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageBufferArrayDynamicIndexing, settings, "VkBool32", "shaderStorageBufferArrayDynamicIndexing", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderStorageImageArrayDynamicIndexing, settings, "VkBool32", "shaderStorageImageArrayDynamicIndexing", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderClipDistance, settings, "VkBool32", "shaderClipDistance", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderCullDistance, settings, "VkBool32", "shaderCullDistance", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderFloat64, settings, "VkBool32", "shaderFloat64", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderInt64, settings, "VkBool32", "shaderInt64", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderInt16, settings, "VkBool32", "shaderInt16", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderResourceResidency, settings, "VkBool32", "shaderResourceResidency", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.shaderResourceMinLod, settings, "VkBool32", "shaderResourceMinLod", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseBinding, settings, "VkBool32", "sparseBinding", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidencyBuffer, settings, "VkBool32", "sparseResidencyBuffer", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidencyImage2D, settings, "VkBool32", "sparseResidencyImage2D", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidencyImage3D, settings, "VkBool32", "sparseResidencyImage3D", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidency2Samples, settings, "VkBool32", "sparseResidency2Samples", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidency4Samples, settings, "VkBool32", "sparseResidency4Samples", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidency8Samples, settings, "VkBool32", "sparseResidency8Samples", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidency16Samples, settings, "VkBool32", "sparseResidency16Samples", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.sparseResidencyAliased, settings, "VkBool32", "sparseResidencyAliased", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.variableMultisampleRate, settings, "VkBool32", "variableMultisampleRate", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.inheritedQueries, settings, "VkBool32", "inheritedQueries", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
ostream& dump_text_VkBindSparseInfo(const VkBindSparseInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.waitSemaphoreCount, settings, "uint32_t", "waitSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSemaphore>(object.pWaitSemaphores, object.waitSemaphoreCount, settings, "const VkSemaphore*", "const VkSemaphore", "pWaitSemaphores", indents + 1, dump_text_VkSemaphore);
    dump_text_value<const uint32_t>(object.bufferBindCount, settings, "uint32_t", "bufferBindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseBufferMemoryBindInfo>(object.pBufferBinds, object.bufferBindCount, settings, "const VkSparseBufferMemoryBindInfo*", "const VkSparseBufferMemoryBindInfo", "pBufferBinds", indents + 1, dump_text_VkSparseBufferMemoryBindInfo);
    dump_text_value<const uint32_t>(object.imageOpaqueBindCount, settings, "uint32_t", "imageOpaqueBindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseImageOpaqueMemoryBindInfo>(object.pImageOpaqueBinds, object.imageOpaqueBindCount, settings, "const VkSparseImageOpaqueMemoryBindInfo*", "const VkSparseImageOpaqueMemoryBindInfo", "pImageOpaqueBinds", indents + 1, dump_text_VkSparseImageOpaqueMemoryBindInfo);
    dump_text_value<const uint32_t>(object.imageBindCount, settings, "uint32_t", "imageBindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseImageMemoryBindInfo>(object.pImageBinds, object.imageBindCount, settings, "const VkSparseImageMemoryBindInfo*", "const VkSparseImageMemoryBindInfo", "pImageBinds", indents + 1, dump_text_VkSparseImageMemoryBindInfo);
    dump_text_value<const uint32_t>(object.signalSemaphoreCount, settings, "uint32_t", "signalSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSemaphore>(object.pSignalSemaphores, object.signalSemaphoreCount, settings, "const VkSemaphore*", "const VkSemaphore", "pSignalSemaphores", indents + 1, dump_text_VkSemaphore);
    return settings.stream();
}
ostream& dump_text_VkMemoryBarrier(const VkMemoryBarrier& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkAccessFlags>(object.srcAccessMask, settings, "VkAccessFlags", "srcAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkAccessFlags>(object.dstAccessMask, settings, "VkAccessFlags", "dstAccessMask", indents + 1, dump_text_VkAccessFlags);
    return settings.stream();
}
ostream& dump_text_VkVertexInputAttributeDescription(const VkVertexInputAttributeDescription& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.location, settings, "uint32_t", "location", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.binding, settings, "uint32_t", "binding", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const uint32_t>(object.offset, settings, "uint32_t", "offset", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkBufferMemoryBarrier(const VkBufferMemoryBarrier& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkAccessFlags>(object.srcAccessMask, settings, "VkAccessFlags", "srcAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkAccessFlags>(object.dstAccessMask, settings, "VkAccessFlags", "dstAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const uint32_t>(object.srcQueueFamilyIndex, settings, "uint32_t", "srcQueueFamilyIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dstQueueFamilyIndex, settings, "uint32_t", "dstQueueFamilyIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const VkDeviceSize>(object.offset, settings, "VkDeviceSize", "offset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
ostream& dump_text_VkSparseImageOpaqueMemoryBindInfo(const VkSparseImageOpaqueMemoryBindInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImage>(object.image, settings, "VkImage", "image", indents + 1, dump_text_VkImage);
    dump_text_value<const uint32_t>(object.bindCount, settings, "uint32_t", "bindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseMemoryBind>(object.pBinds, object.bindCount, settings, "const VkSparseMemoryBind*", "const VkSparseMemoryBind", "pBinds", indents + 1, dump_text_VkSparseMemoryBind);
    return settings.stream();
}
ostream& dump_text_VkRect2D(const VkRect2D& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkOffset2D>(object.offset, settings, "VkOffset2D", "offset", indents + 1, dump_text_VkOffset2D);
    dump_text_value<const VkExtent2D>(object.extent, settings, "VkExtent2D", "extent", indents + 1, dump_text_VkExtent2D);
    return settings.stream();
}
ostream& dump_text_VkSparseMemoryBind(const VkSparseMemoryBind& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.resourceOffset, settings, "VkDeviceSize", "resourceOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceMemory>(object.memory, settings, "VkDeviceMemory", "memory", indents + 1, dump_text_VkDeviceMemory);
    dump_text_value<const VkDeviceSize>(object.memoryOffset, settings, "VkDeviceSize", "memoryOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkSparseMemoryBindFlags>(object.flags, settings, "VkSparseMemoryBindFlags", "flags", indents + 1, dump_text_VkSparseMemoryBindFlags);
    return settings.stream();
}
ostream& dump_text_VkImageMemoryBarrier(const VkImageMemoryBarrier& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkAccessFlags>(object.srcAccessMask, settings, "VkAccessFlags", "srcAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkAccessFlags>(object.dstAccessMask, settings, "VkAccessFlags", "dstAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkImageLayout>(object.oldLayout, settings, "VkImageLayout", "oldLayout", indents + 1, dump_text_VkImageLayout);
    dump_text_value<const VkImageLayout>(object.newLayout, settings, "VkImageLayout", "newLayout", indents + 1, dump_text_VkImageLayout);
    dump_text_value<const uint32_t>(object.srcQueueFamilyIndex, settings, "uint32_t", "srcQueueFamilyIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dstQueueFamilyIndex, settings, "uint32_t", "dstQueueFamilyIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkImage>(object.image, settings, "VkImage", "image", indents + 1, dump_text_VkImage);
    dump_text_value<const VkImageSubresourceRange>(object.subresourceRange, settings, "VkImageSubresourceRange", "subresourceRange", indents + 1, dump_text_VkImageSubresourceRange);
    return settings.stream();
}
ostream& dump_text_VkViewport(const VkViewport& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const float>(object.x, settings, "float", "x", indents + 1, dump_text_float);
    dump_text_value<const float>(object.y, settings, "float", "y", indents + 1, dump_text_float);
    dump_text_value<const float>(object.width, settings, "float", "width", indents + 1, dump_text_float);
    dump_text_value<const float>(object.height, settings, "float", "height", indents + 1, dump_text_float);
    dump_text_value<const float>(object.minDepth, settings, "float", "minDepth", indents + 1, dump_text_float);
    dump_text_value<const float>(object.maxDepth, settings, "float", "maxDepth", indents + 1, dump_text_float);
    return settings.stream();
}
ostream& dump_text_VkSparseBufferMemoryBindInfo(const VkSparseBufferMemoryBindInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const uint32_t>(object.bindCount, settings, "uint32_t", "bindCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSparseMemoryBind>(object.pBinds, object.bindCount, settings, "const VkSparseMemoryBind*", "const VkSparseMemoryBind", "pBinds", indents + 1, dump_text_VkSparseMemoryBind);
    return settings.stream();
}
ostream& dump_text_VkPipelineCacheCreateInfo(const VkPipelineCacheCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineCacheCreateFlags>(object.flags, settings, "VkPipelineCacheCreateFlags", "flags", indents + 1, dump_text_VkPipelineCacheCreateFlags);
    dump_text_value<const size_t>(object.initialDataSize, settings, "size_t", "initialDataSize", indents + 1, dump_text_size_t);
    dump_text_value<const void*>(object.pInitialData, settings, "const void*", "pInitialData", indents + 1, dump_text_void);
    return settings.stream();
}
ostream& dump_text_VkPipelineViewportStateCreateInfo(const VkPipelineViewportStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineViewportStateCreateFlags>(object.flags, settings, "VkPipelineViewportStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineViewportStateCreateFlags);
    dump_text_value<const uint32_t>(object.viewportCount, settings, "uint32_t", "viewportCount", indents + 1, dump_text_uint32_t);
    if(false)
    dump_text_array<const VkViewport>(object.pViewports, object.viewportCount, settings, "const VkViewport*", "const VkViewport", "pViewports", indents + 1, dump_text_VkViewport);
    else
        dump_text_special("UNUSED", settings, "const VkViewport*", "pViewports", indents + 1);
    dump_text_value<const uint32_t>(object.scissorCount, settings, "uint32_t", "scissorCount", indents + 1, dump_text_uint32_t);
    if(false)
    dump_text_array<const VkRect2D>(object.pScissors, object.scissorCount, settings, "const VkRect2D*", "const VkRect2D", "pScissors", indents + 1, dump_text_VkRect2D);
    else
        dump_text_special("UNUSED", settings, "const VkRect2D*", "pScissors", indents + 1);
    return settings.stream();
}
ostream& dump_text_VkPhysicalDeviceSparseProperties(const VkPhysicalDeviceSparseProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkBool32>(object.residencyStandard2DBlockShape, settings, "VkBool32", "residencyStandard2DBlockShape", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.residencyStandard2DMultisampleBlockShape, settings, "VkBool32", "residencyStandard2DMultisampleBlockShape", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.residencyStandard3DBlockShape, settings, "VkBool32", "residencyStandard3DBlockShape", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.residencyAlignedMipSize, settings, "VkBool32", "residencyAlignedMipSize", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.residencyNonResidentStrict, settings, "VkBool32", "residencyNonResidentStrict", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
ostream& dump_text_VkInstanceCreateInfo(const VkInstanceCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkInstanceCreateFlags>(object.flags, settings, "VkInstanceCreateFlags", "flags", indents + 1, dump_text_VkInstanceCreateFlags);
    dump_text_pointer<const VkApplicationInfo>(object.pApplicationInfo, settings, "const VkApplicationInfo*", "pApplicationInfo", indents + 1, dump_text_VkApplicationInfo);
    dump_text_value<const uint32_t>(object.enabledLayerCount, settings, "uint32_t", "enabledLayerCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const char*>(object.ppEnabledLayerNames, object.enabledLayerCount, settings, "const char* const*", "const char* const", "ppEnabledLayerNames", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.enabledExtensionCount, settings, "uint32_t", "enabledExtensionCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const char*>(object.ppEnabledExtensionNames, object.enabledExtensionCount, settings, "const char* const*", "const char* const", "ppEnabledExtensionNames", indents + 1, dump_text_cstring);
    return settings.stream();
}
ostream& dump_text_VkDisplayPropertiesKHR(const VkDisplayPropertiesKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDisplayKHR>(object.display, settings, "VkDisplayKHR", "display", indents + 1, dump_text_VkDisplayKHR);
    dump_text_value<const char*>(object.displayName, settings, "const char*", "displayName", indents + 1, dump_text_cstring);
    dump_text_value<const VkExtent2D>(object.physicalDimensions, settings, "VkExtent2D", "physicalDimensions", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.physicalResolution, settings, "VkExtent2D", "physicalResolution", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkSurfaceTransformFlagsKHR>(object.supportedTransforms, settings, "VkSurfaceTransformFlagsKHR", "supportedTransforms", indents + 1, dump_text_VkSurfaceTransformFlagsKHR);
    dump_text_value<const VkBool32>(object.planeReorderPossible, settings, "VkBool32", "planeReorderPossible", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.persistentContent, settings, "VkBool32", "persistentContent", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
ostream& dump_text_VkDisplayModeParametersKHR(const VkDisplayModeParametersKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkExtent2D>(object.visibleRegion, settings, "VkExtent2D", "visibleRegion", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const uint32_t>(object.refreshRate, settings, "uint32_t", "refreshRate", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkPipelineInputAssemblyStateCreateInfo(const VkPipelineInputAssemblyStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineInputAssemblyStateCreateFlags>(object.flags, settings, "VkPipelineInputAssemblyStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineInputAssemblyStateCreateFlags);
    dump_text_value<const VkPrimitiveTopology>(object.topology, settings, "VkPrimitiveTopology", "topology", indents + 1, dump_text_VkPrimitiveTopology);
    dump_text_value<const VkBool32>(object.primitiveRestartEnable, settings, "VkBool32", "primitiveRestartEnable", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
ostream& dump_text_VkSwapchainCreateInfoKHR(const VkSwapchainCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSwapchainCreateFlagsKHR>(object.flags, settings, "VkSwapchainCreateFlagsKHR", "flags", indents + 1, dump_text_VkSwapchainCreateFlagsKHR);
    dump_text_value<const VkSurfaceKHR>(object.surface, settings, "VkSurfaceKHR", "surface", indents + 1, dump_text_VkSurfaceKHR);
    dump_text_value<const uint32_t>(object.minImageCount, settings, "uint32_t", "minImageCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkFormat>(object.imageFormat, settings, "VkFormat", "imageFormat", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkColorSpaceKHR>(object.imageColorSpace, settings, "VkColorSpaceKHR", "imageColorSpace", indents + 1, dump_text_VkColorSpaceKHR);
    dump_text_value<const VkExtent2D>(object.imageExtent, settings, "VkExtent2D", "imageExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const uint32_t>(object.imageArrayLayers, settings, "uint32_t", "imageArrayLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkImageUsageFlags>(object.imageUsage, settings, "VkImageUsageFlags", "imageUsage", indents + 1, dump_text_VkImageUsageFlags);
    dump_text_value<const VkSharingMode>(object.imageSharingMode, settings, "VkSharingMode", "imageSharingMode", indents + 1, dump_text_VkSharingMode);
    dump_text_value<const uint32_t>(object.queueFamilyIndexCount, settings, "uint32_t", "queueFamilyIndexCount", indents + 1, dump_text_uint32_t);
    if(object.imageSharingMode == VK_SHARING_MODE_CONCURRENT)
    dump_text_array<const uint32_t>(object.pQueueFamilyIndices, object.queueFamilyIndexCount, settings, "const uint32_t*", "const uint32_t", "pQueueFamilyIndices", indents + 1, dump_text_uint32_t);
    else
        dump_text_special("UNUSED", settings, "const uint32_t*", "pQueueFamilyIndices", indents + 1);
    dump_text_value<const VkSurfaceTransformFlagBitsKHR>(object.preTransform, settings, "VkSurfaceTransformFlagBitsKHR", "preTransform", indents + 1, dump_text_VkSurfaceTransformFlagBitsKHR);
    dump_text_value<const VkCompositeAlphaFlagBitsKHR>(object.compositeAlpha, settings, "VkCompositeAlphaFlagBitsKHR", "compositeAlpha", indents + 1, dump_text_VkCompositeAlphaFlagBitsKHR);
    dump_text_value<const VkPresentModeKHR>(object.presentMode, settings, "VkPresentModeKHR", "presentMode", indents + 1, dump_text_VkPresentModeKHR);
    dump_text_value<const VkBool32>(object.clipped, settings, "VkBool32", "clipped", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkSwapchainKHR>(object.oldSwapchain, settings, "VkSwapchainKHR", "oldSwapchain", indents + 1, dump_text_VkSwapchainKHR);
    return settings.stream();
}
ostream& dump_text_VkPipelineRasterizationStateRasterizationOrderAMD(const VkPipelineRasterizationStateRasterizationOrderAMD& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkRasterizationOrderAMD>(object.rasterizationOrder, settings, "VkRasterizationOrderAMD", "rasterizationOrder", indents + 1, dump_text_VkRasterizationOrderAMD);
    return settings.stream();
}
ostream& dump_text_VkDisplayModePropertiesKHR(const VkDisplayModePropertiesKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDisplayModeKHR>(object.displayMode, settings, "VkDisplayModeKHR", "displayMode", indents + 1, dump_text_VkDisplayModeKHR);
    dump_text_value<const VkDisplayModeParametersKHR>(object.parameters, settings, "VkDisplayModeParametersKHR", "parameters", indents + 1, dump_text_VkDisplayModeParametersKHR);
    return settings.stream();
}
ostream& dump_text_VkSparseImageFormatProperties(const VkSparseImageFormatProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageAspectFlags>(object.aspectMask, settings, "VkImageAspectFlags", "aspectMask", indents + 1, dump_text_VkImageAspectFlags);
    dump_text_value<const VkExtent3D>(object.imageGranularity, settings, "VkExtent3D", "imageGranularity", indents + 1, dump_text_VkExtent3D);
    dump_text_value<const VkSparseImageFormatFlags>(object.flags, settings, "VkSparseImageFormatFlags", "flags", indents + 1, dump_text_VkSparseImageFormatFlags);
    return settings.stream();
}
ostream& dump_text_VkPhysicalDeviceLimits(const VkPhysicalDeviceLimits& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.maxImageDimension1D, settings, "uint32_t", "maxImageDimension1D", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxImageDimension2D, settings, "uint32_t", "maxImageDimension2D", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxImageDimension3D, settings, "uint32_t", "maxImageDimension3D", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxImageDimensionCube, settings, "uint32_t", "maxImageDimensionCube", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxImageArrayLayers, settings, "uint32_t", "maxImageArrayLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTexelBufferElements, settings, "uint32_t", "maxTexelBufferElements", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxUniformBufferRange, settings, "uint32_t", "maxUniformBufferRange", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxStorageBufferRange, settings, "uint32_t", "maxStorageBufferRange", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPushConstantsSize, settings, "uint32_t", "maxPushConstantsSize", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxMemoryAllocationCount, settings, "uint32_t", "maxMemoryAllocationCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxSamplerAllocationCount, settings, "uint32_t", "maxSamplerAllocationCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDeviceSize>(object.bufferImageGranularity, settings, "VkDeviceSize", "bufferImageGranularity", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.sparseAddressSpaceSize, settings, "VkDeviceSize", "sparseAddressSpaceSize", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const uint32_t>(object.maxBoundDescriptorSets, settings, "uint32_t", "maxBoundDescriptorSets", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorSamplers, settings, "uint32_t", "maxPerStageDescriptorSamplers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorUniformBuffers, settings, "uint32_t", "maxPerStageDescriptorUniformBuffers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorStorageBuffers, settings, "uint32_t", "maxPerStageDescriptorStorageBuffers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorSampledImages, settings, "uint32_t", "maxPerStageDescriptorSampledImages", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorStorageImages, settings, "uint32_t", "maxPerStageDescriptorStorageImages", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageDescriptorInputAttachments, settings, "uint32_t", "maxPerStageDescriptorInputAttachments", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxPerStageResources, settings, "uint32_t", "maxPerStageResources", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetSamplers, settings, "uint32_t", "maxDescriptorSetSamplers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetUniformBuffers, settings, "uint32_t", "maxDescriptorSetUniformBuffers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetUniformBuffersDynamic, settings, "uint32_t", "maxDescriptorSetUniformBuffersDynamic", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetStorageBuffers, settings, "uint32_t", "maxDescriptorSetStorageBuffers", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetStorageBuffersDynamic, settings, "uint32_t", "maxDescriptorSetStorageBuffersDynamic", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetSampledImages, settings, "uint32_t", "maxDescriptorSetSampledImages", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetStorageImages, settings, "uint32_t", "maxDescriptorSetStorageImages", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDescriptorSetInputAttachments, settings, "uint32_t", "maxDescriptorSetInputAttachments", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxVertexInputAttributes, settings, "uint32_t", "maxVertexInputAttributes", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxVertexInputBindings, settings, "uint32_t", "maxVertexInputBindings", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxVertexInputAttributeOffset, settings, "uint32_t", "maxVertexInputAttributeOffset", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxVertexInputBindingStride, settings, "uint32_t", "maxVertexInputBindingStride", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxVertexOutputComponents, settings, "uint32_t", "maxVertexOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationGenerationLevel, settings, "uint32_t", "maxTessellationGenerationLevel", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationPatchSize, settings, "uint32_t", "maxTessellationPatchSize", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationControlPerVertexInputComponents, settings, "uint32_t", "maxTessellationControlPerVertexInputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationControlPerVertexOutputComponents, settings, "uint32_t", "maxTessellationControlPerVertexOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationControlPerPatchOutputComponents, settings, "uint32_t", "maxTessellationControlPerPatchOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationControlTotalOutputComponents, settings, "uint32_t", "maxTessellationControlTotalOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationEvaluationInputComponents, settings, "uint32_t", "maxTessellationEvaluationInputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxTessellationEvaluationOutputComponents, settings, "uint32_t", "maxTessellationEvaluationOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxGeometryShaderInvocations, settings, "uint32_t", "maxGeometryShaderInvocations", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxGeometryInputComponents, settings, "uint32_t", "maxGeometryInputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxGeometryOutputComponents, settings, "uint32_t", "maxGeometryOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxGeometryOutputVertices, settings, "uint32_t", "maxGeometryOutputVertices", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxGeometryTotalOutputComponents, settings, "uint32_t", "maxGeometryTotalOutputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFragmentInputComponents, settings, "uint32_t", "maxFragmentInputComponents", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFragmentOutputAttachments, settings, "uint32_t", "maxFragmentOutputAttachments", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFragmentDualSrcAttachments, settings, "uint32_t", "maxFragmentDualSrcAttachments", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFragmentCombinedOutputResources, settings, "uint32_t", "maxFragmentCombinedOutputResources", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxComputeSharedMemorySize, settings, "uint32_t", "maxComputeSharedMemorySize", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.maxComputeWorkGroupCount, 3, settings, "uint32_t[3]", "uint32_t", "maxComputeWorkGroupCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxComputeWorkGroupInvocations, settings, "uint32_t", "maxComputeWorkGroupInvocations", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.maxComputeWorkGroupSize, 3, settings, "uint32_t[3]", "uint32_t", "maxComputeWorkGroupSize", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.subPixelPrecisionBits, settings, "uint32_t", "subPixelPrecisionBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.subTexelPrecisionBits, settings, "uint32_t", "subTexelPrecisionBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.mipmapPrecisionBits, settings, "uint32_t", "mipmapPrecisionBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDrawIndexedIndexValue, settings, "uint32_t", "maxDrawIndexedIndexValue", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxDrawIndirectCount, settings, "uint32_t", "maxDrawIndirectCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const float>(object.maxSamplerLodBias, settings, "float", "maxSamplerLodBias", indents + 1, dump_text_float);
    dump_text_value<const float>(object.maxSamplerAnisotropy, settings, "float", "maxSamplerAnisotropy", indents + 1, dump_text_float);
    dump_text_value<const uint32_t>(object.maxViewports, settings, "uint32_t", "maxViewports", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.maxViewportDimensions, 2, settings, "uint32_t[2]", "uint32_t", "maxViewportDimensions", indents + 1, dump_text_uint32_t);
    dump_text_array<const float>(object.viewportBoundsRange, 2, settings, "float[2]", "float", "viewportBoundsRange", indents + 1, dump_text_float);
    dump_text_value<const uint32_t>(object.viewportSubPixelBits, settings, "uint32_t", "viewportSubPixelBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const size_t>(object.minMemoryMapAlignment, settings, "size_t", "minMemoryMapAlignment", indents + 1, dump_text_size_t);
    dump_text_value<const VkDeviceSize>(object.minTexelBufferOffsetAlignment, settings, "VkDeviceSize", "minTexelBufferOffsetAlignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.minUniformBufferOffsetAlignment, settings, "VkDeviceSize", "minUniformBufferOffsetAlignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.minStorageBufferOffsetAlignment, settings, "VkDeviceSize", "minStorageBufferOffsetAlignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const int32_t>(object.minTexelOffset, settings, "int32_t", "minTexelOffset", indents + 1, dump_text_int32_t);
    dump_text_value<const uint32_t>(object.maxTexelOffset, settings, "uint32_t", "maxTexelOffset", indents + 1, dump_text_uint32_t);
    dump_text_value<const int32_t>(object.minTexelGatherOffset, settings, "int32_t", "minTexelGatherOffset", indents + 1, dump_text_int32_t);
    dump_text_value<const uint32_t>(object.maxTexelGatherOffset, settings, "uint32_t", "maxTexelGatherOffset", indents + 1, dump_text_uint32_t);
    dump_text_value<const float>(object.minInterpolationOffset, settings, "float", "minInterpolationOffset", indents + 1, dump_text_float);
    dump_text_value<const float>(object.maxInterpolationOffset, settings, "float", "maxInterpolationOffset", indents + 1, dump_text_float);
    dump_text_value<const uint32_t>(object.subPixelInterpolationOffsetBits, settings, "uint32_t", "subPixelInterpolationOffsetBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFramebufferWidth, settings, "uint32_t", "maxFramebufferWidth", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFramebufferHeight, settings, "uint32_t", "maxFramebufferHeight", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxFramebufferLayers, settings, "uint32_t", "maxFramebufferLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSampleCountFlags>(object.framebufferColorSampleCounts, settings, "VkSampleCountFlags", "framebufferColorSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.framebufferDepthSampleCounts, settings, "VkSampleCountFlags", "framebufferDepthSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.framebufferStencilSampleCounts, settings, "VkSampleCountFlags", "framebufferStencilSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.framebufferNoAttachmentsSampleCounts, settings, "VkSampleCountFlags", "framebufferNoAttachmentsSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const uint32_t>(object.maxColorAttachments, settings, "uint32_t", "maxColorAttachments", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSampleCountFlags>(object.sampledImageColorSampleCounts, settings, "VkSampleCountFlags", "sampledImageColorSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.sampledImageIntegerSampleCounts, settings, "VkSampleCountFlags", "sampledImageIntegerSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.sampledImageDepthSampleCounts, settings, "VkSampleCountFlags", "sampledImageDepthSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.sampledImageStencilSampleCounts, settings, "VkSampleCountFlags", "sampledImageStencilSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const VkSampleCountFlags>(object.storageImageSampleCounts, settings, "VkSampleCountFlags", "storageImageSampleCounts", indents + 1, dump_text_VkSampleCountFlags);
    dump_text_value<const uint32_t>(object.maxSampleMaskWords, settings, "uint32_t", "maxSampleMaskWords", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkBool32>(object.timestampComputeAndGraphics, settings, "VkBool32", "timestampComputeAndGraphics", indents + 1, dump_text_VkBool32);
    dump_text_value<const float>(object.timestampPeriod, settings, "float", "timestampPeriod", indents + 1, dump_text_float);
    dump_text_value<const uint32_t>(object.maxClipDistances, settings, "uint32_t", "maxClipDistances", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxCullDistances, settings, "uint32_t", "maxCullDistances", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxCombinedClipAndCullDistances, settings, "uint32_t", "maxCombinedClipAndCullDistances", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.discreteQueuePriorities, settings, "uint32_t", "discreteQueuePriorities", indents + 1, dump_text_uint32_t);
    dump_text_array<const float>(object.pointSizeRange, 2, settings, "float[2]", "float", "pointSizeRange", indents + 1, dump_text_float);
    dump_text_array<const float>(object.lineWidthRange, 2, settings, "float[2]", "float", "lineWidthRange", indents + 1, dump_text_float);
    dump_text_value<const float>(object.pointSizeGranularity, settings, "float", "pointSizeGranularity", indents + 1, dump_text_float);
    dump_text_value<const float>(object.lineWidthGranularity, settings, "float", "lineWidthGranularity", indents + 1, dump_text_float);
    dump_text_value<const VkBool32>(object.strictLines, settings, "VkBool32", "strictLines", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.standardSampleLocations, settings, "VkBool32", "standardSampleLocations", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkDeviceSize>(object.optimalBufferCopyOffsetAlignment, settings, "VkDeviceSize", "optimalBufferCopyOffsetAlignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.optimalBufferCopyRowPitchAlignment, settings, "VkDeviceSize", "optimalBufferCopyRowPitchAlignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.nonCoherentAtomSize, settings, "VkDeviceSize", "nonCoherentAtomSize", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
ostream& dump_text_VkDedicatedAllocationBufferCreateInfoNV(const VkDedicatedAllocationBufferCreateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBool32>(object.dedicatedAllocation, settings, "VkBool32", "dedicatedAllocation", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
ostream& dump_text_VkDisplayModeCreateInfoKHR(const VkDisplayModeCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDisplayModeCreateFlagsKHR>(object.flags, settings, "VkDisplayModeCreateFlagsKHR", "flags", indents + 1, dump_text_VkDisplayModeCreateFlagsKHR);
    dump_text_value<const VkDisplayModeParametersKHR>(object.parameters, settings, "VkDisplayModeParametersKHR", "parameters", indents + 1, dump_text_VkDisplayModeParametersKHR);
    return settings.stream();
}
ostream& dump_text_VkExternalImageFormatPropertiesNV(const VkExternalImageFormatPropertiesNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageFormatProperties>(object.imageFormatProperties, settings, "VkImageFormatProperties", "imageFormatProperties", indents + 1, dump_text_VkImageFormatProperties);
    dump_text_value<const VkExternalMemoryFeatureFlagsNV>(object.externalMemoryFeatures, settings, "VkExternalMemoryFeatureFlagsNV", "externalMemoryFeatures", indents + 1, dump_text_VkExternalMemoryFeatureFlagsNV);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(object.exportFromImportedHandleTypes, settings, "VkExternalMemoryHandleTypeFlagsNV", "exportFromImportedHandleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(object.compatibleHandleTypes, settings, "VkExternalMemoryHandleTypeFlagsNV", "compatibleHandleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
    return settings.stream();
}
ostream& dump_text_VkPhysicalDeviceProperties(const VkPhysicalDeviceProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.apiVersion, settings, "uint32_t", "apiVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.driverVersion, settings, "uint32_t", "driverVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.vendorID, settings, "uint32_t", "vendorID", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.deviceID, settings, "uint32_t", "deviceID", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkPhysicalDeviceType>(object.deviceType, settings, "VkPhysicalDeviceType", "deviceType", indents + 1, dump_text_VkPhysicalDeviceType);
    dump_text_value<const char*>(object.deviceName, settings, "char[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE]", "deviceName", indents + 1, dump_text_cstring);
    dump_text_array<const uint8_t>(object.pipelineCacheUUID, 16, settings, "uint8_t[VK_UUID_SIZE]", "uint8_t", "pipelineCacheUUID", indents + 1, dump_text_uint8_t);
    dump_text_value<const VkPhysicalDeviceLimits>(object.limits, settings, "VkPhysicalDeviceLimits", "limits", indents + 1, dump_text_VkPhysicalDeviceLimits);
    dump_text_value<const VkPhysicalDeviceSparseProperties>(object.sparseProperties, settings, "VkPhysicalDeviceSparseProperties", "sparseProperties", indents + 1, dump_text_VkPhysicalDeviceSparseProperties);
    return settings.stream();
}
ostream& dump_text_VkDisplayPlaneCapabilitiesKHR(const VkDisplayPlaneCapabilitiesKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDisplayPlaneAlphaFlagsKHR>(object.supportedAlpha, settings, "VkDisplayPlaneAlphaFlagsKHR", "supportedAlpha", indents + 1, dump_text_VkDisplayPlaneAlphaFlagsKHR);
    dump_text_value<const VkOffset2D>(object.minSrcPosition, settings, "VkOffset2D", "minSrcPosition", indents + 1, dump_text_VkOffset2D);
    dump_text_value<const VkOffset2D>(object.maxSrcPosition, settings, "VkOffset2D", "maxSrcPosition", indents + 1, dump_text_VkOffset2D);
    dump_text_value<const VkExtent2D>(object.minSrcExtent, settings, "VkExtent2D", "minSrcExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.maxSrcExtent, settings, "VkExtent2D", "maxSrcExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkOffset2D>(object.minDstPosition, settings, "VkOffset2D", "minDstPosition", indents + 1, dump_text_VkOffset2D);
    dump_text_value<const VkOffset2D>(object.maxDstPosition, settings, "VkOffset2D", "maxDstPosition", indents + 1, dump_text_VkOffset2D);
    dump_text_value<const VkExtent2D>(object.minDstExtent, settings, "VkExtent2D", "minDstExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.maxDstExtent, settings, "VkExtent2D", "maxDstExtent", indents + 1, dump_text_VkExtent2D);
    return settings.stream();
}
ostream& dump_text_VkPipelineTessellationStateCreateInfo(const VkPipelineTessellationStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineTessellationStateCreateFlags>(object.flags, settings, "VkPipelineTessellationStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineTessellationStateCreateFlags);
    dump_text_value<const uint32_t>(object.patchControlPoints, settings, "uint32_t", "patchControlPoints", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkDisplayPlanePropertiesKHR(const VkDisplayPlanePropertiesKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDisplayKHR>(object.currentDisplay, settings, "VkDisplayKHR", "currentDisplay", indents + 1, dump_text_VkDisplayKHR);
    dump_text_value<const uint32_t>(object.currentStackIndex, settings, "uint32_t", "currentStackIndex", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkExternalMemoryImageCreateInfoNV(const VkExternalMemoryImageCreateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(object.handleTypes, settings, "VkExternalMemoryHandleTypeFlagsNV", "handleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
    return settings.stream();
}
ostream& dump_text_VkDedicatedAllocationMemoryAllocateInfoNV(const VkDedicatedAllocationMemoryAllocateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkImage>(object.image, settings, "VkImage", "image", indents + 1, dump_text_VkImage);
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    return settings.stream();
}
ostream& dump_text_VkDisplaySurfaceCreateInfoKHR(const VkDisplaySurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDisplaySurfaceCreateFlagsKHR>(object.flags, settings, "VkDisplaySurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkDisplaySurfaceCreateFlagsKHR);
    dump_text_value<const VkDisplayModeKHR>(object.displayMode, settings, "VkDisplayModeKHR", "displayMode", indents + 1, dump_text_VkDisplayModeKHR);
    dump_text_value<const uint32_t>(object.planeIndex, settings, "uint32_t", "planeIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.planeStackIndex, settings, "uint32_t", "planeStackIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSurfaceTransformFlagBitsKHR>(object.transform, settings, "VkSurfaceTransformFlagBitsKHR", "transform", indents + 1, dump_text_VkSurfaceTransformFlagBitsKHR);
    dump_text_value<const float>(object.globalAlpha, settings, "float", "globalAlpha", indents + 1, dump_text_float);
    dump_text_value<const VkDisplayPlaneAlphaFlagBitsKHR>(object.alphaMode, settings, "VkDisplayPlaneAlphaFlagBitsKHR", "alphaMode", indents + 1, dump_text_VkDisplayPlaneAlphaFlagBitsKHR);
    dump_text_value<const VkExtent2D>(object.imageExtent, settings, "VkExtent2D", "imageExtent", indents + 1, dump_text_VkExtent2D);
    return settings.stream();
}
ostream& dump_text_VkSparseImageMemoryRequirements(const VkSparseImageMemoryRequirements& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkSparseImageFormatProperties>(object.formatProperties, settings, "VkSparseImageFormatProperties", "formatProperties", indents + 1, dump_text_VkSparseImageFormatProperties);
    dump_text_value<const uint32_t>(object.imageMipTailFirstLod, settings, "uint32_t", "imageMipTailFirstLod", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDeviceSize>(object.imageMipTailSize, settings, "VkDeviceSize", "imageMipTailSize", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.imageMipTailOffset, settings, "VkDeviceSize", "imageMipTailOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.imageMipTailStride, settings, "VkDeviceSize", "imageMipTailStride", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
ostream& dump_text_VkExportMemoryAllocateInfoNV(const VkExportMemoryAllocateInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(object.handleTypes, settings, "VkExternalMemoryHandleTypeFlagsNV", "handleTypes", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
    return settings.stream();
}
ostream& dump_text_VkDescriptorPoolCreateInfo(const VkDescriptorPoolCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDescriptorPoolCreateFlags>(object.flags, settings, "VkDescriptorPoolCreateFlags", "flags", indents + 1, dump_text_VkDescriptorPoolCreateFlags);
    dump_text_value<const uint32_t>(object.maxSets, settings, "uint32_t", "maxSets", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.poolSizeCount, settings, "uint32_t", "poolSizeCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDescriptorPoolSize>(object.pPoolSizes, object.poolSizeCount, settings, "const VkDescriptorPoolSize*", "const VkDescriptorPoolSize", "pPoolSizes", indents + 1, dump_text_VkDescriptorPoolSize);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
ostream& dump_text_VkImportMemoryWin32HandleInfoNV(const VkImportMemoryWin32HandleInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(object.handleType, settings, "VkExternalMemoryHandleTypeFlagsNV", "handleType", indents + 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
    dump_text_value<const HANDLE>(object.handle, settings, "HANDLE", "handle", indents + 1, dump_text_HANDLE);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
ostream& dump_text_VkLayerProperties(const VkLayerProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const char*>(object.layerName, settings, "char[VK_MAX_EXTENSION_NAME_SIZE]", "layerName", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.specVersion, settings, "uint32_t", "specVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.implementationVersion, settings, "uint32_t", "implementationVersion", indents + 1, dump_text_uint32_t);
    dump_text_value<const char*>(object.description, settings, "char[VK_MAX_DESCRIPTION_SIZE]", "description", indents + 1, dump_text_cstring);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
ostream& dump_text_VkExportMemoryWin32HandleInfoNV(const VkExportMemoryWin32HandleInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const SECURITY_ATTRIBUTES*>(object.pAttributes, settings, "const SECURITY_ATTRIBUTES*", "pAttributes", indents + 1, dump_text_SECURITY_ATTRIBUTES);
    dump_text_value<const DWORD>(object.dwAccess, settings, "DWORD", "dwAccess", indents + 1, dump_text_DWORD);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
ostream& dump_text_VkMemoryRequirements(const VkMemoryRequirements& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.alignment, settings, "VkDeviceSize", "alignment", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const uint32_t>(object.memoryTypeBits, settings, "uint32_t", "memoryTypeBits", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkImageSubresourceRange(const VkImageSubresourceRange& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageAspectFlags>(object.aspectMask, settings, "VkImageAspectFlags", "aspectMask", indents + 1, dump_text_VkImageAspectFlags);
    dump_text_value<const uint32_t>(object.baseMipLevel, settings, "uint32_t", "baseMipLevel", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.levelCount, settings, "uint32_t", "levelCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.baseArrayLayer, settings, "uint32_t", "baseArrayLayer", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.layerCount, settings, "uint32_t", "layerCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkBufferCreateInfo(const VkBufferCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBufferCreateFlags>(object.flags, settings, "VkBufferCreateFlags", "flags", indents + 1, dump_text_VkBufferCreateFlags);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkBufferUsageFlags>(object.usage, settings, "VkBufferUsageFlags", "usage", indents + 1, dump_text_VkBufferUsageFlags);
    dump_text_value<const VkSharingMode>(object.sharingMode, settings, "VkSharingMode", "sharingMode", indents + 1, dump_text_VkSharingMode);
    dump_text_value<const uint32_t>(object.queueFamilyIndexCount, settings, "uint32_t", "queueFamilyIndexCount", indents + 1, dump_text_uint32_t);
    if(object.sharingMode == VK_SHARING_MODE_CONCURRENT)
    dump_text_array<const uint32_t>(object.pQueueFamilyIndices, object.queueFamilyIndexCount, settings, "const uint32_t*", "const uint32_t", "pQueueFamilyIndices", indents + 1, dump_text_uint32_t);
    else
        dump_text_special("UNUSED", settings, "const uint32_t*", "pQueueFamilyIndices", indents + 1);
    return settings.stream();
}
ostream& dump_text_VkStencilOpState(const VkStencilOpState& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStencilOp>(object.failOp, settings, "VkStencilOp", "failOp", indents + 1, dump_text_VkStencilOp);
    dump_text_value<const VkStencilOp>(object.passOp, settings, "VkStencilOp", "passOp", indents + 1, dump_text_VkStencilOp);
    dump_text_value<const VkStencilOp>(object.depthFailOp, settings, "VkStencilOp", "depthFailOp", indents + 1, dump_text_VkStencilOp);
    dump_text_value<const VkCompareOp>(object.compareOp, settings, "VkCompareOp", "compareOp", indents + 1, dump_text_VkCompareOp);
    dump_text_value<const uint32_t>(object.compareMask, settings, "uint32_t", "compareMask", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.writeMask, settings, "uint32_t", "writeMask", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.reference, settings, "uint32_t", "reference", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkDescriptorSetLayoutCreateInfo(const VkDescriptorSetLayoutCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDescriptorSetLayoutCreateFlags>(object.flags, settings, "VkDescriptorSetLayoutCreateFlags", "flags", indents + 1, dump_text_VkDescriptorSetLayoutCreateFlags);
    dump_text_value<const uint32_t>(object.bindingCount, settings, "uint32_t", "bindingCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDescriptorSetLayoutBinding>(object.pBindings, object.bindingCount, settings, "const VkDescriptorSetLayoutBinding*", "const VkDescriptorSetLayoutBinding", "pBindings", indents + 1, dump_text_VkDescriptorSetLayoutBinding);
    return settings.stream();
}
ostream& dump_text_VkRenderPassCreateInfo(const VkRenderPassCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkRenderPassCreateFlags>(object.flags, settings, "VkRenderPassCreateFlags", "flags", indents + 1, dump_text_VkRenderPassCreateFlags);
    dump_text_value<const uint32_t>(object.attachmentCount, settings, "uint32_t", "attachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkAttachmentDescription>(object.pAttachments, object.attachmentCount, settings, "const VkAttachmentDescription*", "const VkAttachmentDescription", "pAttachments", indents + 1, dump_text_VkAttachmentDescription);
    dump_text_value<const uint32_t>(object.subpassCount, settings, "uint32_t", "subpassCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSubpassDescription>(object.pSubpasses, object.subpassCount, settings, "const VkSubpassDescription*", "const VkSubpassDescription", "pSubpasses", indents + 1, dump_text_VkSubpassDescription);
    dump_text_value<const uint32_t>(object.dependencyCount, settings, "uint32_t", "dependencyCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSubpassDependency>(object.pDependencies, object.dependencyCount, settings, "const VkSubpassDependency*", "const VkSubpassDependency", "pDependencies", indents + 1, dump_text_VkSubpassDependency);
    return settings.stream();
}
ostream& dump_text_VkDescriptorSetLayoutBinding(const VkDescriptorSetLayoutBinding& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.binding, settings, "uint32_t", "binding", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDescriptorType>(object.descriptorType, settings, "VkDescriptorType", "descriptorType", indents + 1, dump_text_VkDescriptorType);
    dump_text_value<const uint32_t>(object.descriptorCount, settings, "uint32_t", "descriptorCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkShaderStageFlags>(object.stageFlags, settings, "VkShaderStageFlags", "stageFlags", indents + 1, dump_text_VkShaderStageFlags);
    if((object.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER))
    dump_text_array<const VkSampler>(object.pImmutableSamplers, object.descriptorCount, settings, "const VkSampler*", "const VkSampler", "pImmutableSamplers", indents + 1, dump_text_VkSampler);
    else
        dump_text_special("UNUSED", settings, "const VkSampler*", "pImmutableSamplers", indents + 1);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
ostream& dump_text_VkWin32KeyedMutexAcquireReleaseInfoNV(const VkWin32KeyedMutexAcquireReleaseInfoNV& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.acquireCount, settings, "uint32_t", "acquireCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDeviceMemory>(object.pAcquireSyncs, object.acquireCount, settings, "const VkDeviceMemory*", "const VkDeviceMemory", "pAcquireSyncs", indents + 1, dump_text_VkDeviceMemory);
    dump_text_array<const uint64_t>(object.pAcquireKeys, object.acquireCount, settings, "const uint64_t*", "const uint64_t", "pAcquireKeys", indents + 1, dump_text_uint64_t);
    dump_text_array<const uint32_t>(object.pAcquireTimeoutMilliseconds, object.acquireCount, settings, "const uint32_t*", "const uint32_t", "pAcquireTimeoutMilliseconds", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.releaseCount, settings, "uint32_t", "releaseCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDeviceMemory>(object.pReleaseSyncs, object.releaseCount, settings, "const VkDeviceMemory*", "const VkDeviceMemory", "pReleaseSyncs", indents + 1, dump_text_VkDeviceMemory);
    dump_text_array<const uint64_t>(object.pReleaseKeys, object.releaseCount, settings, "const uint64_t*", "const uint64_t", "pReleaseKeys", indents + 1, dump_text_uint64_t);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WIN32_KHR
ostream& dump_text_VkExtensionProperties(const VkExtensionProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const char*>(object.extensionName, settings, "char[VK_MAX_EXTENSION_NAME_SIZE]", "extensionName", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.specVersion, settings, "uint32_t", "specVersion", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkComponentMapping(const VkComponentMapping& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkComponentSwizzle>(object.r, settings, "VkComponentSwizzle", "r", indents + 1, dump_text_VkComponentSwizzle);
    dump_text_value<const VkComponentSwizzle>(object.g, settings, "VkComponentSwizzle", "g", indents + 1, dump_text_VkComponentSwizzle);
    dump_text_value<const VkComponentSwizzle>(object.b, settings, "VkComponentSwizzle", "b", indents + 1, dump_text_VkComponentSwizzle);
    dump_text_value<const VkComponentSwizzle>(object.a, settings, "VkComponentSwizzle", "a", indents + 1, dump_text_VkComponentSwizzle);
    return settings.stream();
}
ostream& dump_text_VkImageViewCreateInfo(const VkImageViewCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkImageViewCreateFlags>(object.flags, settings, "VkImageViewCreateFlags", "flags", indents + 1, dump_text_VkImageViewCreateFlags);
    dump_text_value<const VkImage>(object.image, settings, "VkImage", "image", indents + 1, dump_text_VkImage);
    dump_text_value<const VkImageViewType>(object.viewType, settings, "VkImageViewType", "viewType", indents + 1, dump_text_VkImageViewType);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkComponentMapping>(object.components, settings, "VkComponentMapping", "components", indents + 1, dump_text_VkComponentMapping);
    dump_text_value<const VkImageSubresourceRange>(object.subresourceRange, settings, "VkImageSubresourceRange", "subresourceRange", indents + 1, dump_text_VkImageSubresourceRange);
    return settings.stream();
}
ostream& dump_text_VkPipelineColorBlendStateCreateInfo(const VkPipelineColorBlendStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineColorBlendStateCreateFlags>(object.flags, settings, "VkPipelineColorBlendStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineColorBlendStateCreateFlags);
    dump_text_value<const VkBool32>(object.logicOpEnable, settings, "VkBool32", "logicOpEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkLogicOp>(object.logicOp, settings, "VkLogicOp", "logicOp", indents + 1, dump_text_VkLogicOp);
    dump_text_value<const uint32_t>(object.attachmentCount, settings, "uint32_t", "attachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkPipelineColorBlendAttachmentState>(object.pAttachments, object.attachmentCount, settings, "const VkPipelineColorBlendAttachmentState*", "const VkPipelineColorBlendAttachmentState", "pAttachments", indents + 1, dump_text_VkPipelineColorBlendAttachmentState);
    dump_text_array<const float>(object.blendConstants, 4, settings, "float[4]", "float", "blendConstants", indents + 1, dump_text_float);
    return settings.stream();
}
ostream& dump_text_VkAttachmentDescription(const VkAttachmentDescription& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkAttachmentDescriptionFlags>(object.flags, settings, "VkAttachmentDescriptionFlags", "flags", indents + 1, dump_text_VkAttachmentDescriptionFlags);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkSampleCountFlagBits>(object.samples, settings, "VkSampleCountFlagBits", "samples", indents + 1, dump_text_VkSampleCountFlagBits);
    dump_text_value<const VkAttachmentLoadOp>(object.loadOp, settings, "VkAttachmentLoadOp", "loadOp", indents + 1, dump_text_VkAttachmentLoadOp);
    dump_text_value<const VkAttachmentStoreOp>(object.storeOp, settings, "VkAttachmentStoreOp", "storeOp", indents + 1, dump_text_VkAttachmentStoreOp);
    dump_text_value<const VkAttachmentLoadOp>(object.stencilLoadOp, settings, "VkAttachmentLoadOp", "stencilLoadOp", indents + 1, dump_text_VkAttachmentLoadOp);
    dump_text_value<const VkAttachmentStoreOp>(object.stencilStoreOp, settings, "VkAttachmentStoreOp", "stencilStoreOp", indents + 1, dump_text_VkAttachmentStoreOp);
    dump_text_value<const VkImageLayout>(object.initialLayout, settings, "VkImageLayout", "initialLayout", indents + 1, dump_text_VkImageLayout);
    dump_text_value<const VkImageLayout>(object.finalLayout, settings, "VkImageLayout", "finalLayout", indents + 1, dump_text_VkImageLayout);
    return settings.stream();
}
ostream& dump_text_VkPipelineMultisampleStateCreateInfo(const VkPipelineMultisampleStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineMultisampleStateCreateFlags>(object.flags, settings, "VkPipelineMultisampleStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineMultisampleStateCreateFlags);
    dump_text_value<const VkSampleCountFlagBits>(object.rasterizationSamples, settings, "VkSampleCountFlagBits", "rasterizationSamples", indents + 1, dump_text_VkSampleCountFlagBits);
    dump_text_value<const VkBool32>(object.sampleShadingEnable, settings, "VkBool32", "sampleShadingEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const float>(object.minSampleShading, settings, "float", "minSampleShading", indents + 1, dump_text_float);
    dump_text_array<const VkSampleMask>(object.pSampleMask, object.rasterizationSamples / 32, settings, "const VkSampleMask*", "const VkSampleMask", "pSampleMask", indents + 1, dump_text_VkSampleMask);
    dump_text_value<const VkBool32>(object.alphaToCoverageEnable, settings, "VkBool32", "alphaToCoverageEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.alphaToOneEnable, settings, "VkBool32", "alphaToOneEnable", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
ostream& dump_text_VkSubpassDescription(const VkSubpassDescription& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkSubpassDescriptionFlags>(object.flags, settings, "VkSubpassDescriptionFlags", "flags", indents + 1, dump_text_VkSubpassDescriptionFlags);
    dump_text_value<const VkPipelineBindPoint>(object.pipelineBindPoint, settings, "VkPipelineBindPoint", "pipelineBindPoint", indents + 1, dump_text_VkPipelineBindPoint);
    dump_text_value<const uint32_t>(object.inputAttachmentCount, settings, "uint32_t", "inputAttachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkAttachmentReference>(object.pInputAttachments, object.inputAttachmentCount, settings, "const VkAttachmentReference*", "const VkAttachmentReference", "pInputAttachments", indents + 1, dump_text_VkAttachmentReference);
    dump_text_value<const uint32_t>(object.colorAttachmentCount, settings, "uint32_t", "colorAttachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkAttachmentReference>(object.pColorAttachments, object.colorAttachmentCount, settings, "const VkAttachmentReference*", "const VkAttachmentReference", "pColorAttachments", indents + 1, dump_text_VkAttachmentReference);
    dump_text_array<const VkAttachmentReference>(object.pResolveAttachments, object.colorAttachmentCount, settings, "const VkAttachmentReference*", "const VkAttachmentReference", "pResolveAttachments", indents + 1, dump_text_VkAttachmentReference);
    dump_text_pointer<const VkAttachmentReference>(object.pDepthStencilAttachment, settings, "const VkAttachmentReference*", "pDepthStencilAttachment", indents + 1, dump_text_VkAttachmentReference);
    dump_text_value<const uint32_t>(object.preserveAttachmentCount, settings, "uint32_t", "preserveAttachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const uint32_t>(object.pPreserveAttachments, object.preserveAttachmentCount, settings, "const uint32_t*", "const uint32_t", "pPreserveAttachments", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkMappedMemoryRange(const VkMappedMemoryRange& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDeviceMemory>(object.memory, settings, "VkDeviceMemory", "memory", indents + 1, dump_text_VkDeviceMemory);
    dump_text_value<const VkDeviceSize>(object.offset, settings, "VkDeviceSize", "offset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
ostream& dump_text_VkRenderPassBeginInfo(const VkRenderPassBeginInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkRenderPass>(object.renderPass, settings, "VkRenderPass", "renderPass", indents + 1, dump_text_VkRenderPass);
    dump_text_value<const VkFramebuffer>(object.framebuffer, settings, "VkFramebuffer", "framebuffer", indents + 1, dump_text_VkFramebuffer);
    dump_text_value<const VkRect2D>(object.renderArea, settings, "VkRect2D", "renderArea", indents + 1, dump_text_VkRect2D);
    dump_text_value<const uint32_t>(object.clearValueCount, settings, "uint32_t", "clearValueCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkClearValue>(object.pClearValues, object.clearValueCount, settings, "const VkClearValue*", "const VkClearValue", "pClearValues", indents + 1, dump_text_VkClearValue);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_XCB_KHR)
ostream& dump_text_VkXcbSurfaceCreateInfoKHR(const VkXcbSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkXcbSurfaceCreateFlagsKHR>(object.flags, settings, "VkXcbSurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkXcbSurfaceCreateFlagsKHR);
    dump_text_value<const xcb_connection_t*>(object.connection, settings, "xcb_connection_t*", "connection", indents + 1, dump_text_xcb_connection_t);
    dump_text_value<const xcb_window_t>(object.window, settings, "xcb_window_t", "window", indents + 1, dump_text_xcb_window_t);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_XCB_KHR
ostream& dump_text_VkAttachmentReference(const VkAttachmentReference& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.attachment, settings, "uint32_t", "attachment", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkImageLayout>(object.layout, settings, "VkImageLayout", "layout", indents + 1, dump_text_VkImageLayout);
    return settings.stream();
}
ostream& dump_text_VkSubresourceLayout(const VkSubresourceLayout& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.offset, settings, "VkDeviceSize", "offset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.rowPitch, settings, "VkDeviceSize", "rowPitch", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.arrayPitch, settings, "VkDeviceSize", "arrayPitch", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.depthPitch, settings, "VkDeviceSize", "depthPitch", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
ostream& dump_text_VkComputePipelineCreateInfo(const VkComputePipelineCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineCreateFlags>(object.flags, settings, "VkPipelineCreateFlags", "flags", indents + 1, dump_text_VkPipelineCreateFlags);
    dump_text_value<const VkPipelineShaderStageCreateInfo>(object.stage, settings, "VkPipelineShaderStageCreateInfo", "stage", indents + 1, dump_text_VkPipelineShaderStageCreateInfo);
    dump_text_value<const VkPipelineLayout>(object.layout, settings, "VkPipelineLayout", "layout", indents + 1, dump_text_VkPipelineLayout);
    dump_text_value<const VkPipeline>(object.basePipelineHandle, settings, "VkPipeline", "basePipelineHandle", indents + 1, dump_text_VkPipeline);
    dump_text_value<const int32_t>(object.basePipelineIndex, settings, "int32_t", "basePipelineIndex", indents + 1, dump_text_int32_t);
    return settings.stream();
}
ostream& dump_text_VkSubpassDependency(const VkSubpassDependency& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.srcSubpass, settings, "uint32_t", "srcSubpass", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dstSubpass, settings, "uint32_t", "dstSubpass", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkPipelineStageFlags>(object.srcStageMask, settings, "VkPipelineStageFlags", "srcStageMask", indents + 1, dump_text_VkPipelineStageFlags);
    dump_text_value<const VkPipelineStageFlags>(object.dstStageMask, settings, "VkPipelineStageFlags", "dstStageMask", indents + 1, dump_text_VkPipelineStageFlags);
    dump_text_value<const VkAccessFlags>(object.srcAccessMask, settings, "VkAccessFlags", "srcAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkAccessFlags>(object.dstAccessMask, settings, "VkAccessFlags", "dstAccessMask", indents + 1, dump_text_VkAccessFlags);
    dump_text_value<const VkDependencyFlags>(object.dependencyFlags, settings, "VkDependencyFlags", "dependencyFlags", indents + 1, dump_text_VkDependencyFlags);
    return settings.stream();
}
ostream& dump_text_VkBufferCopy(const VkBufferCopy& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.srcOffset, settings, "VkDeviceSize", "srcOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.dstOffset, settings, "VkDeviceSize", "dstOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
ostream& dump_text_VkValidationFlagsEXT(const VkValidationFlagsEXT& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.disabledValidationCheckCount, settings, "uint32_t", "disabledValidationCheckCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkValidationCheckEXT>(object.pDisabledValidationChecks, object.disabledValidationCheckCount, settings, "VkValidationCheckEXT*", "VkValidationCheckEXT", "pDisabledValidationChecks", indents + 1, dump_text_VkValidationCheckEXT);
    return settings.stream();
}
ostream& dump_text_VkPipelineRasterizationStateCreateInfo(const VkPipelineRasterizationStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineRasterizationStateCreateFlags>(object.flags, settings, "VkPipelineRasterizationStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineRasterizationStateCreateFlags);
    dump_text_value<const VkBool32>(object.depthClampEnable, settings, "VkBool32", "depthClampEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.rasterizerDiscardEnable, settings, "VkBool32", "rasterizerDiscardEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkPolygonMode>(object.polygonMode, settings, "VkPolygonMode", "polygonMode", indents + 1, dump_text_VkPolygonMode);
    dump_text_value<const VkCullModeFlags>(object.cullMode, settings, "VkCullModeFlags", "cullMode", indents + 1, dump_text_VkCullModeFlags);
    dump_text_value<const VkFrontFace>(object.frontFace, settings, "VkFrontFace", "frontFace", indents + 1, dump_text_VkFrontFace);
    dump_text_value<const VkBool32>(object.depthBiasEnable, settings, "VkBool32", "depthBiasEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const float>(object.depthBiasConstantFactor, settings, "float", "depthBiasConstantFactor", indents + 1, dump_text_float);
    dump_text_value<const float>(object.depthBiasClamp, settings, "float", "depthBiasClamp", indents + 1, dump_text_float);
    dump_text_value<const float>(object.depthBiasSlopeFactor, settings, "float", "depthBiasSlopeFactor", indents + 1, dump_text_float);
    dump_text_value<const float>(object.lineWidth, settings, "float", "lineWidth", indents + 1, dump_text_float);
    return settings.stream();
}
ostream& dump_text_VkDeviceCreateInfo(const VkDeviceCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDeviceCreateFlags>(object.flags, settings, "VkDeviceCreateFlags", "flags", indents + 1, dump_text_VkDeviceCreateFlags);
    dump_text_value<const uint32_t>(object.queueCreateInfoCount, settings, "uint32_t", "queueCreateInfoCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDeviceQueueCreateInfo>(object.pQueueCreateInfos, object.queueCreateInfoCount, settings, "const VkDeviceQueueCreateInfo*", "const VkDeviceQueueCreateInfo", "pQueueCreateInfos", indents + 1, dump_text_VkDeviceQueueCreateInfo);
    dump_text_value<const uint32_t>(object.enabledLayerCount, settings, "uint32_t", "enabledLayerCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const char*>(object.ppEnabledLayerNames, object.enabledLayerCount, settings, "const char* const*", "const char* const", "ppEnabledLayerNames", indents + 1, dump_text_cstring);
    dump_text_value<const uint32_t>(object.enabledExtensionCount, settings, "uint32_t", "enabledExtensionCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const char*>(object.ppEnabledExtensionNames, object.enabledExtensionCount, settings, "const char* const*", "const char* const", "ppEnabledExtensionNames", indents + 1, dump_text_cstring);
    dump_text_pointer<const VkPhysicalDeviceFeatures>(object.pEnabledFeatures, settings, "const VkPhysicalDeviceFeatures*", "pEnabledFeatures", indents + 1, dump_text_VkPhysicalDeviceFeatures);
    return settings.stream();
}
ostream& dump_text_VkOffset2D(const VkOffset2D& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const int32_t>(object.x, settings, "int32_t", "x", indents + 1, dump_text_int32_t);
    dump_text_value<const int32_t>(object.y, settings, "int32_t", "y", indents + 1, dump_text_int32_t);
    return settings.stream();
}
ostream& dump_text_VkExtent2D(const VkExtent2D& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.width, settings, "uint32_t", "width", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.height, settings, "uint32_t", "height", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkPipelineColorBlendAttachmentState(const VkPipelineColorBlendAttachmentState& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkBool32>(object.blendEnable, settings, "VkBool32", "blendEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBlendFactor>(object.srcColorBlendFactor, settings, "VkBlendFactor", "srcColorBlendFactor", indents + 1, dump_text_VkBlendFactor);
    dump_text_value<const VkBlendFactor>(object.dstColorBlendFactor, settings, "VkBlendFactor", "dstColorBlendFactor", indents + 1, dump_text_VkBlendFactor);
    dump_text_value<const VkBlendOp>(object.colorBlendOp, settings, "VkBlendOp", "colorBlendOp", indents + 1, dump_text_VkBlendOp);
    dump_text_value<const VkBlendFactor>(object.srcAlphaBlendFactor, settings, "VkBlendFactor", "srcAlphaBlendFactor", indents + 1, dump_text_VkBlendFactor);
    dump_text_value<const VkBlendFactor>(object.dstAlphaBlendFactor, settings, "VkBlendFactor", "dstAlphaBlendFactor", indents + 1, dump_text_VkBlendFactor);
    dump_text_value<const VkBlendOp>(object.alphaBlendOp, settings, "VkBlendOp", "alphaBlendOp", indents + 1, dump_text_VkBlendOp);
    dump_text_value<const VkColorComponentFlags>(object.colorWriteMask, settings, "VkColorComponentFlags", "colorWriteMask", indents + 1, dump_text_VkColorComponentFlags);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
ostream& dump_text_VkWaylandSurfaceCreateInfoKHR(const VkWaylandSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkWaylandSurfaceCreateFlagsKHR>(object.flags, settings, "VkWaylandSurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkWaylandSurfaceCreateFlagsKHR);
    dump_text_pointer<const wl_display>(object.display, settings, "struct wl_display*", "display", indents + 1, dump_text_wl_display);
    dump_text_pointer<const wl_surface>(object.surface, settings, "struct wl_surface*", "surface", indents + 1, dump_text_wl_surface);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR
ostream& dump_text_VkDispatchIndirectCommand(const VkDispatchIndirectCommand& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.x, settings, "uint32_t", "x", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.y, settings, "uint32_t", "y", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.z, settings, "uint32_t", "z", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkImageSubresourceLayers(const VkImageSubresourceLayers& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageAspectFlags>(object.aspectMask, settings, "VkImageAspectFlags", "aspectMask", indents + 1, dump_text_VkImageAspectFlags);
    dump_text_value<const uint32_t>(object.mipLevel, settings, "uint32_t", "mipLevel", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.baseArrayLayer, settings, "uint32_t", "baseArrayLayer", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.layerCount, settings, "uint32_t", "layerCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkQueryPoolCreateInfo(const VkQueryPoolCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkQueryPoolCreateFlags>(object.flags, settings, "VkQueryPoolCreateFlags", "flags", indents + 1, dump_text_VkQueryPoolCreateFlags);
    dump_text_value<const VkQueryType>(object.queryType, settings, "VkQueryType", "queryType", indents + 1, dump_text_VkQueryType);
    dump_text_value<const uint32_t>(object.queryCount, settings, "uint32_t", "queryCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkQueryPipelineStatisticFlags>(object.pipelineStatistics, settings, "VkQueryPipelineStatisticFlags", "pipelineStatistics", indents + 1, dump_text_VkQueryPipelineStatisticFlags);
    return settings.stream();
}
ostream& dump_text_VkImageCopy(const VkImageCopy& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageSubresourceLayers>(object.srcSubresource, settings, "VkImageSubresourceLayers", "srcSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_value<const VkOffset3D>(object.srcOffset, settings, "VkOffset3D", "srcOffset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkImageSubresourceLayers>(object.dstSubresource, settings, "VkImageSubresourceLayers", "dstSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_value<const VkOffset3D>(object.dstOffset, settings, "VkOffset3D", "dstOffset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkExtent3D>(object.extent, settings, "VkExtent3D", "extent", indents + 1, dump_text_VkExtent3D);
    return settings.stream();
}
ostream& dump_text_VkPushConstantRange(const VkPushConstantRange& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkShaderStageFlags>(object.stageFlags, settings, "VkShaderStageFlags", "stageFlags", indents + 1, dump_text_VkShaderStageFlags);
    dump_text_value<const uint32_t>(object.offset, settings, "uint32_t", "offset", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.size, settings, "uint32_t", "size", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkPipelineLayoutCreateInfo(const VkPipelineLayoutCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineLayoutCreateFlags>(object.flags, settings, "VkPipelineLayoutCreateFlags", "flags", indents + 1, dump_text_VkPipelineLayoutCreateFlags);
    dump_text_value<const uint32_t>(object.setLayoutCount, settings, "uint32_t", "setLayoutCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDescriptorSetLayout>(object.pSetLayouts, object.setLayoutCount, settings, "const VkDescriptorSetLayout*", "const VkDescriptorSetLayout", "pSetLayouts", indents + 1, dump_text_VkDescriptorSetLayout);
    dump_text_value<const uint32_t>(object.pushConstantRangeCount, settings, "uint32_t", "pushConstantRangeCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkPushConstantRange>(object.pPushConstantRanges, object.pushConstantRangeCount, settings, "const VkPushConstantRange*", "const VkPushConstantRange", "pPushConstantRanges", indents + 1, dump_text_VkPushConstantRange);
    return settings.stream();
}
ostream& dump_text_VkMemoryAllocateInfo(const VkMemoryAllocateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDeviceSize>(object.allocationSize, settings, "VkDeviceSize", "allocationSize", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const uint32_t>(object.memoryTypeIndex, settings, "uint32_t", "memoryTypeIndex", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkDeviceQueueCreateInfo(const VkDeviceQueueCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDeviceQueueCreateFlags>(object.flags, settings, "VkDeviceQueueCreateFlags", "flags", indents + 1, dump_text_VkDeviceQueueCreateFlags);
    dump_text_value<const uint32_t>(object.queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.queueCount, settings, "uint32_t", "queueCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const float>(object.pQueuePriorities, object.queueCount, settings, "const float*", "const float", "pQueuePriorities", indents + 1, dump_text_float);
    return settings.stream();
}
ostream& dump_text_VkDrawIndexedIndirectCommand(const VkDrawIndexedIndirectCommand& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.indexCount, settings, "uint32_t", "indexCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.instanceCount, settings, "uint32_t", "instanceCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.firstIndex, settings, "uint32_t", "firstIndex", indents + 1, dump_text_uint32_t);
    dump_text_value<const int32_t>(object.vertexOffset, settings, "int32_t", "vertexOffset", indents + 1, dump_text_int32_t);
    dump_text_value<const uint32_t>(object.firstInstance, settings, "uint32_t", "firstInstance", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkDrawIndirectCommand(const VkDrawIndirectCommand& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.vertexCount, settings, "uint32_t", "vertexCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.instanceCount, settings, "uint32_t", "instanceCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.firstVertex, settings, "uint32_t", "firstVertex", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.firstInstance, settings, "uint32_t", "firstInstance", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkDescriptorSetAllocateInfo(const VkDescriptorSetAllocateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDescriptorPool>(object.descriptorPool, settings, "VkDescriptorPool", "descriptorPool", indents + 1, dump_text_VkDescriptorPool);
    dump_text_value<const uint32_t>(object.descriptorSetCount, settings, "uint32_t", "descriptorSetCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDescriptorSetLayout>(object.pSetLayouts, object.descriptorSetCount, settings, "const VkDescriptorSetLayout*", "const VkDescriptorSetLayout", "pSetLayouts", indents + 1, dump_text_VkDescriptorSetLayout);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_MIR_KHR)
ostream& dump_text_VkMirSurfaceCreateInfoKHR(const VkMirSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkMirSurfaceCreateFlagsKHR>(object.flags, settings, "VkMirSurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkMirSurfaceCreateFlagsKHR);
    dump_text_pointer<const MirConnection>(object.connection, settings, "MirConnection*", "connection", indents + 1, dump_text_MirConnection);
    dump_text_pointer<const MirSurface>(object.mirSurface, settings, "MirSurface*", "mirSurface", indents + 1, dump_text_MirSurface);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_MIR_KHR
ostream& dump_text_VkMemoryHeap(const VkMemoryHeap& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.size, settings, "VkDeviceSize", "size", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkMemoryHeapFlags>(object.flags, settings, "VkMemoryHeapFlags", "flags", indents + 1, dump_text_VkMemoryHeapFlags);
    return settings.stream();
}
ostream& dump_text_VkImageBlit(const VkImageBlit& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkImageSubresourceLayers>(object.srcSubresource, settings, "VkImageSubresourceLayers", "srcSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_array<const VkOffset3D>(object.srcOffsets, 2, settings, "VkOffset3D[2]", "VkOffset3D", "srcOffsets", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkImageSubresourceLayers>(object.dstSubresource, settings, "VkImageSubresourceLayers", "dstSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_array<const VkOffset3D>(object.dstOffsets, 2, settings, "VkOffset3D[2]", "VkOffset3D", "dstOffsets", indents + 1, dump_text_VkOffset3D);
    return settings.stream();
}
ostream& dump_text_VkImageCreateInfo(const VkImageCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkImageCreateFlags>(object.flags, settings, "VkImageCreateFlags", "flags", indents + 1, dump_text_VkImageCreateFlags);
    dump_text_value<const VkImageType>(object.imageType, settings, "VkImageType", "imageType", indents + 1, dump_text_VkImageType);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkExtent3D>(object.extent, settings, "VkExtent3D", "extent", indents + 1, dump_text_VkExtent3D);
    dump_text_value<const uint32_t>(object.mipLevels, settings, "uint32_t", "mipLevels", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.arrayLayers, settings, "uint32_t", "arrayLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSampleCountFlagBits>(object.samples, settings, "VkSampleCountFlagBits", "samples", indents + 1, dump_text_VkSampleCountFlagBits);
    dump_text_value<const VkImageTiling>(object.tiling, settings, "VkImageTiling", "tiling", indents + 1, dump_text_VkImageTiling);
    dump_text_value<const VkImageUsageFlags>(object.usage, settings, "VkImageUsageFlags", "usage", indents + 1, dump_text_VkImageUsageFlags);
    dump_text_value<const VkSharingMode>(object.sharingMode, settings, "VkSharingMode", "sharingMode", indents + 1, dump_text_VkSharingMode);
    dump_text_value<const uint32_t>(object.queueFamilyIndexCount, settings, "uint32_t", "queueFamilyIndexCount", indents + 1, dump_text_uint32_t);
    if(object.sharingMode == VK_SHARING_MODE_CONCURRENT)
    dump_text_array<const uint32_t>(object.pQueueFamilyIndices, object.queueFamilyIndexCount, settings, "const uint32_t*", "const uint32_t", "pQueueFamilyIndices", indents + 1, dump_text_uint32_t);
    else
        dump_text_special("UNUSED", settings, "const uint32_t*", "pQueueFamilyIndices", indents + 1);
    dump_text_value<const VkImageLayout>(object.initialLayout, settings, "VkImageLayout", "initialLayout", indents + 1, dump_text_VkImageLayout);
    return settings.stream();
}
ostream& dump_text_VkSamplerCreateInfo(const VkSamplerCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSamplerCreateFlags>(object.flags, settings, "VkSamplerCreateFlags", "flags", indents + 1, dump_text_VkSamplerCreateFlags);
    dump_text_value<const VkFilter>(object.magFilter, settings, "VkFilter", "magFilter", indents + 1, dump_text_VkFilter);
    dump_text_value<const VkFilter>(object.minFilter, settings, "VkFilter", "minFilter", indents + 1, dump_text_VkFilter);
    dump_text_value<const VkSamplerMipmapMode>(object.mipmapMode, settings, "VkSamplerMipmapMode", "mipmapMode", indents + 1, dump_text_VkSamplerMipmapMode);
    dump_text_value<const VkSamplerAddressMode>(object.addressModeU, settings, "VkSamplerAddressMode", "addressModeU", indents + 1, dump_text_VkSamplerAddressMode);
    dump_text_value<const VkSamplerAddressMode>(object.addressModeV, settings, "VkSamplerAddressMode", "addressModeV", indents + 1, dump_text_VkSamplerAddressMode);
    dump_text_value<const VkSamplerAddressMode>(object.addressModeW, settings, "VkSamplerAddressMode", "addressModeW", indents + 1, dump_text_VkSamplerAddressMode);
    dump_text_value<const float>(object.mipLodBias, settings, "float", "mipLodBias", indents + 1, dump_text_float);
    dump_text_value<const VkBool32>(object.anisotropyEnable, settings, "VkBool32", "anisotropyEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const float>(object.maxAnisotropy, settings, "float", "maxAnisotropy", indents + 1, dump_text_float);
    dump_text_value<const VkBool32>(object.compareEnable, settings, "VkBool32", "compareEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkCompareOp>(object.compareOp, settings, "VkCompareOp", "compareOp", indents + 1, dump_text_VkCompareOp);
    dump_text_value<const float>(object.minLod, settings, "float", "minLod", indents + 1, dump_text_float);
    dump_text_value<const float>(object.maxLod, settings, "float", "maxLod", indents + 1, dump_text_float);
    dump_text_value<const VkBorderColor>(object.borderColor, settings, "VkBorderColor", "borderColor", indents + 1, dump_text_VkBorderColor);
    dump_text_value<const VkBool32>(object.unnormalizedCoordinates, settings, "VkBool32", "unnormalizedCoordinates", indents + 1, dump_text_VkBool32);
    return settings.stream();
}
ostream& dump_text_VkMemoryType(const VkMemoryType& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkMemoryPropertyFlags>(object.propertyFlags, settings, "VkMemoryPropertyFlags", "propertyFlags", indents + 1, dump_text_VkMemoryPropertyFlags);
    dump_text_value<const uint32_t>(object.heapIndex, settings, "uint32_t", "heapIndex", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkDescriptorBufferInfo(const VkDescriptorBufferInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const VkDeviceSize>(object.offset, settings, "VkDeviceSize", "offset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.range, settings, "VkDeviceSize", "range", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
ostream& dump_text_VkDescriptorImageInfo(const VkDescriptorImageInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkSampler>(object.sampler, settings, "VkSampler", "sampler", indents + 1, dump_text_VkSampler);
    dump_text_value<const VkImageView>(object.imageView, settings, "VkImageView", "imageView", indents + 1, dump_text_VkImageView);
    dump_text_value<const VkImageLayout>(object.imageLayout, settings, "VkImageLayout", "imageLayout", indents + 1, dump_text_VkImageLayout);
    return settings.stream();
}
ostream& dump_text_VkWriteDescriptorSet(const VkWriteDescriptorSet& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDescriptorSet>(object.dstSet, settings, "VkDescriptorSet", "dstSet", indents + 1, dump_text_VkDescriptorSet);
    dump_text_value<const uint32_t>(object.dstBinding, settings, "uint32_t", "dstBinding", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dstArrayElement, settings, "uint32_t", "dstArrayElement", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.descriptorCount, settings, "uint32_t", "descriptorCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDescriptorType>(object.descriptorType, settings, "VkDescriptorType", "descriptorType", indents + 1, dump_text_VkDescriptorType);
    if((object.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE) || (object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_IMAGE))
    dump_text_array<const VkDescriptorImageInfo>(object.pImageInfo, object.descriptorCount, settings, "const VkDescriptorImageInfo*", "const VkDescriptorImageInfo", "pImageInfo", indents + 1, dump_text_VkDescriptorImageInfo);
    else
        dump_text_special("UNUSED", settings, "const VkDescriptorImageInfo*", "pImageInfo", indents + 1);
    if((object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC) || (object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC))
    dump_text_array<const VkDescriptorBufferInfo>(object.pBufferInfo, object.descriptorCount, settings, "const VkDescriptorBufferInfo*", "const VkDescriptorBufferInfo", "pBufferInfo", indents + 1, dump_text_VkDescriptorBufferInfo);
    else
        dump_text_special("UNUSED", settings, "const VkDescriptorBufferInfo*", "pBufferInfo", indents + 1);
    if((object.descriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER) || (object.descriptorType == VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER))
    dump_text_array<const VkBufferView>(object.pTexelBufferView, object.descriptorCount, settings, "const VkBufferView*", "const VkBufferView", "pTexelBufferView", indents + 1, dump_text_VkBufferView);
    else
        dump_text_special("UNUSED", settings, "const VkBufferView*", "pTexelBufferView", indents + 1);
    return settings.stream();
}
ostream& dump_text_VkPhysicalDeviceMemoryProperties(const VkPhysicalDeviceMemoryProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.memoryTypeCount, settings, "uint32_t", "memoryTypeCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkMemoryType>(object.memoryTypes, 32, settings, "VkMemoryType[VK_MAX_MEMORY_TYPES]", "VkMemoryType", "memoryTypes", indents + 1, dump_text_VkMemoryType);
    dump_text_value<const uint32_t>(object.memoryHeapCount, settings, "uint32_t", "memoryHeapCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkMemoryHeap>(object.memoryHeaps, 16, settings, "VkMemoryHeap[VK_MAX_MEMORY_HEAPS]", "VkMemoryHeap", "memoryHeaps", indents + 1, dump_text_VkMemoryHeap);
    return settings.stream();
}
ostream& dump_text_VkSurfaceCapabilitiesKHR(const VkSurfaceCapabilitiesKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const uint32_t>(object.minImageCount, settings, "uint32_t", "minImageCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.maxImageCount, settings, "uint32_t", "maxImageCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkExtent2D>(object.currentExtent, settings, "VkExtent2D", "currentExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.minImageExtent, settings, "VkExtent2D", "minImageExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const VkExtent2D>(object.maxImageExtent, settings, "VkExtent2D", "maxImageExtent", indents + 1, dump_text_VkExtent2D);
    dump_text_value<const uint32_t>(object.maxImageArrayLayers, settings, "uint32_t", "maxImageArrayLayers", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkSurfaceTransformFlagsKHR>(object.supportedTransforms, settings, "VkSurfaceTransformFlagsKHR", "supportedTransforms", indents + 1, dump_text_VkSurfaceTransformFlagsKHR);
    dump_text_value<const VkSurfaceTransformFlagBitsKHR>(object.currentTransform, settings, "VkSurfaceTransformFlagBitsKHR", "currentTransform", indents + 1, dump_text_VkSurfaceTransformFlagBitsKHR);
    dump_text_value<const VkCompositeAlphaFlagsKHR>(object.supportedCompositeAlpha, settings, "VkCompositeAlphaFlagsKHR", "supportedCompositeAlpha", indents + 1, dump_text_VkCompositeAlphaFlagsKHR);
    dump_text_value<const VkImageUsageFlags>(object.supportedUsageFlags, settings, "VkImageUsageFlags", "supportedUsageFlags", indents + 1, dump_text_VkImageUsageFlags);
    return settings.stream();
}
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
ostream& dump_text_VkAndroidSurfaceCreateInfoKHR(const VkAndroidSurfaceCreateInfoKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkAndroidSurfaceCreateFlagsKHR>(object.flags, settings, "VkAndroidSurfaceCreateFlagsKHR", "flags", indents + 1, dump_text_VkAndroidSurfaceCreateFlagsKHR);
    dump_text_value<const ANativeWindow*>(object.window, settings, "ANativeWindow*", "window", indents + 1, dump_text_ANativeWindow);
    return settings.stream();
}
#endif // VK_USE_PLATFORM_ANDROID_KHR
ostream& dump_text_VkEventCreateInfo(const VkEventCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkEventCreateFlags>(object.flags, settings, "VkEventCreateFlags", "flags", indents + 1, dump_text_VkEventCreateFlags);
    return settings.stream();
}
ostream& dump_text_VkCopyDescriptorSet(const VkCopyDescriptorSet& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkDescriptorSet>(object.srcSet, settings, "VkDescriptorSet", "srcSet", indents + 1, dump_text_VkDescriptorSet);
    dump_text_value<const uint32_t>(object.srcBinding, settings, "uint32_t", "srcBinding", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.srcArrayElement, settings, "uint32_t", "srcArrayElement", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkDescriptorSet>(object.dstSet, settings, "VkDescriptorSet", "dstSet", indents + 1, dump_text_VkDescriptorSet);
    dump_text_value<const uint32_t>(object.dstBinding, settings, "uint32_t", "dstBinding", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.dstArrayElement, settings, "uint32_t", "dstArrayElement", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.descriptorCount, settings, "uint32_t", "descriptorCount", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkBufferImageCopy(const VkBufferImageCopy& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkDeviceSize>(object.bufferOffset, settings, "VkDeviceSize", "bufferOffset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const uint32_t>(object.bufferRowLength, settings, "uint32_t", "bufferRowLength", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.bufferImageHeight, settings, "uint32_t", "bufferImageHeight", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkImageSubresourceLayers>(object.imageSubresource, settings, "VkImageSubresourceLayers", "imageSubresource", indents + 1, dump_text_VkImageSubresourceLayers);
    dump_text_value<const VkOffset3D>(object.imageOffset, settings, "VkOffset3D", "imageOffset", indents + 1, dump_text_VkOffset3D);
    dump_text_value<const VkExtent3D>(object.imageExtent, settings, "VkExtent3D", "imageExtent", indents + 1, dump_text_VkExtent3D);
    return settings.stream();
}
ostream& dump_text_VkPipelineDynamicStateCreateInfo(const VkPipelineDynamicStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineDynamicStateCreateFlags>(object.flags, settings, "VkPipelineDynamicStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineDynamicStateCreateFlags);
    dump_text_value<const uint32_t>(object.dynamicStateCount, settings, "uint32_t", "dynamicStateCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkDynamicState>(object.pDynamicStates, object.dynamicStateCount, settings, "const VkDynamicState*", "const VkDynamicState", "pDynamicStates", indents + 1, dump_text_VkDynamicState);
    return settings.stream();
}
ostream& dump_text_VkBufferViewCreateInfo(const VkBufferViewCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkBufferViewCreateFlags>(object.flags, settings, "VkBufferViewCreateFlags", "flags", indents + 1, dump_text_VkBufferViewCreateFlags);
    dump_text_value<const VkBuffer>(object.buffer, settings, "VkBuffer", "buffer", indents + 1, dump_text_VkBuffer);
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkDeviceSize>(object.offset, settings, "VkDeviceSize", "offset", indents + 1, dump_text_VkDeviceSize);
    dump_text_value<const VkDeviceSize>(object.range, settings, "VkDeviceSize", "range", indents + 1, dump_text_VkDeviceSize);
    return settings.stream();
}
ostream& dump_text_VkSemaphoreCreateInfo(const VkSemaphoreCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkSemaphoreCreateFlags>(object.flags, settings, "VkSemaphoreCreateFlags", "flags", indents + 1, dump_text_VkSemaphoreCreateFlags);
    return settings.stream();
}
ostream& dump_text_VkSubmitInfo(const VkSubmitInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const uint32_t>(object.waitSemaphoreCount, settings, "uint32_t", "waitSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSemaphore>(object.pWaitSemaphores, object.waitSemaphoreCount, settings, "const VkSemaphore*", "const VkSemaphore", "pWaitSemaphores", indents + 1, dump_text_VkSemaphore);
    dump_text_array<const VkPipelineStageFlags>(object.pWaitDstStageMask, object.waitSemaphoreCount, settings, "const VkPipelineStageFlags*", "const VkPipelineStageFlags", "pWaitDstStageMask", indents + 1, dump_text_VkPipelineStageFlags);
    dump_text_value<const uint32_t>(object.commandBufferCount, settings, "uint32_t", "commandBufferCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkCommandBuffer>(object.pCommandBuffers, object.commandBufferCount, settings, "const VkCommandBuffer*", "const VkCommandBuffer", "pCommandBuffers", indents + 1, dump_text_VkCommandBuffer);
    dump_text_value<const uint32_t>(object.signalSemaphoreCount, settings, "uint32_t", "signalSemaphoreCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkSemaphore>(object.pSignalSemaphores, object.signalSemaphoreCount, settings, "const VkSemaphore*", "const VkSemaphore", "pSignalSemaphores", indents + 1, dump_text_VkSemaphore);
    return settings.stream();
}
ostream& dump_text_VkQueueFamilyProperties(const VkQueueFamilyProperties& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkQueueFlags>(object.queueFlags, settings, "VkQueueFlags", "queueFlags", indents + 1, dump_text_VkQueueFlags);
    dump_text_value<const uint32_t>(object.queueCount, settings, "uint32_t", "queueCount", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.timestampValidBits, settings, "uint32_t", "timestampValidBits", indents + 1, dump_text_uint32_t);
    dump_text_value<const VkExtent3D>(object.minImageTransferGranularity, settings, "VkExtent3D", "minImageTransferGranularity", indents + 1, dump_text_VkExtent3D);
    return settings.stream();
}
ostream& dump_text_VkCommandPoolCreateInfo(const VkCommandPoolCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkCommandPoolCreateFlags>(object.flags, settings, "VkCommandPoolCreateFlags", "flags", indents + 1, dump_text_VkCommandPoolCreateFlags);
    dump_text_value<const uint32_t>(object.queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkSurfaceFormatKHR(const VkSurfaceFormatKHR& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkFormat>(object.format, settings, "VkFormat", "format", indents + 1, dump_text_VkFormat);
    dump_text_value<const VkColorSpaceKHR>(object.colorSpace, settings, "VkColorSpaceKHR", "colorSpace", indents + 1, dump_text_VkColorSpaceKHR);
    return settings.stream();
}
ostream& dump_text_VkPipelineDepthStencilStateCreateInfo(const VkPipelineDepthStencilStateCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkPipelineDepthStencilStateCreateFlags>(object.flags, settings, "VkPipelineDepthStencilStateCreateFlags", "flags", indents + 1, dump_text_VkPipelineDepthStencilStateCreateFlags);
    dump_text_value<const VkBool32>(object.depthTestEnable, settings, "VkBool32", "depthTestEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.depthWriteEnable, settings, "VkBool32", "depthWriteEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkCompareOp>(object.depthCompareOp, settings, "VkCompareOp", "depthCompareOp", indents + 1, dump_text_VkCompareOp);
    dump_text_value<const VkBool32>(object.depthBoundsTestEnable, settings, "VkBool32", "depthBoundsTestEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkBool32>(object.stencilTestEnable, settings, "VkBool32", "stencilTestEnable", indents + 1, dump_text_VkBool32);
    dump_text_value<const VkStencilOpState>(object.front, settings, "VkStencilOpState", "front", indents + 1, dump_text_VkStencilOpState);
    dump_text_value<const VkStencilOpState>(object.back, settings, "VkStencilOpState", "back", indents + 1, dump_text_VkStencilOpState);
    dump_text_value<const float>(object.minDepthBounds, settings, "float", "minDepthBounds", indents + 1, dump_text_float);
    dump_text_value<const float>(object.maxDepthBounds, settings, "float", "maxDepthBounds", indents + 1, dump_text_float);
    return settings.stream();
}
ostream& dump_text_VkFramebufferCreateInfo(const VkFramebufferCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkFramebufferCreateFlags>(object.flags, settings, "VkFramebufferCreateFlags", "flags", indents + 1, dump_text_VkFramebufferCreateFlags);
    dump_text_value<const VkRenderPass>(object.renderPass, settings, "VkRenderPass", "renderPass", indents + 1, dump_text_VkRenderPass);
    dump_text_value<const uint32_t>(object.attachmentCount, settings, "uint32_t", "attachmentCount", indents + 1, dump_text_uint32_t);
    dump_text_array<const VkImageView>(object.pAttachments, object.attachmentCount, settings, "const VkImageView*", "const VkImageView", "pAttachments", indents + 1, dump_text_VkImageView);
    dump_text_value<const uint32_t>(object.width, settings, "uint32_t", "width", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.height, settings, "uint32_t", "height", indents + 1, dump_text_uint32_t);
    dump_text_value<const uint32_t>(object.layers, settings, "uint32_t", "layers", indents + 1, dump_text_uint32_t);
    return settings.stream();
}


ostream& dump_text_VkShaderModuleCreateInfo(const VkShaderModuleCreateInfo& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << ":\n";
    else
        settings.stream() << "address:\n";
    dump_text_value<const VkStructureType>(object.sType, settings, "VkStructureType", "sType", indents + 1, dump_text_VkStructureType);
    dump_text_value<const void*>(object.pNext, settings, "const void*", "pNext", indents + 1, dump_text_void);
    dump_text_value<const VkShaderModuleCreateFlags>(object.flags, settings, "VkShaderModuleCreateFlags", "flags", indents + 1, dump_text_VkShaderModuleCreateFlags);
    dump_text_value<const size_t>(object.codeSize, settings, "size_t", "codeSize", indents + 1, dump_text_size_t);
    if(settings.showShader())
        dump_text_array<const uint32_t>(object.pCode, object.codeSize / 4, settings, "const uint32_t*", "const uint32_t", "pCode", indents + 1, dump_text_uint32_t);
    else
        dump_text_special("SHADER DATA", settings, "const uint32_t*", "pCode", indents + 1);
    return settings.stream();
}

//========================== Union Implementations ==========================//

ostream& dump_text_VkClearColorValue(const VkClearColorValue& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << " (Union):\n";
    else
        settings.stream() << "address (Union):\n";
    dump_text_array<const float>(object.float32, 4, settings, "float[4]", "float", "float32", indents + 1, dump_text_float);
    dump_text_array<const int32_t>(object.int32, 4, settings, "int32_t[4]", "int32_t", "int32", indents + 1, dump_text_int32_t);
    dump_text_array<const uint32_t>(object.uint32, 4, settings, "uint32_t[4]", "uint32_t", "uint32", indents + 1, dump_text_uint32_t);
    return settings.stream();
}
ostream& dump_text_VkClearValue(const VkClearValue& object, const ApiDumpSettings& settings, int indents)
{
    if(settings.showAddress())
        settings.stream() << &object << " (Union):\n";
    else
        settings.stream() << "address (Union):\n";
    dump_text_value<const VkClearColorValue>(object.color, settings, "VkClearColorValue", "color", indents + 1, dump_text_VkClearColorValue);
    dump_text_value<const VkClearDepthStencilValue>(object.depthStencil, settings, "VkClearDepthStencilValue", "depthStencil", indents + 1, dump_text_VkClearDepthStencilValue);
    return settings.stream();
}

//============================= API EntryPoints =============================//

// Specifically implemented functions

VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance)
{
    // Get the function pointer
    VkLayerInstanceCreateInfo* chain_info = get_chain_info(pCreateInfo, VK_LAYER_LINK_INFO);
    assert(chain_info->u.pLayerInfo != 0);
    PFN_vkGetInstanceProcAddr fpGetInstanceProcAddr = chain_info->u.pLayerInfo->pfnNextGetInstanceProcAddr;
    assert(fpGetInstanceProcAddr != 0);
    PFN_vkCreateInstance fpCreateInstance = (PFN_vkCreateInstance) fpGetInstanceProcAddr(NULL, "vkCreateInstance");
    if(fpCreateInstance == NULL) {
        return VK_ERROR_INITIALIZATION_FAILED;
    }
    
    // Call the function and create the dispatch table
    chain_info->u.pLayerInfo = chain_info->u.pLayerInfo->pNext;
    VkResult result = fpCreateInstance(pCreateInfo, pAllocator, pInstance);
    if(result == VK_SUCCESS) {
        initInstanceTable(*pInstance, fpGetInstanceProcAddr);
    }

    // Output the API dump
    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateInstance(pCreateInfo, pAllocator, pInstance) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << "\n";
    
    if(settings.showParams())
    {
        dump_text_pointer<const VkInstanceCreateInfo>(pCreateInfo, settings, "const VkInstanceCreateInfo*", "pCreateInfo", 1, dump_text_VkInstanceCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkInstance>(pInstance, settings, "VkInstance*", "pInstance", 1, dump_text_VkInstance);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}


VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyInstance(VkInstance instance, const VkAllocationCallbacks* pAllocator)
{
    // Destroy the dispatch table
    dispatch_key key = get_dispatch_key(instance);
    instance_dispatch_table(instance)->DestroyInstance(instance, pAllocator);
    destroy_instance_dispatch_table(key);
    
    // Output the API dump
    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyInstance(instance, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}


VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice)
{
    // Get the function pointer
    VkLayerDeviceCreateInfo* chain_info = get_chain_info(pCreateInfo, VK_LAYER_LINK_INFO);
    assert(chain_info->u.pLayerInfo != 0);
    PFN_vkGetInstanceProcAddr fpGetInstanceProcAddr = chain_info->u.pLayerInfo->pfnNextGetInstanceProcAddr;
    PFN_vkGetDeviceProcAddr fpGetDeviceProcAddr = chain_info->u.pLayerInfo->pfnNextGetDeviceProcAddr;
    PFN_vkCreateDevice fpCreateDevice = (PFN_vkCreateDevice) fpGetInstanceProcAddr(NULL, "vkCreateDevice");
    if(fpCreateDevice == NULL) {
        return VK_ERROR_INITIALIZATION_FAILED;
    }
    
    // Call the function and create the dispatch table
    chain_info->u.pLayerInfo = chain_info->u.pLayerInfo->pNext;
    VkResult result = fpCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice);
    if(result == VK_SUCCESS) {
        initDeviceTable(*pDevice, fpGetDeviceProcAddr);
    }
    
    // Output the API dump
    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkDeviceCreateInfo>(pCreateInfo, settings, "const VkDeviceCreateInfo*", "pCreateInfo", 1, dump_text_VkDeviceCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDevice>(pDevice, settings, "VkDevice*", "pDevice", 1, dump_text_VkDevice);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}


VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyDevice(VkDevice device, const VkAllocationCallbacks* pAllocator)
{
    // Destroy the dispatch table
    dispatch_key key = get_dispatch_key(device);
    device_dispatch_table(device)->DestroyDevice(device, pAllocator);
    destroy_device_dispatch_table(key);
    
    // Output the API dump
    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyDevice(device, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}


VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties)
{
    return util_GetExtensionProperties(0, NULL, pPropertyCount, pProperties);
}


VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties)
{
    static const VkLayerProperties layerProperties[] = {
        {
            "VK_LAYER_LUNARG_api_dump",
            VK_MAKE_VERSION(1, 0, VK_HEADER_VERSION), // specVersion
            VK_MAKE_VERSION(0, 2, 0), // implementationVersion
            "layer: api_dump",
        }
    };
    
    return util_GetLayerProperties(ARRAY_SIZE(layerProperties), layerProperties, pPropertyCount, pProperties);
}


VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties)
{
    static const VkLayerProperties layerProperties[] = {
        {
            "VK_LAYER_LUNARG_api_dump",
            VK_MAKE_VERSION(1, 0, VK_HEADER_VERSION),
            VK_MAKE_VERSION(0, 2, 0),
            "layer: api_dump",
        }
    };
    
    return util_GetLayerProperties(ARRAY_SIZE(layerProperties), layerProperties, pPropertyCount, pProperties);
}


VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo)
{
    VkResult result = device_dispatch_table(queue)->QueuePresentKHR(queue, pPresentInfo);
    
    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkQueuePresentKHR(queue, pPresentInfo) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkQueue>(queue, settings, "VkQueue", "queue", 1, dump_text_VkQueue);
        dump_text_pointer<const VkPresentInfoKHR>(pPresentInfo, settings, "const VkPresentInfoKHR*", "pPresentInfo", 1, dump_text_VkPresentInfoKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    dump_inst.nextFrame();
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}

// Autogen instance functions

VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties)
{
    VkResult result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDisplayPropertiesKHR>(pProperties, *pPropertyCount, settings, "VkDisplayPropertiesKHR*", "VkDisplayPropertiesKHR", "pProperties", 1, dump_text_VkDisplayPropertiesKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    VkResult result = instance_dispatch_table(instance)->CreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkWin32SurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkWin32SurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkWin32SurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays)
{
    VkResult result = instance_dispatch_table(physicalDevice)->GetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(planeIndex, settings, "uint32_t", "planeIndex", 1, dump_text_uint32_t);
        dump_text_pointer<const uint32_t>(pDisplayCount, settings, "uint32_t*", "pDisplayCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDisplayKHR>(pDisplays, *pDisplayCount, settings, "VkDisplayKHR*", "VkDisplayKHR", "pDisplays", 1, dump_text_VkDisplayKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties)
{
    VkResult result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDisplayPlanePropertiesKHR>(pProperties, *pPropertyCount, settings, "VkDisplayPlanePropertiesKHR*", "VkDisplayPlanePropertiesKHR", "pProperties", 1, dump_text_VkDisplayPlanePropertiesKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex)
{
    VkBool32 result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex) returns VkBool32 ";
    dump_text_VkBool32(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties)
{
    VkResult result = instance_dispatch_table(physicalDevice)->GetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkDisplayKHR>(display, settings, "VkDisplayKHR", "display", 1, dump_text_VkDisplayKHR);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDisplayModePropertiesKHR>(pProperties, *pPropertyCount, settings, "VkDisplayModePropertiesKHR*", "VkDisplayModePropertiesKHR", "pProperties", 1, dump_text_VkDisplayModePropertiesKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode)
{
    VkResult result = instance_dispatch_table(physicalDevice)->CreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkDisplayKHR>(display, settings, "VkDisplayKHR", "display", 1, dump_text_VkDisplayKHR);
        dump_text_pointer<const VkDisplayModeCreateInfoKHR>(pCreateInfo, settings, "const VkDisplayModeCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkDisplayModeCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDisplayModeKHR>(pMode, settings, "VkDisplayModeKHR*", "pMode", 1, dump_text_VkDisplayModeKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities)
{
    VkResult result = instance_dispatch_table(physicalDevice)->GetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkDisplayModeKHR>(mode, settings, "VkDisplayModeKHR", "mode", 1, dump_text_VkDisplayModeKHR);
        dump_text_value<const uint32_t>(planeIndex, settings, "uint32_t", "planeIndex", 1, dump_text_uint32_t);
        dump_text_pointer<const VkDisplayPlaneCapabilitiesKHR>(pCapabilities, settings, "VkDisplayPlaneCapabilitiesKHR*", "pCapabilities", 1, dump_text_VkDisplayPlaneCapabilitiesKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    VkResult result = instance_dispatch_table(instance)->CreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkDisplaySurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkDisplaySurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkDisplaySurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties)
{
    VkResult result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkFormat>(format, settings, "VkFormat", "format", 1, dump_text_VkFormat);
        dump_text_value<const VkImageType>(type, settings, "VkImageType", "type", 1, dump_text_VkImageType);
        dump_text_value<const VkImageTiling>(tiling, settings, "VkImageTiling", "tiling", 1, dump_text_VkImageTiling);
        dump_text_value<const VkImageUsageFlags>(usage, settings, "VkImageUsageFlags", "usage", 1, dump_text_VkImageUsageFlags);
        dump_text_value<const VkImageCreateFlags>(flags, settings, "VkImageCreateFlags", "flags", 1, dump_text_VkImageCreateFlags);
        dump_text_pointer<const VkImageFormatProperties>(pImageFormatProperties, settings, "VkImageFormatProperties*", "pImageFormatProperties", 1, dump_text_VkImageFormatProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback)
{
    VkResult result = instance_dispatch_table(instance)->CreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkDebugReportCallbackCreateInfoEXT>(pCreateInfo, settings, "const VkDebugReportCallbackCreateInfoEXT*", "pCreateInfo", 1, dump_text_VkDebugReportCallbackCreateInfoEXT);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDebugReportCallbackEXT>(pCallback, settings, "VkDebugReportCallbackEXT*", "pCallback", 1, dump_text_VkDebugReportCallbackEXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities)
{
    VkResult result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const VkSurfaceCapabilitiesKHR>(pSurfaceCapabilities, settings, "VkSurfaceCapabilitiesKHR*", "pSurfaceCapabilities", 1, dump_text_VkSurfaceCapabilitiesKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#if defined(VK_USE_PLATFORM_XLIB_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateXlibSurfaceKHR(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    VkResult result = instance_dispatch_table(instance)->CreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkXlibSurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkXlibSurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkXlibSurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_XLIB_KHR
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDevices(VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices)
{
    VkResult result = instance_dispatch_table(instance)->EnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkEnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const uint32_t>(pPhysicalDeviceCount, settings, "uint32_t*", "pPhysicalDeviceCount", 1, dump_text_uint32_t);
        dump_text_array<const VkPhysicalDevice>(pPhysicalDevices, *pPhysicalDeviceCount, settings, "VkPhysicalDevice*", "VkPhysicalDevice", "pPhysicalDevices", 1, dump_text_VkPhysicalDevice);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#if defined(VK_USE_PLATFORM_XLIB_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID)
{
    VkBool32 result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID) returns VkBool32 ";
    dump_text_VkBool32(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_value<const Display*>(dpy, settings, "Display*", "dpy", 1, dump_text_Display);
        dump_text_value<const VisualID>(visualID, settings, "VisualID", "visualID", 1, dump_text_VisualID);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_XLIB_KHR
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceExternalImageFormatPropertiesNV(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties)
{
    VkResult result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkFormat>(format, settings, "VkFormat", "format", 1, dump_text_VkFormat);
        dump_text_value<const VkImageType>(type, settings, "VkImageType", "type", 1, dump_text_VkImageType);
        dump_text_value<const VkImageTiling>(tiling, settings, "VkImageTiling", "tiling", 1, dump_text_VkImageTiling);
        dump_text_value<const VkImageUsageFlags>(usage, settings, "VkImageUsageFlags", "usage", 1, dump_text_VkImageUsageFlags);
        dump_text_value<const VkImageCreateFlags>(flags, settings, "VkImageCreateFlags", "flags", 1, dump_text_VkImageCreateFlags);
        dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(externalHandleType, settings, "VkExternalMemoryHandleTypeFlagsNV", "externalHandleType", 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
        dump_text_pointer<const VkExternalImageFormatPropertiesNV>(pExternalImageFormatProperties, settings, "VkExternalImageFormatPropertiesNV*", "pExternalImageFormatProperties", 1, dump_text_VkExternalImageFormatPropertiesNV);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#if defined(VK_USE_PLATFORM_XCB_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateXcbSurfaceKHR(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    VkResult result = instance_dispatch_table(instance)->CreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkXcbSurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkXcbSurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkXcbSurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_XCB_KHR
#if defined(VK_USE_PLATFORM_XCB_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id)
{
    VkBool32 result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id) returns VkBool32 ";
    dump_text_VkBool32(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_value<const xcb_connection_t*>(connection, settings, "xcb_connection_t*", "connection", 1, dump_text_xcb_connection_t);
        dump_text_value<const xcb_visualid_t>(visual_id, settings, "xcb_visualid_t", "visual_id", 1, dump_text_xcb_visualid_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_XCB_KHR
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateWaylandSurfaceKHR(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    VkResult result = instance_dispatch_table(instance)->CreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkWaylandSurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkWaylandSurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkWaylandSurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display)
{
    VkBool32 result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display) returns VkBool32 ";
    dump_text_VkBool32(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_pointer<const wl_display>(display, settings, "struct wl_display*", "display", 1, dump_text_wl_display);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#if defined(VK_USE_PLATFORM_MIR_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateMirSurfaceKHR(VkInstance instance, const VkMirSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    VkResult result = instance_dispatch_table(instance)->CreateMirSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateMirSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkMirSurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkMirSurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkMirSurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_MIR_KHR
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported)
{
    VkResult result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const VkBool32>(pSupported, settings, "VkBool32*", "pSupported", 1, dump_text_VkBool32);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats)
{
    VkResult result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const uint32_t>(pSurfaceFormatCount, settings, "uint32_t*", "pSurfaceFormatCount", 1, dump_text_uint32_t);
        dump_text_array<const VkSurfaceFormatKHR>(pSurfaceFormats, *pSurfaceFormatCount, settings, "VkSurfaceFormatKHR*", "VkSurfaceFormatKHR", "pSurfaceFormats", 1, dump_text_VkSurfaceFormatKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#if defined(VK_USE_PLATFORM_MIR_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkBool32 VKAPI_CALL vkGetPhysicalDeviceMirPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, MirConnection* connection)
{
    VkBool32 result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceMirPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceMirPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection) returns VkBool32 ";
    dump_text_VkBool32(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_pointer<const MirConnection>(connection, settings, "MirConnection*", "connection", 1, dump_text_MirConnection);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_MIR_KHR
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateAndroidSurfaceKHR(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface)
{
    VkResult result = instance_dispatch_table(instance)->CreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_pointer<const VkAndroidSurfaceCreateInfoKHR>(pCreateInfo, settings, "const VkAndroidSurfaceCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkAndroidSurfaceCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSurfaceKHR>(pSurface, settings, "VkSurfaceKHR*", "pSurface", 1, dump_text_VkSurfaceKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes)
{
    VkResult result = instance_dispatch_table(physicalDevice)->GetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const uint32_t>(pPresentModeCount, settings, "uint32_t*", "pPresentModeCount", 1, dump_text_uint32_t);
        dump_text_array<const VkPresentModeKHR>(pPresentModes, *pPresentModeCount, settings, "VkPresentModeKHR*", "VkPresentModeKHR", "pPresentModes", 1, dump_text_VkPresentModeKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}


VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties)
{
    instance_dispatch_table(physicalDevice)->GetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const uint32_t>(pQueueFamilyPropertyCount, settings, "uint32_t*", "pQueueFamilyPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkQueueFamilyProperties>(pQueueFamilyProperties, *pQueueFamilyPropertyCount, settings, "VkQueueFamilyProperties*", "VkQueueFamilyProperties", "pQueueFamilyProperties", 1, dump_text_VkQueueFamilyProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties)
{
    instance_dispatch_table(physicalDevice)->GetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkFormat>(format, settings, "VkFormat", "format", 1, dump_text_VkFormat);
        dump_text_pointer<const VkFormatProperties>(pFormatProperties, settings, "VkFormatProperties*", "pFormatProperties", 1, dump_text_VkFormatProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator)
{
    instance_dispatch_table(instance)->DestroyDebugReportCallbackEXT(instance, callback, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyDebugReportCallbackEXT(instance, callback, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_value<const VkDebugReportCallbackEXT>(callback, settings, "VkDebugReportCallbackEXT", "callback", 1, dump_text_VkDebugReportCallbackEXT);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures)
{
    instance_dispatch_table(physicalDevice)->GetPhysicalDeviceFeatures(physicalDevice, pFeatures);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceFeatures(physicalDevice, pFeatures) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceFeatures>(pFeatures, settings, "VkPhysicalDeviceFeatures*", "pFeatures", 1, dump_text_VkPhysicalDeviceFeatures);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage)
{
    instance_dispatch_table(instance)->DebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_value<const VkDebugReportFlagsEXT>(flags, settings, "VkDebugReportFlagsEXT", "flags", 1, dump_text_VkDebugReportFlagsEXT);
        dump_text_value<const VkDebugReportObjectTypeEXT>(objectType, settings, "VkDebugReportObjectTypeEXT", "objectType", 1, dump_text_VkDebugReportObjectTypeEXT);
        dump_text_value<const uint64_t>(object, settings, "uint64_t", "object", 1, dump_text_uint64_t);
        dump_text_value<const size_t>(location, settings, "size_t", "location", 1, dump_text_size_t);
        dump_text_value<const int32_t>(messageCode, settings, "int32_t", "messageCode", 1, dump_text_int32_t);
        dump_text_value<const char*>(pLayerPrefix, settings, "const char*", "pLayerPrefix", 1, dump_text_cstring);
        dump_text_value<const char*>(pMessage, settings, "const char*", "pMessage", 1, dump_text_cstring);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceSparseImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties)
{
    instance_dispatch_table(physicalDevice)->GetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_value<const VkFormat>(format, settings, "VkFormat", "format", 1, dump_text_VkFormat);
        dump_text_value<const VkImageType>(type, settings, "VkImageType", "type", 1, dump_text_VkImageType);
        dump_text_value<const VkSampleCountFlagBits>(samples, settings, "VkSampleCountFlagBits", "samples", 1, dump_text_VkSampleCountFlagBits);
        dump_text_value<const VkImageUsageFlags>(usage, settings, "VkImageUsageFlags", "usage", 1, dump_text_VkImageUsageFlags);
        dump_text_value<const VkImageTiling>(tiling, settings, "VkImageTiling", "tiling", 1, dump_text_VkImageTiling);
        dump_text_pointer<const uint32_t>(pPropertyCount, settings, "uint32_t*", "pPropertyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkSparseImageFormatProperties>(pProperties, *pPropertyCount, settings, "VkSparseImageFormatProperties*", "VkSparseImageFormatProperties", "pProperties", 1, dump_text_VkSparseImageFormatProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties)
{
    instance_dispatch_table(physicalDevice)->GetPhysicalDeviceProperties(physicalDevice, pProperties);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceProperties(physicalDevice, pProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceProperties>(pProperties, settings, "VkPhysicalDeviceProperties*", "pProperties", 1, dump_text_VkPhysicalDeviceProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator)
{
    instance_dispatch_table(instance)->DestroySurfaceKHR(instance, surface, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroySurfaceKHR(instance, surface, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkInstance>(instance, settings, "VkInstance", "instance", 1, dump_text_VkInstance);
        dump_text_value<const VkSurfaceKHR>(surface, settings, "VkSurfaceKHR", "surface", 1, dump_text_VkSurfaceKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties)
{
    instance_dispatch_table(physicalDevice)->GetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkPhysicalDevice>(physicalDevice, settings, "VkPhysicalDevice", "physicalDevice", 1, dump_text_VkPhysicalDevice);
        dump_text_pointer<const VkPhysicalDeviceMemoryProperties>(pMemoryProperties, settings, "VkPhysicalDeviceMemoryProperties*", "pMemoryProperties", 1, dump_text_VkPhysicalDeviceMemoryProperties);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}

// Autogen device functions

VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags)
{
    VkResult result = device_dispatch_table(device)->ResetCommandPool(device, commandPool, flags);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkResetCommandPool(device, commandPool, flags) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkCommandPool>(commandPool, settings, "VkCommandPool", "commandPool", 1, dump_text_VkCommandPool);
        dump_text_value<const VkCommandPoolResetFlags>(flags, settings, "VkCommandPoolResetFlags", "flags", 1, dump_text_VkCommandPoolResetFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex)
{
    VkResult result = device_dispatch_table(device)->AcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSwapchainKHR>(swapchain, settings, "VkSwapchainKHR", "swapchain", 1, dump_text_VkSwapchainKHR);
        dump_text_value<const uint64_t>(timeout, settings, "uint64_t", "timeout", 1, dump_text_uint64_t);
        dump_text_value<const VkSemaphore>(semaphore, settings, "VkSemaphore", "semaphore", 1, dump_text_VkSemaphore);
        dump_text_value<const VkFence>(fence, settings, "VkFence", "fence", 1, dump_text_VkFence);
        dump_text_pointer<const uint32_t>(pImageIndex, settings, "uint32_t*", "pImageIndex", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkAllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers)
{
    VkResult result = device_dispatch_table(device)->AllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkCommandBufferAllocateInfo>(pAllocateInfo, settings, "const VkCommandBufferAllocateInfo*", "pAllocateInfo", 1, dump_text_VkCommandBufferAllocateInfo);
        dump_text_array<const VkCommandBuffer>(pCommandBuffers, pAllocateInfo->commandBufferCount, settings, "VkCommandBuffer*", "VkCommandBuffer", "pCommandBuffers", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages)
{
    VkResult result = device_dispatch_table(device)->GetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSwapchainKHR>(swapchain, settings, "VkSwapchainKHR", "swapchain", 1, dump_text_VkSwapchainKHR);
        dump_text_pointer<const uint32_t>(pSwapchainImageCount, settings, "uint32_t*", "pSwapchainImageCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImage>(pSwapchainImages, *pSwapchainImageCount, settings, "VkImage*", "VkImage", "pSwapchainImages", 1, dump_text_VkImage);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkBeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo)
{
    VkResult result = device_dispatch_table(commandBuffer)->BeginCommandBuffer(commandBuffer, pBeginInfo);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkBeginCommandBuffer(commandBuffer, pBeginInfo) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_pointer<const VkCommandBufferBeginInfo>(pBeginInfo, settings, "const VkCommandBufferBeginInfo*", "pBeginInfo", 1, dump_text_VkCommandBufferBeginInfo);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkEndCommandBuffer(VkCommandBuffer commandBuffer)
{
    VkResult result = device_dispatch_table(commandBuffer)->EndCommandBuffer(commandBuffer);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkEndCommandBuffer(commandBuffer) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain)
{
    VkResult result = device_dispatch_table(device)->CreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkSwapchainCreateInfoKHR>(pCreateInfo, settings, "const VkSwapchainCreateInfoKHR*", "pCreateInfo", 1, dump_text_VkSwapchainCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSwapchainKHR>(pSwapchain, settings, "VkSwapchainKHR*", "pSwapchain", 1, dump_text_VkSwapchainKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool)
{
    VkResult result = device_dispatch_table(device)->CreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDescriptorPoolCreateInfo>(pCreateInfo, settings, "const VkDescriptorPoolCreateInfo*", "pCreateInfo", 1, dump_text_VkDescriptorPoolCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDescriptorPool>(pDescriptorPool, settings, "VkDescriptorPool*", "pDescriptorPool", 1, dump_text_VkDescriptorPool);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)
{
    VkResult result = device_dispatch_table(device)->CreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineCache>(pipelineCache, settings, "VkPipelineCache", "pipelineCache", 1, dump_text_VkPipelineCache);
        dump_text_value<const uint32_t>(createInfoCount, settings, "uint32_t", "createInfoCount", 1, dump_text_uint32_t);
        dump_text_array<const VkGraphicsPipelineCreateInfo>(pCreateInfos, createInfoCount, settings, "const VkGraphicsPipelineCreateInfo*", "const VkGraphicsPipelineCreateInfo", "pCreateInfos", 1, dump_text_VkGraphicsPipelineCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_array<const VkPipeline>(pPipelines, createInfoCount, settings, "VkPipeline*", "VkPipeline", "pPipelines", 1, dump_text_VkPipeline);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkDebugMarkerSetObjectTagEXT(VkDevice device, VkDebugMarkerObjectTagInfoEXT* pTagInfo)
{
    VkResult result = device_dispatch_table(device)->DebugMarkerSetObjectTagEXT(device, pTagInfo);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDebugMarkerSetObjectTagEXT(device, pTagInfo) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDebugMarkerObjectTagInfoEXT>(pTagInfo, settings, "VkDebugMarkerObjectTagInfoEXT*", "pTagInfo", 1, dump_text_VkDebugMarkerObjectTagInfoEXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateFence(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence)
{
    VkResult result = device_dispatch_table(device)->CreateFence(device, pCreateInfo, pAllocator, pFence);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateFence(device, pCreateInfo, pAllocator, pFence) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkFenceCreateInfo>(pCreateInfo, settings, "const VkFenceCreateInfo*", "pCreateInfo", 1, dump_text_VkFenceCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkFence>(pFence, settings, "VkFence*", "pFence", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags)
{
    VkResult result = device_dispatch_table(commandBuffer)->ResetCommandBuffer(commandBuffer, flags);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkResetCommandBuffer(commandBuffer, flags) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkCommandBufferResetFlags>(flags, settings, "VkCommandBufferResetFlags", "flags", 1, dump_text_VkCommandBufferResetFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkDebugMarkerSetObjectNameEXT(VkDevice device, VkDebugMarkerObjectNameInfoEXT* pNameInfo)
{
    VkResult result = device_dispatch_table(device)->DebugMarkerSetObjectNameEXT(device, pNameInfo);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDebugMarkerSetObjectNameEXT(device, pNameInfo) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDebugMarkerObjectNameInfoEXT>(pNameInfo, settings, "VkDebugMarkerObjectNameInfoEXT*", "pNameInfo", 1, dump_text_VkDebugMarkerObjectNameInfoEXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkMergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches)
{
    VkResult result = device_dispatch_table(device)->MergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkMergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineCache>(dstCache, settings, "VkPipelineCache", "dstCache", 1, dump_text_VkPipelineCache);
        dump_text_value<const uint32_t>(srcCacheCount, settings, "uint32_t", "srcCacheCount", 1, dump_text_uint32_t);
        dump_text_array<const VkPipelineCache>(pSrcCaches, srcCacheCount, settings, "const VkPipelineCache*", "const VkPipelineCache", "pSrcCaches", 1, dump_text_VkPipelineCache);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize, void* pData)
{
    VkResult result = device_dispatch_table(device)->GetPipelineCacheData(device, pipelineCache, pDataSize, pData);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetPipelineCacheData(device, pipelineCache, pDataSize, pData) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineCache>(pipelineCache, settings, "VkPipelineCache", "pipelineCache", 1, dump_text_VkPipelineCache);
        dump_text_pointer<const size_t>(pDataSize, settings, "size_t*", "pDataSize", 1, dump_text_size_t);
        dump_text_value<const void*>(pData, settings, "void*", "pData", 1, dump_text_void);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains)
{
    VkResult result = device_dispatch_table(device)->CreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(swapchainCount, settings, "uint32_t", "swapchainCount", 1, dump_text_uint32_t);
        dump_text_array<const VkSwapchainCreateInfoKHR>(pCreateInfos, swapchainCount, settings, "const VkSwapchainCreateInfoKHR*", "const VkSwapchainCreateInfoKHR", "pCreateInfos", 1, dump_text_VkSwapchainCreateInfoKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_array<const VkSwapchainKHR>(pSwapchains, swapchainCount, settings, "VkSwapchainKHR*", "VkSwapchainKHR", "pSwapchains", 1, dump_text_VkSwapchainKHR);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache)
{
    VkResult result = device_dispatch_table(device)->CreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkPipelineCacheCreateInfo>(pCreateInfo, settings, "const VkPipelineCacheCreateInfo*", "pCreateInfo", 1, dump_text_VkPipelineCacheCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkPipelineCache>(pPipelineCache, settings, "VkPipelineCache*", "pPipelineCache", 1, dump_text_VkPipelineCache);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkQueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence)
{
    VkResult result = device_dispatch_table(queue)->QueueBindSparse(queue, bindInfoCount, pBindInfo, fence);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkQueue>(queue, settings, "VkQueue", "queue", 1, dump_text_VkQueue);
        dump_text_value<const uint32_t>(bindInfoCount, settings, "uint32_t", "bindInfoCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBindSparseInfo>(pBindInfo, bindInfoCount, settings, "const VkBindSparseInfo*", "const VkBindSparseInfo", "pBindInfo", 1, dump_text_VkBindSparseInfo);
        dump_text_value<const VkFence>(fence, settings, "VkFence", "fence", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule)
{
    VkResult result = device_dispatch_table(device)->CreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkShaderModuleCreateInfo>(pCreateInfo, settings, "const VkShaderModuleCreateInfo*", "pCreateInfo", 1, dump_text_VkShaderModuleCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkShaderModule>(pShaderModule, settings, "VkShaderModule*", "pShaderModule", 1, dump_text_VkShaderModule);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout)
{
    VkResult result = device_dispatch_table(device)->CreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDescriptorSetLayoutCreateInfo>(pCreateInfo, settings, "const VkDescriptorSetLayoutCreateInfo*", "pCreateInfo", 1, dump_text_VkDescriptorSetLayoutCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDescriptorSetLayout>(pSetLayout, settings, "VkDescriptorSetLayout*", "pSetLayout", 1, dump_text_VkDescriptorSetLayout);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle)
{
    VkResult result = device_dispatch_table(device)->GetMemoryWin32HandleNV(device, memory, handleType, pHandle);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_value<const VkExternalMemoryHandleTypeFlagsNV>(handleType, settings, "VkExternalMemoryHandleTypeFlagsNV", "handleType", 1, dump_text_VkExternalMemoryHandleTypeFlagsNV);
        dump_text_pointer<const HANDLE>(pHandle, settings, "HANDLE*", "pHandle", 1, dump_text_HANDLE);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset)
{
    VkResult result = device_dispatch_table(device)->BindImageMemory(device, image, memory, memoryOffset);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkBindImageMemory(device, image, memory, memoryOffset) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_value<const VkDeviceSize>(memoryOffset, settings, "VkDeviceSize", "memoryOffset", 1, dump_text_VkDeviceSize);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines)
{
    VkResult result = device_dispatch_table(device)->CreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineCache>(pipelineCache, settings, "VkPipelineCache", "pipelineCache", 1, dump_text_VkPipelineCache);
        dump_text_value<const uint32_t>(createInfoCount, settings, "uint32_t", "createInfoCount", 1, dump_text_uint32_t);
        dump_text_array<const VkComputePipelineCreateInfo>(pCreateInfos, createInfoCount, settings, "const VkComputePipelineCreateInfo*", "const VkComputePipelineCreateInfo", "pCreateInfos", 1, dump_text_VkComputePipelineCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_array<const VkPipeline>(pPipelines, createInfoCount, settings, "VkPipeline*", "VkPipeline", "pPipelines", 1, dump_text_VkPipeline);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset)
{
    VkResult result = device_dispatch_table(device)->BindBufferMemory(device, buffer, memory, memoryOffset);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkBindBufferMemory(device, buffer, memory, memoryOffset) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_value<const VkDeviceSize>(memoryOffset, settings, "VkDeviceSize", "memoryOffset", 1, dump_text_VkDeviceSize);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass)
{
    VkResult result = device_dispatch_table(device)->CreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkRenderPassCreateInfo>(pCreateInfo, settings, "const VkRenderPassCreateInfo*", "pCreateInfo", 1, dump_text_VkRenderPassCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkRenderPass>(pRenderPass, settings, "VkRenderPass*", "pRenderPass", 1, dump_text_VkRenderPass);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateBuffer(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer)
{
    VkResult result = device_dispatch_table(device)->CreateBuffer(device, pCreateInfo, pAllocator, pBuffer);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkBufferCreateInfo>(pCreateInfo, settings, "const VkBufferCreateInfo*", "pCreateInfo", 1, dump_text_VkBufferCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkBuffer>(pBuffer, settings, "VkBuffer*", "pBuffer", 1, dump_text_VkBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags)
{
    VkResult result = device_dispatch_table(device)->GetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(firstQuery, settings, "uint32_t", "firstQuery", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(queryCount, settings, "uint32_t", "queryCount", 1, dump_text_uint32_t);
        dump_text_value<const size_t>(dataSize, settings, "size_t", "dataSize", 1, dump_text_size_t);
        dump_text_value<const void*>(pData, settings, "void*", "pData", 1, dump_text_void);
        dump_text_value<const VkDeviceSize>(stride, settings, "VkDeviceSize", "stride", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkQueryResultFlags>(flags, settings, "VkQueryResultFlags", "flags", 1, dump_text_VkQueryResultFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkInvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges)
{
    VkResult result = device_dispatch_table(device)->InvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkInvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(memoryRangeCount, settings, "uint32_t", "memoryRangeCount", 1, dump_text_uint32_t);
        dump_text_array<const VkMappedMemoryRange>(pMemoryRanges, memoryRangeCount, settings, "const VkMappedMemoryRange*", "const VkMappedMemoryRange", "pMemoryRanges", 1, dump_text_VkMappedMemoryRange);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkFlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges)
{
    VkResult result = device_dispatch_table(device)->FlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkFlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(memoryRangeCount, settings, "uint32_t", "memoryRangeCount", 1, dump_text_uint32_t);
        dump_text_array<const VkMappedMemoryRange>(pMemoryRanges, memoryRangeCount, settings, "const VkMappedMemoryRange*", "const VkMappedMemoryRange", "pMemoryRanges", 1, dump_text_VkMappedMemoryRange);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateImageView(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView)
{
    VkResult result = device_dispatch_table(device)->CreateImageView(device, pCreateInfo, pAllocator, pView);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateImageView(device, pCreateInfo, pAllocator, pView) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkImageViewCreateInfo>(pCreateInfo, settings, "const VkImageViewCreateInfo*", "pCreateInfo", 1, dump_text_VkImageViewCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkImageView>(pView, settings, "VkImageView*", "pView", 1, dump_text_VkImageView);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkMapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData)
{
    VkResult result = device_dispatch_table(device)->MapMemory(device, memory, offset, size, flags, ppData);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkMapMemory(device, memory, offset, size, flags, ppData) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkDeviceSize>(size, settings, "VkDeviceSize", "size", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkMemoryMapFlags>(flags, settings, "VkMemoryMapFlags", "flags", 1, dump_text_VkMemoryMapFlags);
        dump_text_pointer<const void*>(ppData, settings, "void**", "ppData", 1, dump_text_void);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout)
{
    VkResult result = device_dispatch_table(device)->CreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkPipelineLayoutCreateInfo>(pCreateInfo, settings, "const VkPipelineLayoutCreateInfo*", "pCreateInfo", 1, dump_text_VkPipelineLayoutCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkPipelineLayout>(pPipelineLayout, settings, "VkPipelineLayout*", "pPipelineLayout", 1, dump_text_VkPipelineLayout);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags)
{
    VkResult result = device_dispatch_table(device)->ResetDescriptorPool(device, descriptorPool, flags);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkResetDescriptorPool(device, descriptorPool, flags) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDescriptorPool>(descriptorPool, settings, "VkDescriptorPool", "descriptorPool", 1, dump_text_VkDescriptorPool);
        dump_text_value<const VkDescriptorPoolResetFlags>(flags, settings, "VkDescriptorPoolResetFlags", "flags", 1, dump_text_VkDescriptorPoolResetFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkAllocateMemory(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory)
{
    VkResult result = device_dispatch_table(device)->AllocateMemory(device, pAllocateInfo, pAllocator, pMemory);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkMemoryAllocateInfo>(pAllocateInfo, settings, "const VkMemoryAllocateInfo*", "pAllocateInfo", 1, dump_text_VkMemoryAllocateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkDeviceMemory>(pMemory, settings, "VkDeviceMemory*", "pMemory", 1, dump_text_VkDeviceMemory);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool)
{
    VkResult result = device_dispatch_table(device)->CreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkQueryPoolCreateInfo>(pCreateInfo, settings, "const VkQueryPoolCreateInfo*", "pCreateInfo", 1, dump_text_VkQueryPoolCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkQueryPool>(pQueryPool, settings, "VkQueryPool*", "pQueryPool", 1, dump_text_VkQueryPool);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkAllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets)
{
    VkResult result = device_dispatch_table(device)->AllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkDescriptorSetAllocateInfo>(pAllocateInfo, settings, "const VkDescriptorSetAllocateInfo*", "pAllocateInfo", 1, dump_text_VkDescriptorSetAllocateInfo);
        dump_text_array<const VkDescriptorSet>(pDescriptorSets, pAllocateInfo->descriptorSetCount, settings, "VkDescriptorSet*", "VkDescriptorSet", "pDescriptorSets", 1, dump_text_VkDescriptorSet);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkSetEvent(VkDevice device, VkEvent event)
{
    VkResult result = device_dispatch_table(device)->SetEvent(device, event);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkSetEvent(device, event) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkDeviceWaitIdle(VkDevice device)
{
    VkResult result = device_dispatch_table(device)->DeviceWaitIdle(device);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDeviceWaitIdle(device) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkResetEvent(VkDevice device, VkEvent event)
{
    VkResult result = device_dispatch_table(device)->ResetEvent(device, event);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkResetEvent(device, event) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateImage(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage)
{
    VkResult result = device_dispatch_table(device)->CreateImage(device, pCreateInfo, pAllocator, pImage);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateImage(device, pCreateInfo, pAllocator, pImage) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkImageCreateInfo>(pCreateInfo, settings, "const VkImageCreateInfo*", "pCreateInfo", 1, dump_text_VkImageCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkImage>(pImage, settings, "VkImage*", "pImage", 1, dump_text_VkImage);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetEventStatus(VkDevice device, VkEvent event)
{
    VkResult result = device_dispatch_table(device)->GetEventStatus(device, event);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetEventStatus(device, event) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkFreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets)
{
    VkResult result = device_dispatch_table(device)->FreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkFreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDescriptorPool>(descriptorPool, settings, "VkDescriptorPool", "descriptorPool", 1, dump_text_VkDescriptorPool);
        dump_text_value<const uint32_t>(descriptorSetCount, settings, "uint32_t", "descriptorSetCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDescriptorSet>(pDescriptorSets, descriptorSetCount, settings, "const VkDescriptorSet*", "const VkDescriptorSet", "pDescriptorSets", 1, dump_text_VkDescriptorSet);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkQueueWaitIdle(VkQueue queue)
{
    VkResult result = device_dispatch_table(queue)->QueueWaitIdle(queue);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkQueueWaitIdle(queue) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkQueue>(queue, settings, "VkQueue", "queue", 1, dump_text_VkQueue);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateSampler(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler)
{
    VkResult result = device_dispatch_table(device)->CreateSampler(device, pCreateInfo, pAllocator, pSampler);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateSampler(device, pCreateInfo, pAllocator, pSampler) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkSamplerCreateInfo>(pCreateInfo, settings, "const VkSamplerCreateInfo*", "pCreateInfo", 1, dump_text_VkSamplerCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSampler>(pSampler, settings, "VkSampler*", "pSampler", 1, dump_text_VkSampler);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateEvent(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent)
{
    VkResult result = device_dispatch_table(device)->CreateEvent(device, pCreateInfo, pAllocator, pEvent);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateEvent(device, pCreateInfo, pAllocator, pEvent) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkEventCreateInfo>(pCreateInfo, settings, "const VkEventCreateInfo*", "pCreateInfo", 1, dump_text_VkEventCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkEvent>(pEvent, settings, "VkEvent*", "pEvent", 1, dump_text_VkEvent);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateBufferView(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView)
{
    VkResult result = device_dispatch_table(device)->CreateBufferView(device, pCreateInfo, pAllocator, pView);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateBufferView(device, pCreateInfo, pAllocator, pView) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkBufferViewCreateInfo>(pCreateInfo, settings, "const VkBufferViewCreateInfo*", "pCreateInfo", 1, dump_text_VkBufferViewCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkBufferView>(pView, settings, "VkBufferView*", "pView", 1, dump_text_VkBufferView);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool)
{
    VkResult result = device_dispatch_table(device)->CreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkCommandPoolCreateInfo>(pCreateInfo, settings, "const VkCommandPoolCreateInfo*", "pCreateInfo", 1, dump_text_VkCommandPoolCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkCommandPool>(pCommandPool, settings, "VkCommandPool*", "pCommandPool", 1, dump_text_VkCommandPool);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer)
{
    VkResult result = device_dispatch_table(device)->CreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkFramebufferCreateInfo>(pCreateInfo, settings, "const VkFramebufferCreateInfo*", "pCreateInfo", 1, dump_text_VkFramebufferCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkFramebuffer>(pFramebuffer, settings, "VkFramebuffer*", "pFramebuffer", 1, dump_text_VkFramebuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkCreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore)
{
    VkResult result = device_dispatch_table(device)->CreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_pointer<const VkSemaphoreCreateInfo>(pCreateInfo, settings, "const VkSemaphoreCreateInfo*", "pCreateInfo", 1, dump_text_VkSemaphoreCreateInfo);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
        dump_text_pointer<const VkSemaphore>(pSemaphore, settings, "VkSemaphore*", "pSemaphore", 1, dump_text_VkSemaphore);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence)
{
    VkResult result = device_dispatch_table(queue)->QueueSubmit(queue, submitCount, pSubmits, fence);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkQueueSubmit(queue, submitCount, pSubmits, fence) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkQueue>(queue, settings, "VkQueue", "queue", 1, dump_text_VkQueue);
        dump_text_value<const uint32_t>(submitCount, settings, "uint32_t", "submitCount", 1, dump_text_uint32_t);
        dump_text_array<const VkSubmitInfo>(pSubmits, submitCount, settings, "const VkSubmitInfo*", "const VkSubmitInfo", "pSubmits", 1, dump_text_VkSubmitInfo);
        dump_text_value<const VkFence>(fence, settings, "VkFence", "fence", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceStatus(VkDevice device, VkFence fence)
{
    VkResult result = device_dispatch_table(device)->GetFenceStatus(device, fence);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetFenceStatus(device, fence) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkFence>(fence, settings, "VkFence", "fence", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkWaitForFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout)
{
    VkResult result = device_dispatch_table(device)->WaitForFences(device, fenceCount, pFences, waitAll, timeout);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkWaitForFences(device, fenceCount, pFences, waitAll, timeout) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(fenceCount, settings, "uint32_t", "fenceCount", 1, dump_text_uint32_t);
        dump_text_array<const VkFence>(pFences, fenceCount, settings, "const VkFence*", "const VkFence", "pFences", 1, dump_text_VkFence);
        dump_text_value<const VkBool32>(waitAll, settings, "VkBool32", "waitAll", 1, dump_text_VkBool32);
        dump_text_value<const uint64_t>(timeout, settings, "uint64_t", "timeout", 1, dump_text_uint64_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}
VK_LAYER_EXPORT VKAPI_ATTR VkResult VKAPI_CALL vkResetFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences)
{
    VkResult result = device_dispatch_table(device)->ResetFences(device, fenceCount, pFences);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkResetFences(device, fenceCount, pFences) returns VkResult ";
    dump_text_VkResult(result, settings, 0) << ":\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(fenceCount, settings, "uint32_t", "fenceCount", 1, dump_text_uint32_t);
        dump_text_array<const VkFence>(pFences, fenceCount, settings, "const VkFence*", "const VkFence", "pFences", 1, dump_text_VkFence);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
    
    return result;
}


VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges)
{
    device_dispatch_table(commandBuffer)->CmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(imageLayout, settings, "VkImageLayout", "imageLayout", 1, dump_text_VkImageLayout);
        dump_text_pointer<const VkClearColorValue>(pColor, settings, "const VkClearColorValue*", "pColor", 1, dump_text_VkClearColorValue);
        dump_text_value<const uint32_t>(rangeCount, settings, "uint32_t", "rangeCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageSubresourceRange>(pRanges, rangeCount, settings, "const VkImageSubresourceRange*", "const VkImageSubresourceRange", "pRanges", 1, dump_text_VkImageSubresourceRange);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges)
{
    device_dispatch_table(commandBuffer)->CmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(imageLayout, settings, "VkImageLayout", "imageLayout", 1, dump_text_VkImageLayout);
        dump_text_pointer<const VkClearDepthStencilValue>(pDepthStencil, settings, "const VkClearDepthStencilValue*", "pDepthStencil", 1, dump_text_VkClearDepthStencilValue);
        dump_text_value<const uint32_t>(rangeCount, settings, "uint32_t", "rangeCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageSubresourceRange>(pRanges, rangeCount, settings, "const VkImageSubresourceRange*", "const VkImageSubresourceRange", "pRanges", 1, dump_text_VkImageSubresourceRange);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyFence(device, fence, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyFence(device, fence, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkFence>(fence, settings, "VkFence", "fence", 1, dump_text_VkFence);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements)
{
    device_dispatch_table(device)->GetImageMemoryRequirements(device, image, pMemoryRequirements);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetImageMemoryRequirements(device, image, pMemoryRequirements) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_pointer<const VkMemoryRequirements>(pMemoryRequirements, settings, "VkMemoryRequirements*", "pMemoryRequirements", 1, dump_text_VkMemoryRequirements);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers)
{
    device_dispatch_table(device)->FreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkFreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkCommandPool>(commandPool, settings, "VkCommandPool", "commandPool", 1, dump_text_VkCommandPool);
        dump_text_value<const uint32_t>(commandBufferCount, settings, "uint32_t", "commandBufferCount", 1, dump_text_uint32_t);
        dump_text_array<const VkCommandBuffer>(pCommandBuffers, commandBufferCount, settings, "const VkCommandBuffer*", "const VkCommandBuffer", "pCommandBuffers", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects)
{
    device_dispatch_table(commandBuffer)->CmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(attachmentCount, settings, "uint32_t", "attachmentCount", 1, dump_text_uint32_t);
        dump_text_array<const VkClearAttachment>(pAttachments, attachmentCount, settings, "const VkClearAttachment*", "const VkClearAttachment", "pAttachments", 1, dump_text_VkClearAttachment);
        dump_text_value<const uint32_t>(rectCount, settings, "uint32_t", "rectCount", 1, dump_text_uint32_t);
        dump_text_array<const VkClearRect>(pRects, rectCount, settings, "const VkClearRect*", "const VkClearRect", "pRects", 1, dump_text_VkClearRect);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
    device_dispatch_table(commandBuffer)->CmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkBuffer>(countBuffer, settings, "VkBuffer", "countBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(countBufferOffset, settings, "VkDeviceSize", "countBufferOffset", 1, dump_text_VkDeviceSize);
        dump_text_value<const uint32_t>(maxDrawCount, settings, "uint32_t", "maxDrawCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(stride, settings, "uint32_t", "stride", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions)
{
    device_dispatch_table(commandBuffer)->CmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(srcImage, settings, "VkImage", "srcImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(srcImageLayout, settings, "VkImageLayout", "srcImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const VkImage>(dstImage, settings, "VkImage", "dstImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(dstImageLayout, settings, "VkImageLayout", "dstImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageResolve>(pRegions, regionCount, settings, "const VkImageResolve*", "const VkImageResolve", "pRegions", 1, dump_text_VkImageResolve);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride)
{
    device_dispatch_table(commandBuffer)->CmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkBuffer>(countBuffer, settings, "VkBuffer", "countBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(countBufferOffset, settings, "VkDeviceSize", "countBufferOffset", 1, dump_text_VkDeviceSize);
        dump_text_value<const uint32_t>(maxDrawCount, settings, "uint32_t", "maxDrawCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(stride, settings, "uint32_t", "stride", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
{
    device_dispatch_table(commandBuffer)->CmdSetEvent(commandBuffer, event, stageMask);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetEvent(commandBuffer, event, stageMask) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
        dump_text_value<const VkPipelineStageFlags>(stageMask, settings, "VkPipelineStageFlags", "stageMask", 1, dump_text_VkPipelineStageFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)
{
    device_dispatch_table(commandBuffer)->CmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkPipelineBindPoint>(pipelineBindPoint, settings, "VkPipelineBindPoint", "pipelineBindPoint", 1, dump_text_VkPipelineBindPoint);
        dump_text_value<const VkPipeline>(pipeline, settings, "VkPipeline", "pipeline", 1, dump_text_VkPipeline);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports)
{
    device_dispatch_table(commandBuffer)->CmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(firstViewport, settings, "uint32_t", "firstViewport", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(viewportCount, settings, "uint32_t", "viewportCount", 1, dump_text_uint32_t);
        dump_text_array<const VkViewport>(pViewports, viewportCount, settings, "const VkViewport*", "const VkViewport", "pViewports", 1, dump_text_VkViewport);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT* pMarkerInfo)
{
    device_dispatch_table(commandBuffer)->CmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_pointer<const VkDebugMarkerMarkerInfoEXT>(pMarkerInfo, settings, "VkDebugMarkerMarkerInfoEXT*", "pMarkerInfo", 1, dump_text_VkDebugMarkerMarkerInfoEXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
{
    device_dispatch_table(commandBuffer)->CmdResetEvent(commandBuffer, event, stageMask);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdResetEvent(commandBuffer, event, stageMask) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
        dump_text_value<const VkPipelineStageFlags>(stageMask, settings, "VkPipelineStageFlags", "stageMask", 1, dump_text_VkPipelineStageFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth)
{
    device_dispatch_table(commandBuffer)->CmdSetLineWidth(commandBuffer, lineWidth);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetLineWidth(commandBuffer, lineWidth) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const float>(lineWidth, settings, "float", "lineWidth", 1, dump_text_float);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)
{
    device_dispatch_table(commandBuffer)->CmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(eventCount, settings, "uint32_t", "eventCount", 1, dump_text_uint32_t);
        dump_text_array<const VkEvent>(pEvents, eventCount, settings, "const VkEvent*", "const VkEvent", "pEvents", 1, dump_text_VkEvent);
        dump_text_value<const VkPipelineStageFlags>(srcStageMask, settings, "VkPipelineStageFlags", "srcStageMask", 1, dump_text_VkPipelineStageFlags);
        dump_text_value<const VkPipelineStageFlags>(dstStageMask, settings, "VkPipelineStageFlags", "dstStageMask", 1, dump_text_VkPipelineStageFlags);
        dump_text_value<const uint32_t>(memoryBarrierCount, settings, "uint32_t", "memoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkMemoryBarrier>(pMemoryBarriers, memoryBarrierCount, settings, "const VkMemoryBarrier*", "const VkMemoryBarrier", "pMemoryBarriers", 1, dump_text_VkMemoryBarrier);
        dump_text_value<const uint32_t>(bufferMemoryBarrierCount, settings, "uint32_t", "bufferMemoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBufferMemoryBarrier>(pBufferMemoryBarriers, bufferMemoryBarrierCount, settings, "const VkBufferMemoryBarrier*", "const VkBufferMemoryBarrier", "pBufferMemoryBarriers", 1, dump_text_VkBufferMemoryBarrier);
        dump_text_value<const uint32_t>(imageMemoryBarrierCount, settings, "uint32_t", "imageMemoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageMemoryBarrier>(pImageMemoryBarriers, imageMemoryBarrierCount, settings, "const VkImageMemoryBarrier*", "const VkImageMemoryBarrier", "pImageMemoryBarriers", 1, dump_text_VkImageMemoryBarrier);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyPipelineCache(device, pipelineCache, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyPipelineCache(device, pipelineCache, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineCache>(pipelineCache, settings, "VkPipelineCache", "pipelineCache", 1, dump_text_VkPipelineCache);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer)
{
    device_dispatch_table(commandBuffer)->CmdDebugMarkerEndEXT(commandBuffer);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDebugMarkerEndEXT(commandBuffer) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors)
{
    device_dispatch_table(commandBuffer)->CmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(firstScissor, settings, "uint32_t", "firstScissor", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(scissorCount, settings, "uint32_t", "scissorCount", 1, dump_text_uint32_t);
        dump_text_array<const VkRect2D>(pScissors, scissorCount, settings, "const VkRect2D*", "const VkRect2D", "pScissors", 1, dump_text_VkRect2D);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT* pMarkerInfo)
{
    device_dispatch_table(commandBuffer)->CmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_pointer<const VkDebugMarkerMarkerInfoEXT>(pMarkerInfo, settings, "VkDebugMarkerMarkerInfoEXT*", "pMarkerInfo", 1, dump_text_VkDebugMarkerMarkerInfoEXT);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor)
{
    device_dispatch_table(commandBuffer)->CmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const float>(depthBiasConstantFactor, settings, "float", "depthBiasConstantFactor", 1, dump_text_float);
        dump_text_value<const float>(depthBiasClamp, settings, "float", "depthBiasClamp", 1, dump_text_float);
        dump_text_value<const float>(depthBiasSlopeFactor, settings, "float", "depthBiasSlopeFactor", 1, dump_text_float);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants[4])
{
    device_dispatch_table(commandBuffer)->CmdSetBlendConstants(commandBuffer, blendConstants);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetBlendConstants(commandBuffer, blendConstants) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_array<const float>(blendConstants, 4, settings, "const float[4]", "const float", "blendConstants", 1, dump_text_float);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyShaderModule(device, shaderModule, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyShaderModule(device, shaderModule, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkShaderModule>(shaderModule, settings, "VkShaderModule", "shaderModule", 1, dump_text_VkShaderModule);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds)
{
    device_dispatch_table(commandBuffer)->CmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const float>(minDepthBounds, settings, "float", "minDepthBounds", 1, dump_text_float);
        dump_text_value<const float>(maxDepthBounds, settings, "float", "maxDepthBounds", 1, dump_text_float);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers)
{
    device_dispatch_table(commandBuffer)->CmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkPipelineStageFlags>(srcStageMask, settings, "VkPipelineStageFlags", "srcStageMask", 1, dump_text_VkPipelineStageFlags);
        dump_text_value<const VkPipelineStageFlags>(dstStageMask, settings, "VkPipelineStageFlags", "dstStageMask", 1, dump_text_VkPipelineStageFlags);
        dump_text_value<const VkDependencyFlags>(dependencyFlags, settings, "VkDependencyFlags", "dependencyFlags", 1, dump_text_VkDependencyFlags);
        dump_text_value<const uint32_t>(memoryBarrierCount, settings, "uint32_t", "memoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkMemoryBarrier>(pMemoryBarriers, memoryBarrierCount, settings, "const VkMemoryBarrier*", "const VkMemoryBarrier", "pMemoryBarriers", 1, dump_text_VkMemoryBarrier);
        dump_text_value<const uint32_t>(bufferMemoryBarrierCount, settings, "uint32_t", "bufferMemoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBufferMemoryBarrier>(pBufferMemoryBarriers, bufferMemoryBarrierCount, settings, "const VkBufferMemoryBarrier*", "const VkBufferMemoryBarrier", "pBufferMemoryBarriers", 1, dump_text_VkBufferMemoryBarrier);
        dump_text_value<const uint32_t>(imageMemoryBarrierCount, settings, "uint32_t", "imageMemoryBarrierCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageMemoryBarrier>(pImageMemoryBarriers, imageMemoryBarrierCount, settings, "const VkImageMemoryBarrier*", "const VkImageMemoryBarrier", "pImageMemoryBarriers", 1, dump_text_VkImageMemoryBarrier);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask)
{
    device_dispatch_table(commandBuffer)->CmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkStencilFaceFlags>(faceMask, settings, "VkStencilFaceFlags", "faceMask", 1, dump_text_VkStencilFaceFlags);
        dump_text_value<const uint32_t>(compareMask, settings, "uint32_t", "compareMask", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyImageView(device, imageView, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyImageView(device, imageView, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImageView>(imageView, settings, "VkImageView", "imageView", 1, dump_text_VkImageView);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask)
{
    device_dispatch_table(commandBuffer)->CmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkStencilFaceFlags>(faceMask, settings, "VkStencilFaceFlags", "faceMask", 1, dump_text_VkStencilFaceFlags);
        dump_text_value<const uint32_t>(writeMask, settings, "uint32_t", "writeMask", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroySwapchainKHR(device, swapchain, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroySwapchainKHR(device, swapchain, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSwapchainKHR>(swapchain, settings, "VkSwapchainKHR", "swapchain", 1, dump_text_VkSwapchainKHR);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags)
{
    device_dispatch_table(commandBuffer)->CmdBeginQuery(commandBuffer, queryPool, query, flags);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBeginQuery(commandBuffer, queryPool, query, flags) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(query, settings, "uint32_t", "query", 1, dump_text_uint32_t);
        dump_text_value<const VkQueryControlFlags>(flags, settings, "VkQueryControlFlags", "flags", 1, dump_text_VkQueryControlFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference)
{
    device_dispatch_table(commandBuffer)->CmdSetStencilReference(commandBuffer, faceMask, reference);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdSetStencilReference(commandBuffer, faceMask, reference) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkStencilFaceFlags>(faceMask, settings, "VkStencilFaceFlags", "faceMask", 1, dump_text_VkStencilFaceFlags);
        dump_text_value<const uint32_t>(reference, settings, "uint32_t", "reference", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets)
{
    device_dispatch_table(commandBuffer)->CmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkPipelineBindPoint>(pipelineBindPoint, settings, "VkPipelineBindPoint", "pipelineBindPoint", 1, dump_text_VkPipelineBindPoint);
        dump_text_value<const VkPipelineLayout>(layout, settings, "VkPipelineLayout", "layout", 1, dump_text_VkPipelineLayout);
        dump_text_value<const uint32_t>(firstSet, settings, "uint32_t", "firstSet", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(descriptorSetCount, settings, "uint32_t", "descriptorSetCount", 1, dump_text_uint32_t);
        dump_text_array<const VkDescriptorSet>(pDescriptorSets, descriptorSetCount, settings, "const VkDescriptorSet*", "const VkDescriptorSet", "pDescriptorSets", 1, dump_text_VkDescriptorSet);
        dump_text_value<const uint32_t>(dynamicOffsetCount, settings, "uint32_t", "dynamicOffsetCount", 1, dump_text_uint32_t);
        dump_text_array<const uint32_t>(pDynamicOffsets, dynamicOffsetCount, settings, "const uint32_t*", "const uint32_t", "pDynamicOffsets", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType)
{
    device_dispatch_table(commandBuffer)->CmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkIndexType>(indexType, settings, "VkIndexType", "indexType", 1, dump_text_VkIndexType);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements)
{
    device_dispatch_table(device)->GetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_pointer<const uint32_t>(pSparseMemoryRequirementCount, settings, "uint32_t*", "pSparseMemoryRequirementCount", 1, dump_text_uint32_t);
        dump_text_array<const VkSparseImageMemoryRequirements>(pSparseMemoryRequirements, *pSparseMemoryRequirementCount, settings, "VkSparseImageMemoryRequirements*", "VkSparseImageMemoryRequirements", "pSparseMemoryRequirements", 1, dump_text_VkSparseImageMemoryRequirements);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets)
{
    device_dispatch_table(commandBuffer)->CmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(firstBinding, settings, "uint32_t", "firstBinding", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(bindingCount, settings, "uint32_t", "bindingCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBuffer>(pBuffers, bindingCount, settings, "const VkBuffer*", "const VkBuffer", "pBuffers", 1, dump_text_VkBuffer);
        dump_text_array<const VkDeviceSize>(pOffsets, bindingCount, settings, "const VkDeviceSize*", "const VkDeviceSize", "pOffsets", 1, dump_text_VkDeviceSize);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query)
{
    device_dispatch_table(commandBuffer)->CmdEndQuery(commandBuffer, queryPool, query);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdEndQuery(commandBuffer, queryPool, query) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(query, settings, "uint32_t", "query", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements)
{
    device_dispatch_table(device)->GetBufferMemoryRequirements(device, buffer, pMemoryRequirements);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetBufferMemoryRequirements(device, buffer, pMemoryRequirements) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_pointer<const VkMemoryRequirements>(pMemoryRequirements, settings, "VkMemoryRequirements*", "pMemoryRequirements", 1, dump_text_VkMemoryRequirements);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
{
    device_dispatch_table(commandBuffer)->CmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(firstQuery, settings, "uint32_t", "firstQuery", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(queryCount, settings, "uint32_t", "queryCount", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance)
{
    device_dispatch_table(commandBuffer)->CmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(vertexCount, settings, "uint32_t", "vertexCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(instanceCount, settings, "uint32_t", "instanceCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(firstVertex, settings, "uint32_t", "firstVertex", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(firstInstance, settings, "uint32_t", "firstInstance", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroySampler(device, sampler, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroySampler(device, sampler, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSampler>(sampler, settings, "VkSampler", "sampler", 1, dump_text_VkSampler);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query)
{
    device_dispatch_table(commandBuffer)->CmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkPipelineStageFlagBits>(pipelineStage, settings, "VkPipelineStageFlagBits", "pipelineStage", 1, dump_text_VkPipelineStageFlagBits);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(query, settings, "uint32_t", "query", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)
{
    device_dispatch_table(commandBuffer)->CmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(indexCount, settings, "uint32_t", "indexCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(instanceCount, settings, "uint32_t", "instanceCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(firstIndex, settings, "uint32_t", "firstIndex", 1, dump_text_uint32_t);
        dump_text_value<const int32_t>(vertexOffset, settings, "int32_t", "vertexOffset", 1, dump_text_int32_t);
        dump_text_value<const uint32_t>(firstInstance, settings, "uint32_t", "firstInstance", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyFramebuffer(device, framebuffer, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyFramebuffer(device, framebuffer, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkFramebuffer>(framebuffer, settings, "VkFramebuffer", "framebuffer", 1, dump_text_VkFramebuffer);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDescriptorSetLayout>(descriptorSetLayout, settings, "VkDescriptorSetLayout", "descriptorSetLayout", 1, dump_text_VkDescriptorSetLayout);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags)
{
    device_dispatch_table(commandBuffer)->CmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_value<const uint32_t>(firstQuery, settings, "uint32_t", "firstQuery", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(queryCount, settings, "uint32_t", "queryCount", 1, dump_text_uint32_t);
        dump_text_value<const VkBuffer>(dstBuffer, settings, "VkBuffer", "dstBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(dstOffset, settings, "VkDeviceSize", "dstOffset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkDeviceSize>(stride, settings, "VkDeviceSize", "stride", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkQueryResultFlags>(flags, settings, "VkQueryResultFlags", "flags", 1, dump_text_VkQueryResultFlags);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
    device_dispatch_table(commandBuffer)->CmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const uint32_t>(drawCount, settings, "uint32_t", "drawCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(stride, settings, "uint32_t", "stride", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues)
{
    device_dispatch_table(commandBuffer)->CmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkPipelineLayout>(layout, settings, "VkPipelineLayout", "layout", 1, dump_text_VkPipelineLayout);
        dump_text_value<const VkShaderStageFlags>(stageFlags, settings, "VkShaderStageFlags", "stageFlags", 1, dump_text_VkShaderStageFlags);
        dump_text_value<const uint32_t>(offset, settings, "uint32_t", "offset", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(size, settings, "uint32_t", "size", 1, dump_text_uint32_t);
        dump_text_value<const void*>(pValues, settings, "const void*", "pValues", 1, dump_text_void);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes)
{
    device_dispatch_table(device)->GetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_pointer<const VkDeviceSize>(pCommittedMemoryInBytes, settings, "VkDeviceSize*", "pCommittedMemoryInBytes", 1, dump_text_VkDeviceSize);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
{
    device_dispatch_table(commandBuffer)->CmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
        dump_text_value<const uint32_t>(drawCount, settings, "uint32_t", "drawCount", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(stride, settings, "uint32_t", "stride", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents)
{
    device_dispatch_table(commandBuffer)->CmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_pointer<const VkRenderPassBeginInfo>(pRenderPassBegin, settings, "const VkRenderPassBeginInfo*", "pRenderPassBegin", 1, dump_text_VkRenderPassBeginInfo);
        dump_text_value<const VkSubpassContents>(contents, settings, "VkSubpassContents", "contents", 1, dump_text_VkSubpassContents);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkUnmapMemory(VkDevice device, VkDeviceMemory memory)
{
    device_dispatch_table(device)->UnmapMemory(device, memory);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkUnmapMemory(device, memory) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdDispatch(VkCommandBuffer commandBuffer, uint32_t x, uint32_t y, uint32_t z)
{
    device_dispatch_table(commandBuffer)->CmdDispatch(commandBuffer, x, y, z);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDispatch(commandBuffer, x, y, z) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(x, settings, "uint32_t", "x", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(y, settings, "uint32_t", "y", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(z, settings, "uint32_t", "z", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset)
{
    device_dispatch_table(commandBuffer)->CmdDispatchIndirect(commandBuffer, buffer, offset);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdDispatchIndirect(commandBuffer, buffer, offset) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(offset, settings, "VkDeviceSize", "offset", 1, dump_text_VkDeviceSize);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetImageSubresourceLayout(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout)
{
    device_dispatch_table(device)->GetImageSubresourceLayout(device, image, pSubresource, pLayout);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetImageSubresourceLayout(device, image, pSubresource, pLayout) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_pointer<const VkImageSubresource>(pSubresource, settings, "const VkImageSubresource*", "pSubresource", 1, dump_text_VkImageSubresource);
        dump_text_pointer<const VkSubresourceLayout>(pLayout, settings, "VkSubresourceLayout*", "pLayout", 1, dump_text_VkSubresourceLayout);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyPipeline(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyPipeline(device, pipeline, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyPipeline(device, pipeline, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipeline>(pipeline, settings, "VkPipeline", "pipeline", 1, dump_text_VkPipeline);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyQueryPool(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyQueryPool(device, queryPool, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyQueryPool(device, queryPool, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkQueryPool>(queryPool, settings, "VkQueryPool", "queryPool", 1, dump_text_VkQueryPool);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions)
{
    device_dispatch_table(commandBuffer)->CmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(srcBuffer, settings, "VkBuffer", "srcBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkBuffer>(dstBuffer, settings, "VkBuffer", "dstBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBufferCopy>(pRegions, regionCount, settings, "const VkBufferCopy*", "const VkBufferCopy", "pRegions", 1, dump_text_VkBufferCopy);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents)
{
    device_dispatch_table(commandBuffer)->CmdNextSubpass(commandBuffer, contents);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdNextSubpass(commandBuffer, contents) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkSubpassContents>(contents, settings, "VkSubpassContents", "contents", 1, dump_text_VkSubpassContents);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions)
{
    device_dispatch_table(commandBuffer)->CmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(srcImage, settings, "VkImage", "srcImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(srcImageLayout, settings, "VkImageLayout", "srcImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const VkImage>(dstImage, settings, "VkImage", "dstImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(dstImageLayout, settings, "VkImageLayout", "dstImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageCopy>(pRegions, regionCount, settings, "const VkImageCopy*", "const VkImageCopy", "pRegions", 1, dump_text_VkImageCopy);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkFreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->FreeMemory(device, memory, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkFreeMemory(device, memory, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDeviceMemory>(memory, settings, "VkDeviceMemory", "memory", 1, dump_text_VkDeviceMemory);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyDescriptorPool(device, descriptorPool, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyDescriptorPool(device, descriptorPool, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkDescriptorPool>(descriptorPool, settings, "VkDescriptorPool", "descriptorPool", 1, dump_text_VkDescriptorPool);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass(VkCommandBuffer commandBuffer)
{
    device_dispatch_table(commandBuffer)->CmdEndRenderPass(commandBuffer);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdEndRenderPass(commandBuffer) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers)
{
    device_dispatch_table(commandBuffer)->CmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const uint32_t>(commandBufferCount, settings, "uint32_t", "commandBufferCount", 1, dump_text_uint32_t);
        dump_text_array<const VkCommandBuffer>(pCommandBuffers, commandBufferCount, settings, "const VkCommandBuffer*", "const VkCommandBuffer", "pCommandBuffers", 1, dump_text_VkCommandBuffer);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter)
{
    device_dispatch_table(commandBuffer)->CmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(srcImage, settings, "VkImage", "srcImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(srcImageLayout, settings, "VkImageLayout", "srcImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const VkImage>(dstImage, settings, "VkImage", "dstImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(dstImageLayout, settings, "VkImageLayout", "dstImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkImageBlit>(pRegions, regionCount, settings, "const VkImageBlit*", "const VkImageBlit", "pRegions", 1, dump_text_VkImageBlit);
        dump_text_value<const VkFilter>(filter, settings, "VkFilter", "filter", 1, dump_text_VkFilter);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyImage(device, image, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyImage(device, image, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkImage>(image, settings, "VkImage", "image", 1, dump_text_VkImage);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyPipelineLayout(device, pipelineLayout, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyPipelineLayout(device, pipelineLayout, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkPipelineLayout>(pipelineLayout, settings, "VkPipelineLayout", "pipelineLayout", 1, dump_text_VkPipelineLayout);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyBufferView(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyBufferView(device, bufferView, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyBufferView(device, bufferView, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkBufferView>(bufferView, settings, "VkBufferView", "bufferView", 1, dump_text_VkBufferView);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies)
{
    device_dispatch_table(device)->UpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkUpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(descriptorWriteCount, settings, "uint32_t", "descriptorWriteCount", 1, dump_text_uint32_t);
        dump_text_array<const VkWriteDescriptorSet>(pDescriptorWrites, descriptorWriteCount, settings, "const VkWriteDescriptorSet*", "const VkWriteDescriptorSet", "pDescriptorWrites", 1, dump_text_VkWriteDescriptorSet);
        dump_text_value<const uint32_t>(descriptorCopyCount, settings, "uint32_t", "descriptorCopyCount", 1, dump_text_uint32_t);
        dump_text_array<const VkCopyDescriptorSet>(pDescriptorCopies, descriptorCopyCount, settings, "const VkCopyDescriptorSet*", "const VkCopyDescriptorSet", "pDescriptorCopies", 1, dump_text_VkCopyDescriptorSet);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyRenderPass(device, renderPass, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyRenderPass(device, renderPass, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkRenderPass>(renderPass, settings, "VkRenderPass", "renderPass", 1, dump_text_VkRenderPass);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions)
{
    device_dispatch_table(commandBuffer)->CmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(srcBuffer, settings, "VkBuffer", "srcBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkImage>(dstImage, settings, "VkImage", "dstImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(dstImageLayout, settings, "VkImageLayout", "dstImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBufferImageCopy>(pRegions, regionCount, settings, "const VkBufferImageCopy*", "const VkBufferImageCopy", "pRegions", 1, dump_text_VkBufferImageCopy);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyEvent(device, event, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyEvent(device, event, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkEvent>(event, settings, "VkEvent", "event", 1, dump_text_VkEvent);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions)
{
    device_dispatch_table(commandBuffer)->CmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkImage>(srcImage, settings, "VkImage", "srcImage", 1, dump_text_VkImage);
        dump_text_value<const VkImageLayout>(srcImageLayout, settings, "VkImageLayout", "srcImageLayout", 1, dump_text_VkImageLayout);
        dump_text_value<const VkBuffer>(dstBuffer, settings, "VkBuffer", "dstBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const uint32_t>(regionCount, settings, "uint32_t", "regionCount", 1, dump_text_uint32_t);
        dump_text_array<const VkBufferImageCopy>(pRegions, regionCount, settings, "const VkBufferImageCopy*", "const VkBufferImageCopy", "pRegions", 1, dump_text_VkBufferImageCopy);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity)
{
    device_dispatch_table(device)->GetRenderAreaGranularity(device, renderPass, pGranularity);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetRenderAreaGranularity(device, renderPass, pGranularity) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkRenderPass>(renderPass, settings, "VkRenderPass", "renderPass", 1, dump_text_VkRenderPass);
        dump_text_pointer<const VkExtent2D>(pGranularity, settings, "VkExtent2D*", "pGranularity", 1, dump_text_VkExtent2D);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroySemaphore(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroySemaphore(device, semaphore, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroySemaphore(device, semaphore, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkSemaphore>(semaphore, settings, "VkSemaphore", "semaphore", 1, dump_text_VkSemaphore);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData)
{
    device_dispatch_table(commandBuffer)->CmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(dstBuffer, settings, "VkBuffer", "dstBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(dstOffset, settings, "VkDeviceSize", "dstOffset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkDeviceSize>(dataSize, settings, "VkDeviceSize", "dataSize", 1, dump_text_VkDeviceSize);
        dump_text_value<const void*>(pData, settings, "const void*", "pData", 1, dump_text_void);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyBuffer(device, buffer, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyBuffer(device, buffer, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkBuffer>(buffer, settings, "VkBuffer", "buffer", 1, dump_text_VkBuffer);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue)
{
    device_dispatch_table(device)->GetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkGetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const uint32_t>(queueFamilyIndex, settings, "uint32_t", "queueFamilyIndex", 1, dump_text_uint32_t);
        dump_text_value<const uint32_t>(queueIndex, settings, "uint32_t", "queueIndex", 1, dump_text_uint32_t);
        dump_text_pointer<const VkQueue>(pQueue, settings, "VkQueue*", "pQueue", 1, dump_text_VkQueue);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data)
{
    device_dispatch_table(commandBuffer)->CmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkCommandBuffer>(commandBuffer, settings, "VkCommandBuffer", "commandBuffer", 1, dump_text_VkCommandBuffer);
        dump_text_value<const VkBuffer>(dstBuffer, settings, "VkBuffer", "dstBuffer", 1, dump_text_VkBuffer);
        dump_text_value<const VkDeviceSize>(dstOffset, settings, "VkDeviceSize", "dstOffset", 1, dump_text_VkDeviceSize);
        dump_text_value<const VkDeviceSize>(size, settings, "VkDeviceSize", "size", 1, dump_text_VkDeviceSize);
        dump_text_value<const uint32_t>(data, settings, "uint32_t", "data", 1, dump_text_uint32_t);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}
VK_LAYER_EXPORT VKAPI_ATTR void VKAPI_CALL vkDestroyCommandPool(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator)
{
    device_dispatch_table(device)->DestroyCommandPool(device, commandPool, pAllocator);

    ApiDumpInstance& dump_inst(ApiDumpInstance::current());
    const ApiDumpSettings& settings(dump_inst.settings());
    loader_platform_thread_lock_mutex(dump_inst.outputMutex());
    settings.stream() << "Thread " << dump_inst.threadID() << ", Frame " << dump_inst.frameCount() << ":\n";
    settings.stream() << "vkDestroyCommandPool(device, commandPool, pAllocator) returns void:\n";
    
    if(settings.showParams())
    {
        dump_text_value<const VkDevice>(device, settings, "VkDevice", "device", 1, dump_text_VkDevice);
        dump_text_value<const VkCommandPool>(commandPool, settings, "VkCommandPool", "commandPool", 1, dump_text_VkCommandPool);
        dump_text_pointer<const VkAllocationCallbacks>(pAllocator, settings, "const VkAllocationCallbacks*", "pAllocator", 1, dump_text_VkAllocationCallbacks);
    }
    settings.shouldFlush() ? settings.stream() << std::endl : settings.stream() << "\n";
    loader_platform_thread_unlock_mutex(dump_inst.outputMutex());
}

VK_LAYER_EXPORT VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr(VkInstance instance, const char* pName)
{

    if(strcmp(pName, "vkGetPhysicalDeviceDisplayPropertiesKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceDisplayPropertiesKHR);
    if(strcmp(pName, "vkGetPhysicalDeviceQueueFamilyProperties") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceQueueFamilyProperties);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    if(strcmp(pName, "vkCreateWin32SurfaceKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateWin32SurfaceKHR);
#endif // VK_USE_PLATFORM_WIN32_KHR
    if(strcmp(pName, "vkGetDisplayPlaneSupportedDisplaysKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetDisplayPlaneSupportedDisplaysKHR);
    if(strcmp(pName, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceDisplayPlanePropertiesKHR);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    if(strcmp(pName, "vkGetPhysicalDeviceWin32PresentationSupportKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceWin32PresentationSupportKHR);
#endif // VK_USE_PLATFORM_WIN32_KHR
    if(strcmp(pName, "vkGetDisplayModePropertiesKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetDisplayModePropertiesKHR);
    if(strcmp(pName, "vkCreateDisplayModeKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateDisplayModeKHR);
    if(strcmp(pName, "vkGetDisplayPlaneCapabilitiesKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetDisplayPlaneCapabilitiesKHR);
    if(strcmp(pName, "vkCreateDisplayPlaneSurfaceKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateDisplayPlaneSurfaceKHR);
    if(strcmp(pName, "vkGetPhysicalDeviceImageFormatProperties") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceImageFormatProperties);
    if(strcmp(pName, "vkCreateDebugReportCallbackEXT") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateDebugReportCallbackEXT);
    if(strcmp(pName, "vkGetPhysicalDeviceFormatProperties") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceFormatProperties);
    if(strcmp(pName, "vkDestroyDebugReportCallbackEXT") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyDebugReportCallbackEXT);
    if(strcmp(pName, "vkGetPhysicalDeviceFeatures") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceFeatures);
    if(strcmp(pName, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceSurfaceCapabilitiesKHR);
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    if(strcmp(pName, "vkCreateXlibSurfaceKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateXlibSurfaceKHR);
#endif // VK_USE_PLATFORM_XLIB_KHR
    if(strcmp(pName, "vkEnumeratePhysicalDevices") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkEnumeratePhysicalDevices);
    if(strcmp(pName, "vkDebugReportMessageEXT") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDebugReportMessageEXT);
    if(strcmp(pName, "vkDestroyInstance") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyInstance);
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    if(strcmp(pName, "vkGetPhysicalDeviceXlibPresentationSupportKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceXlibPresentationSupportKHR);
#endif // VK_USE_PLATFORM_XLIB_KHR
    if(strcmp(pName, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceExternalImageFormatPropertiesNV);
    if(strcmp(pName, "vkGetPhysicalDeviceSparseImageFormatProperties") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceSparseImageFormatProperties);
    if(strcmp(pName, "vkCreateInstance") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateInstance);
    if(strcmp(pName, "vkGetPhysicalDeviceProperties") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceProperties);
    if(strcmp(pName, "vkEnumerateDeviceLayerProperties") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkEnumerateDeviceLayerProperties);
#if defined(VK_USE_PLATFORM_XCB_KHR)
    if(strcmp(pName, "vkCreateXcbSurfaceKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateXcbSurfaceKHR);
#endif // VK_USE_PLATFORM_XCB_KHR
#if defined(VK_USE_PLATFORM_XCB_KHR)
    if(strcmp(pName, "vkGetPhysicalDeviceXcbPresentationSupportKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceXcbPresentationSupportKHR);
#endif // VK_USE_PLATFORM_XCB_KHR
    if(strcmp(pName, "vkCreateDevice") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateDevice);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    if(strcmp(pName, "vkCreateWaylandSurfaceKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateWaylandSurfaceKHR);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    if(strcmp(pName, "vkGetPhysicalDeviceWaylandPresentationSupportKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceWaylandPresentationSupportKHR);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
    if(strcmp(pName, "vkGetInstanceProcAddr") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetInstanceProcAddr);
    if(strcmp(pName, "vkDestroySurfaceKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroySurfaceKHR);
#if defined(VK_USE_PLATFORM_MIR_KHR)
    if(strcmp(pName, "vkCreateMirSurfaceKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateMirSurfaceKHR);
#endif // VK_USE_PLATFORM_MIR_KHR
    if(strcmp(pName, "vkGetPhysicalDeviceSurfaceSupportKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceSurfaceSupportKHR);
    if(strcmp(pName, "vkGetPhysicalDeviceSurfaceFormatsKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceSurfaceFormatsKHR);
#if defined(VK_USE_PLATFORM_MIR_KHR)
    if(strcmp(pName, "vkGetPhysicalDeviceMirPresentationSupportKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceMirPresentationSupportKHR);
#endif // VK_USE_PLATFORM_MIR_KHR
    if(strcmp(pName, "vkGetPhysicalDeviceMemoryProperties") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceMemoryProperties);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    if(strcmp(pName, "vkCreateAndroidSurfaceKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateAndroidSurfaceKHR);
#endif // VK_USE_PLATFORM_ANDROID_KHR
    if(strcmp(pName, "vkGetPhysicalDeviceSurfacePresentModesKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPhysicalDeviceSurfacePresentModesKHR);

    if(instance_dispatch_table(instance)->GetInstanceProcAddr == NULL)
        return NULL;
    return instance_dispatch_table(instance)->GetInstanceProcAddr(instance, pName);
}

VK_LAYER_EXPORT VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetDeviceProcAddr(VkDevice device, const char* pName)
{

    if(strcmp(pName, "vkQueuePresentKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkQueuePresentKHR);
    if(strcmp(pName, "vkCmdClearColorImage") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdClearColorImage);
    if(strcmp(pName, "vkResetCommandPool") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkResetCommandPool);
    if(strcmp(pName, "vkAcquireNextImageKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkAcquireNextImageKHR);
    if(strcmp(pName, "vkAllocateCommandBuffers") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkAllocateCommandBuffers);
    if(strcmp(pName, "vkGetSwapchainImagesKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetSwapchainImagesKHR);
    if(strcmp(pName, "vkCmdClearDepthStencilImage") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdClearDepthStencilImage);
    if(strcmp(pName, "vkDestroyFence") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyFence);
    if(strcmp(pName, "vkGetImageMemoryRequirements") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetImageMemoryRequirements);
    if(strcmp(pName, "vkFreeCommandBuffers") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkFreeCommandBuffers);
    if(strcmp(pName, "vkCmdClearAttachments") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdClearAttachments);
    if(strcmp(pName, "vkBeginCommandBuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkBeginCommandBuffer);
    if(strcmp(pName, "vkEndCommandBuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkEndCommandBuffer);
    if(strcmp(pName, "vkCreateSwapchainKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateSwapchainKHR);
    if(strcmp(pName, "vkCmdDrawIndirectCountAMD") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdDrawIndirectCountAMD);
    if(strcmp(pName, "vkCmdResolveImage") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdResolveImage);
    if(strcmp(pName, "vkCmdDrawIndexedIndirectCountAMD") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdDrawIndexedIndirectCountAMD);
    if(strcmp(pName, "vkCreateDescriptorPool") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateDescriptorPool);
    if(strcmp(pName, "vkCmdSetEvent") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdSetEvent);
    if(strcmp(pName, "vkCreateGraphicsPipelines") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateGraphicsPipelines);
    if(strcmp(pName, "vkDebugMarkerSetObjectTagEXT") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDebugMarkerSetObjectTagEXT);
    if(strcmp(pName, "vkCreateFence") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateFence);
    if(strcmp(pName, "vkResetCommandBuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkResetCommandBuffer);
    if(strcmp(pName, "vkDebugMarkerSetObjectNameEXT") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDebugMarkerSetObjectNameEXT);
    if(strcmp(pName, "vkMergePipelineCaches") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkMergePipelineCaches);
    if(strcmp(pName, "vkCmdBindPipeline") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdBindPipeline);
    if(strcmp(pName, "vkGetPipelineCacheData") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetPipelineCacheData);
    if(strcmp(pName, "vkCmdSetViewport") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdSetViewport);
    if(strcmp(pName, "vkCmdDebugMarkerBeginEXT") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdDebugMarkerBeginEXT);
    if(strcmp(pName, "vkCreateSharedSwapchainsKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateSharedSwapchainsKHR);
    if(strcmp(pName, "vkCmdResetEvent") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdResetEvent);
    if(strcmp(pName, "vkCmdSetLineWidth") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdSetLineWidth);
    if(strcmp(pName, "vkCmdWaitEvents") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdWaitEvents);
    if(strcmp(pName, "vkDestroyPipelineCache") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyPipelineCache);
    if(strcmp(pName, "vkCmdDebugMarkerEndEXT") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdDebugMarkerEndEXT);
    if(strcmp(pName, "vkCmdSetScissor") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdSetScissor);
    if(strcmp(pName, "vkCmdDebugMarkerInsertEXT") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdDebugMarkerInsertEXT);
    if(strcmp(pName, "vkCmdSetDepthBias") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdSetDepthBias);
    if(strcmp(pName, "vkCreatePipelineCache") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreatePipelineCache);
    if(strcmp(pName, "vkCmdSetBlendConstants") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdSetBlendConstants);
    if(strcmp(pName, "vkDestroyShaderModule") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyShaderModule);
    if(strcmp(pName, "vkCmdSetDepthBounds") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdSetDepthBounds);
    if(strcmp(pName, "vkCmdPipelineBarrier") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdPipelineBarrier);
    if(strcmp(pName, "vkCmdSetStencilCompareMask") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdSetStencilCompareMask);
    if(strcmp(pName, "vkQueueBindSparse") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkQueueBindSparse);
    if(strcmp(pName, "vkCreateShaderModule") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateShaderModule);
    if(strcmp(pName, "vkDestroyImageView") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyImageView);
    if(strcmp(pName, "vkCmdSetStencilWriteMask") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdSetStencilWriteMask);
    if(strcmp(pName, "vkDestroySwapchainKHR") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroySwapchainKHR);
    if(strcmp(pName, "vkCmdBeginQuery") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdBeginQuery);
    if(strcmp(pName, "vkCmdSetStencilReference") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdSetStencilReference);
    if(strcmp(pName, "vkCreateDescriptorSetLayout") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateDescriptorSetLayout);
    if(strcmp(pName, "vkCmdBindDescriptorSets") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdBindDescriptorSets);
    if(strcmp(pName, "vkCmdBindIndexBuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdBindIndexBuffer);
    if(strcmp(pName, "vkGetImageSparseMemoryRequirements") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetImageSparseMemoryRequirements);
    if(strcmp(pName, "vkCmdBindVertexBuffers") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdBindVertexBuffers);
    if(strcmp(pName, "vkCmdEndQuery") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdEndQuery);
    if(strcmp(pName, "vkGetBufferMemoryRequirements") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetBufferMemoryRequirements);
    if(strcmp(pName, "vkEnumerateInstanceLayerProperties") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkEnumerateInstanceLayerProperties);
    if(strcmp(pName, "vkCmdResetQueryPool") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdResetQueryPool);
    if(strcmp(pName, "vkCmdDraw") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdDraw);
    if(strcmp(pName, "vkDestroySampler") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroySampler);
    if(strcmp(pName, "vkCmdWriteTimestamp") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdWriteTimestamp);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    if(strcmp(pName, "vkGetMemoryWin32HandleNV") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetMemoryWin32HandleNV);
#endif // VK_USE_PLATFORM_WIN32_KHR
    if(strcmp(pName, "vkCmdDrawIndexed") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdDrawIndexed);
    if(strcmp(pName, "vkDestroyFramebuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyFramebuffer);
    if(strcmp(pName, "vkDestroyDescriptorSetLayout") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyDescriptorSetLayout);
    if(strcmp(pName, "vkBindImageMemory") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkBindImageMemory);
    if(strcmp(pName, "vkCreateComputePipelines") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateComputePipelines);
    if(strcmp(pName, "vkBindBufferMemory") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkBindBufferMemory);
    if(strcmp(pName, "vkCreateRenderPass") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateRenderPass);
    if(strcmp(pName, "vkEnumerateInstanceExtensionProperties") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkEnumerateInstanceExtensionProperties);
    if(strcmp(pName, "vkCmdCopyQueryPoolResults") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdCopyQueryPoolResults);
    if(strcmp(pName, "vkCreateBuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateBuffer);
    if(strcmp(pName, "vkCmdDrawIndirect") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdDrawIndirect);
    if(strcmp(pName, "vkCmdPushConstants") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdPushConstants);
    if(strcmp(pName, "vkGetDeviceMemoryCommitment") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetDeviceMemoryCommitment);
    if(strcmp(pName, "vkCmdDrawIndexedIndirect") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdDrawIndexedIndirect);
    if(strcmp(pName, "vkCmdBeginRenderPass") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdBeginRenderPass);
    if(strcmp(pName, "vkUnmapMemory") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkUnmapMemory);
    if(strcmp(pName, "vkGetQueryPoolResults") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetQueryPoolResults);
    if(strcmp(pName, "vkInvalidateMappedMemoryRanges") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkInvalidateMappedMemoryRanges);
    if(strcmp(pName, "vkCmdDispatch") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdDispatch);
    if(strcmp(pName, "vkFlushMappedMemoryRanges") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkFlushMappedMemoryRanges);
    if(strcmp(pName, "vkCreateImageView") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateImageView);
    if(strcmp(pName, "vkCmdDispatchIndirect") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdDispatchIndirect);
    if(strcmp(pName, "vkGetImageSubresourceLayout") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetImageSubresourceLayout);
    if(strcmp(pName, "vkDestroyPipeline") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyPipeline);
    if(strcmp(pName, "vkDestroyQueryPool") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyQueryPool);
    if(strcmp(pName, "vkCmdCopyBuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdCopyBuffer);
    if(strcmp(pName, "vkCmdNextSubpass") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdNextSubpass);
    if(strcmp(pName, "vkDestroyDevice") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyDevice);
    if(strcmp(pName, "vkMapMemory") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkMapMemory);
    if(strcmp(pName, "vkCmdCopyImage") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdCopyImage);
    if(strcmp(pName, "vkFreeMemory") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkFreeMemory);
    if(strcmp(pName, "vkDestroyDescriptorPool") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyDescriptorPool);
    if(strcmp(pName, "vkCmdEndRenderPass") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdEndRenderPass);
    if(strcmp(pName, "vkCmdExecuteCommands") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdExecuteCommands);
    if(strcmp(pName, "vkGetDeviceProcAddr") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetDeviceProcAddr);
    if(strcmp(pName, "vkCreatePipelineLayout") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreatePipelineLayout);
    if(strcmp(pName, "vkResetDescriptorPool") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkResetDescriptorPool);
    if(strcmp(pName, "vkCmdBlitImage") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdBlitImage);
    if(strcmp(pName, "vkAllocateMemory") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkAllocateMemory);
    if(strcmp(pName, "vkDestroyImage") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyImage);
    if(strcmp(pName, "vkCreateQueryPool") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateQueryPool);
    if(strcmp(pName, "vkDestroyPipelineLayout") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyPipelineLayout);
    if(strcmp(pName, "vkAllocateDescriptorSets") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkAllocateDescriptorSets);
    if(strcmp(pName, "vkSetEvent") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkSetEvent);
    if(strcmp(pName, "vkDeviceWaitIdle") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDeviceWaitIdle);
    if(strcmp(pName, "vkResetEvent") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkResetEvent);
    if(strcmp(pName, "vkCreateImage") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateImage);
    if(strcmp(pName, "vkGetEventStatus") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetEventStatus);
    if(strcmp(pName, "vkFreeDescriptorSets") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkFreeDescriptorSets);
    if(strcmp(pName, "vkQueueWaitIdle") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkQueueWaitIdle);
    if(strcmp(pName, "vkDestroyBufferView") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyBufferView);
    if(strcmp(pName, "vkUpdateDescriptorSets") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkUpdateDescriptorSets);
    if(strcmp(pName, "vkDestroyRenderPass") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyRenderPass);
    if(strcmp(pName, "vkCmdCopyBufferToImage") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdCopyBufferToImage);
    if(strcmp(pName, "vkCreateSampler") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateSampler);
    if(strcmp(pName, "vkDestroyEvent") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyEvent);
    if(strcmp(pName, "vkCreateEvent") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateEvent);
    if(strcmp(pName, "vkCreateBufferView") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateBufferView);
    if(strcmp(pName, "vkCmdCopyImageToBuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdCopyImageToBuffer);
    if(strcmp(pName, "vkCreateCommandPool") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateCommandPool);
    if(strcmp(pName, "vkGetRenderAreaGranularity") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetRenderAreaGranularity);
    if(strcmp(pName, "vkCreateFramebuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateFramebuffer);
    if(strcmp(pName, "vkDestroySemaphore") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroySemaphore);
    if(strcmp(pName, "vkCmdUpdateBuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdUpdateBuffer);
    if(strcmp(pName, "vkCreateSemaphore") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCreateSemaphore);
    if(strcmp(pName, "vkQueueSubmit") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkQueueSubmit);
    if(strcmp(pName, "vkDestroyBuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyBuffer);
    if(strcmp(pName, "vkGetDeviceQueue") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetDeviceQueue);
    if(strcmp(pName, "vkGetFenceStatus") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkGetFenceStatus);
    if(strcmp(pName, "vkWaitForFences") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkWaitForFences);
    if(strcmp(pName, "vkCmdFillBuffer") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkCmdFillBuffer);
    if(strcmp(pName, "vkDestroyCommandPool") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkDestroyCommandPool);
    if(strcmp(pName, "vkResetFences") == 0)
        return reinterpret_cast<PFN_vkVoidFunction>(vkResetFences);

    if(device_dispatch_table(device)->GetDeviceProcAddr == NULL)
        return NULL;
    return device_dispatch_table(device)->GetDeviceProcAddr(device, pName);
}
