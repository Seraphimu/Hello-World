assume cs:abc

abc segment
    mov ax, 0h
    mov cx, 236h
s:  add ax, 123h
    loop s

    mov ax, 4c00h
    int 21h
abc ends
end