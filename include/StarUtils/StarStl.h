#ifndef STARSTL_H
#define STARSTL_H

namespace Star
{
  template<typename T>
  struct DeleteObject
  {
    void operator()(T *obj)
    {
      delete obj;
    }
  };
}

#endif
