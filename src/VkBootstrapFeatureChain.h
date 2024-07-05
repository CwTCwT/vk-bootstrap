/*
 * Copyright © 2021 Cody Goodson (contact@vibimanx.com)
 * Copyright © 2022 Charles Giessen (charles@lunarg.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the “Software”), to deal in the Software without restriction, including without
 * limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */
// This file is a part of VkBootstrap
// https://github.com/charles-lunarg/vk-bootstrap


#pragma once

#include <vulkan/vulkan_core.h>

namespace vkb {

namespace detail {
#if (defined(VK_NV_external_memory_sci_buf))
inline bool compare_VkPhysicalDeviceExternalMemorySciBufFeaturesNV(VkPhysicalDeviceExternalMemorySciBufFeaturesNV const& requested, VkPhysicalDeviceExternalMemorySciBufFeaturesNV const& supported){
    if (requested.sciBufImport && !supported.sciBufImport) return false;
    if (requested.sciBufExport && !supported.sciBufExport) return false;
    return true;
}
inline void merge_VkPhysicalDeviceExternalMemorySciBufFeaturesNV(VkPhysicalDeviceExternalMemorySciBufFeaturesNV const& dest, VkPhysicalDeviceExternalMemorySciBufFeaturesNV const& to_add){
    dest.sciBufImport = dest.sciBufImport || to_add.sciBufImport;
    dest.sciBufExport = dest.sciBufExport || to_add.sciBufExport;
}
#endif
#if (defined(VK_NV_device_generated_commands))
inline bool compare_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV const& requested, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV const& supported){
    if (requested.deviceGeneratedCommands && !supported.deviceGeneratedCommands) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV const& dest, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV const& to_add){
    dest.deviceGeneratedCommands = dest.deviceGeneratedCommands || to_add.deviceGeneratedCommands;
}
#endif
#if (defined(VK_NV_device_generated_commands_compute))
inline bool compare_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV const& requested, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV const& supported){
    if (requested.deviceGeneratedCompute && !supported.deviceGeneratedCompute) return false;
    if (requested.deviceGeneratedComputePipelines && !supported.deviceGeneratedComputePipelines) return false;
    if (requested.deviceGeneratedComputeCaptureReplay && !supported.deviceGeneratedComputeCaptureReplay) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV const& dest, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV const& to_add){
    dest.deviceGeneratedCompute = dest.deviceGeneratedCompute || to_add.deviceGeneratedCompute;
    dest.deviceGeneratedComputePipelines = dest.deviceGeneratedComputePipelines || to_add.deviceGeneratedComputePipelines;
    dest.deviceGeneratedComputeCaptureReplay = dest.deviceGeneratedComputeCaptureReplay || to_add.deviceGeneratedComputeCaptureReplay;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDevicePrivateDataFeatures(VkPhysicalDevicePrivateDataFeatures const& requested, VkPhysicalDevicePrivateDataFeatures const& supported){
    if (requested.privateData && !supported.privateData) return false;
    return true;
}
inline void merge_VkPhysicalDevicePrivateDataFeatures(VkPhysicalDevicePrivateDataFeatures const& dest, VkPhysicalDevicePrivateDataFeatures const& to_add){
    dest.privateData = dest.privateData || to_add.privateData;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_VkPhysicalDeviceVariablePointersFeatures(VkPhysicalDeviceVariablePointersFeatures const& requested, VkPhysicalDeviceVariablePointersFeatures const& supported){
    if (requested.variablePointersStorageBuffer && !supported.variablePointersStorageBuffer) return false;
    if (requested.variablePointers && !supported.variablePointers) return false;
    return true;
}
inline void merge_VkPhysicalDeviceVariablePointersFeatures(VkPhysicalDeviceVariablePointersFeatures const& dest, VkPhysicalDeviceVariablePointersFeatures const& to_add){
    dest.variablePointersStorageBuffer = dest.variablePointersStorageBuffer || to_add.variablePointersStorageBuffer;
    dest.variablePointers = dest.variablePointers || to_add.variablePointers;
}
#endif
#if (defined(VK_NV_external_sci_sync))
inline bool compare_VkPhysicalDeviceExternalSciSyncFeaturesNV(VkPhysicalDeviceExternalSciSyncFeaturesNV const& requested, VkPhysicalDeviceExternalSciSyncFeaturesNV const& supported){
    if (requested.sciSyncFence && !supported.sciSyncFence) return false;
    if (requested.sciSyncSemaphore && !supported.sciSyncSemaphore) return false;
    if (requested.sciSyncImport && !supported.sciSyncImport) return false;
    if (requested.sciSyncExport && !supported.sciSyncExport) return false;
    return true;
}
inline void merge_VkPhysicalDeviceExternalSciSyncFeaturesNV(VkPhysicalDeviceExternalSciSyncFeaturesNV const& dest, VkPhysicalDeviceExternalSciSyncFeaturesNV const& to_add){
    dest.sciSyncFence = dest.sciSyncFence || to_add.sciSyncFence;
    dest.sciSyncSemaphore = dest.sciSyncSemaphore || to_add.sciSyncSemaphore;
    dest.sciSyncImport = dest.sciSyncImport || to_add.sciSyncImport;
    dest.sciSyncExport = dest.sciSyncExport || to_add.sciSyncExport;
}
#endif
#if (defined(VK_NV_external_sci_sync2))
inline bool compare_VkPhysicalDeviceExternalSciSync2FeaturesNV(VkPhysicalDeviceExternalSciSync2FeaturesNV const& requested, VkPhysicalDeviceExternalSciSync2FeaturesNV const& supported){
    if (requested.sciSyncFence && !supported.sciSyncFence) return false;
    if (requested.sciSyncSemaphore2 && !supported.sciSyncSemaphore2) return false;
    if (requested.sciSyncImport && !supported.sciSyncImport) return false;
    if (requested.sciSyncExport && !supported.sciSyncExport) return false;
    return true;
}
inline void merge_VkPhysicalDeviceExternalSciSync2FeaturesNV(VkPhysicalDeviceExternalSciSync2FeaturesNV const& dest, VkPhysicalDeviceExternalSciSync2FeaturesNV const& to_add){
    dest.sciSyncFence = dest.sciSyncFence || to_add.sciSyncFence;
    dest.sciSyncSemaphore2 = dest.sciSyncSemaphore2 || to_add.sciSyncSemaphore2;
    dest.sciSyncImport = dest.sciSyncImport || to_add.sciSyncImport;
    dest.sciSyncExport = dest.sciSyncExport || to_add.sciSyncExport;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_VkPhysicalDeviceMultiviewFeatures(VkPhysicalDeviceMultiviewFeatures const& requested, VkPhysicalDeviceMultiviewFeatures const& supported){
    if (requested.multiview && !supported.multiview) return false;
    if (requested.multiviewGeometryShader && !supported.multiviewGeometryShader) return false;
    if (requested.multiviewTessellationShader && !supported.multiviewTessellationShader) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMultiviewFeatures(VkPhysicalDeviceMultiviewFeatures const& dest, VkPhysicalDeviceMultiviewFeatures const& to_add){
    dest.multiview = dest.multiview || to_add.multiview;
    dest.multiviewGeometryShader = dest.multiviewGeometryShader || to_add.multiviewGeometryShader;
    dest.multiviewTessellationShader = dest.multiviewTessellationShader || to_add.multiviewTessellationShader;
}
#endif
#if (defined(VK_KHR_present_id))
inline bool compare_VkPhysicalDevicePresentIdFeaturesKHR(VkPhysicalDevicePresentIdFeaturesKHR const& requested, VkPhysicalDevicePresentIdFeaturesKHR const& supported){
    if (requested.presentId && !supported.presentId) return false;
    return true;
}
inline void merge_VkPhysicalDevicePresentIdFeaturesKHR(VkPhysicalDevicePresentIdFeaturesKHR const& dest, VkPhysicalDevicePresentIdFeaturesKHR const& to_add){
    dest.presentId = dest.presentId || to_add.presentId;
}
#endif
#if (defined(VK_KHR_present_wait))
inline bool compare_VkPhysicalDevicePresentWaitFeaturesKHR(VkPhysicalDevicePresentWaitFeaturesKHR const& requested, VkPhysicalDevicePresentWaitFeaturesKHR const& supported){
    if (requested.presentWait && !supported.presentWait) return false;
    return true;
}
inline void merge_VkPhysicalDevicePresentWaitFeaturesKHR(VkPhysicalDevicePresentWaitFeaturesKHR const& dest, VkPhysicalDevicePresentWaitFeaturesKHR const& to_add){
    dest.presentWait = dest.presentWait || to_add.presentWait;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_VkPhysicalDevice16BitStorageFeatures(VkPhysicalDevice16BitStorageFeatures const& requested, VkPhysicalDevice16BitStorageFeatures const& supported){
    if (requested.storageBuffer16BitAccess && !supported.storageBuffer16BitAccess) return false;
    if (requested.uniformAndStorageBuffer16BitAccess && !supported.uniformAndStorageBuffer16BitAccess) return false;
    if (requested.storagePushConstant16 && !supported.storagePushConstant16) return false;
    if (requested.storageInputOutput16 && !supported.storageInputOutput16) return false;
    return true;
}
inline void merge_VkPhysicalDevice16BitStorageFeatures(VkPhysicalDevice16BitStorageFeatures const& dest, VkPhysicalDevice16BitStorageFeatures const& to_add){
    dest.storageBuffer16BitAccess = dest.storageBuffer16BitAccess || to_add.storageBuffer16BitAccess;
    dest.uniformAndStorageBuffer16BitAccess = dest.uniformAndStorageBuffer16BitAccess || to_add.uniformAndStorageBuffer16BitAccess;
    dest.storagePushConstant16 = dest.storagePushConstant16 || to_add.storagePushConstant16;
    dest.storageInputOutput16 = dest.storageInputOutput16 || to_add.storageInputOutput16;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures const& requested, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures const& supported){
    if (requested.shaderSubgroupExtendedTypes && !supported.shaderSubgroupExtendedTypes) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures const& dest, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures const& to_add){
    dest.shaderSubgroupExtendedTypes = dest.shaderSubgroupExtendedTypes || to_add.shaderSubgroupExtendedTypes;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_VkPhysicalDeviceSamplerYcbcrConversionFeatures(VkPhysicalDeviceSamplerYcbcrConversionFeatures const& requested, VkPhysicalDeviceSamplerYcbcrConversionFeatures const& supported){
    if (requested.samplerYcbcrConversion && !supported.samplerYcbcrConversion) return false;
    return true;
}
inline void merge_VkPhysicalDeviceSamplerYcbcrConversionFeatures(VkPhysicalDeviceSamplerYcbcrConversionFeatures const& dest, VkPhysicalDeviceSamplerYcbcrConversionFeatures const& to_add){
    dest.samplerYcbcrConversion = dest.samplerYcbcrConversion || to_add.samplerYcbcrConversion;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_VkPhysicalDeviceProtectedMemoryFeatures(VkPhysicalDeviceProtectedMemoryFeatures const& requested, VkPhysicalDeviceProtectedMemoryFeatures const& supported){
    if (requested.protectedMemory && !supported.protectedMemory) return false;
    return true;
}
inline void merge_VkPhysicalDeviceProtectedMemoryFeatures(VkPhysicalDeviceProtectedMemoryFeatures const& dest, VkPhysicalDeviceProtectedMemoryFeatures const& to_add){
    dest.protectedMemory = dest.protectedMemory || to_add.protectedMemory;
}
#endif
#if (defined(VK_EXT_blend_operation_advanced))
inline bool compare_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const& requested, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const& supported){
    if (requested.advancedBlendCoherentOperations && !supported.advancedBlendCoherentOperations) return false;
    return true;
}
inline void merge_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const& dest, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT const& to_add){
    dest.advancedBlendCoherentOperations = dest.advancedBlendCoherentOperations || to_add.advancedBlendCoherentOperations;
}
#endif
#if (defined(VK_EXT_multi_draw))
inline bool compare_VkPhysicalDeviceMultiDrawFeaturesEXT(VkPhysicalDeviceMultiDrawFeaturesEXT const& requested, VkPhysicalDeviceMultiDrawFeaturesEXT const& supported){
    if (requested.multiDraw && !supported.multiDraw) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMultiDrawFeaturesEXT(VkPhysicalDeviceMultiDrawFeaturesEXT const& dest, VkPhysicalDeviceMultiDrawFeaturesEXT const& to_add){
    dest.multiDraw = dest.multiDraw || to_add.multiDraw;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceInlineUniformBlockFeatures(VkPhysicalDeviceInlineUniformBlockFeatures const& requested, VkPhysicalDeviceInlineUniformBlockFeatures const& supported){
    if (requested.inlineUniformBlock && !supported.inlineUniformBlock) return false;
    if (requested.descriptorBindingInlineUniformBlockUpdateAfterBind && !supported.descriptorBindingInlineUniformBlockUpdateAfterBind) return false;
    return true;
}
inline void merge_VkPhysicalDeviceInlineUniformBlockFeatures(VkPhysicalDeviceInlineUniformBlockFeatures const& dest, VkPhysicalDeviceInlineUniformBlockFeatures const& to_add){
    dest.inlineUniformBlock = dest.inlineUniformBlock || to_add.inlineUniformBlock;
    dest.descriptorBindingInlineUniformBlockUpdateAfterBind = dest.descriptorBindingInlineUniformBlockUpdateAfterBind || to_add.descriptorBindingInlineUniformBlockUpdateAfterBind;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceMaintenance4Features(VkPhysicalDeviceMaintenance4Features const& requested, VkPhysicalDeviceMaintenance4Features const& supported){
    if (requested.maintenance4 && !supported.maintenance4) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMaintenance4Features(VkPhysicalDeviceMaintenance4Features const& dest, VkPhysicalDeviceMaintenance4Features const& to_add){
    dest.maintenance4 = dest.maintenance4 || to_add.maintenance4;
}
#endif
#if (defined(VK_KHR_maintenance5))
inline bool compare_VkPhysicalDeviceMaintenance5FeaturesKHR(VkPhysicalDeviceMaintenance5FeaturesKHR const& requested, VkPhysicalDeviceMaintenance5FeaturesKHR const& supported){
    if (requested.maintenance5 && !supported.maintenance5) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMaintenance5FeaturesKHR(VkPhysicalDeviceMaintenance5FeaturesKHR const& dest, VkPhysicalDeviceMaintenance5FeaturesKHR const& to_add){
    dest.maintenance5 = dest.maintenance5 || to_add.maintenance5;
}
#endif
#if (defined(VK_KHR_maintenance6))
inline bool compare_VkPhysicalDeviceMaintenance6FeaturesKHR(VkPhysicalDeviceMaintenance6FeaturesKHR const& requested, VkPhysicalDeviceMaintenance6FeaturesKHR const& supported){
    if (requested.maintenance6 && !supported.maintenance6) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMaintenance6FeaturesKHR(VkPhysicalDeviceMaintenance6FeaturesKHR const& dest, VkPhysicalDeviceMaintenance6FeaturesKHR const& to_add){
    dest.maintenance6 = dest.maintenance6 || to_add.maintenance6;
}
#endif
#if (defined(VK_KHR_maintenance7))
inline bool compare_VkPhysicalDeviceMaintenance7FeaturesKHR(VkPhysicalDeviceMaintenance7FeaturesKHR const& requested, VkPhysicalDeviceMaintenance7FeaturesKHR const& supported){
    if (requested.maintenance7 && !supported.maintenance7) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMaintenance7FeaturesKHR(VkPhysicalDeviceMaintenance7FeaturesKHR const& dest, VkPhysicalDeviceMaintenance7FeaturesKHR const& to_add){
    dest.maintenance7 = dest.maintenance7 || to_add.maintenance7;
}
#endif
#if (defined(VK_VERSION_1_1))
inline bool compare_VkPhysicalDeviceShaderDrawParametersFeatures(VkPhysicalDeviceShaderDrawParametersFeatures const& requested, VkPhysicalDeviceShaderDrawParametersFeatures const& supported){
    if (requested.shaderDrawParameters && !supported.shaderDrawParameters) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderDrawParametersFeatures(VkPhysicalDeviceShaderDrawParametersFeatures const& dest, VkPhysicalDeviceShaderDrawParametersFeatures const& to_add){
    dest.shaderDrawParameters = dest.shaderDrawParameters || to_add.shaderDrawParameters;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceShaderFloat16Int8Features(VkPhysicalDeviceShaderFloat16Int8Features const& requested, VkPhysicalDeviceShaderFloat16Int8Features const& supported){
    if (requested.shaderFloat16 && !supported.shaderFloat16) return false;
    if (requested.shaderInt8 && !supported.shaderInt8) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderFloat16Int8Features(VkPhysicalDeviceShaderFloat16Int8Features const& dest, VkPhysicalDeviceShaderFloat16Int8Features const& to_add){
    dest.shaderFloat16 = dest.shaderFloat16 || to_add.shaderFloat16;
    dest.shaderInt8 = dest.shaderInt8 || to_add.shaderInt8;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceHostQueryResetFeatures(VkPhysicalDeviceHostQueryResetFeatures const& requested, VkPhysicalDeviceHostQueryResetFeatures const& supported){
    if (requested.hostQueryReset && !supported.hostQueryReset) return false;
    return true;
}
inline void merge_VkPhysicalDeviceHostQueryResetFeatures(VkPhysicalDeviceHostQueryResetFeatures const& dest, VkPhysicalDeviceHostQueryResetFeatures const& to_add){
    dest.hostQueryReset = dest.hostQueryReset || to_add.hostQueryReset;
}
#endif
#if (defined(VK_KHR_global_priority))
inline bool compare_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR const& requested, VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR const& supported){
    if (requested.globalPriorityQuery && !supported.globalPriorityQuery) return false;
    return true;
}
inline void merge_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR const& dest, VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR const& to_add){
    dest.globalPriorityQuery = dest.globalPriorityQuery || to_add.globalPriorityQuery;
}
#endif
#if (defined(VK_EXT_device_memory_report))
inline bool compare_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT const& requested, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT const& supported){
    if (requested.deviceMemoryReport && !supported.deviceMemoryReport) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT const& dest, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT const& to_add){
    dest.deviceMemoryReport = dest.deviceMemoryReport || to_add.deviceMemoryReport;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceDescriptorIndexingFeatures(VkPhysicalDeviceDescriptorIndexingFeatures const& requested, VkPhysicalDeviceDescriptorIndexingFeatures const& supported){
    if (requested.shaderInputAttachmentArrayDynamicIndexing && !supported.shaderInputAttachmentArrayDynamicIndexing) return false;
    if (requested.shaderUniformTexelBufferArrayDynamicIndexing && !supported.shaderUniformTexelBufferArrayDynamicIndexing) return false;
    if (requested.shaderStorageTexelBufferArrayDynamicIndexing && !supported.shaderStorageTexelBufferArrayDynamicIndexing) return false;
    if (requested.shaderUniformBufferArrayNonUniformIndexing && !supported.shaderUniformBufferArrayNonUniformIndexing) return false;
    if (requested.shaderSampledImageArrayNonUniformIndexing && !supported.shaderSampledImageArrayNonUniformIndexing) return false;
    if (requested.shaderStorageBufferArrayNonUniformIndexing && !supported.shaderStorageBufferArrayNonUniformIndexing) return false;
    if (requested.shaderStorageImageArrayNonUniformIndexing && !supported.shaderStorageImageArrayNonUniformIndexing) return false;
    if (requested.shaderInputAttachmentArrayNonUniformIndexing && !supported.shaderInputAttachmentArrayNonUniformIndexing) return false;
    if (requested.shaderUniformTexelBufferArrayNonUniformIndexing && !supported.shaderUniformTexelBufferArrayNonUniformIndexing) return false;
    if (requested.shaderStorageTexelBufferArrayNonUniformIndexing && !supported.shaderStorageTexelBufferArrayNonUniformIndexing) return false;
    if (requested.descriptorBindingUniformBufferUpdateAfterBind && !supported.descriptorBindingUniformBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingSampledImageUpdateAfterBind && !supported.descriptorBindingSampledImageUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageImageUpdateAfterBind && !supported.descriptorBindingStorageImageUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageBufferUpdateAfterBind && !supported.descriptorBindingStorageBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingUniformTexelBufferUpdateAfterBind && !supported.descriptorBindingUniformTexelBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageTexelBufferUpdateAfterBind && !supported.descriptorBindingStorageTexelBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingUpdateUnusedWhilePending && !supported.descriptorBindingUpdateUnusedWhilePending) return false;
    if (requested.descriptorBindingPartiallyBound && !supported.descriptorBindingPartiallyBound) return false;
    if (requested.descriptorBindingVariableDescriptorCount && !supported.descriptorBindingVariableDescriptorCount) return false;
    if (requested.runtimeDescriptorArray && !supported.runtimeDescriptorArray) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDescriptorIndexingFeatures(VkPhysicalDeviceDescriptorIndexingFeatures const& dest, VkPhysicalDeviceDescriptorIndexingFeatures const& to_add){
    dest.shaderInputAttachmentArrayDynamicIndexing = dest.shaderInputAttachmentArrayDynamicIndexing || to_add.shaderInputAttachmentArrayDynamicIndexing;
    dest.shaderUniformTexelBufferArrayDynamicIndexing = dest.shaderUniformTexelBufferArrayDynamicIndexing || to_add.shaderUniformTexelBufferArrayDynamicIndexing;
    dest.shaderStorageTexelBufferArrayDynamicIndexing = dest.shaderStorageTexelBufferArrayDynamicIndexing || to_add.shaderStorageTexelBufferArrayDynamicIndexing;
    dest.shaderUniformBufferArrayNonUniformIndexing = dest.shaderUniformBufferArrayNonUniformIndexing || to_add.shaderUniformBufferArrayNonUniformIndexing;
    dest.shaderSampledImageArrayNonUniformIndexing = dest.shaderSampledImageArrayNonUniformIndexing || to_add.shaderSampledImageArrayNonUniformIndexing;
    dest.shaderStorageBufferArrayNonUniformIndexing = dest.shaderStorageBufferArrayNonUniformIndexing || to_add.shaderStorageBufferArrayNonUniformIndexing;
    dest.shaderStorageImageArrayNonUniformIndexing = dest.shaderStorageImageArrayNonUniformIndexing || to_add.shaderStorageImageArrayNonUniformIndexing;
    dest.shaderInputAttachmentArrayNonUniformIndexing = dest.shaderInputAttachmentArrayNonUniformIndexing || to_add.shaderInputAttachmentArrayNonUniformIndexing;
    dest.shaderUniformTexelBufferArrayNonUniformIndexing = dest.shaderUniformTexelBufferArrayNonUniformIndexing || to_add.shaderUniformTexelBufferArrayNonUniformIndexing;
    dest.shaderStorageTexelBufferArrayNonUniformIndexing = dest.shaderStorageTexelBufferArrayNonUniformIndexing || to_add.shaderStorageTexelBufferArrayNonUniformIndexing;
    dest.descriptorBindingUniformBufferUpdateAfterBind = dest.descriptorBindingUniformBufferUpdateAfterBind || to_add.descriptorBindingUniformBufferUpdateAfterBind;
    dest.descriptorBindingSampledImageUpdateAfterBind = dest.descriptorBindingSampledImageUpdateAfterBind || to_add.descriptorBindingSampledImageUpdateAfterBind;
    dest.descriptorBindingStorageImageUpdateAfterBind = dest.descriptorBindingStorageImageUpdateAfterBind || to_add.descriptorBindingStorageImageUpdateAfterBind;
    dest.descriptorBindingStorageBufferUpdateAfterBind = dest.descriptorBindingStorageBufferUpdateAfterBind || to_add.descriptorBindingStorageBufferUpdateAfterBind;
    dest.descriptorBindingUniformTexelBufferUpdateAfterBind = dest.descriptorBindingUniformTexelBufferUpdateAfterBind || to_add.descriptorBindingUniformTexelBufferUpdateAfterBind;
    dest.descriptorBindingStorageTexelBufferUpdateAfterBind = dest.descriptorBindingStorageTexelBufferUpdateAfterBind || to_add.descriptorBindingStorageTexelBufferUpdateAfterBind;
    dest.descriptorBindingUpdateUnusedWhilePending = dest.descriptorBindingUpdateUnusedWhilePending || to_add.descriptorBindingUpdateUnusedWhilePending;
    dest.descriptorBindingPartiallyBound = dest.descriptorBindingPartiallyBound || to_add.descriptorBindingPartiallyBound;
    dest.descriptorBindingVariableDescriptorCount = dest.descriptorBindingVariableDescriptorCount || to_add.descriptorBindingVariableDescriptorCount;
    dest.runtimeDescriptorArray = dest.runtimeDescriptorArray || to_add.runtimeDescriptorArray;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceTimelineSemaphoreFeatures(VkPhysicalDeviceTimelineSemaphoreFeatures const& requested, VkPhysicalDeviceTimelineSemaphoreFeatures const& supported){
    if (requested.timelineSemaphore && !supported.timelineSemaphore) return false;
    return true;
}
inline void merge_VkPhysicalDeviceTimelineSemaphoreFeatures(VkPhysicalDeviceTimelineSemaphoreFeatures const& dest, VkPhysicalDeviceTimelineSemaphoreFeatures const& to_add){
    dest.timelineSemaphore = dest.timelineSemaphore || to_add.timelineSemaphore;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDevice8BitStorageFeatures(VkPhysicalDevice8BitStorageFeatures const& requested, VkPhysicalDevice8BitStorageFeatures const& supported){
    if (requested.storageBuffer8BitAccess && !supported.storageBuffer8BitAccess) return false;
    if (requested.uniformAndStorageBuffer8BitAccess && !supported.uniformAndStorageBuffer8BitAccess) return false;
    if (requested.storagePushConstant8 && !supported.storagePushConstant8) return false;
    return true;
}
inline void merge_VkPhysicalDevice8BitStorageFeatures(VkPhysicalDevice8BitStorageFeatures const& dest, VkPhysicalDevice8BitStorageFeatures const& to_add){
    dest.storageBuffer8BitAccess = dest.storageBuffer8BitAccess || to_add.storageBuffer8BitAccess;
    dest.uniformAndStorageBuffer8BitAccess = dest.uniformAndStorageBuffer8BitAccess || to_add.uniformAndStorageBuffer8BitAccess;
    dest.storagePushConstant8 = dest.storagePushConstant8 || to_add.storagePushConstant8;
}
#endif
#if (defined(VK_EXT_conditional_rendering))
inline bool compare_VkPhysicalDeviceConditionalRenderingFeaturesEXT(VkPhysicalDeviceConditionalRenderingFeaturesEXT const& requested, VkPhysicalDeviceConditionalRenderingFeaturesEXT const& supported){
    if (requested.conditionalRendering && !supported.conditionalRendering) return false;
    if (requested.inheritedConditionalRendering && !supported.inheritedConditionalRendering) return false;
    return true;
}
inline void merge_VkPhysicalDeviceConditionalRenderingFeaturesEXT(VkPhysicalDeviceConditionalRenderingFeaturesEXT const& dest, VkPhysicalDeviceConditionalRenderingFeaturesEXT const& to_add){
    dest.conditionalRendering = dest.conditionalRendering || to_add.conditionalRendering;
    dest.inheritedConditionalRendering = dest.inheritedConditionalRendering || to_add.inheritedConditionalRendering;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceVulkanMemoryModelFeatures(VkPhysicalDeviceVulkanMemoryModelFeatures const& requested, VkPhysicalDeviceVulkanMemoryModelFeatures const& supported){
    if (requested.vulkanMemoryModel && !supported.vulkanMemoryModel) return false;
    if (requested.vulkanMemoryModelDeviceScope && !supported.vulkanMemoryModelDeviceScope) return false;
    if (requested.vulkanMemoryModelAvailabilityVisibilityChains && !supported.vulkanMemoryModelAvailabilityVisibilityChains) return false;
    return true;
}
inline void merge_VkPhysicalDeviceVulkanMemoryModelFeatures(VkPhysicalDeviceVulkanMemoryModelFeatures const& dest, VkPhysicalDeviceVulkanMemoryModelFeatures const& to_add){
    dest.vulkanMemoryModel = dest.vulkanMemoryModel || to_add.vulkanMemoryModel;
    dest.vulkanMemoryModelDeviceScope = dest.vulkanMemoryModelDeviceScope || to_add.vulkanMemoryModelDeviceScope;
    dest.vulkanMemoryModelAvailabilityVisibilityChains = dest.vulkanMemoryModelAvailabilityVisibilityChains || to_add.vulkanMemoryModelAvailabilityVisibilityChains;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceShaderAtomicInt64Features(VkPhysicalDeviceShaderAtomicInt64Features const& requested, VkPhysicalDeviceShaderAtomicInt64Features const& supported){
    if (requested.shaderBufferInt64Atomics && !supported.shaderBufferInt64Atomics) return false;
    if (requested.shaderSharedInt64Atomics && !supported.shaderSharedInt64Atomics) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderAtomicInt64Features(VkPhysicalDeviceShaderAtomicInt64Features const& dest, VkPhysicalDeviceShaderAtomicInt64Features const& to_add){
    dest.shaderBufferInt64Atomics = dest.shaderBufferInt64Atomics || to_add.shaderBufferInt64Atomics;
    dest.shaderSharedInt64Atomics = dest.shaderSharedInt64Atomics || to_add.shaderSharedInt64Atomics;
}
#endif
#if (defined(VK_EXT_shader_atomic_float))
inline bool compare_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT const& requested, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT const& supported){
    if (requested.shaderBufferFloat32Atomics && !supported.shaderBufferFloat32Atomics) return false;
    if (requested.shaderBufferFloat32AtomicAdd && !supported.shaderBufferFloat32AtomicAdd) return false;
    if (requested.shaderBufferFloat64Atomics && !supported.shaderBufferFloat64Atomics) return false;
    if (requested.shaderBufferFloat64AtomicAdd && !supported.shaderBufferFloat64AtomicAdd) return false;
    if (requested.shaderSharedFloat32Atomics && !supported.shaderSharedFloat32Atomics) return false;
    if (requested.shaderSharedFloat32AtomicAdd && !supported.shaderSharedFloat32AtomicAdd) return false;
    if (requested.shaderSharedFloat64Atomics && !supported.shaderSharedFloat64Atomics) return false;
    if (requested.shaderSharedFloat64AtomicAdd && !supported.shaderSharedFloat64AtomicAdd) return false;
    if (requested.shaderImageFloat32Atomics && !supported.shaderImageFloat32Atomics) return false;
    if (requested.shaderImageFloat32AtomicAdd && !supported.shaderImageFloat32AtomicAdd) return false;
    if (requested.sparseImageFloat32Atomics && !supported.sparseImageFloat32Atomics) return false;
    if (requested.sparseImageFloat32AtomicAdd && !supported.sparseImageFloat32AtomicAdd) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT const& dest, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT const& to_add){
    dest.shaderBufferFloat32Atomics = dest.shaderBufferFloat32Atomics || to_add.shaderBufferFloat32Atomics;
    dest.shaderBufferFloat32AtomicAdd = dest.shaderBufferFloat32AtomicAdd || to_add.shaderBufferFloat32AtomicAdd;
    dest.shaderBufferFloat64Atomics = dest.shaderBufferFloat64Atomics || to_add.shaderBufferFloat64Atomics;
    dest.shaderBufferFloat64AtomicAdd = dest.shaderBufferFloat64AtomicAdd || to_add.shaderBufferFloat64AtomicAdd;
    dest.shaderSharedFloat32Atomics = dest.shaderSharedFloat32Atomics || to_add.shaderSharedFloat32Atomics;
    dest.shaderSharedFloat32AtomicAdd = dest.shaderSharedFloat32AtomicAdd || to_add.shaderSharedFloat32AtomicAdd;
    dest.shaderSharedFloat64Atomics = dest.shaderSharedFloat64Atomics || to_add.shaderSharedFloat64Atomics;
    dest.shaderSharedFloat64AtomicAdd = dest.shaderSharedFloat64AtomicAdd || to_add.shaderSharedFloat64AtomicAdd;
    dest.shaderImageFloat32Atomics = dest.shaderImageFloat32Atomics || to_add.shaderImageFloat32Atomics;
    dest.shaderImageFloat32AtomicAdd = dest.shaderImageFloat32AtomicAdd || to_add.shaderImageFloat32AtomicAdd;
    dest.sparseImageFloat32Atomics = dest.sparseImageFloat32Atomics || to_add.sparseImageFloat32Atomics;
    dest.sparseImageFloat32AtomicAdd = dest.sparseImageFloat32AtomicAdd || to_add.sparseImageFloat32AtomicAdd;
}
#endif
#if (defined(VK_EXT_shader_atomic_float2))
inline bool compare_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT const& requested, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT const& supported){
    if (requested.shaderBufferFloat16Atomics && !supported.shaderBufferFloat16Atomics) return false;
    if (requested.shaderBufferFloat16AtomicAdd && !supported.shaderBufferFloat16AtomicAdd) return false;
    if (requested.shaderBufferFloat16AtomicMinMax && !supported.shaderBufferFloat16AtomicMinMax) return false;
    if (requested.shaderBufferFloat32AtomicMinMax && !supported.shaderBufferFloat32AtomicMinMax) return false;
    if (requested.shaderBufferFloat64AtomicMinMax && !supported.shaderBufferFloat64AtomicMinMax) return false;
    if (requested.shaderSharedFloat16Atomics && !supported.shaderSharedFloat16Atomics) return false;
    if (requested.shaderSharedFloat16AtomicAdd && !supported.shaderSharedFloat16AtomicAdd) return false;
    if (requested.shaderSharedFloat16AtomicMinMax && !supported.shaderSharedFloat16AtomicMinMax) return false;
    if (requested.shaderSharedFloat32AtomicMinMax && !supported.shaderSharedFloat32AtomicMinMax) return false;
    if (requested.shaderSharedFloat64AtomicMinMax && !supported.shaderSharedFloat64AtomicMinMax) return false;
    if (requested.shaderImageFloat32AtomicMinMax && !supported.shaderImageFloat32AtomicMinMax) return false;
    if (requested.sparseImageFloat32AtomicMinMax && !supported.sparseImageFloat32AtomicMinMax) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT const& dest, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT const& to_add){
    dest.shaderBufferFloat16Atomics = dest.shaderBufferFloat16Atomics || to_add.shaderBufferFloat16Atomics;
    dest.shaderBufferFloat16AtomicAdd = dest.shaderBufferFloat16AtomicAdd || to_add.shaderBufferFloat16AtomicAdd;
    dest.shaderBufferFloat16AtomicMinMax = dest.shaderBufferFloat16AtomicMinMax || to_add.shaderBufferFloat16AtomicMinMax;
    dest.shaderBufferFloat32AtomicMinMax = dest.shaderBufferFloat32AtomicMinMax || to_add.shaderBufferFloat32AtomicMinMax;
    dest.shaderBufferFloat64AtomicMinMax = dest.shaderBufferFloat64AtomicMinMax || to_add.shaderBufferFloat64AtomicMinMax;
    dest.shaderSharedFloat16Atomics = dest.shaderSharedFloat16Atomics || to_add.shaderSharedFloat16Atomics;
    dest.shaderSharedFloat16AtomicAdd = dest.shaderSharedFloat16AtomicAdd || to_add.shaderSharedFloat16AtomicAdd;
    dest.shaderSharedFloat16AtomicMinMax = dest.shaderSharedFloat16AtomicMinMax || to_add.shaderSharedFloat16AtomicMinMax;
    dest.shaderSharedFloat32AtomicMinMax = dest.shaderSharedFloat32AtomicMinMax || to_add.shaderSharedFloat32AtomicMinMax;
    dest.shaderSharedFloat64AtomicMinMax = dest.shaderSharedFloat64AtomicMinMax || to_add.shaderSharedFloat64AtomicMinMax;
    dest.shaderImageFloat32AtomicMinMax = dest.shaderImageFloat32AtomicMinMax || to_add.shaderImageFloat32AtomicMinMax;
    dest.sparseImageFloat32AtomicMinMax = dest.sparseImageFloat32AtomicMinMax || to_add.sparseImageFloat32AtomicMinMax;
}
#endif
#if (defined(VK_KHR_vertex_attribute_divisor))
inline bool compare_VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR(VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR const& requested, VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR const& supported){
    if (requested.vertexAttributeInstanceRateDivisor && !supported.vertexAttributeInstanceRateDivisor) return false;
    if (requested.vertexAttributeInstanceRateZeroDivisor && !supported.vertexAttributeInstanceRateZeroDivisor) return false;
    return true;
}
inline void merge_VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR(VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR const& dest, VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR const& to_add){
    dest.vertexAttributeInstanceRateDivisor = dest.vertexAttributeInstanceRateDivisor || to_add.vertexAttributeInstanceRateDivisor;
    dest.vertexAttributeInstanceRateZeroDivisor = dest.vertexAttributeInstanceRateZeroDivisor || to_add.vertexAttributeInstanceRateZeroDivisor;
}
#endif
#if (defined(VK_EXT_astc_decode_mode))
inline bool compare_VkPhysicalDeviceASTCDecodeFeaturesEXT(VkPhysicalDeviceASTCDecodeFeaturesEXT const& requested, VkPhysicalDeviceASTCDecodeFeaturesEXT const& supported){
    if (requested.decodeModeSharedExponent && !supported.decodeModeSharedExponent) return false;
    return true;
}
inline void merge_VkPhysicalDeviceASTCDecodeFeaturesEXT(VkPhysicalDeviceASTCDecodeFeaturesEXT const& dest, VkPhysicalDeviceASTCDecodeFeaturesEXT const& to_add){
    dest.decodeModeSharedExponent = dest.decodeModeSharedExponent || to_add.decodeModeSharedExponent;
}
#endif
#if (defined(VK_EXT_transform_feedback))
inline bool compare_VkPhysicalDeviceTransformFeedbackFeaturesEXT(VkPhysicalDeviceTransformFeedbackFeaturesEXT const& requested, VkPhysicalDeviceTransformFeedbackFeaturesEXT const& supported){
    if (requested.transformFeedback && !supported.transformFeedback) return false;
    if (requested.geometryStreams && !supported.geometryStreams) return false;
    return true;
}
inline void merge_VkPhysicalDeviceTransformFeedbackFeaturesEXT(VkPhysicalDeviceTransformFeedbackFeaturesEXT const& dest, VkPhysicalDeviceTransformFeedbackFeaturesEXT const& to_add){
    dest.transformFeedback = dest.transformFeedback || to_add.transformFeedback;
    dest.geometryStreams = dest.geometryStreams || to_add.geometryStreams;
}
#endif
#if (defined(VK_NV_representative_fragment_test))
inline bool compare_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const& requested, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const& supported){
    if (requested.representativeFragmentTest && !supported.representativeFragmentTest) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const& dest, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV const& to_add){
    dest.representativeFragmentTest = dest.representativeFragmentTest || to_add.representativeFragmentTest;
}
#endif
#if (defined(VK_NV_scissor_exclusive))
inline bool compare_VkPhysicalDeviceExclusiveScissorFeaturesNV(VkPhysicalDeviceExclusiveScissorFeaturesNV const& requested, VkPhysicalDeviceExclusiveScissorFeaturesNV const& supported){
    if (requested.exclusiveScissor && !supported.exclusiveScissor) return false;
    return true;
}
inline void merge_VkPhysicalDeviceExclusiveScissorFeaturesNV(VkPhysicalDeviceExclusiveScissorFeaturesNV const& dest, VkPhysicalDeviceExclusiveScissorFeaturesNV const& to_add){
    dest.exclusiveScissor = dest.exclusiveScissor || to_add.exclusiveScissor;
}
#endif
#if (defined(VK_NV_corner_sampled_image))
inline bool compare_VkPhysicalDeviceCornerSampledImageFeaturesNV(VkPhysicalDeviceCornerSampledImageFeaturesNV const& requested, VkPhysicalDeviceCornerSampledImageFeaturesNV const& supported){
    if (requested.cornerSampledImage && !supported.cornerSampledImage) return false;
    return true;
}
inline void merge_VkPhysicalDeviceCornerSampledImageFeaturesNV(VkPhysicalDeviceCornerSampledImageFeaturesNV const& dest, VkPhysicalDeviceCornerSampledImageFeaturesNV const& to_add){
    dest.cornerSampledImage = dest.cornerSampledImage || to_add.cornerSampledImage;
}
#endif
#if (defined(VK_NV_compute_shader_derivatives))
inline bool compare_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const& requested, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const& supported){
    if (requested.computeDerivativeGroupQuads && !supported.computeDerivativeGroupQuads) return false;
    if (requested.computeDerivativeGroupLinear && !supported.computeDerivativeGroupLinear) return false;
    return true;
}
inline void merge_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const& dest, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV const& to_add){
    dest.computeDerivativeGroupQuads = dest.computeDerivativeGroupQuads || to_add.computeDerivativeGroupQuads;
    dest.computeDerivativeGroupLinear = dest.computeDerivativeGroupLinear || to_add.computeDerivativeGroupLinear;
}
#endif
#if (defined(VK_NV_shader_image_footprint))
inline bool compare_VkPhysicalDeviceShaderImageFootprintFeaturesNV(VkPhysicalDeviceShaderImageFootprintFeaturesNV const& requested, VkPhysicalDeviceShaderImageFootprintFeaturesNV const& supported){
    if (requested.imageFootprint && !supported.imageFootprint) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderImageFootprintFeaturesNV(VkPhysicalDeviceShaderImageFootprintFeaturesNV const& dest, VkPhysicalDeviceShaderImageFootprintFeaturesNV const& to_add){
    dest.imageFootprint = dest.imageFootprint || to_add.imageFootprint;
}
#endif
#if (defined(VK_NV_dedicated_allocation_image_aliasing))
inline bool compare_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV const& requested, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV const& supported){
    if (requested.dedicatedAllocationImageAliasing && !supported.dedicatedAllocationImageAliasing) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV const& dest, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV const& to_add){
    dest.dedicatedAllocationImageAliasing = dest.dedicatedAllocationImageAliasing || to_add.dedicatedAllocationImageAliasing;
}
#endif
#if (defined(VK_NV_copy_memory_indirect))
inline bool compare_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV const& requested, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV const& supported){
    if (requested.indirectCopy && !supported.indirectCopy) return false;
    return true;
}
inline void merge_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV const& dest, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV const& to_add){
    dest.indirectCopy = dest.indirectCopy || to_add.indirectCopy;
}
#endif
#if (defined(VK_NV_memory_decompression))
inline bool compare_VkPhysicalDeviceMemoryDecompressionFeaturesNV(VkPhysicalDeviceMemoryDecompressionFeaturesNV const& requested, VkPhysicalDeviceMemoryDecompressionFeaturesNV const& supported){
    if (requested.memoryDecompression && !supported.memoryDecompression) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMemoryDecompressionFeaturesNV(VkPhysicalDeviceMemoryDecompressionFeaturesNV const& dest, VkPhysicalDeviceMemoryDecompressionFeaturesNV const& to_add){
    dest.memoryDecompression = dest.memoryDecompression || to_add.memoryDecompression;
}
#endif
#if (defined(VK_NV_shading_rate_image))
inline bool compare_VkPhysicalDeviceShadingRateImageFeaturesNV(VkPhysicalDeviceShadingRateImageFeaturesNV const& requested, VkPhysicalDeviceShadingRateImageFeaturesNV const& supported){
    if (requested.shadingRateImage && !supported.shadingRateImage) return false;
    if (requested.shadingRateCoarseSampleOrder && !supported.shadingRateCoarseSampleOrder) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShadingRateImageFeaturesNV(VkPhysicalDeviceShadingRateImageFeaturesNV const& dest, VkPhysicalDeviceShadingRateImageFeaturesNV const& to_add){
    dest.shadingRateImage = dest.shadingRateImage || to_add.shadingRateImage;
    dest.shadingRateCoarseSampleOrder = dest.shadingRateCoarseSampleOrder || to_add.shadingRateCoarseSampleOrder;
}
#endif
#if (defined(VK_HUAWEI_invocation_mask))
inline bool compare_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI const& requested, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI const& supported){
    if (requested.invocationMask && !supported.invocationMask) return false;
    return true;
}
inline void merge_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI const& dest, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI const& to_add){
    dest.invocationMask = dest.invocationMask || to_add.invocationMask;
}
#endif
#if (defined(VK_NV_mesh_shader))
inline bool compare_VkPhysicalDeviceMeshShaderFeaturesNV(VkPhysicalDeviceMeshShaderFeaturesNV const& requested, VkPhysicalDeviceMeshShaderFeaturesNV const& supported){
    if (requested.taskShader && !supported.taskShader) return false;
    if (requested.meshShader && !supported.meshShader) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMeshShaderFeaturesNV(VkPhysicalDeviceMeshShaderFeaturesNV const& dest, VkPhysicalDeviceMeshShaderFeaturesNV const& to_add){
    dest.taskShader = dest.taskShader || to_add.taskShader;
    dest.meshShader = dest.meshShader || to_add.meshShader;
}
#endif
#if (defined(VK_EXT_mesh_shader))
inline bool compare_VkPhysicalDeviceMeshShaderFeaturesEXT(VkPhysicalDeviceMeshShaderFeaturesEXT const& requested, VkPhysicalDeviceMeshShaderFeaturesEXT const& supported){
    if (requested.taskShader && !supported.taskShader) return false;
    if (requested.meshShader && !supported.meshShader) return false;
    if (requested.multiviewMeshShader && !supported.multiviewMeshShader) return false;
    if (requested.primitiveFragmentShadingRateMeshShader && !supported.primitiveFragmentShadingRateMeshShader) return false;
    if (requested.meshShaderQueries && !supported.meshShaderQueries) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMeshShaderFeaturesEXT(VkPhysicalDeviceMeshShaderFeaturesEXT const& dest, VkPhysicalDeviceMeshShaderFeaturesEXT const& to_add){
    dest.taskShader = dest.taskShader || to_add.taskShader;
    dest.meshShader = dest.meshShader || to_add.meshShader;
    dest.multiviewMeshShader = dest.multiviewMeshShader || to_add.multiviewMeshShader;
    dest.primitiveFragmentShadingRateMeshShader = dest.primitiveFragmentShadingRateMeshShader || to_add.primitiveFragmentShadingRateMeshShader;
    dest.meshShaderQueries = dest.meshShaderQueries || to_add.meshShaderQueries;
}
#endif
#if (defined(VK_KHR_acceleration_structure))
inline bool compare_VkPhysicalDeviceAccelerationStructureFeaturesKHR(VkPhysicalDeviceAccelerationStructureFeaturesKHR const& requested, VkPhysicalDeviceAccelerationStructureFeaturesKHR const& supported){
    if (requested.accelerationStructure && !supported.accelerationStructure) return false;
    if (requested.accelerationStructureCaptureReplay && !supported.accelerationStructureCaptureReplay) return false;
    if (requested.accelerationStructureIndirectBuild && !supported.accelerationStructureIndirectBuild) return false;
    if (requested.accelerationStructureHostCommands && !supported.accelerationStructureHostCommands) return false;
    if (requested.descriptorBindingAccelerationStructureUpdateAfterBind && !supported.descriptorBindingAccelerationStructureUpdateAfterBind) return false;
    return true;
}
inline void merge_VkPhysicalDeviceAccelerationStructureFeaturesKHR(VkPhysicalDeviceAccelerationStructureFeaturesKHR const& dest, VkPhysicalDeviceAccelerationStructureFeaturesKHR const& to_add){
    dest.accelerationStructure = dest.accelerationStructure || to_add.accelerationStructure;
    dest.accelerationStructureCaptureReplay = dest.accelerationStructureCaptureReplay || to_add.accelerationStructureCaptureReplay;
    dest.accelerationStructureIndirectBuild = dest.accelerationStructureIndirectBuild || to_add.accelerationStructureIndirectBuild;
    dest.accelerationStructureHostCommands = dest.accelerationStructureHostCommands || to_add.accelerationStructureHostCommands;
    dest.descriptorBindingAccelerationStructureUpdateAfterBind = dest.descriptorBindingAccelerationStructureUpdateAfterBind || to_add.descriptorBindingAccelerationStructureUpdateAfterBind;
}
#endif
#if (defined(VK_KHR_ray_tracing_pipeline))
inline bool compare_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(VkPhysicalDeviceRayTracingPipelineFeaturesKHR const& requested, VkPhysicalDeviceRayTracingPipelineFeaturesKHR const& supported){
    if (requested.rayTracingPipeline && !supported.rayTracingPipeline) return false;
    if (requested.rayTracingPipelineShaderGroupHandleCaptureReplay && !supported.rayTracingPipelineShaderGroupHandleCaptureReplay) return false;
    if (requested.rayTracingPipelineShaderGroupHandleCaptureReplayMixed && !supported.rayTracingPipelineShaderGroupHandleCaptureReplayMixed) return false;
    if (requested.rayTracingPipelineTraceRaysIndirect && !supported.rayTracingPipelineTraceRaysIndirect) return false;
    if (requested.rayTraversalPrimitiveCulling && !supported.rayTraversalPrimitiveCulling) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(VkPhysicalDeviceRayTracingPipelineFeaturesKHR const& dest, VkPhysicalDeviceRayTracingPipelineFeaturesKHR const& to_add){
    dest.rayTracingPipeline = dest.rayTracingPipeline || to_add.rayTracingPipeline;
    dest.rayTracingPipelineShaderGroupHandleCaptureReplay = dest.rayTracingPipelineShaderGroupHandleCaptureReplay || to_add.rayTracingPipelineShaderGroupHandleCaptureReplay;
    dest.rayTracingPipelineShaderGroupHandleCaptureReplayMixed = dest.rayTracingPipelineShaderGroupHandleCaptureReplayMixed || to_add.rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
    dest.rayTracingPipelineTraceRaysIndirect = dest.rayTracingPipelineTraceRaysIndirect || to_add.rayTracingPipelineTraceRaysIndirect;
    dest.rayTraversalPrimitiveCulling = dest.rayTraversalPrimitiveCulling || to_add.rayTraversalPrimitiveCulling;
}
#endif
#if (defined(VK_KHR_ray_query))
inline bool compare_VkPhysicalDeviceRayQueryFeaturesKHR(VkPhysicalDeviceRayQueryFeaturesKHR const& requested, VkPhysicalDeviceRayQueryFeaturesKHR const& supported){
    if (requested.rayQuery && !supported.rayQuery) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRayQueryFeaturesKHR(VkPhysicalDeviceRayQueryFeaturesKHR const& dest, VkPhysicalDeviceRayQueryFeaturesKHR const& to_add){
    dest.rayQuery = dest.rayQuery || to_add.rayQuery;
}
#endif
#if (defined(VK_KHR_ray_tracing_maintenance1))
inline bool compare_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR const& requested, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR const& supported){
    if (requested.rayTracingMaintenance1 && !supported.rayTracingMaintenance1) return false;
    if (requested.rayTracingPipelineTraceRaysIndirect2 && !supported.rayTracingPipelineTraceRaysIndirect2) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR const& dest, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR const& to_add){
    dest.rayTracingMaintenance1 = dest.rayTracingMaintenance1 || to_add.rayTracingMaintenance1;
    dest.rayTracingPipelineTraceRaysIndirect2 = dest.rayTracingPipelineTraceRaysIndirect2 || to_add.rayTracingPipelineTraceRaysIndirect2;
}
#endif
#if (defined(VK_EXT_fragment_density_map))
inline bool compare_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(VkPhysicalDeviceFragmentDensityMapFeaturesEXT const& requested, VkPhysicalDeviceFragmentDensityMapFeaturesEXT const& supported){
    if (requested.fragmentDensityMap && !supported.fragmentDensityMap) return false;
    if (requested.fragmentDensityMapDynamic && !supported.fragmentDensityMapDynamic) return false;
    if (requested.fragmentDensityMapNonSubsampledImages && !supported.fragmentDensityMapNonSubsampledImages) return false;
    return true;
}
inline void merge_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(VkPhysicalDeviceFragmentDensityMapFeaturesEXT const& dest, VkPhysicalDeviceFragmentDensityMapFeaturesEXT const& to_add){
    dest.fragmentDensityMap = dest.fragmentDensityMap || to_add.fragmentDensityMap;
    dest.fragmentDensityMapDynamic = dest.fragmentDensityMapDynamic || to_add.fragmentDensityMapDynamic;
    dest.fragmentDensityMapNonSubsampledImages = dest.fragmentDensityMapNonSubsampledImages || to_add.fragmentDensityMapNonSubsampledImages;
}
#endif
#if (defined(VK_EXT_fragment_density_map2))
inline bool compare_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT const& requested, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT const& supported){
    if (requested.fragmentDensityMapDeferred && !supported.fragmentDensityMapDeferred) return false;
    return true;
}
inline void merge_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT const& dest, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT const& to_add){
    dest.fragmentDensityMapDeferred = dest.fragmentDensityMapDeferred || to_add.fragmentDensityMapDeferred;
}
#endif
#if (defined(VK_QCOM_fragment_density_map_offset))
inline bool compare_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM const& requested, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM const& supported){
    if (requested.fragmentDensityMapOffset && !supported.fragmentDensityMapOffset) return false;
    return true;
}
inline void merge_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM const& dest, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM const& to_add){
    dest.fragmentDensityMapOffset = dest.fragmentDensityMapOffset || to_add.fragmentDensityMapOffset;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceScalarBlockLayoutFeatures(VkPhysicalDeviceScalarBlockLayoutFeatures const& requested, VkPhysicalDeviceScalarBlockLayoutFeatures const& supported){
    if (requested.scalarBlockLayout && !supported.scalarBlockLayout) return false;
    return true;
}
inline void merge_VkPhysicalDeviceScalarBlockLayoutFeatures(VkPhysicalDeviceScalarBlockLayoutFeatures const& dest, VkPhysicalDeviceScalarBlockLayoutFeatures const& to_add){
    dest.scalarBlockLayout = dest.scalarBlockLayout || to_add.scalarBlockLayout;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(VkPhysicalDeviceUniformBufferStandardLayoutFeatures const& requested, VkPhysicalDeviceUniformBufferStandardLayoutFeatures const& supported){
    if (requested.uniformBufferStandardLayout && !supported.uniformBufferStandardLayout) return false;
    return true;
}
inline void merge_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(VkPhysicalDeviceUniformBufferStandardLayoutFeatures const& dest, VkPhysicalDeviceUniformBufferStandardLayoutFeatures const& to_add){
    dest.uniformBufferStandardLayout = dest.uniformBufferStandardLayout || to_add.uniformBufferStandardLayout;
}
#endif
#if (defined(VK_EXT_depth_clip_enable))
inline bool compare_VkPhysicalDeviceDepthClipEnableFeaturesEXT(VkPhysicalDeviceDepthClipEnableFeaturesEXT const& requested, VkPhysicalDeviceDepthClipEnableFeaturesEXT const& supported){
    if (requested.depthClipEnable && !supported.depthClipEnable) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDepthClipEnableFeaturesEXT(VkPhysicalDeviceDepthClipEnableFeaturesEXT const& dest, VkPhysicalDeviceDepthClipEnableFeaturesEXT const& to_add){
    dest.depthClipEnable = dest.depthClipEnable || to_add.depthClipEnable;
}
#endif
#if (defined(VK_EXT_memory_priority))
inline bool compare_VkPhysicalDeviceMemoryPriorityFeaturesEXT(VkPhysicalDeviceMemoryPriorityFeaturesEXT const& requested, VkPhysicalDeviceMemoryPriorityFeaturesEXT const& supported){
    if (requested.memoryPriority && !supported.memoryPriority) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMemoryPriorityFeaturesEXT(VkPhysicalDeviceMemoryPriorityFeaturesEXT const& dest, VkPhysicalDeviceMemoryPriorityFeaturesEXT const& to_add){
    dest.memoryPriority = dest.memoryPriority || to_add.memoryPriority;
}
#endif
#if (defined(VK_EXT_pageable_device_local_memory))
inline bool compare_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT const& requested, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT const& supported){
    if (requested.pageableDeviceLocalMemory && !supported.pageableDeviceLocalMemory) return false;
    return true;
}
inline void merge_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT const& dest, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT const& to_add){
    dest.pageableDeviceLocalMemory = dest.pageableDeviceLocalMemory || to_add.pageableDeviceLocalMemory;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceBufferDeviceAddressFeatures(VkPhysicalDeviceBufferDeviceAddressFeatures const& requested, VkPhysicalDeviceBufferDeviceAddressFeatures const& supported){
    if (requested.bufferDeviceAddress && !supported.bufferDeviceAddress) return false;
    if (requested.bufferDeviceAddressCaptureReplay && !supported.bufferDeviceAddressCaptureReplay) return false;
    if (requested.bufferDeviceAddressMultiDevice && !supported.bufferDeviceAddressMultiDevice) return false;
    return true;
}
inline void merge_VkPhysicalDeviceBufferDeviceAddressFeatures(VkPhysicalDeviceBufferDeviceAddressFeatures const& dest, VkPhysicalDeviceBufferDeviceAddressFeatures const& to_add){
    dest.bufferDeviceAddress = dest.bufferDeviceAddress || to_add.bufferDeviceAddress;
    dest.bufferDeviceAddressCaptureReplay = dest.bufferDeviceAddressCaptureReplay || to_add.bufferDeviceAddressCaptureReplay;
    dest.bufferDeviceAddressMultiDevice = dest.bufferDeviceAddressMultiDevice || to_add.bufferDeviceAddressMultiDevice;
}
#endif
#if (defined(VK_EXT_buffer_device_address))
inline bool compare_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT const& requested, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT const& supported){
    if (requested.bufferDeviceAddress && !supported.bufferDeviceAddress) return false;
    if (requested.bufferDeviceAddressCaptureReplay && !supported.bufferDeviceAddressCaptureReplay) return false;
    if (requested.bufferDeviceAddressMultiDevice && !supported.bufferDeviceAddressMultiDevice) return false;
    return true;
}
inline void merge_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT const& dest, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT const& to_add){
    dest.bufferDeviceAddress = dest.bufferDeviceAddress || to_add.bufferDeviceAddress;
    dest.bufferDeviceAddressCaptureReplay = dest.bufferDeviceAddressCaptureReplay || to_add.bufferDeviceAddressCaptureReplay;
    dest.bufferDeviceAddressMultiDevice = dest.bufferDeviceAddressMultiDevice || to_add.bufferDeviceAddressMultiDevice;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceImagelessFramebufferFeatures(VkPhysicalDeviceImagelessFramebufferFeatures const& requested, VkPhysicalDeviceImagelessFramebufferFeatures const& supported){
    if (requested.imagelessFramebuffer && !supported.imagelessFramebuffer) return false;
    return true;
}
inline void merge_VkPhysicalDeviceImagelessFramebufferFeatures(VkPhysicalDeviceImagelessFramebufferFeatures const& dest, VkPhysicalDeviceImagelessFramebufferFeatures const& to_add){
    dest.imagelessFramebuffer = dest.imagelessFramebuffer || to_add.imagelessFramebuffer;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(VkPhysicalDeviceTextureCompressionASTCHDRFeatures const& requested, VkPhysicalDeviceTextureCompressionASTCHDRFeatures const& supported){
    if (requested.textureCompressionASTC_HDR && !supported.textureCompressionASTC_HDR) return false;
    return true;
}
inline void merge_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(VkPhysicalDeviceTextureCompressionASTCHDRFeatures const& dest, VkPhysicalDeviceTextureCompressionASTCHDRFeatures const& to_add){
    dest.textureCompressionASTC_HDR = dest.textureCompressionASTC_HDR || to_add.textureCompressionASTC_HDR;
}
#endif
#if (defined(VK_NV_cooperative_matrix))
inline bool compare_VkPhysicalDeviceCooperativeMatrixFeaturesNV(VkPhysicalDeviceCooperativeMatrixFeaturesNV const& requested, VkPhysicalDeviceCooperativeMatrixFeaturesNV const& supported){
    if (requested.cooperativeMatrix && !supported.cooperativeMatrix) return false;
    if (requested.cooperativeMatrixRobustBufferAccess && !supported.cooperativeMatrixRobustBufferAccess) return false;
    return true;
}
inline void merge_VkPhysicalDeviceCooperativeMatrixFeaturesNV(VkPhysicalDeviceCooperativeMatrixFeaturesNV const& dest, VkPhysicalDeviceCooperativeMatrixFeaturesNV const& to_add){
    dest.cooperativeMatrix = dest.cooperativeMatrix || to_add.cooperativeMatrix;
    dest.cooperativeMatrixRobustBufferAccess = dest.cooperativeMatrixRobustBufferAccess || to_add.cooperativeMatrixRobustBufferAccess;
}
#endif
#if (defined(VK_EXT_ycbcr_image_arrays))
inline bool compare_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT const& requested, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT const& supported){
    if (requested.ycbcrImageArrays && !supported.ycbcrImageArrays) return false;
    return true;
}
inline void merge_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT const& dest, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT const& to_add){
    dest.ycbcrImageArrays = dest.ycbcrImageArrays || to_add.ycbcrImageArrays;
}
#endif
#if (defined(VK_NV_present_barrier))
inline bool compare_VkPhysicalDevicePresentBarrierFeaturesNV(VkPhysicalDevicePresentBarrierFeaturesNV const& requested, VkPhysicalDevicePresentBarrierFeaturesNV const& supported){
    if (requested.presentBarrier && !supported.presentBarrier) return false;
    return true;
}
inline void merge_VkPhysicalDevicePresentBarrierFeaturesNV(VkPhysicalDevicePresentBarrierFeaturesNV const& dest, VkPhysicalDevicePresentBarrierFeaturesNV const& to_add){
    dest.presentBarrier = dest.presentBarrier || to_add.presentBarrier;
}
#endif
#if (defined(VK_KHR_performance_query))
inline bool compare_VkPhysicalDevicePerformanceQueryFeaturesKHR(VkPhysicalDevicePerformanceQueryFeaturesKHR const& requested, VkPhysicalDevicePerformanceQueryFeaturesKHR const& supported){
    if (requested.performanceCounterQueryPools && !supported.performanceCounterQueryPools) return false;
    if (requested.performanceCounterMultipleQueryPools && !supported.performanceCounterMultipleQueryPools) return false;
    return true;
}
inline void merge_VkPhysicalDevicePerformanceQueryFeaturesKHR(VkPhysicalDevicePerformanceQueryFeaturesKHR const& dest, VkPhysicalDevicePerformanceQueryFeaturesKHR const& to_add){
    dest.performanceCounterQueryPools = dest.performanceCounterQueryPools || to_add.performanceCounterQueryPools;
    dest.performanceCounterMultipleQueryPools = dest.performanceCounterMultipleQueryPools || to_add.performanceCounterMultipleQueryPools;
}
#endif
#if (defined(VK_NV_coverage_reduction_mode))
inline bool compare_VkPhysicalDeviceCoverageReductionModeFeaturesNV(VkPhysicalDeviceCoverageReductionModeFeaturesNV const& requested, VkPhysicalDeviceCoverageReductionModeFeaturesNV const& supported){
    if (requested.coverageReductionMode && !supported.coverageReductionMode) return false;
    return true;
}
inline void merge_VkPhysicalDeviceCoverageReductionModeFeaturesNV(VkPhysicalDeviceCoverageReductionModeFeaturesNV const& dest, VkPhysicalDeviceCoverageReductionModeFeaturesNV const& to_add){
    dest.coverageReductionMode = dest.coverageReductionMode || to_add.coverageReductionMode;
}
#endif
#if (defined(VK_INTEL_shader_integer_functions2))
inline bool compare_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL const& requested, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL const& supported){
    if (requested.shaderIntegerFunctions2 && !supported.shaderIntegerFunctions2) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL const& dest, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL const& to_add){
    dest.shaderIntegerFunctions2 = dest.shaderIntegerFunctions2 || to_add.shaderIntegerFunctions2;
}
#endif
#if (defined(VK_KHR_shader_clock))
inline bool compare_VkPhysicalDeviceShaderClockFeaturesKHR(VkPhysicalDeviceShaderClockFeaturesKHR const& requested, VkPhysicalDeviceShaderClockFeaturesKHR const& supported){
    if (requested.shaderSubgroupClock && !supported.shaderSubgroupClock) return false;
    if (requested.shaderDeviceClock && !supported.shaderDeviceClock) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderClockFeaturesKHR(VkPhysicalDeviceShaderClockFeaturesKHR const& dest, VkPhysicalDeviceShaderClockFeaturesKHR const& to_add){
    dest.shaderSubgroupClock = dest.shaderSubgroupClock || to_add.shaderSubgroupClock;
    dest.shaderDeviceClock = dest.shaderDeviceClock || to_add.shaderDeviceClock;
}
#endif
#if (defined(VK_KHR_index_type_uint8))
inline bool compare_VkPhysicalDeviceIndexTypeUint8FeaturesKHR(VkPhysicalDeviceIndexTypeUint8FeaturesKHR const& requested, VkPhysicalDeviceIndexTypeUint8FeaturesKHR const& supported){
    if (requested.indexTypeUint8 && !supported.indexTypeUint8) return false;
    return true;
}
inline void merge_VkPhysicalDeviceIndexTypeUint8FeaturesKHR(VkPhysicalDeviceIndexTypeUint8FeaturesKHR const& dest, VkPhysicalDeviceIndexTypeUint8FeaturesKHR const& to_add){
    dest.indexTypeUint8 = dest.indexTypeUint8 || to_add.indexTypeUint8;
}
#endif
#if (defined(VK_NV_shader_sm_builtins))
inline bool compare_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV const& requested, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV const& supported){
    if (requested.shaderSMBuiltins && !supported.shaderSMBuiltins) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV const& dest, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV const& to_add){
    dest.shaderSMBuiltins = dest.shaderSMBuiltins || to_add.shaderSMBuiltins;
}
#endif
#if (defined(VK_EXT_fragment_shader_interlock))
inline bool compare_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT const& requested, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT const& supported){
    if (requested.fragmentShaderSampleInterlock && !supported.fragmentShaderSampleInterlock) return false;
    if (requested.fragmentShaderPixelInterlock && !supported.fragmentShaderPixelInterlock) return false;
    if (requested.fragmentShaderShadingRateInterlock && !supported.fragmentShaderShadingRateInterlock) return false;
    return true;
}
inline void merge_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT const& dest, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT const& to_add){
    dest.fragmentShaderSampleInterlock = dest.fragmentShaderSampleInterlock || to_add.fragmentShaderSampleInterlock;
    dest.fragmentShaderPixelInterlock = dest.fragmentShaderPixelInterlock || to_add.fragmentShaderPixelInterlock;
    dest.fragmentShaderShadingRateInterlock = dest.fragmentShaderShadingRateInterlock || to_add.fragmentShaderShadingRateInterlock;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures const& requested, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures const& supported){
    if (requested.separateDepthStencilLayouts && !supported.separateDepthStencilLayouts) return false;
    return true;
}
inline void merge_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures const& dest, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures const& to_add){
    dest.separateDepthStencilLayouts = dest.separateDepthStencilLayouts || to_add.separateDepthStencilLayouts;
}
#endif
#if (defined(VK_EXT_primitive_topology_list_restart))
inline bool compare_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT const& requested, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT const& supported){
    if (requested.primitiveTopologyListRestart && !supported.primitiveTopologyListRestart) return false;
    if (requested.primitiveTopologyPatchListRestart && !supported.primitiveTopologyPatchListRestart) return false;
    return true;
}
inline void merge_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT const& dest, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT const& to_add){
    dest.primitiveTopologyListRestart = dest.primitiveTopologyListRestart || to_add.primitiveTopologyListRestart;
    dest.primitiveTopologyPatchListRestart = dest.primitiveTopologyPatchListRestart || to_add.primitiveTopologyPatchListRestart;
}
#endif
#if (defined(VK_KHR_pipeline_executable_properties))
inline bool compare_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR const& requested, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR const& supported){
    if (requested.pipelineExecutableInfo && !supported.pipelineExecutableInfo) return false;
    return true;
}
inline void merge_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR const& dest, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR const& to_add){
    dest.pipelineExecutableInfo = dest.pipelineExecutableInfo || to_add.pipelineExecutableInfo;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures const& requested, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures const& supported){
    if (requested.shaderDemoteToHelperInvocation && !supported.shaderDemoteToHelperInvocation) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures const& dest, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures const& to_add){
    dest.shaderDemoteToHelperInvocation = dest.shaderDemoteToHelperInvocation || to_add.shaderDemoteToHelperInvocation;
}
#endif
#if (defined(VK_EXT_texel_buffer_alignment))
inline bool compare_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT const& requested, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT const& supported){
    if (requested.texelBufferAlignment && !supported.texelBufferAlignment) return false;
    return true;
}
inline void merge_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT const& dest, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT const& to_add){
    dest.texelBufferAlignment = dest.texelBufferAlignment || to_add.texelBufferAlignment;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceSubgroupSizeControlFeatures(VkPhysicalDeviceSubgroupSizeControlFeatures const& requested, VkPhysicalDeviceSubgroupSizeControlFeatures const& supported){
    if (requested.subgroupSizeControl && !supported.subgroupSizeControl) return false;
    if (requested.computeFullSubgroups && !supported.computeFullSubgroups) return false;
    return true;
}
inline void merge_VkPhysicalDeviceSubgroupSizeControlFeatures(VkPhysicalDeviceSubgroupSizeControlFeatures const& dest, VkPhysicalDeviceSubgroupSizeControlFeatures const& to_add){
    dest.subgroupSizeControl = dest.subgroupSizeControl || to_add.subgroupSizeControl;
    dest.computeFullSubgroups = dest.computeFullSubgroups || to_add.computeFullSubgroups;
}
#endif
#if (defined(VK_KHR_line_rasterization))
inline bool compare_VkPhysicalDeviceLineRasterizationFeaturesKHR(VkPhysicalDeviceLineRasterizationFeaturesKHR const& requested, VkPhysicalDeviceLineRasterizationFeaturesKHR const& supported){
    if (requested.rectangularLines && !supported.rectangularLines) return false;
    if (requested.bresenhamLines && !supported.bresenhamLines) return false;
    if (requested.smoothLines && !supported.smoothLines) return false;
    if (requested.stippledRectangularLines && !supported.stippledRectangularLines) return false;
    if (requested.stippledBresenhamLines && !supported.stippledBresenhamLines) return false;
    if (requested.stippledSmoothLines && !supported.stippledSmoothLines) return false;
    return true;
}
inline void merge_VkPhysicalDeviceLineRasterizationFeaturesKHR(VkPhysicalDeviceLineRasterizationFeaturesKHR const& dest, VkPhysicalDeviceLineRasterizationFeaturesKHR const& to_add){
    dest.rectangularLines = dest.rectangularLines || to_add.rectangularLines;
    dest.bresenhamLines = dest.bresenhamLines || to_add.bresenhamLines;
    dest.smoothLines = dest.smoothLines || to_add.smoothLines;
    dest.stippledRectangularLines = dest.stippledRectangularLines || to_add.stippledRectangularLines;
    dest.stippledBresenhamLines = dest.stippledBresenhamLines || to_add.stippledBresenhamLines;
    dest.stippledSmoothLines = dest.stippledSmoothLines || to_add.stippledSmoothLines;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDevicePipelineCreationCacheControlFeatures(VkPhysicalDevicePipelineCreationCacheControlFeatures const& requested, VkPhysicalDevicePipelineCreationCacheControlFeatures const& supported){
    if (requested.pipelineCreationCacheControl && !supported.pipelineCreationCacheControl) return false;
    return true;
}
inline void merge_VkPhysicalDevicePipelineCreationCacheControlFeatures(VkPhysicalDevicePipelineCreationCacheControlFeatures const& dest, VkPhysicalDevicePipelineCreationCacheControlFeatures const& to_add){
    dest.pipelineCreationCacheControl = dest.pipelineCreationCacheControl || to_add.pipelineCreationCacheControl;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceVulkan11Features(VkPhysicalDeviceVulkan11Features const& requested, VkPhysicalDeviceVulkan11Features const& supported){
    if (requested.storageBuffer16BitAccess && !supported.storageBuffer16BitAccess) return false;
    if (requested.uniformAndStorageBuffer16BitAccess && !supported.uniformAndStorageBuffer16BitAccess) return false;
    if (requested.storagePushConstant16 && !supported.storagePushConstant16) return false;
    if (requested.storageInputOutput16 && !supported.storageInputOutput16) return false;
    if (requested.multiview && !supported.multiview) return false;
    if (requested.multiviewGeometryShader && !supported.multiviewGeometryShader) return false;
    if (requested.multiviewTessellationShader && !supported.multiviewTessellationShader) return false;
    if (requested.variablePointersStorageBuffer && !supported.variablePointersStorageBuffer) return false;
    if (requested.variablePointers && !supported.variablePointers) return false;
    if (requested.protectedMemory && !supported.protectedMemory) return false;
    if (requested.samplerYcbcrConversion && !supported.samplerYcbcrConversion) return false;
    if (requested.shaderDrawParameters && !supported.shaderDrawParameters) return false;
    return true;
}
inline void merge_VkPhysicalDeviceVulkan11Features(VkPhysicalDeviceVulkan11Features const& dest, VkPhysicalDeviceVulkan11Features const& to_add){
    dest.storageBuffer16BitAccess = dest.storageBuffer16BitAccess || to_add.storageBuffer16BitAccess;
    dest.uniformAndStorageBuffer16BitAccess = dest.uniformAndStorageBuffer16BitAccess || to_add.uniformAndStorageBuffer16BitAccess;
    dest.storagePushConstant16 = dest.storagePushConstant16 || to_add.storagePushConstant16;
    dest.storageInputOutput16 = dest.storageInputOutput16 || to_add.storageInputOutput16;
    dest.multiview = dest.multiview || to_add.multiview;
    dest.multiviewGeometryShader = dest.multiviewGeometryShader || to_add.multiviewGeometryShader;
    dest.multiviewTessellationShader = dest.multiviewTessellationShader || to_add.multiviewTessellationShader;
    dest.variablePointersStorageBuffer = dest.variablePointersStorageBuffer || to_add.variablePointersStorageBuffer;
    dest.variablePointers = dest.variablePointers || to_add.variablePointers;
    dest.protectedMemory = dest.protectedMemory || to_add.protectedMemory;
    dest.samplerYcbcrConversion = dest.samplerYcbcrConversion || to_add.samplerYcbcrConversion;
    dest.shaderDrawParameters = dest.shaderDrawParameters || to_add.shaderDrawParameters;
}
#endif
#if (defined(VK_VERSION_1_2))
inline bool compare_VkPhysicalDeviceVulkan12Features(VkPhysicalDeviceVulkan12Features const& requested, VkPhysicalDeviceVulkan12Features const& supported){
    if (requested.samplerMirrorClampToEdge && !supported.samplerMirrorClampToEdge) return false;
    if (requested.drawIndirectCount && !supported.drawIndirectCount) return false;
    if (requested.storageBuffer8BitAccess && !supported.storageBuffer8BitAccess) return false;
    if (requested.uniformAndStorageBuffer8BitAccess && !supported.uniformAndStorageBuffer8BitAccess) return false;
    if (requested.storagePushConstant8 && !supported.storagePushConstant8) return false;
    if (requested.shaderBufferInt64Atomics && !supported.shaderBufferInt64Atomics) return false;
    if (requested.shaderSharedInt64Atomics && !supported.shaderSharedInt64Atomics) return false;
    if (requested.shaderFloat16 && !supported.shaderFloat16) return false;
    if (requested.shaderInt8 && !supported.shaderInt8) return false;
    if (requested.descriptorIndexing && !supported.descriptorIndexing) return false;
    if (requested.shaderInputAttachmentArrayDynamicIndexing && !supported.shaderInputAttachmentArrayDynamicIndexing) return false;
    if (requested.shaderUniformTexelBufferArrayDynamicIndexing && !supported.shaderUniformTexelBufferArrayDynamicIndexing) return false;
    if (requested.shaderStorageTexelBufferArrayDynamicIndexing && !supported.shaderStorageTexelBufferArrayDynamicIndexing) return false;
    if (requested.shaderUniformBufferArrayNonUniformIndexing && !supported.shaderUniformBufferArrayNonUniformIndexing) return false;
    if (requested.shaderSampledImageArrayNonUniformIndexing && !supported.shaderSampledImageArrayNonUniformIndexing) return false;
    if (requested.shaderStorageBufferArrayNonUniformIndexing && !supported.shaderStorageBufferArrayNonUniformIndexing) return false;
    if (requested.shaderStorageImageArrayNonUniformIndexing && !supported.shaderStorageImageArrayNonUniformIndexing) return false;
    if (requested.shaderInputAttachmentArrayNonUniformIndexing && !supported.shaderInputAttachmentArrayNonUniformIndexing) return false;
    if (requested.shaderUniformTexelBufferArrayNonUniformIndexing && !supported.shaderUniformTexelBufferArrayNonUniformIndexing) return false;
    if (requested.shaderStorageTexelBufferArrayNonUniformIndexing && !supported.shaderStorageTexelBufferArrayNonUniformIndexing) return false;
    if (requested.descriptorBindingUniformBufferUpdateAfterBind && !supported.descriptorBindingUniformBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingSampledImageUpdateAfterBind && !supported.descriptorBindingSampledImageUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageImageUpdateAfterBind && !supported.descriptorBindingStorageImageUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageBufferUpdateAfterBind && !supported.descriptorBindingStorageBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingUniformTexelBufferUpdateAfterBind && !supported.descriptorBindingUniformTexelBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingStorageTexelBufferUpdateAfterBind && !supported.descriptorBindingStorageTexelBufferUpdateAfterBind) return false;
    if (requested.descriptorBindingUpdateUnusedWhilePending && !supported.descriptorBindingUpdateUnusedWhilePending) return false;
    if (requested.descriptorBindingPartiallyBound && !supported.descriptorBindingPartiallyBound) return false;
    if (requested.descriptorBindingVariableDescriptorCount && !supported.descriptorBindingVariableDescriptorCount) return false;
    if (requested.runtimeDescriptorArray && !supported.runtimeDescriptorArray) return false;
    if (requested.samplerFilterMinmax && !supported.samplerFilterMinmax) return false;
    if (requested.scalarBlockLayout && !supported.scalarBlockLayout) return false;
    if (requested.imagelessFramebuffer && !supported.imagelessFramebuffer) return false;
    if (requested.uniformBufferStandardLayout && !supported.uniformBufferStandardLayout) return false;
    if (requested.shaderSubgroupExtendedTypes && !supported.shaderSubgroupExtendedTypes) return false;
    if (requested.separateDepthStencilLayouts && !supported.separateDepthStencilLayouts) return false;
    if (requested.hostQueryReset && !supported.hostQueryReset) return false;
    if (requested.timelineSemaphore && !supported.timelineSemaphore) return false;
    if (requested.bufferDeviceAddress && !supported.bufferDeviceAddress) return false;
    if (requested.bufferDeviceAddressCaptureReplay && !supported.bufferDeviceAddressCaptureReplay) return false;
    if (requested.bufferDeviceAddressMultiDevice && !supported.bufferDeviceAddressMultiDevice) return false;
    if (requested.vulkanMemoryModel && !supported.vulkanMemoryModel) return false;
    if (requested.vulkanMemoryModelDeviceScope && !supported.vulkanMemoryModelDeviceScope) return false;
    if (requested.vulkanMemoryModelAvailabilityVisibilityChains && !supported.vulkanMemoryModelAvailabilityVisibilityChains) return false;
    if (requested.shaderOutputViewportIndex && !supported.shaderOutputViewportIndex) return false;
    if (requested.shaderOutputLayer && !supported.shaderOutputLayer) return false;
    if (requested.subgroupBroadcastDynamicId && !supported.subgroupBroadcastDynamicId) return false;
    return true;
}
inline void merge_VkPhysicalDeviceVulkan12Features(VkPhysicalDeviceVulkan12Features const& dest, VkPhysicalDeviceVulkan12Features const& to_add){
    dest.samplerMirrorClampToEdge = dest.samplerMirrorClampToEdge || to_add.samplerMirrorClampToEdge;
    dest.drawIndirectCount = dest.drawIndirectCount || to_add.drawIndirectCount;
    dest.storageBuffer8BitAccess = dest.storageBuffer8BitAccess || to_add.storageBuffer8BitAccess;
    dest.uniformAndStorageBuffer8BitAccess = dest.uniformAndStorageBuffer8BitAccess || to_add.uniformAndStorageBuffer8BitAccess;
    dest.storagePushConstant8 = dest.storagePushConstant8 || to_add.storagePushConstant8;
    dest.shaderBufferInt64Atomics = dest.shaderBufferInt64Atomics || to_add.shaderBufferInt64Atomics;
    dest.shaderSharedInt64Atomics = dest.shaderSharedInt64Atomics || to_add.shaderSharedInt64Atomics;
    dest.shaderFloat16 = dest.shaderFloat16 || to_add.shaderFloat16;
    dest.shaderInt8 = dest.shaderInt8 || to_add.shaderInt8;
    dest.descriptorIndexing = dest.descriptorIndexing || to_add.descriptorIndexing;
    dest.shaderInputAttachmentArrayDynamicIndexing = dest.shaderInputAttachmentArrayDynamicIndexing || to_add.shaderInputAttachmentArrayDynamicIndexing;
    dest.shaderUniformTexelBufferArrayDynamicIndexing = dest.shaderUniformTexelBufferArrayDynamicIndexing || to_add.shaderUniformTexelBufferArrayDynamicIndexing;
    dest.shaderStorageTexelBufferArrayDynamicIndexing = dest.shaderStorageTexelBufferArrayDynamicIndexing || to_add.shaderStorageTexelBufferArrayDynamicIndexing;
    dest.shaderUniformBufferArrayNonUniformIndexing = dest.shaderUniformBufferArrayNonUniformIndexing || to_add.shaderUniformBufferArrayNonUniformIndexing;
    dest.shaderSampledImageArrayNonUniformIndexing = dest.shaderSampledImageArrayNonUniformIndexing || to_add.shaderSampledImageArrayNonUniformIndexing;
    dest.shaderStorageBufferArrayNonUniformIndexing = dest.shaderStorageBufferArrayNonUniformIndexing || to_add.shaderStorageBufferArrayNonUniformIndexing;
    dest.shaderStorageImageArrayNonUniformIndexing = dest.shaderStorageImageArrayNonUniformIndexing || to_add.shaderStorageImageArrayNonUniformIndexing;
    dest.shaderInputAttachmentArrayNonUniformIndexing = dest.shaderInputAttachmentArrayNonUniformIndexing || to_add.shaderInputAttachmentArrayNonUniformIndexing;
    dest.shaderUniformTexelBufferArrayNonUniformIndexing = dest.shaderUniformTexelBufferArrayNonUniformIndexing || to_add.shaderUniformTexelBufferArrayNonUniformIndexing;
    dest.shaderStorageTexelBufferArrayNonUniformIndexing = dest.shaderStorageTexelBufferArrayNonUniformIndexing || to_add.shaderStorageTexelBufferArrayNonUniformIndexing;
    dest.descriptorBindingUniformBufferUpdateAfterBind = dest.descriptorBindingUniformBufferUpdateAfterBind || to_add.descriptorBindingUniformBufferUpdateAfterBind;
    dest.descriptorBindingSampledImageUpdateAfterBind = dest.descriptorBindingSampledImageUpdateAfterBind || to_add.descriptorBindingSampledImageUpdateAfterBind;
    dest.descriptorBindingStorageImageUpdateAfterBind = dest.descriptorBindingStorageImageUpdateAfterBind || to_add.descriptorBindingStorageImageUpdateAfterBind;
    dest.descriptorBindingStorageBufferUpdateAfterBind = dest.descriptorBindingStorageBufferUpdateAfterBind || to_add.descriptorBindingStorageBufferUpdateAfterBind;
    dest.descriptorBindingUniformTexelBufferUpdateAfterBind = dest.descriptorBindingUniformTexelBufferUpdateAfterBind || to_add.descriptorBindingUniformTexelBufferUpdateAfterBind;
    dest.descriptorBindingStorageTexelBufferUpdateAfterBind = dest.descriptorBindingStorageTexelBufferUpdateAfterBind || to_add.descriptorBindingStorageTexelBufferUpdateAfterBind;
    dest.descriptorBindingUpdateUnusedWhilePending = dest.descriptorBindingUpdateUnusedWhilePending || to_add.descriptorBindingUpdateUnusedWhilePending;
    dest.descriptorBindingPartiallyBound = dest.descriptorBindingPartiallyBound || to_add.descriptorBindingPartiallyBound;
    dest.descriptorBindingVariableDescriptorCount = dest.descriptorBindingVariableDescriptorCount || to_add.descriptorBindingVariableDescriptorCount;
    dest.runtimeDescriptorArray = dest.runtimeDescriptorArray || to_add.runtimeDescriptorArray;
    dest.samplerFilterMinmax = dest.samplerFilterMinmax || to_add.samplerFilterMinmax;
    dest.scalarBlockLayout = dest.scalarBlockLayout || to_add.scalarBlockLayout;
    dest.imagelessFramebuffer = dest.imagelessFramebuffer || to_add.imagelessFramebuffer;
    dest.uniformBufferStandardLayout = dest.uniformBufferStandardLayout || to_add.uniformBufferStandardLayout;
    dest.shaderSubgroupExtendedTypes = dest.shaderSubgroupExtendedTypes || to_add.shaderSubgroupExtendedTypes;
    dest.separateDepthStencilLayouts = dest.separateDepthStencilLayouts || to_add.separateDepthStencilLayouts;
    dest.hostQueryReset = dest.hostQueryReset || to_add.hostQueryReset;
    dest.timelineSemaphore = dest.timelineSemaphore || to_add.timelineSemaphore;
    dest.bufferDeviceAddress = dest.bufferDeviceAddress || to_add.bufferDeviceAddress;
    dest.bufferDeviceAddressCaptureReplay = dest.bufferDeviceAddressCaptureReplay || to_add.bufferDeviceAddressCaptureReplay;
    dest.bufferDeviceAddressMultiDevice = dest.bufferDeviceAddressMultiDevice || to_add.bufferDeviceAddressMultiDevice;
    dest.vulkanMemoryModel = dest.vulkanMemoryModel || to_add.vulkanMemoryModel;
    dest.vulkanMemoryModelDeviceScope = dest.vulkanMemoryModelDeviceScope || to_add.vulkanMemoryModelDeviceScope;
    dest.vulkanMemoryModelAvailabilityVisibilityChains = dest.vulkanMemoryModelAvailabilityVisibilityChains || to_add.vulkanMemoryModelAvailabilityVisibilityChains;
    dest.shaderOutputViewportIndex = dest.shaderOutputViewportIndex || to_add.shaderOutputViewportIndex;
    dest.shaderOutputLayer = dest.shaderOutputLayer || to_add.shaderOutputLayer;
    dest.subgroupBroadcastDynamicId = dest.subgroupBroadcastDynamicId || to_add.subgroupBroadcastDynamicId;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceVulkan13Features(VkPhysicalDeviceVulkan13Features const& requested, VkPhysicalDeviceVulkan13Features const& supported){
    if (requested.robustImageAccess && !supported.robustImageAccess) return false;
    if (requested.inlineUniformBlock && !supported.inlineUniformBlock) return false;
    if (requested.descriptorBindingInlineUniformBlockUpdateAfterBind && !supported.descriptorBindingInlineUniformBlockUpdateAfterBind) return false;
    if (requested.pipelineCreationCacheControl && !supported.pipelineCreationCacheControl) return false;
    if (requested.privateData && !supported.privateData) return false;
    if (requested.shaderDemoteToHelperInvocation && !supported.shaderDemoteToHelperInvocation) return false;
    if (requested.shaderTerminateInvocation && !supported.shaderTerminateInvocation) return false;
    if (requested.subgroupSizeControl && !supported.subgroupSizeControl) return false;
    if (requested.computeFullSubgroups && !supported.computeFullSubgroups) return false;
    if (requested.synchronization2 && !supported.synchronization2) return false;
    if (requested.textureCompressionASTC_HDR && !supported.textureCompressionASTC_HDR) return false;
    if (requested.shaderZeroInitializeWorkgroupMemory && !supported.shaderZeroInitializeWorkgroupMemory) return false;
    if (requested.dynamicRendering && !supported.dynamicRendering) return false;
    if (requested.shaderIntegerDotProduct && !supported.shaderIntegerDotProduct) return false;
    if (requested.maintenance4 && !supported.maintenance4) return false;
    return true;
}
inline void merge_VkPhysicalDeviceVulkan13Features(VkPhysicalDeviceVulkan13Features const& dest, VkPhysicalDeviceVulkan13Features const& to_add){
    dest.robustImageAccess = dest.robustImageAccess || to_add.robustImageAccess;
    dest.inlineUniformBlock = dest.inlineUniformBlock || to_add.inlineUniformBlock;
    dest.descriptorBindingInlineUniformBlockUpdateAfterBind = dest.descriptorBindingInlineUniformBlockUpdateAfterBind || to_add.descriptorBindingInlineUniformBlockUpdateAfterBind;
    dest.pipelineCreationCacheControl = dest.pipelineCreationCacheControl || to_add.pipelineCreationCacheControl;
    dest.privateData = dest.privateData || to_add.privateData;
    dest.shaderDemoteToHelperInvocation = dest.shaderDemoteToHelperInvocation || to_add.shaderDemoteToHelperInvocation;
    dest.shaderTerminateInvocation = dest.shaderTerminateInvocation || to_add.shaderTerminateInvocation;
    dest.subgroupSizeControl = dest.subgroupSizeControl || to_add.subgroupSizeControl;
    dest.computeFullSubgroups = dest.computeFullSubgroups || to_add.computeFullSubgroups;
    dest.synchronization2 = dest.synchronization2 || to_add.synchronization2;
    dest.textureCompressionASTC_HDR = dest.textureCompressionASTC_HDR || to_add.textureCompressionASTC_HDR;
    dest.shaderZeroInitializeWorkgroupMemory = dest.shaderZeroInitializeWorkgroupMemory || to_add.shaderZeroInitializeWorkgroupMemory;
    dest.dynamicRendering = dest.dynamicRendering || to_add.dynamicRendering;
    dest.shaderIntegerDotProduct = dest.shaderIntegerDotProduct || to_add.shaderIntegerDotProduct;
    dest.maintenance4 = dest.maintenance4 || to_add.maintenance4;
}
#endif
#if (defined(VK_AMD_device_coherent_memory))
inline bool compare_VkPhysicalDeviceCoherentMemoryFeaturesAMD(VkPhysicalDeviceCoherentMemoryFeaturesAMD const& requested, VkPhysicalDeviceCoherentMemoryFeaturesAMD const& supported){
    if (requested.deviceCoherentMemory && !supported.deviceCoherentMemory) return false;
    return true;
}
inline void merge_VkPhysicalDeviceCoherentMemoryFeaturesAMD(VkPhysicalDeviceCoherentMemoryFeaturesAMD const& dest, VkPhysicalDeviceCoherentMemoryFeaturesAMD const& to_add){
    dest.deviceCoherentMemory = dest.deviceCoherentMemory || to_add.deviceCoherentMemory;
}
#endif
#if (defined(VK_EXT_custom_border_color))
inline bool compare_VkPhysicalDeviceCustomBorderColorFeaturesEXT(VkPhysicalDeviceCustomBorderColorFeaturesEXT const& requested, VkPhysicalDeviceCustomBorderColorFeaturesEXT const& supported){
    if (requested.customBorderColors && !supported.customBorderColors) return false;
    if (requested.customBorderColorWithoutFormat && !supported.customBorderColorWithoutFormat) return false;
    return true;
}
inline void merge_VkPhysicalDeviceCustomBorderColorFeaturesEXT(VkPhysicalDeviceCustomBorderColorFeaturesEXT const& dest, VkPhysicalDeviceCustomBorderColorFeaturesEXT const& to_add){
    dest.customBorderColors = dest.customBorderColors || to_add.customBorderColors;
    dest.customBorderColorWithoutFormat = dest.customBorderColorWithoutFormat || to_add.customBorderColorWithoutFormat;
}
#endif
#if (defined(VK_EXT_border_color_swizzle))
inline bool compare_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT const& requested, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT const& supported){
    if (requested.borderColorSwizzle && !supported.borderColorSwizzle) return false;
    if (requested.borderColorSwizzleFromImage && !supported.borderColorSwizzleFromImage) return false;
    return true;
}
inline void merge_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT const& dest, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT const& to_add){
    dest.borderColorSwizzle = dest.borderColorSwizzle || to_add.borderColorSwizzle;
    dest.borderColorSwizzleFromImage = dest.borderColorSwizzleFromImage || to_add.borderColorSwizzleFromImage;
}
#endif
#if (defined(VK_EXT_extended_dynamic_state))
inline bool compare_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT const& requested, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT const& supported){
    if (requested.extendedDynamicState && !supported.extendedDynamicState) return false;
    return true;
}
inline void merge_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT const& dest, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT const& to_add){
    dest.extendedDynamicState = dest.extendedDynamicState || to_add.extendedDynamicState;
}
#endif
#if (defined(VK_EXT_extended_dynamic_state2))
inline bool compare_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT const& requested, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT const& supported){
    if (requested.extendedDynamicState2 && !supported.extendedDynamicState2) return false;
    if (requested.extendedDynamicState2LogicOp && !supported.extendedDynamicState2LogicOp) return false;
    if (requested.extendedDynamicState2PatchControlPoints && !supported.extendedDynamicState2PatchControlPoints) return false;
    return true;
}
inline void merge_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT const& dest, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT const& to_add){
    dest.extendedDynamicState2 = dest.extendedDynamicState2 || to_add.extendedDynamicState2;
    dest.extendedDynamicState2LogicOp = dest.extendedDynamicState2LogicOp || to_add.extendedDynamicState2LogicOp;
    dest.extendedDynamicState2PatchControlPoints = dest.extendedDynamicState2PatchControlPoints || to_add.extendedDynamicState2PatchControlPoints;
}
#endif
#if (defined(VK_EXT_extended_dynamic_state3))
inline bool compare_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT const& requested, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT const& supported){
    if (requested.extendedDynamicState3TessellationDomainOrigin && !supported.extendedDynamicState3TessellationDomainOrigin) return false;
    if (requested.extendedDynamicState3DepthClampEnable && !supported.extendedDynamicState3DepthClampEnable) return false;
    if (requested.extendedDynamicState3PolygonMode && !supported.extendedDynamicState3PolygonMode) return false;
    if (requested.extendedDynamicState3RasterizationSamples && !supported.extendedDynamicState3RasterizationSamples) return false;
    if (requested.extendedDynamicState3SampleMask && !supported.extendedDynamicState3SampleMask) return false;
    if (requested.extendedDynamicState3AlphaToCoverageEnable && !supported.extendedDynamicState3AlphaToCoverageEnable) return false;
    if (requested.extendedDynamicState3AlphaToOneEnable && !supported.extendedDynamicState3AlphaToOneEnable) return false;
    if (requested.extendedDynamicState3LogicOpEnable && !supported.extendedDynamicState3LogicOpEnable) return false;
    if (requested.extendedDynamicState3ColorBlendEnable && !supported.extendedDynamicState3ColorBlendEnable) return false;
    if (requested.extendedDynamicState3ColorBlendEquation && !supported.extendedDynamicState3ColorBlendEquation) return false;
    if (requested.extendedDynamicState3ColorWriteMask && !supported.extendedDynamicState3ColorWriteMask) return false;
    if (requested.extendedDynamicState3RasterizationStream && !supported.extendedDynamicState3RasterizationStream) return false;
    if (requested.extendedDynamicState3ConservativeRasterizationMode && !supported.extendedDynamicState3ConservativeRasterizationMode) return false;
    if (requested.extendedDynamicState3ExtraPrimitiveOverestimationSize && !supported.extendedDynamicState3ExtraPrimitiveOverestimationSize) return false;
    if (requested.extendedDynamicState3DepthClipEnable && !supported.extendedDynamicState3DepthClipEnable) return false;
    if (requested.extendedDynamicState3SampleLocationsEnable && !supported.extendedDynamicState3SampleLocationsEnable) return false;
    if (requested.extendedDynamicState3ColorBlendAdvanced && !supported.extendedDynamicState3ColorBlendAdvanced) return false;
    if (requested.extendedDynamicState3ProvokingVertexMode && !supported.extendedDynamicState3ProvokingVertexMode) return false;
    if (requested.extendedDynamicState3LineRasterizationMode && !supported.extendedDynamicState3LineRasterizationMode) return false;
    if (requested.extendedDynamicState3LineStippleEnable && !supported.extendedDynamicState3LineStippleEnable) return false;
    if (requested.extendedDynamicState3DepthClipNegativeOneToOne && !supported.extendedDynamicState3DepthClipNegativeOneToOne) return false;
    if (requested.extendedDynamicState3ViewportWScalingEnable && !supported.extendedDynamicState3ViewportWScalingEnable) return false;
    if (requested.extendedDynamicState3ViewportSwizzle && !supported.extendedDynamicState3ViewportSwizzle) return false;
    if (requested.extendedDynamicState3CoverageToColorEnable && !supported.extendedDynamicState3CoverageToColorEnable) return false;
    if (requested.extendedDynamicState3CoverageToColorLocation && !supported.extendedDynamicState3CoverageToColorLocation) return false;
    if (requested.extendedDynamicState3CoverageModulationMode && !supported.extendedDynamicState3CoverageModulationMode) return false;
    if (requested.extendedDynamicState3CoverageModulationTableEnable && !supported.extendedDynamicState3CoverageModulationTableEnable) return false;
    if (requested.extendedDynamicState3CoverageModulationTable && !supported.extendedDynamicState3CoverageModulationTable) return false;
    if (requested.extendedDynamicState3CoverageReductionMode && !supported.extendedDynamicState3CoverageReductionMode) return false;
    if (requested.extendedDynamicState3RepresentativeFragmentTestEnable && !supported.extendedDynamicState3RepresentativeFragmentTestEnable) return false;
    if (requested.extendedDynamicState3ShadingRateImageEnable && !supported.extendedDynamicState3ShadingRateImageEnable) return false;
    return true;
}
inline void merge_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT const& dest, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT const& to_add){
    dest.extendedDynamicState3TessellationDomainOrigin = dest.extendedDynamicState3TessellationDomainOrigin || to_add.extendedDynamicState3TessellationDomainOrigin;
    dest.extendedDynamicState3DepthClampEnable = dest.extendedDynamicState3DepthClampEnable || to_add.extendedDynamicState3DepthClampEnable;
    dest.extendedDynamicState3PolygonMode = dest.extendedDynamicState3PolygonMode || to_add.extendedDynamicState3PolygonMode;
    dest.extendedDynamicState3RasterizationSamples = dest.extendedDynamicState3RasterizationSamples || to_add.extendedDynamicState3RasterizationSamples;
    dest.extendedDynamicState3SampleMask = dest.extendedDynamicState3SampleMask || to_add.extendedDynamicState3SampleMask;
    dest.extendedDynamicState3AlphaToCoverageEnable = dest.extendedDynamicState3AlphaToCoverageEnable || to_add.extendedDynamicState3AlphaToCoverageEnable;
    dest.extendedDynamicState3AlphaToOneEnable = dest.extendedDynamicState3AlphaToOneEnable || to_add.extendedDynamicState3AlphaToOneEnable;
    dest.extendedDynamicState3LogicOpEnable = dest.extendedDynamicState3LogicOpEnable || to_add.extendedDynamicState3LogicOpEnable;
    dest.extendedDynamicState3ColorBlendEnable = dest.extendedDynamicState3ColorBlendEnable || to_add.extendedDynamicState3ColorBlendEnable;
    dest.extendedDynamicState3ColorBlendEquation = dest.extendedDynamicState3ColorBlendEquation || to_add.extendedDynamicState3ColorBlendEquation;
    dest.extendedDynamicState3ColorWriteMask = dest.extendedDynamicState3ColorWriteMask || to_add.extendedDynamicState3ColorWriteMask;
    dest.extendedDynamicState3RasterizationStream = dest.extendedDynamicState3RasterizationStream || to_add.extendedDynamicState3RasterizationStream;
    dest.extendedDynamicState3ConservativeRasterizationMode = dest.extendedDynamicState3ConservativeRasterizationMode || to_add.extendedDynamicState3ConservativeRasterizationMode;
    dest.extendedDynamicState3ExtraPrimitiveOverestimationSize = dest.extendedDynamicState3ExtraPrimitiveOverestimationSize || to_add.extendedDynamicState3ExtraPrimitiveOverestimationSize;
    dest.extendedDynamicState3DepthClipEnable = dest.extendedDynamicState3DepthClipEnable || to_add.extendedDynamicState3DepthClipEnable;
    dest.extendedDynamicState3SampleLocationsEnable = dest.extendedDynamicState3SampleLocationsEnable || to_add.extendedDynamicState3SampleLocationsEnable;
    dest.extendedDynamicState3ColorBlendAdvanced = dest.extendedDynamicState3ColorBlendAdvanced || to_add.extendedDynamicState3ColorBlendAdvanced;
    dest.extendedDynamicState3ProvokingVertexMode = dest.extendedDynamicState3ProvokingVertexMode || to_add.extendedDynamicState3ProvokingVertexMode;
    dest.extendedDynamicState3LineRasterizationMode = dest.extendedDynamicState3LineRasterizationMode || to_add.extendedDynamicState3LineRasterizationMode;
    dest.extendedDynamicState3LineStippleEnable = dest.extendedDynamicState3LineStippleEnable || to_add.extendedDynamicState3LineStippleEnable;
    dest.extendedDynamicState3DepthClipNegativeOneToOne = dest.extendedDynamicState3DepthClipNegativeOneToOne || to_add.extendedDynamicState3DepthClipNegativeOneToOne;
    dest.extendedDynamicState3ViewportWScalingEnable = dest.extendedDynamicState3ViewportWScalingEnable || to_add.extendedDynamicState3ViewportWScalingEnable;
    dest.extendedDynamicState3ViewportSwizzle = dest.extendedDynamicState3ViewportSwizzle || to_add.extendedDynamicState3ViewportSwizzle;
    dest.extendedDynamicState3CoverageToColorEnable = dest.extendedDynamicState3CoverageToColorEnable || to_add.extendedDynamicState3CoverageToColorEnable;
    dest.extendedDynamicState3CoverageToColorLocation = dest.extendedDynamicState3CoverageToColorLocation || to_add.extendedDynamicState3CoverageToColorLocation;
    dest.extendedDynamicState3CoverageModulationMode = dest.extendedDynamicState3CoverageModulationMode || to_add.extendedDynamicState3CoverageModulationMode;
    dest.extendedDynamicState3CoverageModulationTableEnable = dest.extendedDynamicState3CoverageModulationTableEnable || to_add.extendedDynamicState3CoverageModulationTableEnable;
    dest.extendedDynamicState3CoverageModulationTable = dest.extendedDynamicState3CoverageModulationTable || to_add.extendedDynamicState3CoverageModulationTable;
    dest.extendedDynamicState3CoverageReductionMode = dest.extendedDynamicState3CoverageReductionMode || to_add.extendedDynamicState3CoverageReductionMode;
    dest.extendedDynamicState3RepresentativeFragmentTestEnable = dest.extendedDynamicState3RepresentativeFragmentTestEnable || to_add.extendedDynamicState3RepresentativeFragmentTestEnable;
    dest.extendedDynamicState3ShadingRateImageEnable = dest.extendedDynamicState3ShadingRateImageEnable || to_add.extendedDynamicState3ShadingRateImageEnable;
}
#endif
#if (defined(VK_NV_device_diagnostics_config))
inline bool compare_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(VkPhysicalDeviceDiagnosticsConfigFeaturesNV const& requested, VkPhysicalDeviceDiagnosticsConfigFeaturesNV const& supported){
    if (requested.diagnosticsConfig && !supported.diagnosticsConfig) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(VkPhysicalDeviceDiagnosticsConfigFeaturesNV const& dest, VkPhysicalDeviceDiagnosticsConfigFeaturesNV const& to_add){
    dest.diagnosticsConfig = dest.diagnosticsConfig || to_add.diagnosticsConfig;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures const& requested, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures const& supported){
    if (requested.shaderZeroInitializeWorkgroupMemory && !supported.shaderZeroInitializeWorkgroupMemory) return false;
    return true;
}
inline void merge_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures const& dest, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures const& to_add){
    dest.shaderZeroInitializeWorkgroupMemory = dest.shaderZeroInitializeWorkgroupMemory || to_add.shaderZeroInitializeWorkgroupMemory;
}
#endif
#if (defined(VK_KHR_shader_subgroup_uniform_control_flow))
inline bool compare_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR const& requested, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR const& supported){
    if (requested.shaderSubgroupUniformControlFlow && !supported.shaderSubgroupUniformControlFlow) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR const& dest, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR const& to_add){
    dest.shaderSubgroupUniformControlFlow = dest.shaderSubgroupUniformControlFlow || to_add.shaderSubgroupUniformControlFlow;
}
#endif
#if (defined(VK_EXT_robustness2))
inline bool compare_VkPhysicalDeviceRobustness2FeaturesEXT(VkPhysicalDeviceRobustness2FeaturesEXT const& requested, VkPhysicalDeviceRobustness2FeaturesEXT const& supported){
    if (requested.robustBufferAccess2 && !supported.robustBufferAccess2) return false;
    if (requested.robustImageAccess2 && !supported.robustImageAccess2) return false;
    if (requested.nullDescriptor && !supported.nullDescriptor) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRobustness2FeaturesEXT(VkPhysicalDeviceRobustness2FeaturesEXT const& dest, VkPhysicalDeviceRobustness2FeaturesEXT const& to_add){
    dest.robustBufferAccess2 = dest.robustBufferAccess2 || to_add.robustBufferAccess2;
    dest.robustImageAccess2 = dest.robustImageAccess2 || to_add.robustImageAccess2;
    dest.nullDescriptor = dest.nullDescriptor || to_add.nullDescriptor;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceImageRobustnessFeatures(VkPhysicalDeviceImageRobustnessFeatures const& requested, VkPhysicalDeviceImageRobustnessFeatures const& supported){
    if (requested.robustImageAccess && !supported.robustImageAccess) return false;
    return true;
}
inline void merge_VkPhysicalDeviceImageRobustnessFeatures(VkPhysicalDeviceImageRobustnessFeatures const& dest, VkPhysicalDeviceImageRobustnessFeatures const& to_add){
    dest.robustImageAccess = dest.robustImageAccess || to_add.robustImageAccess;
}
#endif
#if (defined(VK_KHR_workgroup_memory_explicit_layout))
inline bool compare_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR const& requested, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR const& supported){
    if (requested.workgroupMemoryExplicitLayout && !supported.workgroupMemoryExplicitLayout) return false;
    if (requested.workgroupMemoryExplicitLayoutScalarBlockLayout && !supported.workgroupMemoryExplicitLayoutScalarBlockLayout) return false;
    if (requested.workgroupMemoryExplicitLayout8BitAccess && !supported.workgroupMemoryExplicitLayout8BitAccess) return false;
    if (requested.workgroupMemoryExplicitLayout16BitAccess && !supported.workgroupMemoryExplicitLayout16BitAccess) return false;
    return true;
}
inline void merge_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR const& dest, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR const& to_add){
    dest.workgroupMemoryExplicitLayout = dest.workgroupMemoryExplicitLayout || to_add.workgroupMemoryExplicitLayout;
    dest.workgroupMemoryExplicitLayoutScalarBlockLayout = dest.workgroupMemoryExplicitLayoutScalarBlockLayout || to_add.workgroupMemoryExplicitLayoutScalarBlockLayout;
    dest.workgroupMemoryExplicitLayout8BitAccess = dest.workgroupMemoryExplicitLayout8BitAccess || to_add.workgroupMemoryExplicitLayout8BitAccess;
    dest.workgroupMemoryExplicitLayout16BitAccess = dest.workgroupMemoryExplicitLayout16BitAccess || to_add.workgroupMemoryExplicitLayout16BitAccess;
}
#endif
#if (defined(VK_KHR_portability_subset))
inline bool compare_VkPhysicalDevicePortabilitySubsetFeaturesKHR(VkPhysicalDevicePortabilitySubsetFeaturesKHR const& requested, VkPhysicalDevicePortabilitySubsetFeaturesKHR const& supported){
    if (requested.constantAlphaColorBlendFactors && !supported.constantAlphaColorBlendFactors) return false;
    if (requested.events && !supported.events) return false;
    if (requested.imageViewFormatReinterpretation && !supported.imageViewFormatReinterpretation) return false;
    if (requested.imageViewFormatSwizzle && !supported.imageViewFormatSwizzle) return false;
    if (requested.imageView2DOn3DImage && !supported.imageView2DOn3DImage) return false;
    if (requested.multisampleArrayImage && !supported.multisampleArrayImage) return false;
    if (requested.mutableComparisonSamplers && !supported.mutableComparisonSamplers) return false;
    if (requested.pointPolygons && !supported.pointPolygons) return false;
    if (requested.samplerMipLodBias && !supported.samplerMipLodBias) return false;
    if (requested.separateStencilMaskRef && !supported.separateStencilMaskRef) return false;
    if (requested.shaderSampleRateInterpolationFunctions && !supported.shaderSampleRateInterpolationFunctions) return false;
    if (requested.tessellationIsolines && !supported.tessellationIsolines) return false;
    if (requested.tessellationPointMode && !supported.tessellationPointMode) return false;
    if (requested.triangleFans && !supported.triangleFans) return false;
    if (requested.vertexAttributeAccessBeyondStride && !supported.vertexAttributeAccessBeyondStride) return false;
    return true;
}
inline void merge_VkPhysicalDevicePortabilitySubsetFeaturesKHR(VkPhysicalDevicePortabilitySubsetFeaturesKHR const& dest, VkPhysicalDevicePortabilitySubsetFeaturesKHR const& to_add){
    dest.constantAlphaColorBlendFactors = dest.constantAlphaColorBlendFactors || to_add.constantAlphaColorBlendFactors;
    dest.events = dest.events || to_add.events;
    dest.imageViewFormatReinterpretation = dest.imageViewFormatReinterpretation || to_add.imageViewFormatReinterpretation;
    dest.imageViewFormatSwizzle = dest.imageViewFormatSwizzle || to_add.imageViewFormatSwizzle;
    dest.imageView2DOn3DImage = dest.imageView2DOn3DImage || to_add.imageView2DOn3DImage;
    dest.multisampleArrayImage = dest.multisampleArrayImage || to_add.multisampleArrayImage;
    dest.mutableComparisonSamplers = dest.mutableComparisonSamplers || to_add.mutableComparisonSamplers;
    dest.pointPolygons = dest.pointPolygons || to_add.pointPolygons;
    dest.samplerMipLodBias = dest.samplerMipLodBias || to_add.samplerMipLodBias;
    dest.separateStencilMaskRef = dest.separateStencilMaskRef || to_add.separateStencilMaskRef;
    dest.shaderSampleRateInterpolationFunctions = dest.shaderSampleRateInterpolationFunctions || to_add.shaderSampleRateInterpolationFunctions;
    dest.tessellationIsolines = dest.tessellationIsolines || to_add.tessellationIsolines;
    dest.tessellationPointMode = dest.tessellationPointMode || to_add.tessellationPointMode;
    dest.triangleFans = dest.triangleFans || to_add.triangleFans;
    dest.vertexAttributeAccessBeyondStride = dest.vertexAttributeAccessBeyondStride || to_add.vertexAttributeAccessBeyondStride;
}
#endif
#if (defined(VK_EXT_4444_formats))
inline bool compare_VkPhysicalDevice4444FormatsFeaturesEXT(VkPhysicalDevice4444FormatsFeaturesEXT const& requested, VkPhysicalDevice4444FormatsFeaturesEXT const& supported){
    if (requested.formatA4R4G4B4 && !supported.formatA4R4G4B4) return false;
    if (requested.formatA4B4G4R4 && !supported.formatA4B4G4R4) return false;
    return true;
}
inline void merge_VkPhysicalDevice4444FormatsFeaturesEXT(VkPhysicalDevice4444FormatsFeaturesEXT const& dest, VkPhysicalDevice4444FormatsFeaturesEXT const& to_add){
    dest.formatA4R4G4B4 = dest.formatA4R4G4B4 || to_add.formatA4R4G4B4;
    dest.formatA4B4G4R4 = dest.formatA4B4G4R4 || to_add.formatA4B4G4R4;
}
#endif
#if (defined(VK_HUAWEI_subpass_shading))
inline bool compare_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI const& requested, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI const& supported){
    if (requested.subpassShading && !supported.subpassShading) return false;
    return true;
}
inline void merge_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI const& dest, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI const& to_add){
    dest.subpassShading = dest.subpassShading || to_add.subpassShading;
}
#endif
#if (defined(VK_HUAWEI_cluster_culling_shader))
inline bool compare_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI const& requested, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI const& supported){
    if (requested.clustercullingShader && !supported.clustercullingShader) return false;
    if (requested.multiviewClusterCullingShader && !supported.multiviewClusterCullingShader) return false;
    return true;
}
inline void merge_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI const& dest, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI const& to_add){
    dest.clustercullingShader = dest.clustercullingShader || to_add.clustercullingShader;
    dest.multiviewClusterCullingShader = dest.multiviewClusterCullingShader || to_add.multiviewClusterCullingShader;
}
#endif
#if (defined(VK_EXT_shader_image_atomic_int64))
inline bool compare_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT const& requested, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT const& supported){
    if (requested.shaderImageInt64Atomics && !supported.shaderImageInt64Atomics) return false;
    if (requested.sparseImageInt64Atomics && !supported.sparseImageInt64Atomics) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT const& dest, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT const& to_add){
    dest.shaderImageInt64Atomics = dest.shaderImageInt64Atomics || to_add.shaderImageInt64Atomics;
    dest.sparseImageInt64Atomics = dest.sparseImageInt64Atomics || to_add.sparseImageInt64Atomics;
}
#endif
#if (defined(VK_KHR_fragment_shading_rate))
inline bool compare_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(VkPhysicalDeviceFragmentShadingRateFeaturesKHR const& requested, VkPhysicalDeviceFragmentShadingRateFeaturesKHR const& supported){
    if (requested.pipelineFragmentShadingRate && !supported.pipelineFragmentShadingRate) return false;
    if (requested.primitiveFragmentShadingRate && !supported.primitiveFragmentShadingRate) return false;
    if (requested.attachmentFragmentShadingRate && !supported.attachmentFragmentShadingRate) return false;
    return true;
}
inline void merge_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(VkPhysicalDeviceFragmentShadingRateFeaturesKHR const& dest, VkPhysicalDeviceFragmentShadingRateFeaturesKHR const& to_add){
    dest.pipelineFragmentShadingRate = dest.pipelineFragmentShadingRate || to_add.pipelineFragmentShadingRate;
    dest.primitiveFragmentShadingRate = dest.primitiveFragmentShadingRate || to_add.primitiveFragmentShadingRate;
    dest.attachmentFragmentShadingRate = dest.attachmentFragmentShadingRate || to_add.attachmentFragmentShadingRate;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceShaderTerminateInvocationFeatures(VkPhysicalDeviceShaderTerminateInvocationFeatures const& requested, VkPhysicalDeviceShaderTerminateInvocationFeatures const& supported){
    if (requested.shaderTerminateInvocation && !supported.shaderTerminateInvocation) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderTerminateInvocationFeatures(VkPhysicalDeviceShaderTerminateInvocationFeatures const& dest, VkPhysicalDeviceShaderTerminateInvocationFeatures const& to_add){
    dest.shaderTerminateInvocation = dest.shaderTerminateInvocation || to_add.shaderTerminateInvocation;
}
#endif
#if (defined(VK_NV_fragment_shading_rate_enums))
inline bool compare_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV const& requested, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV const& supported){
    if (requested.fragmentShadingRateEnums && !supported.fragmentShadingRateEnums) return false;
    if (requested.supersampleFragmentShadingRates && !supported.supersampleFragmentShadingRates) return false;
    if (requested.noInvocationFragmentShadingRates && !supported.noInvocationFragmentShadingRates) return false;
    return true;
}
inline void merge_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV const& dest, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV const& to_add){
    dest.fragmentShadingRateEnums = dest.fragmentShadingRateEnums || to_add.fragmentShadingRateEnums;
    dest.supersampleFragmentShadingRates = dest.supersampleFragmentShadingRates || to_add.supersampleFragmentShadingRates;
    dest.noInvocationFragmentShadingRates = dest.noInvocationFragmentShadingRates || to_add.noInvocationFragmentShadingRates;
}
#endif
#if (defined(VK_EXT_image_2d_view_of_3d))
inline bool compare_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT const& requested, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT const& supported){
    if (requested.image2DViewOf3D && !supported.image2DViewOf3D) return false;
    if (requested.sampler2DViewOf3D && !supported.sampler2DViewOf3D) return false;
    return true;
}
inline void merge_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT const& dest, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT const& to_add){
    dest.image2DViewOf3D = dest.image2DViewOf3D || to_add.image2DViewOf3D;
    dest.sampler2DViewOf3D = dest.sampler2DViewOf3D || to_add.sampler2DViewOf3D;
}
#endif
#if (defined(VK_EXT_image_sliced_view_of_3d))
inline bool compare_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT const& requested, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT const& supported){
    if (requested.imageSlicedViewOf3D && !supported.imageSlicedViewOf3D) return false;
    return true;
}
inline void merge_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT const& dest, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT const& to_add){
    dest.imageSlicedViewOf3D = dest.imageSlicedViewOf3D || to_add.imageSlicedViewOf3D;
}
#endif
#if (defined(VK_EXT_attachment_feedback_loop_dynamic_state))
inline bool compare_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT const& requested, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT const& supported){
    if (requested.attachmentFeedbackLoopDynamicState && !supported.attachmentFeedbackLoopDynamicState) return false;
    return true;
}
inline void merge_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT const& dest, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT const& to_add){
    dest.attachmentFeedbackLoopDynamicState = dest.attachmentFeedbackLoopDynamicState || to_add.attachmentFeedbackLoopDynamicState;
}
#endif
#if (defined(VK_EXT_legacy_vertex_attributes))
inline bool compare_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT(VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT const& requested, VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT const& supported){
    if (requested.legacyVertexAttributes && !supported.legacyVertexAttributes) return false;
    return true;
}
inline void merge_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT(VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT const& dest, VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT const& to_add){
    dest.legacyVertexAttributes = dest.legacyVertexAttributes || to_add.legacyVertexAttributes;
}
#endif
#if (defined(VK_EXT_mutable_descriptor_type))
inline bool compare_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT const& requested, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT const& supported){
    if (requested.mutableDescriptorType && !supported.mutableDescriptorType) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT const& dest, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT const& to_add){
    dest.mutableDescriptorType = dest.mutableDescriptorType || to_add.mutableDescriptorType;
}
#endif
#if (defined(VK_EXT_depth_clip_control))
inline bool compare_VkPhysicalDeviceDepthClipControlFeaturesEXT(VkPhysicalDeviceDepthClipControlFeaturesEXT const& requested, VkPhysicalDeviceDepthClipControlFeaturesEXT const& supported){
    if (requested.depthClipControl && !supported.depthClipControl) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDepthClipControlFeaturesEXT(VkPhysicalDeviceDepthClipControlFeaturesEXT const& dest, VkPhysicalDeviceDepthClipControlFeaturesEXT const& to_add){
    dest.depthClipControl = dest.depthClipControl || to_add.depthClipControl;
}
#endif
#if (defined(VK_EXT_vertex_input_dynamic_state))
inline bool compare_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT const& requested, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT const& supported){
    if (requested.vertexInputDynamicState && !supported.vertexInputDynamicState) return false;
    return true;
}
inline void merge_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT const& dest, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT const& to_add){
    dest.vertexInputDynamicState = dest.vertexInputDynamicState || to_add.vertexInputDynamicState;
}
#endif
#if (defined(VK_NV_external_memory_rdma))
inline bool compare_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV const& requested, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV const& supported){
    if (requested.externalMemoryRDMA && !supported.externalMemoryRDMA) return false;
    return true;
}
inline void merge_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV const& dest, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV const& to_add){
    dest.externalMemoryRDMA = dest.externalMemoryRDMA || to_add.externalMemoryRDMA;
}
#endif
#if (defined(VK_KHR_shader_relaxed_extended_instruction))
inline bool compare_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR(VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR const& requested, VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR const& supported){
    if (requested.shaderRelaxedExtendedInstruction && !supported.shaderRelaxedExtendedInstruction) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR(VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR const& dest, VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR const& to_add){
    dest.shaderRelaxedExtendedInstruction = dest.shaderRelaxedExtendedInstruction || to_add.shaderRelaxedExtendedInstruction;
}
#endif
#if (defined(VK_EXT_color_write_enable))
inline bool compare_VkPhysicalDeviceColorWriteEnableFeaturesEXT(VkPhysicalDeviceColorWriteEnableFeaturesEXT const& requested, VkPhysicalDeviceColorWriteEnableFeaturesEXT const& supported){
    if (requested.colorWriteEnable && !supported.colorWriteEnable) return false;
    return true;
}
inline void merge_VkPhysicalDeviceColorWriteEnableFeaturesEXT(VkPhysicalDeviceColorWriteEnableFeaturesEXT const& dest, VkPhysicalDeviceColorWriteEnableFeaturesEXT const& to_add){
    dest.colorWriteEnable = dest.colorWriteEnable || to_add.colorWriteEnable;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceSynchronization2Features(VkPhysicalDeviceSynchronization2Features const& requested, VkPhysicalDeviceSynchronization2Features const& supported){
    if (requested.synchronization2 && !supported.synchronization2) return false;
    return true;
}
inline void merge_VkPhysicalDeviceSynchronization2Features(VkPhysicalDeviceSynchronization2Features const& dest, VkPhysicalDeviceSynchronization2Features const& to_add){
    dest.synchronization2 = dest.synchronization2 || to_add.synchronization2;
}
#endif
#if (defined(VK_EXT_host_image_copy))
inline bool compare_VkPhysicalDeviceHostImageCopyFeaturesEXT(VkPhysicalDeviceHostImageCopyFeaturesEXT const& requested, VkPhysicalDeviceHostImageCopyFeaturesEXT const& supported){
    if (requested.hostImageCopy && !supported.hostImageCopy) return false;
    return true;
}
inline void merge_VkPhysicalDeviceHostImageCopyFeaturesEXT(VkPhysicalDeviceHostImageCopyFeaturesEXT const& dest, VkPhysicalDeviceHostImageCopyFeaturesEXT const& to_add){
    dest.hostImageCopy = dest.hostImageCopy || to_add.hostImageCopy;
}
#endif
#if (defined(VKSC_VERSION_1_0))
inline bool compare_VkPhysicalDeviceVulkanSC10Features(VkPhysicalDeviceVulkanSC10Features const& requested, VkPhysicalDeviceVulkanSC10Features const& supported){
    if (requested.shaderAtomicInstructions && !supported.shaderAtomicInstructions) return false;
    return true;
}
inline void merge_VkPhysicalDeviceVulkanSC10Features(VkPhysicalDeviceVulkanSC10Features const& dest, VkPhysicalDeviceVulkanSC10Features const& to_add){
    dest.shaderAtomicInstructions = dest.shaderAtomicInstructions || to_add.shaderAtomicInstructions;
}
#endif
#if (defined(VK_EXT_primitives_generated_query))
inline bool compare_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT const& requested, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT const& supported){
    if (requested.primitivesGeneratedQuery && !supported.primitivesGeneratedQuery) return false;
    if (requested.primitivesGeneratedQueryWithRasterizerDiscard && !supported.primitivesGeneratedQueryWithRasterizerDiscard) return false;
    if (requested.primitivesGeneratedQueryWithNonZeroStreams && !supported.primitivesGeneratedQueryWithNonZeroStreams) return false;
    return true;
}
inline void merge_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT const& dest, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT const& to_add){
    dest.primitivesGeneratedQuery = dest.primitivesGeneratedQuery || to_add.primitivesGeneratedQuery;
    dest.primitivesGeneratedQueryWithRasterizerDiscard = dest.primitivesGeneratedQueryWithRasterizerDiscard || to_add.primitivesGeneratedQueryWithRasterizerDiscard;
    dest.primitivesGeneratedQueryWithNonZeroStreams = dest.primitivesGeneratedQueryWithNonZeroStreams || to_add.primitivesGeneratedQueryWithNonZeroStreams;
}
#endif
#if (defined(VK_EXT_legacy_dithering))
inline bool compare_VkPhysicalDeviceLegacyDitheringFeaturesEXT(VkPhysicalDeviceLegacyDitheringFeaturesEXT const& requested, VkPhysicalDeviceLegacyDitheringFeaturesEXT const& supported){
    if (requested.legacyDithering && !supported.legacyDithering) return false;
    return true;
}
inline void merge_VkPhysicalDeviceLegacyDitheringFeaturesEXT(VkPhysicalDeviceLegacyDitheringFeaturesEXT const& dest, VkPhysicalDeviceLegacyDitheringFeaturesEXT const& to_add){
    dest.legacyDithering = dest.legacyDithering || to_add.legacyDithering;
}
#endif
#if (defined(VK_EXT_multisampled_render_to_single_sampled))
inline bool compare_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT const& requested, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT const& supported){
    if (requested.multisampledRenderToSingleSampled && !supported.multisampledRenderToSingleSampled) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT const& dest, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT const& to_add){
    dest.multisampledRenderToSingleSampled = dest.multisampledRenderToSingleSampled || to_add.multisampledRenderToSingleSampled;
}
#endif
#if (defined(VK_EXT_pipeline_protected_access))
inline bool compare_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT const& requested, VkPhysicalDevicePipelineProtectedAccessFeaturesEXT const& supported){
    if (requested.pipelineProtectedAccess && !supported.pipelineProtectedAccess) return false;
    return true;
}
inline void merge_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT const& dest, VkPhysicalDevicePipelineProtectedAccessFeaturesEXT const& to_add){
    dest.pipelineProtectedAccess = dest.pipelineProtectedAccess || to_add.pipelineProtectedAccess;
}
#endif
#if (defined(VK_KHR_video_maintenance1))
inline bool compare_VkPhysicalDeviceVideoMaintenance1FeaturesKHR(VkPhysicalDeviceVideoMaintenance1FeaturesKHR const& requested, VkPhysicalDeviceVideoMaintenance1FeaturesKHR const& supported){
    if (requested.videoMaintenance1 && !supported.videoMaintenance1) return false;
    return true;
}
inline void merge_VkPhysicalDeviceVideoMaintenance1FeaturesKHR(VkPhysicalDeviceVideoMaintenance1FeaturesKHR const& dest, VkPhysicalDeviceVideoMaintenance1FeaturesKHR const& to_add){
    dest.videoMaintenance1 = dest.videoMaintenance1 || to_add.videoMaintenance1;
}
#endif
#if (defined(VK_NV_inherited_viewport_scissor))
inline bool compare_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(VkPhysicalDeviceInheritedViewportScissorFeaturesNV const& requested, VkPhysicalDeviceInheritedViewportScissorFeaturesNV const& supported){
    if (requested.inheritedViewportScissor2D && !supported.inheritedViewportScissor2D) return false;
    return true;
}
inline void merge_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(VkPhysicalDeviceInheritedViewportScissorFeaturesNV const& dest, VkPhysicalDeviceInheritedViewportScissorFeaturesNV const& to_add){
    dest.inheritedViewportScissor2D = dest.inheritedViewportScissor2D || to_add.inheritedViewportScissor2D;
}
#endif
#if (defined(VK_EXT_ycbcr_2plane_444_formats))
inline bool compare_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT const& requested, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT const& supported){
    if (requested.ycbcr2plane444Formats && !supported.ycbcr2plane444Formats) return false;
    return true;
}
inline void merge_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT const& dest, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT const& to_add){
    dest.ycbcr2plane444Formats = dest.ycbcr2plane444Formats || to_add.ycbcr2plane444Formats;
}
#endif
#if (defined(VK_EXT_provoking_vertex))
inline bool compare_VkPhysicalDeviceProvokingVertexFeaturesEXT(VkPhysicalDeviceProvokingVertexFeaturesEXT const& requested, VkPhysicalDeviceProvokingVertexFeaturesEXT const& supported){
    if (requested.provokingVertexLast && !supported.provokingVertexLast) return false;
    if (requested.transformFeedbackPreservesProvokingVertex && !supported.transformFeedbackPreservesProvokingVertex) return false;
    return true;
}
inline void merge_VkPhysicalDeviceProvokingVertexFeaturesEXT(VkPhysicalDeviceProvokingVertexFeaturesEXT const& dest, VkPhysicalDeviceProvokingVertexFeaturesEXT const& to_add){
    dest.provokingVertexLast = dest.provokingVertexLast || to_add.provokingVertexLast;
    dest.transformFeedbackPreservesProvokingVertex = dest.transformFeedbackPreservesProvokingVertex || to_add.transformFeedbackPreservesProvokingVertex;
}
#endif
#if (defined(VK_EXT_descriptor_buffer))
inline bool compare_VkPhysicalDeviceDescriptorBufferFeaturesEXT(VkPhysicalDeviceDescriptorBufferFeaturesEXT const& requested, VkPhysicalDeviceDescriptorBufferFeaturesEXT const& supported){
    if (requested.descriptorBuffer && !supported.descriptorBuffer) return false;
    if (requested.descriptorBufferCaptureReplay && !supported.descriptorBufferCaptureReplay) return false;
    if (requested.descriptorBufferImageLayoutIgnored && !supported.descriptorBufferImageLayoutIgnored) return false;
    if (requested.descriptorBufferPushDescriptors && !supported.descriptorBufferPushDescriptors) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDescriptorBufferFeaturesEXT(VkPhysicalDeviceDescriptorBufferFeaturesEXT const& dest, VkPhysicalDeviceDescriptorBufferFeaturesEXT const& to_add){
    dest.descriptorBuffer = dest.descriptorBuffer || to_add.descriptorBuffer;
    dest.descriptorBufferCaptureReplay = dest.descriptorBufferCaptureReplay || to_add.descriptorBufferCaptureReplay;
    dest.descriptorBufferImageLayoutIgnored = dest.descriptorBufferImageLayoutIgnored || to_add.descriptorBufferImageLayoutIgnored;
    dest.descriptorBufferPushDescriptors = dest.descriptorBufferPushDescriptors || to_add.descriptorBufferPushDescriptors;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceShaderIntegerDotProductFeatures(VkPhysicalDeviceShaderIntegerDotProductFeatures const& requested, VkPhysicalDeviceShaderIntegerDotProductFeatures const& supported){
    if (requested.shaderIntegerDotProduct && !supported.shaderIntegerDotProduct) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderIntegerDotProductFeatures(VkPhysicalDeviceShaderIntegerDotProductFeatures const& dest, VkPhysicalDeviceShaderIntegerDotProductFeatures const& to_add){
    dest.shaderIntegerDotProduct = dest.shaderIntegerDotProduct || to_add.shaderIntegerDotProduct;
}
#endif
#if (defined(VK_KHR_fragment_shader_barycentric))
inline bool compare_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR const& requested, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR const& supported){
    if (requested.fragmentShaderBarycentric && !supported.fragmentShaderBarycentric) return false;
    return true;
}
inline void merge_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR const& dest, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR const& to_add){
    dest.fragmentShaderBarycentric = dest.fragmentShaderBarycentric || to_add.fragmentShaderBarycentric;
}
#endif
#if (defined(VK_NV_ray_tracing_motion_blur))
inline bool compare_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV const& requested, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV const& supported){
    if (requested.rayTracingMotionBlur && !supported.rayTracingMotionBlur) return false;
    if (requested.rayTracingMotionBlurPipelineTraceRaysIndirect && !supported.rayTracingMotionBlurPipelineTraceRaysIndirect) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV const& dest, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV const& to_add){
    dest.rayTracingMotionBlur = dest.rayTracingMotionBlur || to_add.rayTracingMotionBlur;
    dest.rayTracingMotionBlurPipelineTraceRaysIndirect = dest.rayTracingMotionBlurPipelineTraceRaysIndirect || to_add.rayTracingMotionBlurPipelineTraceRaysIndirect;
}
#endif
#if (defined(VK_NV_ray_tracing_validation))
inline bool compare_VkPhysicalDeviceRayTracingValidationFeaturesNV(VkPhysicalDeviceRayTracingValidationFeaturesNV const& requested, VkPhysicalDeviceRayTracingValidationFeaturesNV const& supported){
    if (requested.rayTracingValidation && !supported.rayTracingValidation) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRayTracingValidationFeaturesNV(VkPhysicalDeviceRayTracingValidationFeaturesNV const& dest, VkPhysicalDeviceRayTracingValidationFeaturesNV const& to_add){
    dest.rayTracingValidation = dest.rayTracingValidation || to_add.rayTracingValidation;
}
#endif
#if (defined(VK_EXT_rgba10x6_formats))
inline bool compare_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT const& requested, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT const& supported){
    if (requested.formatRgba10x6WithoutYCbCrSampler && !supported.formatRgba10x6WithoutYCbCrSampler) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT const& dest, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT const& to_add){
    dest.formatRgba10x6WithoutYCbCrSampler = dest.formatRgba10x6WithoutYCbCrSampler || to_add.formatRgba10x6WithoutYCbCrSampler;
}
#endif
#if (defined(VK_VERSION_1_3))
inline bool compare_VkPhysicalDeviceDynamicRenderingFeatures(VkPhysicalDeviceDynamicRenderingFeatures const& requested, VkPhysicalDeviceDynamicRenderingFeatures const& supported){
    if (requested.dynamicRendering && !supported.dynamicRendering) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDynamicRenderingFeatures(VkPhysicalDeviceDynamicRenderingFeatures const& dest, VkPhysicalDeviceDynamicRenderingFeatures const& to_add){
    dest.dynamicRendering = dest.dynamicRendering || to_add.dynamicRendering;
}
#endif
#if (defined(VK_EXT_image_view_min_lod))
inline bool compare_VkPhysicalDeviceImageViewMinLodFeaturesEXT(VkPhysicalDeviceImageViewMinLodFeaturesEXT const& requested, VkPhysicalDeviceImageViewMinLodFeaturesEXT const& supported){
    if (requested.minLod && !supported.minLod) return false;
    return true;
}
inline void merge_VkPhysicalDeviceImageViewMinLodFeaturesEXT(VkPhysicalDeviceImageViewMinLodFeaturesEXT const& dest, VkPhysicalDeviceImageViewMinLodFeaturesEXT const& to_add){
    dest.minLod = dest.minLod || to_add.minLod;
}
#endif
#if (defined(VK_EXT_rasterization_order_attachment_access))
inline bool compare_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT const& requested, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT const& supported){
    if (requested.rasterizationOrderColorAttachmentAccess && !supported.rasterizationOrderColorAttachmentAccess) return false;
    if (requested.rasterizationOrderDepthAttachmentAccess && !supported.rasterizationOrderDepthAttachmentAccess) return false;
    if (requested.rasterizationOrderStencilAttachmentAccess && !supported.rasterizationOrderStencilAttachmentAccess) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT const& dest, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT const& to_add){
    dest.rasterizationOrderColorAttachmentAccess = dest.rasterizationOrderColorAttachmentAccess || to_add.rasterizationOrderColorAttachmentAccess;
    dest.rasterizationOrderDepthAttachmentAccess = dest.rasterizationOrderDepthAttachmentAccess || to_add.rasterizationOrderDepthAttachmentAccess;
    dest.rasterizationOrderStencilAttachmentAccess = dest.rasterizationOrderStencilAttachmentAccess || to_add.rasterizationOrderStencilAttachmentAccess;
}
#endif
#if (defined(VK_NV_linear_color_attachment))
inline bool compare_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(VkPhysicalDeviceLinearColorAttachmentFeaturesNV const& requested, VkPhysicalDeviceLinearColorAttachmentFeaturesNV const& supported){
    if (requested.linearColorAttachment && !supported.linearColorAttachment) return false;
    return true;
}
inline void merge_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(VkPhysicalDeviceLinearColorAttachmentFeaturesNV const& dest, VkPhysicalDeviceLinearColorAttachmentFeaturesNV const& to_add){
    dest.linearColorAttachment = dest.linearColorAttachment || to_add.linearColorAttachment;
}
#endif
#if (defined(VK_EXT_graphics_pipeline_library))
inline bool compare_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT const& requested, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT const& supported){
    if (requested.graphicsPipelineLibrary && !supported.graphicsPipelineLibrary) return false;
    return true;
}
inline void merge_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT const& dest, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT const& to_add){
    dest.graphicsPipelineLibrary = dest.graphicsPipelineLibrary || to_add.graphicsPipelineLibrary;
}
#endif
#if (defined(VK_VALVE_descriptor_set_host_mapping))
inline bool compare_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE const& requested, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE const& supported){
    if (requested.descriptorSetHostMapping && !supported.descriptorSetHostMapping) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE const& dest, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE const& to_add){
    dest.descriptorSetHostMapping = dest.descriptorSetHostMapping || to_add.descriptorSetHostMapping;
}
#endif
#if (defined(VK_EXT_nested_command_buffer))
inline bool compare_VkPhysicalDeviceNestedCommandBufferFeaturesEXT(VkPhysicalDeviceNestedCommandBufferFeaturesEXT const& requested, VkPhysicalDeviceNestedCommandBufferFeaturesEXT const& supported){
    if (requested.nestedCommandBuffer && !supported.nestedCommandBuffer) return false;
    if (requested.nestedCommandBufferRendering && !supported.nestedCommandBufferRendering) return false;
    if (requested.nestedCommandBufferSimultaneousUse && !supported.nestedCommandBufferSimultaneousUse) return false;
    return true;
}
inline void merge_VkPhysicalDeviceNestedCommandBufferFeaturesEXT(VkPhysicalDeviceNestedCommandBufferFeaturesEXT const& dest, VkPhysicalDeviceNestedCommandBufferFeaturesEXT const& to_add){
    dest.nestedCommandBuffer = dest.nestedCommandBuffer || to_add.nestedCommandBuffer;
    dest.nestedCommandBufferRendering = dest.nestedCommandBufferRendering || to_add.nestedCommandBufferRendering;
    dest.nestedCommandBufferSimultaneousUse = dest.nestedCommandBufferSimultaneousUse || to_add.nestedCommandBufferSimultaneousUse;
}
#endif
#if (defined(VK_EXT_shader_module_identifier))
inline bool compare_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT const& requested, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT const& supported){
    if (requested.shaderModuleIdentifier && !supported.shaderModuleIdentifier) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT const& dest, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT const& to_add){
    dest.shaderModuleIdentifier = dest.shaderModuleIdentifier || to_add.shaderModuleIdentifier;
}
#endif
#if (defined(VK_EXT_image_compression_control))
inline bool compare_VkPhysicalDeviceImageCompressionControlFeaturesEXT(VkPhysicalDeviceImageCompressionControlFeaturesEXT const& requested, VkPhysicalDeviceImageCompressionControlFeaturesEXT const& supported){
    if (requested.imageCompressionControl && !supported.imageCompressionControl) return false;
    return true;
}
inline void merge_VkPhysicalDeviceImageCompressionControlFeaturesEXT(VkPhysicalDeviceImageCompressionControlFeaturesEXT const& dest, VkPhysicalDeviceImageCompressionControlFeaturesEXT const& to_add){
    dest.imageCompressionControl = dest.imageCompressionControl || to_add.imageCompressionControl;
}
#endif
#if (defined(VK_EXT_image_compression_control_swapchain))
inline bool compare_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT const& requested, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT const& supported){
    if (requested.imageCompressionControlSwapchain && !supported.imageCompressionControlSwapchain) return false;
    return true;
}
inline void merge_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT const& dest, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT const& to_add){
    dest.imageCompressionControlSwapchain = dest.imageCompressionControlSwapchain || to_add.imageCompressionControlSwapchain;
}
#endif
#if (defined(VK_EXT_subpass_merge_feedback))
inline bool compare_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT const& requested, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT const& supported){
    if (requested.subpassMergeFeedback && !supported.subpassMergeFeedback) return false;
    return true;
}
inline void merge_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT const& dest, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT const& to_add){
    dest.subpassMergeFeedback = dest.subpassMergeFeedback || to_add.subpassMergeFeedback;
}
#endif
#if (defined(VK_EXT_opacity_micromap))
inline bool compare_VkPhysicalDeviceOpacityMicromapFeaturesEXT(VkPhysicalDeviceOpacityMicromapFeaturesEXT const& requested, VkPhysicalDeviceOpacityMicromapFeaturesEXT const& supported){
    if (requested.micromap && !supported.micromap) return false;
    if (requested.micromapCaptureReplay && !supported.micromapCaptureReplay) return false;
    if (requested.micromapHostCommands && !supported.micromapHostCommands) return false;
    return true;
}
inline void merge_VkPhysicalDeviceOpacityMicromapFeaturesEXT(VkPhysicalDeviceOpacityMicromapFeaturesEXT const& dest, VkPhysicalDeviceOpacityMicromapFeaturesEXT const& to_add){
    dest.micromap = dest.micromap || to_add.micromap;
    dest.micromapCaptureReplay = dest.micromapCaptureReplay || to_add.micromapCaptureReplay;
    dest.micromapHostCommands = dest.micromapHostCommands || to_add.micromapHostCommands;
}
#endif
#if (defined(VK_NV_displacement_micromap))
inline bool compare_VkPhysicalDeviceDisplacementMicromapFeaturesNV(VkPhysicalDeviceDisplacementMicromapFeaturesNV const& requested, VkPhysicalDeviceDisplacementMicromapFeaturesNV const& supported){
    if (requested.displacementMicromap && !supported.displacementMicromap) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDisplacementMicromapFeaturesNV(VkPhysicalDeviceDisplacementMicromapFeaturesNV const& dest, VkPhysicalDeviceDisplacementMicromapFeaturesNV const& to_add){
    dest.displacementMicromap = dest.displacementMicromap || to_add.displacementMicromap;
}
#endif
#if (defined(VK_EXT_pipeline_properties))
inline bool compare_VkPhysicalDevicePipelinePropertiesFeaturesEXT(VkPhysicalDevicePipelinePropertiesFeaturesEXT const& requested, VkPhysicalDevicePipelinePropertiesFeaturesEXT const& supported){
    if (requested.pipelinePropertiesIdentifier && !supported.pipelinePropertiesIdentifier) return false;
    return true;
}
inline void merge_VkPhysicalDevicePipelinePropertiesFeaturesEXT(VkPhysicalDevicePipelinePropertiesFeaturesEXT const& dest, VkPhysicalDevicePipelinePropertiesFeaturesEXT const& to_add){
    dest.pipelinePropertiesIdentifier = dest.pipelinePropertiesIdentifier || to_add.pipelinePropertiesIdentifier;
}
#endif
#if (defined(VK_AMD_shader_early_and_late_fragment_tests))
inline bool compare_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD const& requested, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD const& supported){
    if (requested.shaderEarlyAndLateFragmentTests && !supported.shaderEarlyAndLateFragmentTests) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD const& dest, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD const& to_add){
    dest.shaderEarlyAndLateFragmentTests = dest.shaderEarlyAndLateFragmentTests || to_add.shaderEarlyAndLateFragmentTests;
}
#endif
#if (defined(VK_EXT_non_seamless_cube_map))
inline bool compare_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT const& requested, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT const& supported){
    if (requested.nonSeamlessCubeMap && !supported.nonSeamlessCubeMap) return false;
    return true;
}
inline void merge_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT const& dest, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT const& to_add){
    dest.nonSeamlessCubeMap = dest.nonSeamlessCubeMap || to_add.nonSeamlessCubeMap;
}
#endif
#if (defined(VK_EXT_pipeline_robustness))
inline bool compare_VkPhysicalDevicePipelineRobustnessFeaturesEXT(VkPhysicalDevicePipelineRobustnessFeaturesEXT const& requested, VkPhysicalDevicePipelineRobustnessFeaturesEXT const& supported){
    if (requested.pipelineRobustness && !supported.pipelineRobustness) return false;
    return true;
}
inline void merge_VkPhysicalDevicePipelineRobustnessFeaturesEXT(VkPhysicalDevicePipelineRobustnessFeaturesEXT const& dest, VkPhysicalDevicePipelineRobustnessFeaturesEXT const& to_add){
    dest.pipelineRobustness = dest.pipelineRobustness || to_add.pipelineRobustness;
}
#endif
#if (defined(VK_QCOM_image_processing))
inline bool compare_VkPhysicalDeviceImageProcessingFeaturesQCOM(VkPhysicalDeviceImageProcessingFeaturesQCOM const& requested, VkPhysicalDeviceImageProcessingFeaturesQCOM const& supported){
    if (requested.textureSampleWeighted && !supported.textureSampleWeighted) return false;
    if (requested.textureBoxFilter && !supported.textureBoxFilter) return false;
    if (requested.textureBlockMatch && !supported.textureBlockMatch) return false;
    return true;
}
inline void merge_VkPhysicalDeviceImageProcessingFeaturesQCOM(VkPhysicalDeviceImageProcessingFeaturesQCOM const& dest, VkPhysicalDeviceImageProcessingFeaturesQCOM const& to_add){
    dest.textureSampleWeighted = dest.textureSampleWeighted || to_add.textureSampleWeighted;
    dest.textureBoxFilter = dest.textureBoxFilter || to_add.textureBoxFilter;
    dest.textureBlockMatch = dest.textureBlockMatch || to_add.textureBlockMatch;
}
#endif
#if (defined(VK_QCOM_tile_properties))
inline bool compare_VkPhysicalDeviceTilePropertiesFeaturesQCOM(VkPhysicalDeviceTilePropertiesFeaturesQCOM const& requested, VkPhysicalDeviceTilePropertiesFeaturesQCOM const& supported){
    if (requested.tileProperties && !supported.tileProperties) return false;
    return true;
}
inline void merge_VkPhysicalDeviceTilePropertiesFeaturesQCOM(VkPhysicalDeviceTilePropertiesFeaturesQCOM const& dest, VkPhysicalDeviceTilePropertiesFeaturesQCOM const& to_add){
    dest.tileProperties = dest.tileProperties || to_add.tileProperties;
}
#endif
#if (defined(VK_SEC_amigo_profiling))
inline bool compare_VkPhysicalDeviceAmigoProfilingFeaturesSEC(VkPhysicalDeviceAmigoProfilingFeaturesSEC const& requested, VkPhysicalDeviceAmigoProfilingFeaturesSEC const& supported){
    if (requested.amigoProfiling && !supported.amigoProfiling) return false;
    return true;
}
inline void merge_VkPhysicalDeviceAmigoProfilingFeaturesSEC(VkPhysicalDeviceAmigoProfilingFeaturesSEC const& dest, VkPhysicalDeviceAmigoProfilingFeaturesSEC const& to_add){
    dest.amigoProfiling = dest.amigoProfiling || to_add.amigoProfiling;
}
#endif
#if (defined(VK_EXT_attachment_feedback_loop_layout))
inline bool compare_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT const& requested, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT const& supported){
    if (requested.attachmentFeedbackLoopLayout && !supported.attachmentFeedbackLoopLayout) return false;
    return true;
}
inline void merge_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT const& dest, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT const& to_add){
    dest.attachmentFeedbackLoopLayout = dest.attachmentFeedbackLoopLayout || to_add.attachmentFeedbackLoopLayout;
}
#endif
#if (defined(VK_EXT_depth_clamp_zero_one))
inline bool compare_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT const& requested, VkPhysicalDeviceDepthClampZeroOneFeaturesEXT const& supported){
    if (requested.depthClampZeroOne && !supported.depthClampZeroOne) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT const& dest, VkPhysicalDeviceDepthClampZeroOneFeaturesEXT const& to_add){
    dest.depthClampZeroOne = dest.depthClampZeroOne || to_add.depthClampZeroOne;
}
#endif
#if (defined(VK_EXT_device_address_binding_report))
inline bool compare_VkPhysicalDeviceAddressBindingReportFeaturesEXT(VkPhysicalDeviceAddressBindingReportFeaturesEXT const& requested, VkPhysicalDeviceAddressBindingReportFeaturesEXT const& supported){
    if (requested.reportAddressBinding && !supported.reportAddressBinding) return false;
    return true;
}
inline void merge_VkPhysicalDeviceAddressBindingReportFeaturesEXT(VkPhysicalDeviceAddressBindingReportFeaturesEXT const& dest, VkPhysicalDeviceAddressBindingReportFeaturesEXT const& to_add){
    dest.reportAddressBinding = dest.reportAddressBinding || to_add.reportAddressBinding;
}
#endif
#if (defined(VK_NV_optical_flow))
inline bool compare_VkPhysicalDeviceOpticalFlowFeaturesNV(VkPhysicalDeviceOpticalFlowFeaturesNV const& requested, VkPhysicalDeviceOpticalFlowFeaturesNV const& supported){
    if (requested.opticalFlow && !supported.opticalFlow) return false;
    return true;
}
inline void merge_VkPhysicalDeviceOpticalFlowFeaturesNV(VkPhysicalDeviceOpticalFlowFeaturesNV const& dest, VkPhysicalDeviceOpticalFlowFeaturesNV const& to_add){
    dest.opticalFlow = dest.opticalFlow || to_add.opticalFlow;
}
#endif
#if (defined(VK_EXT_device_fault))
inline bool compare_VkPhysicalDeviceFaultFeaturesEXT(VkPhysicalDeviceFaultFeaturesEXT const& requested, VkPhysicalDeviceFaultFeaturesEXT const& supported){
    if (requested.deviceFault && !supported.deviceFault) return false;
    if (requested.deviceFaultVendorBinary && !supported.deviceFaultVendorBinary) return false;
    return true;
}
inline void merge_VkPhysicalDeviceFaultFeaturesEXT(VkPhysicalDeviceFaultFeaturesEXT const& dest, VkPhysicalDeviceFaultFeaturesEXT const& to_add){
    dest.deviceFault = dest.deviceFault || to_add.deviceFault;
    dest.deviceFaultVendorBinary = dest.deviceFaultVendorBinary || to_add.deviceFaultVendorBinary;
}
#endif
#if (defined(VK_EXT_pipeline_library_group_handles))
inline bool compare_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT const& requested, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT const& supported){
    if (requested.pipelineLibraryGroupHandles && !supported.pipelineLibraryGroupHandles) return false;
    return true;
}
inline void merge_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT const& dest, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT const& to_add){
    dest.pipelineLibraryGroupHandles = dest.pipelineLibraryGroupHandles || to_add.pipelineLibraryGroupHandles;
}
#endif
#if (defined(VK_ARM_shader_core_builtins))
inline bool compare_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM const& requested, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM const& supported){
    if (requested.shaderCoreBuiltins && !supported.shaderCoreBuiltins) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM const& dest, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM const& to_add){
    dest.shaderCoreBuiltins = dest.shaderCoreBuiltins || to_add.shaderCoreBuiltins;
}
#endif
#if (defined(VK_EXT_frame_boundary))
inline bool compare_VkPhysicalDeviceFrameBoundaryFeaturesEXT(VkPhysicalDeviceFrameBoundaryFeaturesEXT const& requested, VkPhysicalDeviceFrameBoundaryFeaturesEXT const& supported){
    if (requested.frameBoundary && !supported.frameBoundary) return false;
    return true;
}
inline void merge_VkPhysicalDeviceFrameBoundaryFeaturesEXT(VkPhysicalDeviceFrameBoundaryFeaturesEXT const& dest, VkPhysicalDeviceFrameBoundaryFeaturesEXT const& to_add){
    dest.frameBoundary = dest.frameBoundary || to_add.frameBoundary;
}
#endif
#if (defined(VK_EXT_dynamic_rendering_unused_attachments))
inline bool compare_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT const& requested, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT const& supported){
    if (requested.dynamicRenderingUnusedAttachments && !supported.dynamicRenderingUnusedAttachments) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT const& dest, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT const& to_add){
    dest.dynamicRenderingUnusedAttachments = dest.dynamicRenderingUnusedAttachments || to_add.dynamicRenderingUnusedAttachments;
}
#endif
#if (defined(VK_EXT_swapchain_maintenance1))
inline bool compare_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT const& requested, VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT const& supported){
    if (requested.swapchainMaintenance1 && !supported.swapchainMaintenance1) return false;
    return true;
}
inline void merge_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT const& dest, VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT const& to_add){
    dest.swapchainMaintenance1 = dest.swapchainMaintenance1 || to_add.swapchainMaintenance1;
}
#endif
#if (defined(VK_EXT_depth_bias_control))
inline bool compare_VkPhysicalDeviceDepthBiasControlFeaturesEXT(VkPhysicalDeviceDepthBiasControlFeaturesEXT const& requested, VkPhysicalDeviceDepthBiasControlFeaturesEXT const& supported){
    if (requested.depthBiasControl && !supported.depthBiasControl) return false;
    if (requested.leastRepresentableValueForceUnormRepresentation && !supported.leastRepresentableValueForceUnormRepresentation) return false;
    if (requested.floatRepresentation && !supported.floatRepresentation) return false;
    if (requested.depthBiasExact && !supported.depthBiasExact) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDepthBiasControlFeaturesEXT(VkPhysicalDeviceDepthBiasControlFeaturesEXT const& dest, VkPhysicalDeviceDepthBiasControlFeaturesEXT const& to_add){
    dest.depthBiasControl = dest.depthBiasControl || to_add.depthBiasControl;
    dest.leastRepresentableValueForceUnormRepresentation = dest.leastRepresentableValueForceUnormRepresentation || to_add.leastRepresentableValueForceUnormRepresentation;
    dest.floatRepresentation = dest.floatRepresentation || to_add.floatRepresentation;
    dest.depthBiasExact = dest.depthBiasExact || to_add.depthBiasExact;
}
#endif
#if (defined(VK_NV_ray_tracing_invocation_reorder))
inline bool compare_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV const& requested, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV const& supported){
    if (requested.rayTracingInvocationReorder && !supported.rayTracingInvocationReorder) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV const& dest, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV const& to_add){
    dest.rayTracingInvocationReorder = dest.rayTracingInvocationReorder || to_add.rayTracingInvocationReorder;
}
#endif
#if (defined(VK_NV_extended_sparse_address_space))
inline bool compare_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV const& requested, VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV const& supported){
    if (requested.extendedSparseAddressSpace && !supported.extendedSparseAddressSpace) return false;
    return true;
}
inline void merge_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV const& dest, VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV const& to_add){
    dest.extendedSparseAddressSpace = dest.extendedSparseAddressSpace || to_add.extendedSparseAddressSpace;
}
#endif
#if (defined(VK_QCOM_multiview_per_view_viewports))
inline bool compare_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM const& requested, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM const& supported){
    if (requested.multiviewPerViewViewports && !supported.multiviewPerViewViewports) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM const& dest, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM const& to_add){
    dest.multiviewPerViewViewports = dest.multiviewPerViewViewports || to_add.multiviewPerViewViewports;
}
#endif
#if (defined(VK_KHR_ray_tracing_position_fetch))
inline bool compare_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR const& requested, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR const& supported){
    if (requested.rayTracingPositionFetch && !supported.rayTracingPositionFetch) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR const& dest, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR const& to_add){
    dest.rayTracingPositionFetch = dest.rayTracingPositionFetch || to_add.rayTracingPositionFetch;
}
#endif
#if (defined(VK_QCOM_multiview_per_view_render_areas))
inline bool compare_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM const& requested, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM const& supported){
    if (requested.multiviewPerViewRenderAreas && !supported.multiviewPerViewRenderAreas) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM const& dest, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM const& to_add){
    dest.multiviewPerViewRenderAreas = dest.multiviewPerViewRenderAreas || to_add.multiviewPerViewRenderAreas;
}
#endif
#if (defined(VK_EXT_shader_object))
inline bool compare_VkPhysicalDeviceShaderObjectFeaturesEXT(VkPhysicalDeviceShaderObjectFeaturesEXT const& requested, VkPhysicalDeviceShaderObjectFeaturesEXT const& supported){
    if (requested.shaderObject && !supported.shaderObject) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderObjectFeaturesEXT(VkPhysicalDeviceShaderObjectFeaturesEXT const& dest, VkPhysicalDeviceShaderObjectFeaturesEXT const& to_add){
    dest.shaderObject = dest.shaderObject || to_add.shaderObject;
}
#endif
#if (defined(VK_EXT_shader_tile_image))
inline bool compare_VkPhysicalDeviceShaderTileImageFeaturesEXT(VkPhysicalDeviceShaderTileImageFeaturesEXT const& requested, VkPhysicalDeviceShaderTileImageFeaturesEXT const& supported){
    if (requested.shaderTileImageColorReadAccess && !supported.shaderTileImageColorReadAccess) return false;
    if (requested.shaderTileImageDepthReadAccess && !supported.shaderTileImageDepthReadAccess) return false;
    if (requested.shaderTileImageStencilReadAccess && !supported.shaderTileImageStencilReadAccess) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderTileImageFeaturesEXT(VkPhysicalDeviceShaderTileImageFeaturesEXT const& dest, VkPhysicalDeviceShaderTileImageFeaturesEXT const& to_add){
    dest.shaderTileImageColorReadAccess = dest.shaderTileImageColorReadAccess || to_add.shaderTileImageColorReadAccess;
    dest.shaderTileImageDepthReadAccess = dest.shaderTileImageDepthReadAccess || to_add.shaderTileImageDepthReadAccess;
    dest.shaderTileImageStencilReadAccess = dest.shaderTileImageStencilReadAccess || to_add.shaderTileImageStencilReadAccess;
}
#endif
#if (defined(VK_QNX_external_memory_screen_buffer))
inline bool compare_VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX const& requested, VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX const& supported){
    if (requested.screenBufferImport && !supported.screenBufferImport) return false;
    return true;
}
inline void merge_VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX(VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX const& dest, VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX const& to_add){
    dest.screenBufferImport = dest.screenBufferImport || to_add.screenBufferImport;
}
#endif
#if (defined(VK_KHR_cooperative_matrix))
inline bool compare_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(VkPhysicalDeviceCooperativeMatrixFeaturesKHR const& requested, VkPhysicalDeviceCooperativeMatrixFeaturesKHR const& supported){
    if (requested.cooperativeMatrix && !supported.cooperativeMatrix) return false;
    if (requested.cooperativeMatrixRobustBufferAccess && !supported.cooperativeMatrixRobustBufferAccess) return false;
    return true;
}
inline void merge_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(VkPhysicalDeviceCooperativeMatrixFeaturesKHR const& dest, VkPhysicalDeviceCooperativeMatrixFeaturesKHR const& to_add){
    dest.cooperativeMatrix = dest.cooperativeMatrix || to_add.cooperativeMatrix;
    dest.cooperativeMatrixRobustBufferAccess = dest.cooperativeMatrixRobustBufferAccess || to_add.cooperativeMatrixRobustBufferAccess;
}
#endif
#if (defined(VK_AMDX_shader_enqueue))
inline bool compare_VkPhysicalDeviceShaderEnqueueFeaturesAMDX(VkPhysicalDeviceShaderEnqueueFeaturesAMDX const& requested, VkPhysicalDeviceShaderEnqueueFeaturesAMDX const& supported){
    if (requested.shaderEnqueue && !supported.shaderEnqueue) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderEnqueueFeaturesAMDX(VkPhysicalDeviceShaderEnqueueFeaturesAMDX const& dest, VkPhysicalDeviceShaderEnqueueFeaturesAMDX const& to_add){
    dest.shaderEnqueue = dest.shaderEnqueue || to_add.shaderEnqueue;
}
#endif
#if (defined(VK_QCOM_filter_cubic_clamp))
inline bool compare_VkPhysicalDeviceCubicClampFeaturesQCOM(VkPhysicalDeviceCubicClampFeaturesQCOM const& requested, VkPhysicalDeviceCubicClampFeaturesQCOM const& supported){
    if (requested.cubicRangeClamp && !supported.cubicRangeClamp) return false;
    return true;
}
inline void merge_VkPhysicalDeviceCubicClampFeaturesQCOM(VkPhysicalDeviceCubicClampFeaturesQCOM const& dest, VkPhysicalDeviceCubicClampFeaturesQCOM const& to_add){
    dest.cubicRangeClamp = dest.cubicRangeClamp || to_add.cubicRangeClamp;
}
#endif
#if (defined(VK_QCOM_ycbcr_degamma))
inline bool compare_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM const& requested, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM const& supported){
    if (requested.ycbcrDegamma && !supported.ycbcrDegamma) return false;
    return true;
}
inline void merge_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM const& dest, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM const& to_add){
    dest.ycbcrDegamma = dest.ycbcrDegamma || to_add.ycbcrDegamma;
}
#endif
#if (defined(VK_QCOM_filter_cubic_weights))
inline bool compare_VkPhysicalDeviceCubicWeightsFeaturesQCOM(VkPhysicalDeviceCubicWeightsFeaturesQCOM const& requested, VkPhysicalDeviceCubicWeightsFeaturesQCOM const& supported){
    if (requested.selectableCubicWeights && !supported.selectableCubicWeights) return false;
    return true;
}
inline void merge_VkPhysicalDeviceCubicWeightsFeaturesQCOM(VkPhysicalDeviceCubicWeightsFeaturesQCOM const& dest, VkPhysicalDeviceCubicWeightsFeaturesQCOM const& to_add){
    dest.selectableCubicWeights = dest.selectableCubicWeights || to_add.selectableCubicWeights;
}
#endif
#if (defined(VK_QCOM_image_processing2))
inline bool compare_VkPhysicalDeviceImageProcessing2FeaturesQCOM(VkPhysicalDeviceImageProcessing2FeaturesQCOM const& requested, VkPhysicalDeviceImageProcessing2FeaturesQCOM const& supported){
    if (requested.textureBlockMatch2 && !supported.textureBlockMatch2) return false;
    return true;
}
inline void merge_VkPhysicalDeviceImageProcessing2FeaturesQCOM(VkPhysicalDeviceImageProcessing2FeaturesQCOM const& dest, VkPhysicalDeviceImageProcessing2FeaturesQCOM const& to_add){
    dest.textureBlockMatch2 = dest.textureBlockMatch2 || to_add.textureBlockMatch2;
}
#endif
#if (defined(VK_NV_descriptor_pool_overallocation))
inline bool compare_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV const& requested, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV const& supported){
    if (requested.descriptorPoolOverallocation && !supported.descriptorPoolOverallocation) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV const& dest, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV const& to_add){
    dest.descriptorPoolOverallocation = dest.descriptorPoolOverallocation || to_add.descriptorPoolOverallocation;
}
#endif
#if (defined(VK_NV_per_stage_descriptor_set))
inline bool compare_VkPhysicalDevicePerStageDescriptorSetFeaturesNV(VkPhysicalDevicePerStageDescriptorSetFeaturesNV const& requested, VkPhysicalDevicePerStageDescriptorSetFeaturesNV const& supported){
    if (requested.perStageDescriptorSet && !supported.perStageDescriptorSet) return false;
    if (requested.dynamicPipelineLayout && !supported.dynamicPipelineLayout) return false;
    return true;
}
inline void merge_VkPhysicalDevicePerStageDescriptorSetFeaturesNV(VkPhysicalDevicePerStageDescriptorSetFeaturesNV const& dest, VkPhysicalDevicePerStageDescriptorSetFeaturesNV const& to_add){
    dest.perStageDescriptorSet = dest.perStageDescriptorSet || to_add.perStageDescriptorSet;
    dest.dynamicPipelineLayout = dest.dynamicPipelineLayout || to_add.dynamicPipelineLayout;
}
#endif
#if (defined(VK_ANDROID_external_format_resolve))
inline bool compare_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID(VkPhysicalDeviceExternalFormatResolveFeaturesANDROID const& requested, VkPhysicalDeviceExternalFormatResolveFeaturesANDROID const& supported){
    if (requested.externalFormatResolve && !supported.externalFormatResolve) return false;
    return true;
}
inline void merge_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID(VkPhysicalDeviceExternalFormatResolveFeaturesANDROID const& dest, VkPhysicalDeviceExternalFormatResolveFeaturesANDROID const& to_add){
    dest.externalFormatResolve = dest.externalFormatResolve || to_add.externalFormatResolve;
}
#endif
#if (defined(VK_NV_cuda_kernel_launch))
inline bool compare_VkPhysicalDeviceCudaKernelLaunchFeaturesNV(VkPhysicalDeviceCudaKernelLaunchFeaturesNV const& requested, VkPhysicalDeviceCudaKernelLaunchFeaturesNV const& supported){
    if (requested.cudaKernelLaunchFeatures && !supported.cudaKernelLaunchFeatures) return false;
    return true;
}
inline void merge_VkPhysicalDeviceCudaKernelLaunchFeaturesNV(VkPhysicalDeviceCudaKernelLaunchFeaturesNV const& dest, VkPhysicalDeviceCudaKernelLaunchFeaturesNV const& to_add){
    dest.cudaKernelLaunchFeatures = dest.cudaKernelLaunchFeatures || to_add.cudaKernelLaunchFeatures;
}
#endif
#if (defined(VK_ARM_scheduling_controls))
inline bool compare_VkPhysicalDeviceSchedulingControlsFeaturesARM(VkPhysicalDeviceSchedulingControlsFeaturesARM const& requested, VkPhysicalDeviceSchedulingControlsFeaturesARM const& supported){
    if (requested.schedulingControls && !supported.schedulingControls) return false;
    return true;
}
inline void merge_VkPhysicalDeviceSchedulingControlsFeaturesARM(VkPhysicalDeviceSchedulingControlsFeaturesARM const& dest, VkPhysicalDeviceSchedulingControlsFeaturesARM const& to_add){
    dest.schedulingControls = dest.schedulingControls || to_add.schedulingControls;
}
#endif
#if (defined(VK_IMG_relaxed_line_rasterization))
inline bool compare_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG(VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG const& requested, VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG const& supported){
    if (requested.relaxedLineRasterization && !supported.relaxedLineRasterization) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG(VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG const& dest, VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG const& to_add){
    dest.relaxedLineRasterization = dest.relaxedLineRasterization || to_add.relaxedLineRasterization;
}
#endif
#if (defined(VK_ARM_render_pass_striped))
inline bool compare_VkPhysicalDeviceRenderPassStripedFeaturesARM(VkPhysicalDeviceRenderPassStripedFeaturesARM const& requested, VkPhysicalDeviceRenderPassStripedFeaturesARM const& supported){
    if (requested.renderPassStriped && !supported.renderPassStriped) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRenderPassStripedFeaturesARM(VkPhysicalDeviceRenderPassStripedFeaturesARM const& dest, VkPhysicalDeviceRenderPassStripedFeaturesARM const& to_add){
    dest.renderPassStriped = dest.renderPassStriped || to_add.renderPassStriped;
}
#endif
#if (defined(VK_KHR_shader_maximal_reconvergence))
inline bool compare_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR const& requested, VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR const& supported){
    if (requested.shaderMaximalReconvergence && !supported.shaderMaximalReconvergence) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR const& dest, VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR const& to_add){
    dest.shaderMaximalReconvergence = dest.shaderMaximalReconvergence || to_add.shaderMaximalReconvergence;
}
#endif
#if (defined(VK_KHR_shader_subgroup_rotate))
inline bool compare_VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR(VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR const& requested, VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR const& supported){
    if (requested.shaderSubgroupRotate && !supported.shaderSubgroupRotate) return false;
    if (requested.shaderSubgroupRotateClustered && !supported.shaderSubgroupRotateClustered) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR(VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR const& dest, VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR const& to_add){
    dest.shaderSubgroupRotate = dest.shaderSubgroupRotate || to_add.shaderSubgroupRotate;
    dest.shaderSubgroupRotateClustered = dest.shaderSubgroupRotateClustered || to_add.shaderSubgroupRotateClustered;
}
#endif
#if (defined(VK_KHR_shader_expect_assume))
inline bool compare_VkPhysicalDeviceShaderExpectAssumeFeaturesKHR(VkPhysicalDeviceShaderExpectAssumeFeaturesKHR const& requested, VkPhysicalDeviceShaderExpectAssumeFeaturesKHR const& supported){
    if (requested.shaderExpectAssume && !supported.shaderExpectAssume) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderExpectAssumeFeaturesKHR(VkPhysicalDeviceShaderExpectAssumeFeaturesKHR const& dest, VkPhysicalDeviceShaderExpectAssumeFeaturesKHR const& to_add){
    dest.shaderExpectAssume = dest.shaderExpectAssume || to_add.shaderExpectAssume;
}
#endif
#if (defined(VK_KHR_shader_float_controls2))
inline bool compare_VkPhysicalDeviceShaderFloatControls2FeaturesKHR(VkPhysicalDeviceShaderFloatControls2FeaturesKHR const& requested, VkPhysicalDeviceShaderFloatControls2FeaturesKHR const& supported){
    if (requested.shaderFloatControls2 && !supported.shaderFloatControls2) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderFloatControls2FeaturesKHR(VkPhysicalDeviceShaderFloatControls2FeaturesKHR const& dest, VkPhysicalDeviceShaderFloatControls2FeaturesKHR const& to_add){
    dest.shaderFloatControls2 = dest.shaderFloatControls2 || to_add.shaderFloatControls2;
}
#endif
#if (defined(VK_KHR_dynamic_rendering_local_read))
inline bool compare_VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR(VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR const& requested, VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR const& supported){
    if (requested.dynamicRenderingLocalRead && !supported.dynamicRenderingLocalRead) return false;
    return true;
}
inline void merge_VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR(VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR const& dest, VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR const& to_add){
    dest.dynamicRenderingLocalRead = dest.dynamicRenderingLocalRead || to_add.dynamicRenderingLocalRead;
}
#endif
#if (defined(VK_KHR_shader_quad_control))
inline bool compare_VkPhysicalDeviceShaderQuadControlFeaturesKHR(VkPhysicalDeviceShaderQuadControlFeaturesKHR const& requested, VkPhysicalDeviceShaderQuadControlFeaturesKHR const& supported){
    if (requested.shaderQuadControl && !supported.shaderQuadControl) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderQuadControlFeaturesKHR(VkPhysicalDeviceShaderQuadControlFeaturesKHR const& dest, VkPhysicalDeviceShaderQuadControlFeaturesKHR const& to_add){
    dest.shaderQuadControl = dest.shaderQuadControl || to_add.shaderQuadControl;
}
#endif
#if (defined(VK_NV_shader_atomic_float16_vector))
inline bool compare_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV const& requested, VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV const& supported){
    if (requested.shaderFloat16VectorAtomics && !supported.shaderFloat16VectorAtomics) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV const& dest, VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV const& to_add){
    dest.shaderFloat16VectorAtomics = dest.shaderFloat16VectorAtomics || to_add.shaderFloat16VectorAtomics;
}
#endif
#if (defined(VK_EXT_map_memory_placed))
inline bool compare_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT const& requested, VkPhysicalDeviceMapMemoryPlacedFeaturesEXT const& supported){
    if (requested.memoryMapPlaced && !supported.memoryMapPlaced) return false;
    if (requested.memoryMapRangePlaced && !supported.memoryMapRangePlaced) return false;
    if (requested.memoryUnmapReserve && !supported.memoryUnmapReserve) return false;
    return true;
}
inline void merge_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT(VkPhysicalDeviceMapMemoryPlacedFeaturesEXT const& dest, VkPhysicalDeviceMapMemoryPlacedFeaturesEXT const& to_add){
    dest.memoryMapPlaced = dest.memoryMapPlaced || to_add.memoryMapPlaced;
    dest.memoryMapRangePlaced = dest.memoryMapRangePlaced || to_add.memoryMapRangePlaced;
    dest.memoryUnmapReserve = dest.memoryUnmapReserve || to_add.memoryUnmapReserve;
}
#endif
#if (defined(VK_NV_raw_access_chains))
inline bool compare_VkPhysicalDeviceRawAccessChainsFeaturesNV(VkPhysicalDeviceRawAccessChainsFeaturesNV const& requested, VkPhysicalDeviceRawAccessChainsFeaturesNV const& supported){
    if (requested.shaderRawAccessChains && !supported.shaderRawAccessChains) return false;
    return true;
}
inline void merge_VkPhysicalDeviceRawAccessChainsFeaturesNV(VkPhysicalDeviceRawAccessChainsFeaturesNV const& dest, VkPhysicalDeviceRawAccessChainsFeaturesNV const& to_add){
    dest.shaderRawAccessChains = dest.shaderRawAccessChains || to_add.shaderRawAccessChains;
}
#endif
#if (defined(VK_MESA_image_alignment_control))
inline bool compare_VkPhysicalDeviceImageAlignmentControlFeaturesMESA(VkPhysicalDeviceImageAlignmentControlFeaturesMESA const& requested, VkPhysicalDeviceImageAlignmentControlFeaturesMESA const& supported){
    if (requested.imageAlignmentControl && !supported.imageAlignmentControl) return false;
    return true;
}
inline void merge_VkPhysicalDeviceImageAlignmentControlFeaturesMESA(VkPhysicalDeviceImageAlignmentControlFeaturesMESA const& dest, VkPhysicalDeviceImageAlignmentControlFeaturesMESA const& to_add){
    dest.imageAlignmentControl = dest.imageAlignmentControl || to_add.imageAlignmentControl;
}
#endif
#if (defined(VK_EXT_shader_replicated_composites))
inline bool compare_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT(VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT const& requested, VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT const& supported){
    if (requested.shaderReplicatedComposites && !supported.shaderReplicatedComposites) return false;
    return true;
}
inline void merge_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT(VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT const& dest, VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT const& to_add){
    dest.shaderReplicatedComposites = dest.shaderReplicatedComposites || to_add.shaderReplicatedComposites;
}
#endif
} // namespace detail
} // namespace vkb