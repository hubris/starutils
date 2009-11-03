#ifndef SINGLETON_H
#define SINGLETON_H

#include "StarExport.h"

namespace Star
{
  template <typename T> STARUTILS_EXPORT
    class Singleton
    {
      public:
        static T* getInstance()
        {
          if(!m_instance)
            m_instance = new T;
          return m_instance;
        }

        static void destroy()
        {
          delete m_instance;
          m_instance = 0;
        }

      protected:
        Singleton() {}
        virtual ~Singleton() {}

      private:
        static T* m_instance;
    };

  template <typename T> T* Singleton<T>::m_instance = 0;
}
#endif
