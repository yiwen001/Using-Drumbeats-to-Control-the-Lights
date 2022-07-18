# Using-Drumbeats-to-Control-the-Lights

In this project, we have an idea about using the music created in Max to control something.
And LED lights are a direct way to show the change of the music. So we chose this to
visualize music, and also added “diamond” stuff to give the lights more scattering to look
fancy. The data transfer between them is based on Arduino.

### Max
![image](https://github.com/yiwen001/Using-Drumbeats-to-Control-the-Lights/blob/main/1.JPG)


This part is for transferring the data of Max to Arduino, so then Arduino can control the LED
using these datas. We get two data series from it, one is the speed and the other one is the
drumbeat.


![image](https://github.com/yiwen001/Using-Drumbeats-to-Control-the-Lights/blob/main/2.JPG)

It is easy to change the drum beats by clicking the pads in live.grid.


### Arduino


Since we have chosen the two data series to transfer to Arduino, we can make use of these
different data ranges to control the different characteristics of the lights. For example, if the
data range is from 0-127, it would be used to change the brightness of the lights. And if the
data range is from 127-256, we use this to change the color of the lights. That is also the
reason why we scale the output numbers in Max. As a result, the lights can change their
color in real time with the music.


### Contributor

Yiwen

Coco
