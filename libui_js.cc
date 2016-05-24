#include <node.h>
#include "libui_methods.h"
#include "window.h"

namespace libui {

using v8::Local;
using v8::Object;

void InitAll(Local<Object> exports) {
  NODE_SET_METHOD(exports, "init", LibUiInit);
  NODE_SET_METHOD(exports, "render", LibUiRender);
  Window::Init(exports);
}

NODE_MODULE(addon, InitAll) // no semicolon here

} // namespace libui