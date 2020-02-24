#ifndef MINI_SE_HOST_STREAM_H
#define MINI_SE_HOST_STREAM_H
#include "mini_se.h"
#include "stream_executor.h"
#include "stream_internal.h"
#include "stream.h"

namespace mini_se {

namespace host {

class HostStreamExecutor : public internal::StreamExecutorInterface {
public:
  int MemcpyH2D();
  int Execute();
  int MemcpyD2H();
};

class HostStream : public internal::StreamInterface {
public:
  HostStream();
  ~HostStream();
};

} // namespace host
} // namespace mini_se
#endif