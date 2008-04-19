#ifndef STARTIMER_H
#define STARTIMER_H

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
