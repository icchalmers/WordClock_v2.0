EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:IainPersonalLibrary
LIBS:WordClock_v2-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L ESP-07 M1
U 1 1 556F342F
P 2050 3600
F 0 "M1" H 1750 4050 60  0000 C CNN
F 1 "ESP-07" H 1700 3050 60  0000 L CNN
F 2 "FabLibrary:ESP-07" H 2050 3600 60  0001 C CNN
F 3 "" H 2050 3600 60  0000 C CNN
	1    2050 3600
	1    0    0    -1  
$EndComp
$Comp
L NCP1117ST33T3G U1
U 1 1 556F388A
P 1650 1175
F 0 "U1" H 1650 1425 40  0000 C CNN
F 1 "NCP1117ST33T3G" H 1650 1375 40  0000 C CNN
F 2 "FabLibrary:SOT223_HandSolder" H 1650 1175 60  0001 C CNN
F 3 "" H 1650 1175 60  0000 C CNN
	1    1650 1175
	1    0    0    -1  
$EndComp
$Comp
L C C2
U 1 1 556F3AC7
P 2150 1425
F 0 "C2" H 2175 1525 50  0000 L CNN
F 1 "4.7u" H 2175 1325 50  0000 L CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" H 2188 1275 30  0001 C CNN
F 3 "" H 2150 1425 60  0000 C CNN
	1    2150 1425
	1    0    0    -1  
$EndComp
$Comp
L C C1
U 1 1 556F3BA7
P 1100 1425
F 0 "C1" H 1125 1525 50  0000 L CNN
F 1 "4.7u" H 1125 1325 50  0000 L CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" H 1138 1275 30  0001 C CNN
F 3 "" H 1100 1425 60  0000 C CNN
	1    1100 1425
	1    0    0    -1  
$EndComp
$Comp
L CONN_01X02 P1
U 1 1 556F3ED9
P 675 1175
F 0 "P1" H 675 1325 50  0000 C CNN
F 1 "5V_input" V 775 1175 50  0000 C CNN
F 2 "FabLibrary:Socket_Strip_Straight_1x02" H 675 1175 60  0001 C CNN
F 3 "" H 675 1175 60  0000 C CNN
	1    675  1175
	-1   0    0    1   
$EndComp
$Comp
L PWR_FLAG #FLG01
U 1 1 556F4013
P 1225 900
F 0 "#FLG01" H 1225 995 50  0001 C CNN
F 1 "PWR_FLAG" H 1225 1080 50  0000 C CNN
F 2 "" H 1225 900 60  0000 C CNN
F 3 "" H 1225 900 60  0000 C CNN
	1    1225 900 
	1    0    0    -1  
$EndComp
$Comp
L PWR_FLAG #FLG02
U 1 1 556F4033
P 1350 1800
F 0 "#FLG02" H 1350 1895 50  0001 C CNN
F 1 "PWR_FLAG" H 1350 1980 50  0000 C CNN
F 2 "" H 1350 1800 60  0000 C CNN
F 3 "" H 1350 1800 60  0000 C CNN
	1    1350 1800
	-1   0    0    1   
$EndComp
$Comp
L GND #PWR03
U 1 1 556F4047
P 1650 1800
F 0 "#PWR03" H 1650 1550 50  0001 C CNN
F 1 "GND" H 1650 1650 50  0000 C CNN
F 2 "" H 1650 1800 60  0000 C CNN
F 3 "" H 1650 1800 60  0000 C CNN
	1    1650 1800
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR04
U 1 1 556F4A9F
P 2150 850
F 0 "#PWR04" H 2150 700 50  0001 C CNN
F 1 "+3.3V" H 2150 990 50  0000 C CNN
F 2 "" H 2150 850 60  0000 C CNN
F 3 "" H 2150 850 60  0000 C CNN
	1    2150 850 
	1    0    0    -1  
$EndComp
Text Notes 1050 2200 0    60   ~ 0
3.3V Regulation
$Comp
L CONN_01X03 P3
U 1 1 556F5392
P 8850 975
F 0 "P3" H 8850 1175 50  0000 C CNN
F 1 "UART" V 8950 975 50  0000 C CNN
F 2 "FabLibrary:Socket_Strip_Straight_1x03_IainEdit" H 8850 975 60  0001 C CNN
F 3 "" H 8850 975 60  0000 C CNN
	1    8850 975 
	1    0    0    -1  
