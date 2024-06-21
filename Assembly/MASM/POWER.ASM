assume cs:abc	;abc为代码段
abc segment
    mov ax, 2H
    add ax, ax	; 2 + 2
    add ax, ax	; 4 + 4
    mov ax, 4c00H
    int 21H
abc ends
end
