//lab-02

.model small
.stack 100h
.code
MOV AH, 01h ; Select the &quot;Read Keyboard&quot; function
INT 21h ; the program pauses here for input
; The character you typed is now sitting in the AL register


//this code waits for the user to type a key and automatically shows it on the screen.