$EndComp
$Comp
L +5VD #PWR05
U 1 1 556F5655
P 925 875
F 0 "#PWR05" H 925 725 50  0001 C CNN
F 1 "+5VD" H 925 1015 50  0000 C CNN
F 2 "" H 925 875 60  0000 C CNN
F 3 "" H 925 875 60  0000 C CNN
	1    925  875 
	1    0    0    -1  
$EndComp
$Comp
L +5VD #PWR06
U 1 1 556F61BB
P 5375 800
F 0 "#PWR06" H 5375 650 50  0001 C CNN
F 1 "+5VD" H 5375 940 50  0000 C CNN
F 2 "" H 5375 800 60  0000 C CNN
F 3 "" H 5375 800 60  0000 C CNN
	1    5375 800 
	1    0    0    -1  
$EndComp
Text GLabel 4900 1550 0    60   Input ~ 0
WS2812b_In
Text Notes 4800 2200 0    60   ~ 0
WS2812b data line voltage shifting
$Comp
L DS3232 U2
U 1 1 556FB126
P 4725 3300
F 0 "U2" H 4725 3200 50  0000 C CNN
F 1 "DS3232" H 4725 3400 50  0000 C CNN
F 2 "FabLibrary:Maxim_SOIC-20_W20-H2" H 4725 3300 50  0001 C CNN
F 3 "DOCUMENTATION" H 4725 3300 50  0001 C CNN
	1    4725 3300
	1    0    0    -1  
$EndComp
NoConn ~ 3975 3100
NoConn ~ 3975 3300
$Comp
L +3.3V #PWR07
U 1 1 556FB38B
P 3775 2750
F 0 "#PWR07" H 3775 2600 50  0001 C CNN
F 1 "+3.3V" H 3775 2890 50  0000 C CNN
F 2 "" H 3775 2750 60  0000 C CNN
F 3 "" H 3775 2750 60  0000 C CNN
	1    3775 2750
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR08
U 1 1 556FB3AA
P 5700 3750
F 0 "#PWR08" H 5700 3500 50  0001 C CNN
F 1 "GND" H 5700 3600 50  0000 C CNN
F 2 "" H 5700 3750 60  0000 C CNN
F 3 "" H 5700 3750 60  0000 C CNN
	1    5700 3750
	1    0    0    -1  
$EndComp
NoConn ~ 3975 3400
Text GLabel 5700 3200 2    60   Input ~ 0
SCL
Text GLabel 5700 3300 2    60   Input ~ 0
SDA
$Comp
L Battery BT1
U 1 1 556FBD5E
P 6150 3575
F 0 "BT1" H 5850 3625 50  0000 L CNN
F 1 "Battery" H 5800 3525 50  0000 L CNN
F 2 "FabLibrary:Battery_Holder_Cell_20mm_smd" V 6150 3615 60  0001 C CNN
F 3 "" V 6150 3615 60  0000 C CNN
	1    6150 3575
	1    0    0    -1  
$EndComp
Text Notes 4425 4200 0    60   ~ 0
Real Time Clock\nwith Battery Backup
$Comp
L R R6
U 1 1 556FCCE0
P 6750 3000
F 0 "R6" V 6830 3000 50  0000 C CNN
F 1 "5k" V 6750 3000 50  0000 C CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" V 6680 3000 30  0001 C CNN
F 3 "" H 6750 3000 30  0000 C CNN
	1    6750 3000
	1    0    0    -1  
$EndComp
$Comp
L R R7
U 1 1 556FCE30
P 7000 3000
F 0 "R7" V 7080 3000 50  0000 C CNN
F 1 "5k" V 7000 3000 50  0000 C CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" V 6930 3000 30  0001 C CNN
F 3 "" H 7000 3000 30  0000 C CNN
	1    7000 3000
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR09
U 1 1 556FCEE0
P 6875 2750
F 0 "#PWR09" H 6875 2600 50  0001 C CNN
F 1 "+3.3V" H 6875 2890 50  0000 C CNN
F 2 "" H 6875 2750 60  0000 C CNN
F 3 "" H 6875 2750 60  0000 C CNN
	1    6875 2750
	1    0    0    -1  
