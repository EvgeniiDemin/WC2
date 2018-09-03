#include "wc2_pch.h"
#include "wc2.h"

#include "core/engine.h"

namespace wc2
{

void WC2::Initialize() {
}
  
void WC2::Start() {
}

void WC2::Update() {
}

void WC2::Shutdown() {
}
  
void createGame() {
  g_engine.setApplicationDelegate(std::make_unique<WC2>());
}
  
} // namespace wc2
