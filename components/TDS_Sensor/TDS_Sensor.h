#pragma once

#include "esphome.h"

class TDSSensorComponent : public Component, public UARTDevice {
 public:
  Sensor *tds1{new Sensor()};
  Sensor *temperature1{new Sensor()};
  Sensor *tds2{new Sensor()};
  Sensor *temperature2{new Sensor()};

  TDSSensorComponent(UARTComponent *parent) : UARTDevice(parent) {}

  void setup() override;
  void loop() override;
};
