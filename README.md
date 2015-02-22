# Python_Arduino_SerialPort
This was my try to send a string by Python to Arduino via a USB port
<ul>
  <li>For Python, you need pySerial on linux from <a href="http://pyserial.sourceforge.net/" >here</a> </li>
  <li>Download the archive from <a href="http://pypi.python.org/pypi/pyserial">here.</a> Unpack the archive, enter the pyserial-x.y directory and run 
  <ul>
    <li>python setup.py install</li>
    <li>python3 setup.py install</li>
  </ul>
  <li>import serial</li>
  <li>Setting: Object = serial.Serial('free usb port address', baud_rate)</li>
  <li>How to read: inside an infinite loop : Object.readline()</li>
  <li>How to writw: Object.write("something")</li>
</li>
<ul>
