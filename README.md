# LM35DZ Temperature Sensor with Arduino

The Arduino sketch from Cute Lava's blog post, [How to Read Temperature with the LM35DZ Sensor and Arduino](https://cutelava.com/blogs/projects/how-to-read-temperature-with-the-lm35dz-sensor-and-arduino).

Reads an LM35DZ analog temperature sensor on pin A0 and prints the temperature in Celsius over Serial once a second.

## Hardware

- [Arduino Uno](https://cutelava.com/products/arduino-uno-r3-starter-kit), Nano, or similar 5 V board
- [LM35DZ temperature sensor](https://cutelava.com/products/lm35dz-temperature-sensor-1pc)
- Breadboard
- [Jumper wires](https://cutelava.com/products/solderless-breadboard-jumper-cable-wires-65-pieces)
- Optional: 0.1 µF ceramic capacitor, for noise filtering on longer wire runs

## Wiring

![Breadboard wiring diagram of an LM35DZ temperature sensor connected to an Arduino Uno with a 0.1 microfarad capacitor](https://cdn.shopify.com/s/files/1/0019/3485/2207/files/P-0007_-_BB_00.png?v=1782029971)

![Schematic diagram of the LM35DZ temperature sensor wired to an Arduino Uno, including the optional 0.1 microfarad capacitor](https://cdn.shopify.com/s/files/1/0019/3485/2207/files/P-0007_-_Schematic_00.png?v=1782029970)

+Vs to the Arduino's 5V pin, GND to any Arduino GND pin, Vout to analog pin A0. The 0.1 µF capacitor bridges Vout and GND. Full step-by-step instructions are in the blog post linked above.

## Usage

Open `LM35DZ_Temperature_Sensor/LM35DZ_Temperature_Sensor.ino` in the Arduino IDE, upload it to the board, then open the Serial Monitor at 9600 baud.

## License

See the license attached to this repository.
