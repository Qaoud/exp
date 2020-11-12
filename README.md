# Experimental Robotics Laboratory - Assignment 1
This assignment was made for the subject Experimental Robotics Laboratory at University of Genoa, Italy.

| Names | ID |  Email Address   |
| ------ | ------ | -----|
| Ege Doruk | 4847317 | egedoruksayin@gmail.com |
| Mohammed Alaa | 4844271 |  mohammed.eldin.88@hotmail.com |
| Mohamed Qaoud | 4729321 | mohamed.lotfy@hu.edu.eg |

# Assignment Description:

The turtlesim that exist in ROS was used to implement this assignment and it has three modes:

 - Normal mode, where the turtle keeps moving randomly.
 - The relaxing (being tired) mode, where the turtle being tired and wants to rest at a specific point (home).
 - A play mode, where the user can play with the turtle by giving a specific point that the turtle can go to.

# How to Install:

Fisrt you have to clone this reposiroty into your src folder by doing the following:
```sh
$ cd ~/your_workspace/src
$ git clone https://github.com/Qaoud/exp.git
$ cd ..
$ catkin_make
```
Then you have to bring the turtle simulation to life by:
```sh
$roscore 
$rosrun turtlesim turtlesim_node
```
Now the core and the simulation is running.

After we run the simulation, we want to run our program to the simulation by:
```sh
$rosrun main_package main
```
When the main_package is running, the turtle is being in the normal mode, and when it gets tired, it moves to a fixed point where it rests for a bit of a time.

To start giving order to the turtle to move (Play mode) we run this ros service call:

```sh
$rosservice call /play "argument"
```
in "agument", you should put two values betweet 1-10 for Example: 
```sh
$rosservice call /play 2 4
```
this will make the robot move to these coordinates.
