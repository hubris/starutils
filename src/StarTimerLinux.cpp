#include <StarUtils/StarTimer.h>

#include <sys/time.h>

namespace Star
{

  /******************************************************************************/
  void
  Timer::start()
  {
    struct timeval tv;
    gettimeofday(&tv, 0);
    m_sec = tv.tv_sec+tv.tv_usec*1e-6;
  }

  /******************************************************************************/
  double
  Timer::getElapsedSeconds()
  {
    struct timeval tv;
    gettimeofday(&tv, 0);
    double curSec = tv.tv_sec+tv.tv_usec*1e-6;
    return curSec-m_sec;
  }
}
