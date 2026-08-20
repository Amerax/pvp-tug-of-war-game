# pvp-tug-of-war-game

This is my repo for my arduino based pvp(player versus player) game of tug of war.   
Basiclaly there are two buttons, one for each player and a screen oled in the middle to demonstrate how far a long the "rope" is. 
The faster and better you press the more it goes to your side, and the goal is obiously like in the real game to get the middle of the rope over on yourside just like in real life. 

For the stuff needed, all you need is a arduino, could be any version like r4 or r3, 2 buttons, wires and a oled screen!  
I also included a buzzer for sound affects! 

I wanted to orginally make a digital version of a childhood game I use to play and this was perfect for me because it wasn't to complicated and it was fun and I wanted for it to actually be something people would want to play with, with their friends. So I think this was fun. 

**Features**
-Oled screen for enhanced visualization  
-Passive buzzer for noise reaction  
-2 buttons for 2 players 
-Details and images presented on screen to streamline gameplay

**Uploading the Code**  

1. Open `main.ino` in the Arduino IDE either download from firmware folder the file and open it, or just copy and paste its contents into the ide yourself.  
2. Connect your Arduino to your computer with a USB cable.  
3. Select the correct **Board** and **Port** under **Tools**.  
4. Click **Upload** (→).  
5. Wait for the upload to finish. The Arduino will automatically restart and run the program. 

Libaries used:
<Wire.h>  
<Adafruit_GFX.h>  
<Adafruit_SSD1306.h>  

BOM
| Item | Quantity | Estimated Price (USD) | Notes |
|---|---:|---:|---|
| Arduino UNO R4 WiFi | 1 | $30.00 | Main microcontroller |
| 0.96 inch OLED SSD1306 I2C | 1 | $3.00 | 128x64 monochrome OLED display |
| Push Button | 2 | $0.50 | Player 1 and Player 2 buttons |
| Passive Buzzer | 1 | $1.00 | Game sound effects |
| Jumper Wires | 6 | $0.10 | For connecting buttons, buzzer, and OLED |
| **Total** | **1** | **$34.60** | **Approximate total** |

Pin Map 

| Component | Arduino Pin |
|---|---|
| Player 1 Button | D2 |
| Player 2 Button | D3 |
| Passive Buzzer (+) | D13 |
| Passive Buzzer (−) | GND |
| OLED SDA | SDA |
| OLED SCL | SCL |
| OLED VCC | 5V |
| OLED GND | GND |
| LED Matrix | Built-in |

Images: 
<img width="1209" height="943" alt="image" src="https://github.com/user-attachments/assets/a316a41b-022a-473b-aa39-8f1d511a0cfa" />

Demo link: https://www.youtube.com/watch?v=rqrGg-ei5W8  
