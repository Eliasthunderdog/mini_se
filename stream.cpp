#include "stream.h"
#include "mini_se.h"
#include "stream_executor.h"
#include "stream_internal.h"

namespace mini_se {
  Stream& Stream::TargetFunction() {
    executor_->MemcpyH2D();
    executor_->Execute();
    executor_->MemcpyD2H();
  }
}