$EndComp
Text GLabel 7050 3300 2    60   Input ~ 0
SCL
Text GLabel 6700 3300 0    60   Input ~ 0
SDA
Text Notes 6550 3550 0    60   ~ 0
I2C Pull-Ups
NoConn ~ 1400 3400
$Comp
L +3.3V #PWR010
U 1 1 556FF61F
P 725 2750
F 0 "#PWR010" H 725 2600 50  0001 C CNN
F 1 "+3.3V" H 725 2890 50  0000 C CNN
F 2 "" H 725 2750 60  0000 C CNN
F 3 "" H 725 2750 60  0000 C CNN
	1    725  2750
	1    0    0    -1  
$EndComp
$Comp
L R R8
U 1 1 55708FA9
P 7550 1375
F 0 "R8" V 7450 1375 50  0000 C CNN
F 1 "1k" V 7550 1375 50  0000 C CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" V 7480 1375 30  0001 C CNN
F 3 "" H 7550 1375 30  0000 C CNN
	1    7550 1375
	0    1    1    0   
$EndComp
$Comp
L LED D1
U 1 1 557090B7
P 7850 1075
F 0 "D1" H 7850 1175 50  0000 C CNN
F 1 "LED" H 7850 975 50  0000 C CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" H 7850 1075 60  0001 C CNN
F 3 "" H 7850 1075 60  0000 C CNN
	1    7850 1075
	0    -1   -1   0   
$EndComp
$Comp
L +3.3V #PWR011
U 1 1 55709168
P 7850 825
F 0 "#PWR011" H 7850 675 50  0001 C CNN
F 1 "+3.3V" H 7850 965 50  0000 C CNN
F 2 "" H 7850 825 60  0000 C CNN
F 3 "" H 7850 825 60  0000 C CNN
	1    7850 825 
	1    0    0    -1  
$EndComp
Text GLabel 7300 1375 0    60   Input ~ 0
LED
Text GLabel 2850 3800 2    60   Input ~ 0
LED
Text Notes 7300 1600 0    60   ~ 0
Debug LED
Text GLabel 2850 3300 2    60   Input ~ 0
UART_Tx
Text GLabel 2850 3400 2    60   Input ~ 0
UART_Rx
$Comp
L GND #PWR012
U 1 1 5570B37C
P 8575 1275
F 0 "#PWR012" H 8575 1025 50  0001 C CNN
F 1 "GND" H 8575 1125 50  0000 C CNN
F 2 "" H 8575 1275 60  0000 C CNN
F 3 "" H 8575 1275 60  0000 C CNN
	1    8575 1275
	1    0    0    -1  
$EndComp
Text GLabel 8575 975  0    60   Input ~ 0
UART_Rx
Text GLabel 8575 875  0    60   Input ~ 0
UART_Tx
Text Notes 8150 1600 0    60   ~ 0
UART/Prog header
Text GLabel 2800 1400 0    60   Input ~ 0
GPIO0
$Comp
L GND #PWR013
U 1 1 5570E030
P 3900 1900
F 0 "#PWR013" H 3900 1650 50  0001 C CNN
F 1 "GND" H 3900 1750 50  0000 C CNN
F 2 "" H 3900 1900 60  0000 C CNN
F 3 "" H 3900 1900 60  0000 C CNN
	1    3900 1900
	1    0    0    -1  
$EndComp
Text GLabel 2850 3700 2    60   Input ~ 0
GPIO0
$Comp
L R R1
U 1 1 5570FFB2
P 975 3025
F 0 "R1" V 1055 3025 50  0000 C CNN
F 1 "5k" V 975 3025 50  0000 C CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" V 905 3025 30  0001 C CNN
F 3 "" H 975 3025 30  0000 C CNN
	1    975  3025
	1    0    0    -1  
