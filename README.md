<h1 align="center"> 
WOMEN SAFETY DEVICE WITH GPS TRACKING AND ALERT USING ARDUINO
</h1>
<div align="justify">
<h3>Introduction</h3>

 This project is about a wireless technique in the form of embedded device namely Arduino 
for women and children. This model can be designed in such a way that detects the 
location of victim and allows the rescue system to take action accordingly, based on the 
electronic gadgets like GPS, Buzzer. 

A prototype is designed which is easy to use and provides a help to women. The system 
which when turned on it tracks the location of women using GPS services to necessary 
emergency contacts and police control room. Thus, this helps the victim against attacker 
for self-defense.  

<h3>COMPONENTS</h3>
<table>
  <tr>
    <th>S.No</th>
    <th>Component</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>1.</td>
    <td>Arduino Uno Board</td>
    <td>The Arduino Uno serves as the main processing unit,controlling the device's operation and interacting with various components. </td>
  </tr>
  <tr>
    <td>2.</td>
    <td>GSM Module (SIM900)</td>
    <td>The GSM module enables communication over cellular 
networks. It sends SMS messages and makes calls to the specified emergency 
contacts. </td>
  </tr>
  <tr>
    <td>3.</td>
    <td>GPS Module (NEO-6M)</td>
    <td>The GPS module provides accurate geographical 
coordinates, allowing the device to send the user's location during an emergency.  </td>
  </tr>
  <tr>
    <td>4.</td>
    <td>Push (Panic) Button</td>
    <td> A physical panic button is integrated into the device, which 
the user can press in times of distress to trigger the emergency alert. </td>
  </tr>
  <tr>
    <td>5.</td>
    <td>Buzzer</td>
    <td>Buzzer or beeper is an audio signaling device  </td>
  </tr>
  <tr>
    <td>6.</td>
    <td>Power Supply: </td>
    <td>The device can be powered using a rechargeable battery or a 
power adapter. Battery power ensures functionality even in the absence of a stable 
electrical supply. </td>
  </tr>
  
</table>

<h3>BLOCK DIAGRAM</h3>

<p align="center">
<img width="500" height="450" alt="image" src="https://github.com/user-attachments/assets/87f893e1-ae76-4ffd-90df-a59ab19c5b01" />
</p>

<h3>FLOW CHART</h3>

<p align="center">
<img width="550" height="650" alt="image" src="https://github.com/user-attachments/assets/c3f7662d-10cf-4760-b5c2-4ec7d7ef9834" />
</p>

<h3>CIRCUIT DIAGRAM</h3>

<p align="center">
    <img width="500" height="530" alt="image" src="https://github.com/user-attachments/assets/2ec05591-63e2-42ca-99d1-a0e344366ea0" />
</p>

<h3>WORKING</h3>

The device is generally carried by the user, and the panic button is easily accessible. In 
case of an emergency or when the user feels unsafe, they can press the panic button. 
<ul style="list-style-type:circle">
  <li>When the panic button is pressed, the Arduino detects the button press through a 
digital input pin.</li>
    <li>Once the panic button is pressed, the Arduino triggers the GPS module to start 
collecting location data (latitude and longitude).      
    </li>
    <li>
    The GPS module calculates the current location using signals from GPS satellites.        
    </li>
    <li>After obtaining the GPS coordinates, the Arduino uses the GSM module to send 
an SMS alert to predefined emergency contacts.        
    </li>
    <li>The SMS includes a message like "Emergency! I need help. My current location: 
latitude, longitude.</li>
</ul>

The microcontroller switch ON the buzzer also, present in the device so that nearby 
people may notice the critical condition and may come to rescue. And microcontroller 
sends the SMS of current location to the registered mobile number of the family member 
and police with the help of GSM module. The GSM sends the current location and other 
data at every 10sec so that if victim is changing its current location continuously then that 
can be easily traced by police.




</div>
