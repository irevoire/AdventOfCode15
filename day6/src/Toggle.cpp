#include "toggle.hpp"
#include "lib.hpp"

void Toggle::changelights() {
  for (int i = getX1() ; i <= getX2(); i++){
    for (int j = getY1(); j <= getY2(); j++)
    lights[i][j] = !lights[i][j];
  }
}

void Toggle::changebrighness() {
  for (int i = getX1() ; i <= getX2(); i++){
    for (int j = getY1(); j <= getY2(); j++)
    lights2[i][j] = lights2[i][j]+2;
  }
}
