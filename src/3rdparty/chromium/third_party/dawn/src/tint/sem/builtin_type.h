// Copyright 2021 The Tint Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

////////////////////////////////////////////////////////////////////////////////
// File generated by tools/src/cmd/gen
// using the template:
//   src/tint/sem/builtin_type.h.tmpl
//
// Do not modify this file directly
////////////////////////////////////////////////////////////////////////////////

#ifndef SRC_TINT_SEM_BUILTIN_TYPE_H_
#define SRC_TINT_SEM_BUILTIN_TYPE_H_

#include <sstream>
#include <string>

namespace tint::sem {

/// Enumerator of all builtin functions
enum class BuiltinType {
    kNone = -1,
    kAbs,
    kAcos,
    kAcosh,
    kAll,
    kAny,
    kArrayLength,
    kAsin,
    kAsinh,
    kAtan,
    kAtan2,
    kAtanh,
    kCeil,
    kClamp,
    kCos,
    kCosh,
    kCountLeadingZeros,
    kCountOneBits,
    kCountTrailingZeros,
    kCross,
    kDegrees,
    kDeterminant,
    kDistance,
    kDot,
    kDot4I8Packed,
    kDot4U8Packed,
    kDpdx,
    kDpdxCoarse,
    kDpdxFine,
    kDpdy,
    kDpdyCoarse,
    kDpdyFine,
    kExp,
    kExp2,
    kExtractBits,
    kFaceForward,
    kFirstLeadingBit,
    kFirstTrailingBit,
    kFloor,
    kFma,
    kFract,
    kFrexp,
    kFwidth,
    kFwidthCoarse,
    kFwidthFine,
    kInsertBits,
    kInverseSqrt,
    kLdexp,
    kLength,
    kLog,
    kLog2,
    kMax,
    kMin,
    kMix,
    kModf,
    kNormalize,
    kPack2X16Float,
    kPack2X16Snorm,
    kPack2X16Unorm,
    kPack4X8Snorm,
    kPack4X8Unorm,
    kPow,
    kQuantizeToF16,
    kRadians,
    kReflect,
    kRefract,
    kReverseBits,
    kRound,
    kSaturate,
    kSelect,
    kSign,
    kSin,
    kSinh,
    kSmoothstep,
    kSqrt,
    kStep,
    kStorageBarrier,
    kTan,
    kTanh,
    kTranspose,
    kTrunc,
    kUnpack2X16Float,
    kUnpack2X16Snorm,
    kUnpack2X16Unorm,
    kUnpack4X8Snorm,
    kUnpack4X8Unorm,
    kWorkgroupBarrier,
    kWorkgroupUniformLoad,
    kTextureDimensions,
    kTextureGather,
    kTextureGatherCompare,
    kTextureNumLayers,
    kTextureNumLevels,
    kTextureNumSamples,
    kTextureSample,
    kTextureSampleBias,
    kTextureSampleCompare,
    kTextureSampleCompareLevel,
    kTextureSampleGrad,
    kTextureSampleLevel,
    kTextureSampleBaseClampToEdge,
    kTextureStore,
    kTextureLoad,
    kAtomicLoad,
    kAtomicStore,
    kAtomicAdd,
    kAtomicSub,
    kAtomicMax,
    kAtomicMin,
    kAtomicAnd,
    kAtomicOr,
    kAtomicXor,
    kAtomicExchange,
    kAtomicCompareExchangeWeak,
    kTintMaterialize,
};

/// Matches the BuiltinType by name
/// @param name the builtin name to parse
/// @returns the parsed BuiltinType, or BuiltinType::kNone if `name` did not
/// match any builtin.
BuiltinType ParseBuiltinType(const std::string& name);

/// @returns the name of the builtin function type. The spelling, including
/// case, matches the name in the WGSL spec.
const char* str(BuiltinType i);

/// Emits the name of the builtin function type. The spelling, including case,
/// matches the name in the WGSL spec.
std::ostream& operator<<(std::ostream& out, BuiltinType i);

/// All builtin function
constexpr BuiltinType kBuiltinTypes[] = {
    BuiltinType::kAbs,
    BuiltinType::kAcos,
    BuiltinType::kAcosh,
    BuiltinType::kAll,
    BuiltinType::kAny,
    BuiltinType::kArrayLength,
    BuiltinType::kAsin,
    BuiltinType::kAsinh,
    BuiltinType::kAtan,
    BuiltinType::kAtan2,
    BuiltinType::kAtanh,
    BuiltinType::kCeil,
    BuiltinType::kClamp,
    BuiltinType::kCos,
    BuiltinType::kCosh,
    BuiltinType::kCountLeadingZeros,
    BuiltinType::kCountOneBits,
    BuiltinType::kCountTrailingZeros,
    BuiltinType::kCross,
    BuiltinType::kDegrees,
    BuiltinType::kDeterminant,
    BuiltinType::kDistance,
    BuiltinType::kDot,
    BuiltinType::kDot4I8Packed,
    BuiltinType::kDot4U8Packed,
    BuiltinType::kDpdx,
    BuiltinType::kDpdxCoarse,
    BuiltinType::kDpdxFine,
    BuiltinType::kDpdy,
    BuiltinType::kDpdyCoarse,
    BuiltinType::kDpdyFine,
    BuiltinType::kExp,
    BuiltinType::kExp2,
    BuiltinType::kExtractBits,
    BuiltinType::kFaceForward,
    BuiltinType::kFirstLeadingBit,
    BuiltinType::kFirstTrailingBit,
    BuiltinType::kFloor,
    BuiltinType::kFma,
    BuiltinType::kFract,
    BuiltinType::kFrexp,
    BuiltinType::kFwidth,
    BuiltinType::kFwidthCoarse,
    BuiltinType::kFwidthFine,
    BuiltinType::kInsertBits,
    BuiltinType::kInverseSqrt,
    BuiltinType::kLdexp,
    BuiltinType::kLength,
    BuiltinType::kLog,
    BuiltinType::kLog2,
    BuiltinType::kMax,
    BuiltinType::kMin,
    BuiltinType::kMix,
    BuiltinType::kModf,
    BuiltinType::kNormalize,
    BuiltinType::kPack2X16Float,
    BuiltinType::kPack2X16Snorm,
    BuiltinType::kPack2X16Unorm,
    BuiltinType::kPack4X8Snorm,
    BuiltinType::kPack4X8Unorm,
    BuiltinType::kPow,
    BuiltinType::kQuantizeToF16,
    BuiltinType::kRadians,
    BuiltinType::kReflect,
    BuiltinType::kRefract,
    BuiltinType::kReverseBits,
    BuiltinType::kRound,
    BuiltinType::kSaturate,
    BuiltinType::kSelect,
    BuiltinType::kSign,
    BuiltinType::kSin,
    BuiltinType::kSinh,
    BuiltinType::kSmoothstep,
    BuiltinType::kSqrt,
    BuiltinType::kStep,
    BuiltinType::kStorageBarrier,
    BuiltinType::kTan,
    BuiltinType::kTanh,
    BuiltinType::kTranspose,
    BuiltinType::kTrunc,
    BuiltinType::kUnpack2X16Float,
    BuiltinType::kUnpack2X16Snorm,
    BuiltinType::kUnpack2X16Unorm,
    BuiltinType::kUnpack4X8Snorm,
    BuiltinType::kUnpack4X8Unorm,
    BuiltinType::kWorkgroupBarrier,
    BuiltinType::kWorkgroupUniformLoad,
    BuiltinType::kTextureDimensions,
    BuiltinType::kTextureGather,
    BuiltinType::kTextureGatherCompare,
    BuiltinType::kTextureNumLayers,
    BuiltinType::kTextureNumLevels,
    BuiltinType::kTextureNumSamples,
    BuiltinType::kTextureSample,
    BuiltinType::kTextureSampleBias,
    BuiltinType::kTextureSampleCompare,
    BuiltinType::kTextureSampleCompareLevel,
    BuiltinType::kTextureSampleGrad,
    BuiltinType::kTextureSampleLevel,
    BuiltinType::kTextureSampleBaseClampToEdge,
    BuiltinType::kTextureStore,
    BuiltinType::kTextureLoad,
    BuiltinType::kAtomicLoad,
    BuiltinType::kAtomicStore,
    BuiltinType::kAtomicAdd,
    BuiltinType::kAtomicSub,
    BuiltinType::kAtomicMax,
    BuiltinType::kAtomicMin,
    BuiltinType::kAtomicAnd,
    BuiltinType::kAtomicOr,
    BuiltinType::kAtomicXor,
    BuiltinType::kAtomicExchange,
    BuiltinType::kAtomicCompareExchangeWeak,
    BuiltinType::kTintMaterialize,
};

/// All builtin function names
constexpr const char* kBuiltinStrings[] = {
    "abs",
    "acos",
    "acosh",
    "all",
    "any",
    "arrayLength",
    "asin",
    "asinh",
    "atan",
    "atan2",
    "atanh",
    "ceil",
    "clamp",
    "cos",
    "cosh",
    "countLeadingZeros",
    "countOneBits",
    "countTrailingZeros",
    "cross",
    "degrees",
    "determinant",
    "distance",
    "dot",
    "dot4I8Packed",
    "dot4U8Packed",
    "dpdx",
    "dpdxCoarse",
    "dpdxFine",
    "dpdy",
    "dpdyCoarse",
    "dpdyFine",
    "exp",
    "exp2",
    "extractBits",
    "faceForward",
    "firstLeadingBit",
    "firstTrailingBit",
    "floor",
    "fma",
    "fract",
    "frexp",
    "fwidth",
    "fwidthCoarse",
    "fwidthFine",
    "insertBits",
    "inverseSqrt",
    "ldexp",
    "length",
    "log",
    "log2",
    "max",
    "min",
    "mix",
    "modf",
    "normalize",
    "pack2x16float",
    "pack2x16snorm",
    "pack2x16unorm",
    "pack4x8snorm",
    "pack4x8unorm",
    "pow",
    "quantizeToF16",
    "radians",
    "reflect",
    "refract",
    "reverseBits",
    "round",
    "saturate",
    "select",
    "sign",
    "sin",
    "sinh",
    "smoothstep",
    "sqrt",
    "step",
    "storageBarrier",
    "tan",
    "tanh",
    "transpose",
    "trunc",
    "unpack2x16float",
    "unpack2x16snorm",
    "unpack2x16unorm",
    "unpack4x8snorm",
    "unpack4x8unorm",
    "workgroupBarrier",
    "workgroupUniformLoad",
    "textureDimensions",
    "textureGather",
    "textureGatherCompare",
    "textureNumLayers",
    "textureNumLevels",
    "textureNumSamples",
    "textureSample",
    "textureSampleBias",
    "textureSampleCompare",
    "textureSampleCompareLevel",
    "textureSampleGrad",
    "textureSampleLevel",
    "textureSampleBaseClampToEdge",
    "textureStore",
    "textureLoad",
    "atomicLoad",
    "atomicStore",
    "atomicAdd",
    "atomicSub",
    "atomicMax",
    "atomicMin",
    "atomicAnd",
    "atomicOr",
    "atomicXor",
    "atomicExchange",
    "atomicCompareExchangeWeak",
    "_tint_materialize",
};

}  // namespace tint::sem

#endif  // SRC_TINT_SEM_BUILTIN_TYPE_H_