$EndComp
$Comp
L R R3
U 1 1 55710DCF
P 2900 1075
F 0 "R3" V 2980 1075 50  0000 C CNN
F 1 "5k" V 2900 1075 50  0000 C CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" V 2830 1075 30  0001 C CNN
F 3 "" H 2900 1075 30  0000 C CNN
	1    2900 1075
	-1   0    0    1   
$EndComp
$Comp
L +3.3V #PWR014
U 1 1 55711307
P 2900 825
F 0 "#PWR014" H 2900 675 50  0001 C CNN
F 1 "+3.3V" H 2900 965 50  0000 C CNN
F 2 "" H 2900 825 60  0000 C CNN
F 3 "" H 2900 825 60  0000 C CNN
	1    2900 825 
	1    0    0    -1  
$EndComp
Text Notes 2775 2200 0    60   ~ 0
Program/Run switch
$Comp
L GND #PWR015
U 1 1 55715126
P 2925 4550
F 0 "#PWR015" H 2925 4300 50  0001 C CNN
F 1 "GND" H 2925 4400 50  0000 C CNN
F 2 "" H 2925 4550 60  0000 C CNN
F 3 "" H 2925 4550 60  0000 C CNN
	1    2925 4550
	1    0    0    -1  
$EndComp
$Comp
L R R2
U 1 1 55715157
P 3000 4150
F 0 "R2" V 3080 4150 50  0000 C CNN
F 1 "5k" V 3000 4150 50  0000 C CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" V 2930 4150 30  0001 C CNN
F 3 "" H 3000 4150 30  0000 C CNN
	1    3000 4150
	1    0    0    -1  
$EndComp
$Comp
L C C3
U 1 1 55718FEB
P 2050 4400
F 0 "C3" H 2075 4500 50  0000 L CNN
F 1 "10u" H 2075 4300 50  0000 L CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" H 2088 4250 30  0001 C CNN
F 3 "" H 2050 4400 60  0000 C CNN
	1    2050 4400
	0    -1   -1   0   
$EndComp
Text GLabel 1275 3800 0    60   Input ~ 0
SCL
Text GLabel 1275 3900 0    60   Input ~ 0
SDA
Wire Wire Line
	875  1125 1250 1125
Wire Wire Line
	1100 1575 1100 1800
Wire Wire Line
	2150 1800 2150 1575
Wire Wire Line
	2150 850  2150 1275
Wire Wire Line
	2150 1125 2050 1125
Wire Wire Line
	875  1800 2150 1800
Connection ~ 1350 1800
Connection ~ 1650 1800
Wire Wire Line
	1650 1425 1650 1800
Wire Wire Line
	875  1225 875  1800
Connection ~ 1100 1800
Connection ~ 2150 1125
Wire Notes Line
	500  600  2375 600 
Wire Notes Line
	2375 600  2375 2100
Wire Notes Line
	2375 2100 500  2100
Wire Notes Line
	500  2100 500  600 
Wire Wire Line
	1225 900  1225 1125
Connection ~ 1225 1125
Wire Wire Line
	925  875  925  1125
Connection ~ 925  1125
Wire Notes Line
	4125 600  6900 600 
Wire Notes Line
	6900 600  6900 2100
Wire Notes Line
	6900 2100 4125 2100
Wire Notes Line
	4125 2100 4125 600 
Wire Wire Line
	3775 2750 3775 3200
Wire Wire Line
	3775 3200 3975 3200
Wire Wire Line
	5475 3500 5700 3500
Wire Wire Line
	5700 3500 5700 3750
Wire Wire Line
	5475 3300 5700 3300
Wire Wire Line
	6150 3725 5700 3725
Connection ~ 5700 3725
Wire Notes Line
	3600 2525 3600 3975
Wire Notes Line
	3600 3975 6375 3975
Wire Notes Line
	6375 3975 6375 2525
Wire Notes Line
	6375 2525 3600 2525
Wire Wire Line
	6750 2750 7000 2750
Wire Wire Line
	6750 2750 6750 2850
Wire Wire Line
	7000 2750 7000 2850
Connection ~ 6875 2750
Wire Wire Line
	6750 3150 6750 3300
Wire Wire Line
	6750 3300 6700 3300
Wire Wire Line
	7000 3150 7000 3300
