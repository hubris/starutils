#ifndef STARFILE_H
#define STARFILE_H

#include <string>

namespace Star {
  namespace File {

    /** Create a string with same name as filename but with the given extension */
    inline std::string
    changeFilenameExtension(const std::string& filename, const std::string& ext)
    {
      std::string outputFilename = filename;
      std::string::size_type pos = outputFilename.find_last_of('.');
      if (pos != std::string::npos)
        outputFilename.erase(pos);
      return outputFilename+"."+ext;
    }

    /** Remove the path from given filename*/
    inline std::string
    removePath(const std::string& filename)
    {
      std::string outputFilename = filename;
      std::string::size_type pos = outputFilename.find_last_of('/');
      if (pos != std::string::npos)
        outputFilename.erase(0, pos+1);
      return outputFilename;
    }

    /** Return the path component */
    inline std::string
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
