'''
Christine Ng, Christopher Pattullo
2202251, 2368380
6/2/2025
This program implements the front-end interface for our TODO list
and sends the changes through UART using serial transmission
'''
import serial
import time
import tkinter as tk
from tkinter import *

#set the serial transmission to COM5, baud rate 9600 which matches the UART we use
ser = serial.Serial('COM5', 9600, timeout = 1)
string_data = ""

root = tk.Tk() #initialize tkinter
root.geometry("300x600") #set the size of the interface TODO list note pad

#set up all the check boxes for our TODO list
w = Label(root, text ='TODO List', font = "50") 
w.pack() 

Checkbutton1 = StringVar(value='_') 
Checkbutton2 = StringVar(value='_') 
Checkbutton3 = StringVar(value='_') 
Checkbutton4 = StringVar(value='_') 
Checkbutton5 = StringVar(value='_') 
Checkbutton6 = StringVar(value='_') 

Button1 = Checkbutton(root, text = "Wake Up", 
                    variable = Checkbutton1, 
                    onvalue = 'x', 
                    offvalue = '_', 
                    height = 2, 
                    width = 40) 

Button2 = Checkbutton(root, text = "474 Lecture!", 
                    variable = Checkbutton2, 
                    onvalue = 'x', 
                    offvalue = '_', 
                    height = 2, 
                    width = 40) 

Button3 = Checkbutton(root, text = "Eat?", 
                    variable = Checkbutton3, 
                    onvalue = 'x', 
                    offvalue = '_', 
                    height = 2, 
                    width = 40) 

Button4 = Checkbutton(root, text = "474 Lab!", 
                    variable = Checkbutton4, 
                    onvalue = 'x', 
                    offvalue = '_', 
                    height = 2, 
                    width = 40) 

Button5 = Checkbutton(root, text = "474 Office Hours!", 
                    variable = Checkbutton5, 
                    onvalue = 'x', 
                    offvalue = '_', 
                    height = 2, 
                    width = 40) 

Button6 = Checkbutton(root, text = "Sleep )\';", 
                    variable = Checkbutton6, 
                    onvalue = 'x', 
                    offvalue = '_', 
                    height = 2, 
                    width = 40) 

Button1.pack() 
Button2.pack() 
Button3.pack() 
Button4.pack()
Button5.pack()
Button6.pack()

'''
This function help achieve live rendering from the TODO  list app to LCD
by re-calling the function every 100 ms
'''
def transfer():
    data = ("Chris and Christine's TODO List!\n\n")
    data += (f"{Checkbutton1.get()}Wake up\n{Checkbutton2.get()}474 Lecture!\n")
    data += (f"{Checkbutton3.get()}Eat?\n{Checkbutton4.get()}474 Lab!\n")
    data += (f"{Checkbutton5.get()}474 Office Hours!\n{Checkbutton6.get()}Sleep )\';\n\0")
    ser.write(data.encode('utf-8')) #encode the data into bytes and send it through UART
    time.sleep(1)   #delay between each data transfer
    root.after(100, transfer) #re-calling the function every 100 ms

transfer()  #initialize calling of transfer()
root.mainloop() #keep rendering this app so user input get reflected