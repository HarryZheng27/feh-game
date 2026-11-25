#include <FEHLCD.h>
#include <FEHRandom.h>
#include <RectangleCollider.h>


int main() {
  LCD.WriteLine("Hello World!");
  LCD.SetFontColor(BLACK);

  while (1) {
    LCD.Update();
  }
  return 0;
}

/**
 * updates background sprites, this should be called before any other sprite updates so layers layer correctly
 */
void tick_background() {

}