#ifndef STARFILE_H
#define STARFILE_H

#include "StarExport.h"

#include <string>

namespace Star {
  namespace File {

    /** Create a string with same name as filename but with the given extension */
    inline std::string STARUTILS_EXPORT
    changeFilenameExtension(const std::string& filename, const std::string& ext)
    {
      std::string outputFilename = filename;
      std::string::size_type pos = outputFilename.find_last_of('.');
      if (pos != std::string::npos)
        outputFilename.erase(pos);
      return outputFilename+"."+ext;
    }

    /** Remove the path from given filename*/
    inline std::string STARUTILS_EXPORT
    removePath(const std::string& filename)
    {
      std::string outputFilename = filename;
      std::string::size_type pos = outputFilename.find_last_of('/');
      if (pos != std::string::npos)
        outputFilename.erase(0, pos+1);
      return outputFilename;
    }

    /** Return the path component */
    inline std::string STARUTILS_EXPORT
    getPath(const std::string& filename)
    {
      std::string outputFilename = filename;
      std::string::size_type pos = outputFilename.find_last_of('/');
      if (pos != std::string::npos)
        outputFilename.erase(pos);
      if (outputFilename.empty())
        outputFilename = ".";
      return outputFilename;
    }
  }
}

#endif