Wire Wire Line
	7000 3300 7050 3300
Wire Notes Line
	6425 2525 6425 3400
Wire Notes Line
	6425 3400 7325 3400
Wire Notes Line
	7325 3400 7325 2525
Wire Notes Line
	7325 2525 6425 2525
Wire Wire Line
	725  2750 725  4400
Wire Wire Line
	725  4000 1400 4000
Wire Wire Line
	7300 1375 7400 1375
Wire Wire Line
	2850 3800 2750 3800
Wire Wire Line
	7700 1375 7850 1375
Wire Notes Line
	6975 1475 6975 600 
Wire Notes Line
	6975 600  8025 600 
Wire Notes Line
	8025 600  8025 1475
Wire Notes Line
	8025 1475 6975 1475
Wire Wire Line
	2750 3400 2850 3400
Wire Wire Line
	2750 3300 2850 3300
Wire Wire Line
	8650 1075 8575 1075
Wire Wire Line
	8575 1075 8575 1275
Wire Wire Line
	8650 875  8575 875 
Wire Wire Line
	8575 975  8650 975 
Wire Notes Line
	8075 600  8075 1475
Wire Notes Line
	8075 1475 9050 1475
Wire Notes Line
	9050 1475 9050 600 
Wire Notes Line
	9050 600  8075 600 
Wire Wire Line
	2750 3700 2850 3700
Wire Wire Line
	725  2825 975  2825
Wire Wire Line
	975  2825 975  2875
Connection ~ 725  2825
Wire Wire Line
	975  3500 1400 3500
Wire Wire Line
	975  3175 975  3500
Wire Wire Line
	1400 3300 975  3300
Connection ~ 975  3300
Wire Notes Line
	2425 2100 2425 600 
Wire Notes Line
	2425 600  4075 600 
Wire Notes Line
	4075 600  4075 2100
Wire Notes Line
	4075 2100 2425 2100
Wire Wire Line
	2200 4400 3000 4400
Wire Wire Line
	2750 4400 2750 4000
Wire Wire Line
	3000 4000 3000 3900
Wire Wire Line
	3000 3900 2750 3900
Wire Wire Line
	3000 4400 3000 4300
Connection ~ 2750 4400
Wire Wire Line
	725  4400 1900 4400
Wire Wire Line
	2925 4400 2925 4550
Connection ~ 2925 4400
Connection ~ 725  4000
Wire Wire Line
	1275 3800 1400 3800
Wire Wire Line
	1400 3900 1275 3900
$Comp
L CONN_01X01 P2
U 1 1 556F9C82
P 6650 1750
F 0 "P2" H 6650 1850 50  0000 C CNN
F 1 "WS2812b_Out" V 6750 1750 50  0000 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_1x01" H 6650 1750 60  0001 C CNN
F 3 "" H 6650 1750 60  0000 C CNN
	1    6650 1750
	1    0    0    -1  
$EndComp
Text GLabel 2850 3500 2    60   Input ~ 0
WS2812b_In
NoConn ~ 2750 3500
NoConn ~ 1400 3700
Wire Notes Line
	500  2525 500  4800
Wire Notes Line
	500  4800 3550 4800
Wire Notes Line
	3550 4800 3550 2525
Wire Notes Line
	3550 2525 500  2525
Text Notes 1450 4925 0    60   ~ 0
Minimum ESP-07 setup
$Comp
L WS2812b U4
U 1 1 557202D6
P 5875 1650
F 0 "U4" H 5875 1350 60  0000 C CNN
F 1 "WS2812b" H 5875 1900 60  0000 C CNN
F 2 "FabLibrary:WS2812b_handsolder" H 5675 1650 60  0001 C CNN
F 3 "" H 5675 1650 60  0000 C CNN
	1    5875 1650
	-1   0    0    -1  
$EndComp
$Comp
L GND #PWR016
U 1 1 557205BC
P 5375 1875
F 0 "#PWR016" H 5375 1625 50  0001 C CNN
F 1 "GND" H 5375 1725 50  0000 C CNN
F 2 "" H 5375 1875 60  0000 C CNN
F 3 "" H 5375 1875 60  0000 C CNN
	1    5375 1875
	1    0    0    -1  
