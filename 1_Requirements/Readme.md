# Requirements

## Introduction 
The Temperature control system is basically used to control the temperature of a chair. When a user seated on a chair, the button sensor gets activated. After that, the user gets access to turn on the heater or cooler. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are done on a microcontroller called Atmega328.

## Simulation 
The functionality of the heat control system is coded in embedded c and the working is demonstrated using simuation in a software called SimulIDE. Below shows two images where in the 1st image shows the status of the simulation when the system is OFF and the second image shows the status of the system when it is ON.

## Features 
● Customer can adjust the temperature as per his requirement.
● Display the Temperature.

## SWOT Analysis
## Strengths
● The temperature can be modified inside the vehicles easily
● Low cost system
## Weakness
● It is applicable mostly for those countries which are having low temperature.
## Opportunities
● It can be implemented by having both Heater and AC.
## Threats
● Maintenance

##4W’s and 1’H
## What
Automotive Temperature Monitoring System
## WHERE
Used in Automotive Industries
## WHEN
At low Temperature likely Winter season
## WHY
To provide better comfort
## HOW
Operated by detecting the Temperature

# Detail requirements
## High Level Requirements
| ID | Description | Status | 
| ----- | ----- | --------|
| HLR1 | Microcontroller | IMPLEMENTED | 
| HLR2 | Temperature Sensor | IMPLEMENTED  |
| HLR3 | Heat Generation | IMPLEMENTED  |
| HLR4 | Display | IMPLEMENTED  |
| HLR5 | Display | IMPLEMENTED  |

## Low Level Requirements
| ID | Description | Status | 
| ----- | ----- | --------|
| LLR1 | Check the person is available or not | IMPLEMENTED | 
| LLR2 | Select from Menu | IMPLEMENTED  |
| LLR3 | Checks the temperature | IMPLEMENTED  |
| LLR4 | Display the value of temperature of the seat | IMPLEMENTED  |

