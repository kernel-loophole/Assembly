
GLOBAL sumi
GLOBAL multi
GLOBAL subtr
GLOBAL divi
sumi:
    push eax
    push ebx
    push ebp
    mov ebp, esp
    mov eax, [ebp+4]        
    mov ebx, [ebp+8] 
    add eax,ebx
    pop ebp
    pop ebx
    pop eax
    ret
multi:
    push ax
    push bx
    push bp
    mov bp, sp
    mov ax, [bp+10]        
    mov bx, [bp+12] 
    mul bx

    pop bp
    pop bx
    pop ax
    ret
subtr:
    push eax
    push ebx
    push ebp
    mov ebp, esp
    mov eax, [ebp+14]        
    mov ebx, [ebp+16] 
    sub eax,ebx

    pop ebp
    pop ebx
    pop eax
    ret
divi:
    push ebp
    mov ebp, esp
    mov eax, [ebp+18]        
    mov ebx, [ebp+20] 
    div eax
    pop ebp
    ret