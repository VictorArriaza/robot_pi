import serial
arduinoData = serial.Serial('/dev/tty.usbserial-14220', 9600)
def golpear():
    while True:
        arduinoData.write(b'1')

print("Golperar")
golpear()

