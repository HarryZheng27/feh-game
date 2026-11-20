#include <FEHLCD.h>
#include <FEHRandom.h>

int main() {
  LCD.WriteLine("Hello World!");
  while (1) {
    LCD.Update();

  }
  return 0;
}