DATA SEGMENT            ;数据段
    VAR1 DB 34H, 67H
    VAR2 DB 78H, 12H
    SUM DB 3 DUP(?)

DATA ENDS
CODE SEGMENT            ;代码段
    ASSUME CS:CODE, DS:DATA

START:  MOV AX, DATA
        MOV DS, AX
        CLC
        MOV AX, 0
        MOV AL, VAR1
        ADD AL, VAR2
        DAA
        MOV SUM, AL
        MOV AL, VAR1 + 1
        ADC AL, VAR2 + 1
        DAA
        MOV SUM + 1, AL
        ADC AH, 0
        MOV SUM + 2, AH
        MOV AH, 3CH
        INT 21H         ;返回
CODE    ENDS            ;段结束
        END START       ;程序结束
