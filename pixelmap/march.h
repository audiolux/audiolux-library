#pragma once
#include "animation.h"
#include "leds.h"
#include "visualization.h"

namespace pixelmap {

class MarchAnimation : public Animation {
  public:
    MarchAnimation(Visualization* viz, LEDs& leds);
    void init();
    void update();
    void draw(float interpolation);

  private:
    LEDs& leds_;
    Visualization* viz_;
    float wave_;
    float amplitude_;
};

} // end namespace pixelmap
