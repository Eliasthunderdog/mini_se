#ifndef MINI_SE_STREAM_INTERNAL_H
#define MINI_SE_STREAM_INTERNAL_H
#include "stream.h"
namespace mini_se {
namespace internal {
// class used inside
class StreamInterface {
public:
  StreamInterface() {}
  virtual ~StreamInterface() {}
};

class StreamExecutorInterface {
public:
// declares the interface that the stream executor must implement.
  StreamExecutorInterface() {}
  virtual ~StreamExecutorInterface() {}
  virtual int MemcpyH2D() = 0;
  virtual int Execute() = 0;
  virtual int MemcpyD2H() = 0;
};

}// namespace internal
}// namespace mini_se

#endif