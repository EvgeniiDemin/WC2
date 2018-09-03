#ifndef WC2_H
#define WC2_H

#include "core/application_delegate.h"

namespace wc2
{

class WC2 : public eg::IApplicationDelegate {
public:
  ~WC2() override = default;
  
  void Initialize() override;
  void Start() override;
  void Update() override;
  void Shutdown() override;
};
  
void createGame();

}	// namespace wc2

#endif	// WC2_H
