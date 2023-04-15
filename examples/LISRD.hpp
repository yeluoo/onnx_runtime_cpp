/**
 * @file    SuperPoint.hpp
 *
 * @author  btran
 *
 */

#pragma once

#include <opencv2/opencv.hpp>
#include <ort_utility/ort_utility.hpp>
#include <vector>

namespace Ort
{
class Lisrd : public OrtSessionHandler
{
public:
  static constexpr int64_t IMG_H = 480;
  static constexpr int64_t IMG_W = 640;
  static constexpr int64_t IMG_CHANNEL = 3;

using OrtSessionHandler::OrtSessionHandler;

void preprocess(float* dst,                     //
                const unsigned char* src,       //
                const int64_t targetImgWidth,   //
                const int64_t targetImgHeight,  //
                const int numChannels) const;

};
}  // namespace Ort