ASSUME CS:SWAP
SWAP SEGMETN
    MOV AX, 1000
    MOV SS, AX		;设置堆栈段的起始地址
    MOV SP, 0010
    MOV AX, 001A
    MOV BX, 001B	;往AX, BX里边放数据
    PUSH AX			;AX入栈
    PUSH BX			;BX入栈
    POP AX			;将栈顶元素放入AX寄存器中（BX的值）
    POP BX			;将栈顶元素放在BX中（之前的AX）
    MOV AX, 4c00
    INT 21
SWAP ENDS
END
