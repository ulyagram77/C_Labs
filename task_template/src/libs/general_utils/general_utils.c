#include "general_utils.h"

int generateRandomInt(int min, int max) {
  return min + rand() % (max - min + 1);
}

float generateRandomFloat(float min, float max) {
  return ((float)rand() / RAND_MAX) * (max - min) + min;
}
