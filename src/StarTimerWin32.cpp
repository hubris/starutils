#include <StarUtils/StarTimer.h>

#include <windows.h>

namespace Star
{
  /******************************************************************************/
  void
  Timer::start()
  { 
    m_sec = timeGetTime()*1e3f;
  }

  /******************************************************************************/
  double
  Timer::getElapsedSeconds()
  {
    double curSec = timeGetTime()*1e3f;
    return curSec-m_sec;
  }
}
