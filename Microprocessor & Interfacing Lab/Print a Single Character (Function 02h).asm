//lab-02

.model small
.stack 100h
.code
MOV AH, 02h ; Select the &quot;Print Character&quot; function
MOV DL, &#39;A&#39;
INT 21h
