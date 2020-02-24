#ifndef MINI_SE_STREAM_EXECUTOR_H
#define MINI_SE_STREAM_EXECUTOR_H

#include "mini_se.h"
#include "stream_internal.h"

namespace mini_se {
  class StreamExecutor {
  public:
  // some interface to handle a single device
    int MemcpyH2D();
    int Execute();
    int MemcpyD2H();
  private:
    internal::StreamExecutorInterface *implementation_;
  };
}

#endif