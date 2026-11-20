#include <FEHLCD.h>
#include <FEHRandom.h>

int main() {
  LCD.WriteLine("Hello World!");
  while (1) {
    LCD.Update();
    // Never end
    LCD.WriteLine(Random.RandInt());
  }
  return 0;
}