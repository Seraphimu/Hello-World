assume cs:abc
abc segment
    mov ax, 2H
    add ax, ax	; 2 + 2
    add ax, ax	; 4 + 4
    mov ax, 4c00H
    int 21H
abc ends
end