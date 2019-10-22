import serial

arduinoData = serial.Serial('/dev/tty.usbserial-14220', 9600)

def golpear():
    arduinoData.write(b'0')

golpear()