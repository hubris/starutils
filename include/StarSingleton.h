#ifndef SINGLETON_H
#define SINGLETON_H

namespace Star
{
  template <typename T>
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
          m_instance = NULL;
        }

      protected:
        Singleton() {}
        virtual ~Singleton() {}

      private:
        static T* m_instance;
    };

  template <typename T> T* Singleton<T>::m_instance = NULL;
}
#endif
