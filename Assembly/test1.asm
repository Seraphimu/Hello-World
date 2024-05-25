; 文件名：add_bcd_i386.asm
; 描述：两个4位压缩BCD码相加的i386汇编程序

section .data
var1 db 34h, 67h ; 第一个4位压缩BCD码
var2 db 78h, 12h ; 第二个4位压缩BCD码
sum times 3 db 0 ; 结果存储位置，预留3个字节并初始化为0

section .text
global _start

_start:
    ; 设置数据段寄存器
    mov eax, [var1]
    add eax, [var2]
    aaa ; 非压缩BCD码加法调整
    mov [sum], al ; 保存结果到sum的最低字节

    ; 加高字节部分，考虑进位
    movzx eax, byte [var1 + 1] ; 使用movzx来零扩展字节到字
    adc eax, [var2 + 1]
    aaa ; 非压缩BCD码加法调整
    mov [sum + 1], al ; 保存结果到sum+1的位置

    ; 处理可能的最高位进位
    mov al, 0
    adc al, 0
    mov [sum + 2], al ; 保存进位到sum+2的位置

    ; 程序退出
    xor ebx, ebx ; 退出代码
    mov eax, 1 ; sys_exit系统调用号
    int 0x80 ; 触发系统调用
