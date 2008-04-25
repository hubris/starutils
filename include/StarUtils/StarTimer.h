#ifndef STARTIMER_H
#define STARTIMER_H

#ifdef _WIN32
#pragma comment(lib, "winmm.lib")
#endif

namespace Star
{
  class Timer
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
    double getElapsedSeconds();

  private:
    double m_sec;
  };
}

#endif
