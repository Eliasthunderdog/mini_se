#ifndef MINI_SE_STREAM_H
#define MINI_SE_STREAM_H
// declaration of Stream
#include "mini_se.h"
#include "stream_internal.h"
#include "stream_executor.h"

namespace mini_se {
  class Stream {
  public:
    Stream();
    Stream(internal::StreamInterface *implementation, StreamExecutor *executor) : \
      implementation_(implementation), executor_(executor) {}
    ~Stream();
    Stream &TargetFunction();
    internal::StreamInterface* implemenation() { return implementation_; }
  private:
    internal::StreamInterface *implementation_;
    StreamExecutor *executor_;
  };
}

#endif