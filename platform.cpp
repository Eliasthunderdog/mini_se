#include "platform.h"
#include <algorithm>

namespace mini_se {
int MultiPlatformManager::RegisterPlatform(std::string platform) {
  platforms_.push_back(platform);
  return 0;
}
int MultiPlatformManager::LookupPlatform(std::string platform) {
  auto res = std::find(platforms_.begin(), platforms_.end(), platform);
  return res != platforms_.end(); // find : return 1, not find: return 0
}
}