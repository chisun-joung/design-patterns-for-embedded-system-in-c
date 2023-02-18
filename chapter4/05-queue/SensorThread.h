#ifndef SensorThread_H
#define SensorThread_H

#include "GasDataQueue.h"
#include "HeSensor.h"
#include "N2Sensor.h"
#include "O2Sensor.h"
#include <stdio.h>
#include <stdlib.h>

/* … initial declaratons stuff above … */

typedef struct SensorThread SensorThread;
struct SensorThread {
  struct GasDataQueue *itsGasDataQueue;
  struct HeSensor itsHeSensor;
  struct N2Sensor itsN2Sensor;
  struct O2Sensor itsO2Sensor;
};

/* Operations */

void SensorThread_updateData(SensorThread *const me);

/* … other operations declared too … */
#endif
