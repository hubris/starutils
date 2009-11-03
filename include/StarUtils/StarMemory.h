#ifndef STARMEMORY_H
#define STARMEMORY_H

#include "StarExport.h"

#include <string>
#include <StarMath.h>

namespace Star {
  namespace Memory {
      template<typename Container> STARUTILS_EXPORT
      void copySubBlock3D(Container& dest, const Star::uint3& destDim,
                          const Container& block, const Star::uint3& blockSize,
                          const Star::uint3& pos)
      {
          Star::uint3 p = pos;
          for (size_t k = 0; k < blockSize[2]; k++) {
              p[2] = pos[2]+k;
              for (size_t j = 0; j < blockSize[1]; j++) {
                  p[1] = pos[1]+j;
                  for (size_t i = 0; i < blockSize[0]; i++) {
                      p[0] = pos[0]+i;
                      size_t offset = p[0]+(p[1]+p[2]*destDim[1])*destDim[0];
                      size_t srcOffset = i+(j+k*blockSize[1])*blockSize[0];
                      dest[offset] = block[srcOffset];
                  }
              }
          }
      }
  }
}

#endif
