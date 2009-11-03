#ifndef STARTIMER_H
#define STARTIMER_H

#ifdef _WIN32
#include <windows.h>
#endif

#include "StarExport.h"

namespace Star
{
  class STARUTILS_EXPORT Timer
  {
  public:
    /**
     * Constructor
     */
    Timer() : m_sec(0) {}

    /**
     * Start timing
     */
    void start();

    /**
     * @return the number of elpased second since
     * the last call to start
     */
    float getElapsedSeconds();

  private:
    double m_sec;
#ifdef _WIN32
    static _int64 s_frequency;
#endif
  };
}

#endif
