.model small
.stack 100h

.data

.code
main proc

; input first digit
mov ah, 1
int 21h
mov cl, al
sub cl, 30h      ; convert ASCII to number

; input second digit
mov ah, 1
int 21h
mov ch, al
sub ch, 30h      ; convert ASCII to number

; addition
add cl, ch

; convert result back to ASCII
add cl, 30h

; display result
mov ah, 2
mov dl, cl
int 21h

; exit program
mov ah, 4Ch
int 21h

main endp
end main
