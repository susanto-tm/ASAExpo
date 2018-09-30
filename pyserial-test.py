import serial
import time
ser = serial.Serial(port="COM4", baudrate=9600, timeout=2)
time.sleep(2)

for i in range(0, 100):
    if i % 2 == 0:
        ser.write(b'A')
    elif i % 2 != 0:
        ser.write(b'B')
    print(i)
    time.sleep(1)
