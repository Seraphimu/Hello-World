; 文件名：sum_bytes.asm
; 描述：计算从NUM单元开始的10个无符号字节数据的和，并将结果存储在SUM和SUM + 1单元中

section .data
NUM db 10h, 20h, 30h, 40h, 50h, 60h, 70h, 80h, 90h, 0A0h ; 示例数据
count equ $ - NUM ; 数据的数量
SUM dw 0 ; 结果存储位置

section .text
global _start

_start:
    mov ecx, count ; 循环计数器
    mov esi, NUM ; 数据起始地址
    xor edx, edx ; 累加器清零

sum_loop:
    add dl, [esi] ; 加载一个字节数据到DL并累加
    inc esi ; 指向下一个字节
    loop sum_loop ; 循环直至ECX为0

    ; 调整累加结果为16位（假设没有溢出）
    mov [SUM], dx

    ; 程序退出
    mov ebx, 0 ; 退出代码
    mov eax, 1 ; sys_exit系统调用号
    int 0x80 ; 触发系统调用
