import serial
import time
ser = serial.Serial('/dev/ttyACM0', 9600)
while True:
    #length = int(raw_input("Please enter length of your string: "))
    val = str(raw_input("Please Enter on/off: ")).lower()
    length = len(val)
    ser.write(str(chr(length)))
    print ord(ser.readline()[0])
    time.sleep(0.5)
    for x in range(length):
        ser.write(val[x])
        #print str(val[x])
        print ser.readline()
        time.sleep(.5)


