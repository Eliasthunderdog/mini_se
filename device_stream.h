#ifndef MINI_SE_DEVICE_STREAM_H
#define MINI_SE_DEVICE_STREAM_H

#include "mini_se.h"
#include "stream_executor.h"
#include "stream_internal.h"
#include "stream.h"

namespace mini_se {

namespace device {

class DeviceStreamExecutor : public internal::StreamExecutorInterface {
public:
  DeviceStreamExecutor();
  ~DeviceStreamExecutor();
  int MemcpyH2D();
  int Execute();
  int MemcpyD2H();
};

class HostStream : public internal::StreamInterface {
public:
  HostStream();
  ~HostStream();
};

} // namespace device
} // namespace mini_se
#endif