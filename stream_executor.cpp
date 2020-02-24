#include "stream_executor.h"
#include "stream_internal.h"
#include "stream.h"
#include "mini_se.h"

namespace mini_se {
int StreamExecutor::MemcpyH2D() {
  implementation_->MemcpyH2D();
}

int StreamExecutor::Execute() {
  implementation_->Execute();
}

int StreamExecutor::MemcpyD2H() {
  implementation_->Execute();
}
}