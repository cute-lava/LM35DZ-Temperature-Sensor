# LM35DZ Temperature Sensor with Arduino

The Arduino sketch from Cute Lava's blog post, [How to Read Temperature with the LM35DZ Sensor and Arduino](https://cutelava.com/blogs/projects/how-to-read-temperature-with-the-lm35dz-sensor-and-arduino).

Reads an LM35DZ analog temperature sensor on pin A0 and prints the temperature in Celsius over Serial once a second.

## Hardware

- [Arduino Uno](https://cutelava.com/products/arduino-uno-r3-starter-kit), Nano, or similar 5 V board
- [LM35DZ temperature sensor](https://cutelava.com/products/lm35dz-temperature-sensor-1pc)
- Breadboard
- [Jumper wires](https://cutelava.com/products/solderless-breadboard-jumper-cable-wires-65-pieces)
- Optional: 0.1 µF ceramic capacitor, for noise filtering on longer wire runs

Wiring, schematic, and the full write-up are in the blog post linked above.

## Usage

Open `LM35DZ_Temperature_Sensor/LM35DZ_Temperature_Sensor.ino` in the Arduino IDE, upload it to the board, then open the Serial Monitor at 9600 baud.

## License

See the license attached to this repository.