$EndComp
$Comp
L R R5
U 1 1 557208AF
P 5125 1550
F 0 "R5" V 5205 1550 50  0000 C CNN
F 1 "500" V 5125 1550 50  0000 C CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" V 5055 1550 30  0001 C CNN
F 3 "" H 5125 1550 30  0000 C CNN
	1    5125 1550
	0    1    1    0   
$EndComp
Wire Wire Line
	5275 1550 5425 1550
Wire Wire Line
	6325 1750 6450 1750
Wire Wire Line
	1100 1275 1100 1125
Connection ~ 1100 1125
$Comp
L PWR_FLAG #FLG017
U 1 1 55729EDF
P 6150 3400
F 0 "#FLG017" H 6150 3495 50  0001 C CNN
F 1 "PWR_FLAG" H 6150 3580 50  0000 C CNN
F 2 "" H 6150 3400 60  0000 C CNN
F 3 "" H 6150 3400 60  0000 C CNN
	1    6150 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	5475 3400 6150 3400
Wire Wire Line
	6150 3400 6150 3425
$Comp
L C C4
U 1 1 5572143D
P 5375 1350
F 0 "C4" H 5400 1450 50  0000 L CNN
F 1 "0.1u" H 5175 1450 50  0000 L CNN
F 2 "FabLibrary:C_1206_HandSoldering_IainEdit" H 5413 1200 30  0001 C CNN
F 3 "" H 5375 1350 60  0000 C CNN
	1    5375 1350
	1    0    0    -1  
$EndComp
NoConn ~ 1400 3600
Wire Wire Line
	5700 3200 5475 3200
NoConn ~ 5475 3100
Wire Wire Line
	5375 1500 5375 1875
Wire Wire Line
	5375 1750 5425 1750
Connection ~ 5375 1750
Wire Wire Line
	7850 825  7850 875 
Wire Wire Line
	7850 1375 7850 1275
Wire Wire Line
	2850 3500 2800 3500
Wire Wire Line
	2800 3500 2800 3400
Connection ~ 2800 3400
NoConn ~ 2750 3600
Wire Wire Line
	4900 1550 4975 1550
$Comp
L D D2
U 1 1 5957AF12
P 5375 1000
F 0 "D2" H 5375 1100 50  0000 C CNN
F 1 "D" H 5375 900 50  0000 C CNN
F 2 "IainPersonalLibrary:SOD-123F_HandSolder" H 5375 1000 50  0001 C CNN
F 3 "" H 5375 1000 50  0000 C CNN
	1    5375 1000
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5375 800  5375 850 
Wire Wire Line
	5375 1150 5375 1200
Wire Wire Line
	5375 1150 6450 1150
Wire Wire Line
	6325 1150 6325 1550
Text Notes 5600 1025 0    60   ~ 0
Drops VCC to\nallow 3.3V - 5V \nconversion for\nattached LEDs
Wire Wire Line
	2900 825  2900 925 
$Comp
L DPST SW1
U 1 1 5957B944
P 3400 1600
F 0 "SW1" H 3700 1650 50  0000 C CNN
F 1 "DPST" H 3700 1550 50  0000 C CNN
F 2 "IainPersonalLibrary:FSM2JSMA_DPST_PushButton" H 3400 1600 60  0001 C CNN
F 3 "" H 3400 1600 60  0000 C CNN
	1    3400 1600
	1    0    0    -1  
$EndComp
Wire Wire Line
	2900 1400 2800 1400
Wire Wire Line
	2900 1225 2900 1400
NoConn ~ 2900 1800
NoConn ~ 3900 1400
Wire Wire Line
	3900 1800 3900 1900
$Comp
L PWR_FLAG #FLG?
U 1 1 5957AC21
P 6450 1150
F 0 "#FLG?" H 6450 1245 50  0001 C CNN
F 1 "PWR_FLAG" H 6450 1330 50  0000 C CNN
F 2 "" H 6450 1150 50  0000 C CNN
F 3 "" H 6450 1150 50  0000 C CNN
	1    6450 1150
	1    0    0    -1  
$EndComp
Connection ~ 6325 1150
$EndSCHEMATC
