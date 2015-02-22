# Python and Arduino connection serial port
This was my try to send a string by Python to Arduino via a USB port, and here is my experince.
<h2>Python side</h2>
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
 <li>To send a string, on the python side, we have to send string length, and then the string, and I send characters one by one with a small delay. Object.write() method send strings, so for sending lenght of string to  serial port you have to convert it to string -> str(char(length_of_statment)), then for sending the string, it can be done in loop, and one by one, and has no problem of conversion </li>
<ul>

<h2>Arduino side</h2>
<ul>
<li>Serial port should be setup</li>
<li>We have to listen to the port and wait by if( Serial.available() > 0)</li>
<li>Then we get the length of string. The valus on the port is string , and we should cast it character and then print it </li>
<li>The rest will be a for-loop that is waiting for each character of upcoming characters by if( Serial.available() > 0</li>
<li>Each time that we read the port we flush it by Serial.flush()</li>
<li>We put characters side by side and make the string once again on the Arduino side!</li>
</ul>
</br>
That's it!
