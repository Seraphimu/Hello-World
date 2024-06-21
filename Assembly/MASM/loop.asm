assume cs:abc   ;令abc为代码段

abc segment
    mov ax, 0h  ;给ax赋初值
    mov cx, 64H ;64H=100D，让程序循环100次以实现1到100的累加
s:  add ax, 1H
    loop s      ;跳转到s标签处

    mov ax, 4c00h
    int 21h
abc ends
end