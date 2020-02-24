#ifndef MINI_SE_PLATFORM_H
#define MINI_SE_PLATFORM_H

#include "mini_se.h"
#include "stream.h"
#include "stream_executor.h"
#include "stream_internal.h"
#include <string>
#include <vector>

namespace mini_se {
class MultiPlatformManager {
public:
  int RegisterPlatform(std::string platform);
  int LookupPlatform(std::string platform);
  static MultiPlatformManager& get() {
    manager_ = new MultiPlatformManager;
    return *manager_;
  }
private:
  static MultiPlatformManager* manager_;
  std::vector<std::string> platforms_;
};
}

#endif