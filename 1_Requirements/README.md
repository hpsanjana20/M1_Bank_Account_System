# Description  

This project is helpful for generating electricity bill with the help of units consumed.
It is available 24*7 and is easy to use.
 
 ## **Features of the project**
 ```     
 This project's key features are :
 * You can get the electricity bill by giving the details which will be asked.
 * Bill is generated accordingly on the basis of where you live in-either Urban or Rural.
 
 ```
## **Requirements**
* Visual Studio Code, gcc compiler, Linux OS, Windows OS
   
## Highlevel Requirements
|HLR_ID|Description|Status|
|:--:|:--:|:--:|
|HLR_1|This project helps to get electric bill|Implemented|
|HLR_2|This project  collects all the details of the customer|Implemented|
|HLR_3|This project allows to select wherther they are from Rural or Urban|Implemented|
|HLR_4|This project generates the bill according to the number of units of power consumed|Implemented|
|HLR_5|This project allows to change the value of power per unit|Future|

    
## Lowlevel Requirements
|HLR_ID|LLR_ID|Description|Status|
|:--:|:--:|:--:|:--:|
|HLR_1|LLR_01|Selects the rate applicable according to the range of units consumed|Implemented|
|HLR_3|LLR_01|Amount according to Rural selection|Implemented|
||LLR_02|Amount according to Urban selection|Implemented|
|HLR_4|LLR_01|Rate for unit consumed within 0 and 30|Implemented|
||LLR_02|Rate for unit consumed within 31 and 100|Implemented|
||LLR_03|Rate for unit consumed within 101 and 200|Implemented|
||LLR_04|Rate for unit consumed above 200|Implemented|


# SWOT Analysis

![](https://github.com/hpsanjana20/M1_Electricity_Bill/blob/main/6_ImagesAndVideos/SWOT%20Analysis.png)

# 4W's & 1H
* **What**  : A reliable and easy method to calculate electricity bill
* **When**  : Used when a person needs to know how much his bill is
* **Where** : Using Visual Studio Code and C compiler
* **Why**   : Feasable and easy
* **How**   : Using C language



