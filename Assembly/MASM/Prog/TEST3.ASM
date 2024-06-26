DATA SEGMENT
    NUM DB 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    SUM DB 2 DUP (?)
DATA ENDS

CODE SEGMENT
    ASSUME CS:CODE, DS:DATA ;令CODE为代码段，DATA为数据段
START:
    MOV AX, DATA
    MOV DS, AX
    MOV SI, OFFSET NUM
    MOV CX, 10
    CLC
    MOV AX, 0
NEXT:
    ADD AL, [SI]
    ADC AH, 0
    INC SI
    LOOP NEXT
    MOV SUM, AL
    MOV SUM + 1, AH
    MOV AH, 4CH
    INT 21H
CODE ENDS
    END START