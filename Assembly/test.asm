
section .data
NUM db 10h, 20h, 30h, 40h, 50h, 60h, 70h, 80h, 90h, 0A0h ; 示例数据
count equ $ - NUM ; 数据的数量
SUM dw 0 ; 结果存储位置

section .text
global _start

_start:
    mov ecx, count ; 循环计数器
    mov esi, NUM ; 数据起始地址
    xor edx, edx ; 累加器清零，EDX将用于累加

sum_loop:
    movzx eax, byte [esi] ; 加载一个字节数据到EAX（带零扩展）
    add edx, eax ; 累加到EDX
    inc esi ; 指向下一个字节
    loop sum_loop ; 循环直至ECX为0

    ; 调整累加结果为16位（假设没有溢出）
    mov [SUM], dx ; 保存低16位到SUM

    ; 程序退出
    mov ebx, 0 ; 退出代码
    mov eax, 1 ; sys_exit系统调用号
    int 0x80 ; 触发系统调用

