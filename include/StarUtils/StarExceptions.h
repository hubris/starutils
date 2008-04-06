#ifndef STAREXCEPTIONS_H
#define STAREXCEPTIONS_H

#ifdef WIN32
#include <windows.h>
#endif
#include <string>
#include <iostream>
#include <SDL.h>

namespace Star {
  class Exception {
  protected:
    std::string str;
  public:
    Exception(const char *m) { str.assign(m); }
    Exception(const std::string &m) { str.assign(m); }

    void show() { std::cerr << str << std::endl; }
  };

  class SDLException : public Exception {
  public:
    SDLException(const char *m) : Exception(m) {
      str.append(SDL_GetError());
    }
  };
}

#endif
