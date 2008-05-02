#include <StarUtils/StarTimer.h>
#include <algorithm>

namespace Star
{
  _int64 Timer::s_frequency = 0;

  /******************************************************************************/
  void
  Timer::start()
  {     
    if ( s_frequency == 0 )
      QueryPerformanceFrequency((LARGE_INTEGER*)&s_frequency);
    
    _int64 ticks;
    QueryPerformanceCounter((LARGE_INTEGER*)&ticks);
    m_sec = ticks/double(s_frequency);
  }

  /******************************************************************************/
  float
  Timer::getElapsedSeconds()
  {
    _int64 ticks;
    QueryPerformanceCounter((LARGE_INTEGER*)&ticks);
    double curSec = ticks/double(s_frequency);

    return (float)std::max(curSec-m_sec, 0.);
  }
}
