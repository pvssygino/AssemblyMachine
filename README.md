# AssemblyMachine

Questo progetto nasce con lo scopo di aiutare a comprendere il funzionamento di una CPU vista dall'interno.
Il software emula una CPU a 16 bit in ISA 8086 in cui compaiono i registri fondamentali: PC, IR, STACK, FLAG di controllo (zero, overflow, negative, carry). 
E' possibile creare/editare, utilizzando le istruzioni ISA 8086, un software da eseguire tramite l'app, affinchè si abbia una visione completa di quello che accade ai registri della CPU e agli indirizzi di memoria quando vengono richiamate differenti istruzioni.

--------------------------------------------11/10/2021----------------------------------------


»ISTRUZIONE: add s d  
»FUNZIONE: showcpu

------------------------------------14/12/2021  (MAIN.cpp, ISA.cpp, ISA.h)----------------------
 
»ISTRUZIONE: sub s d                                                                                      
»ISTRUZIONE: mv s d


--------------------------------------15/12/2021  (ISA.cpp)--------------------------------------
 
»IMPLEMENTAZIONE FLAG:
√zero
√negative
√overflow
..carry

---------------------------------18/12/2021 (RAM.cpp, RAM.h, BIN.h)------------------------------

..Interprete binario (BIN.h)

..RAM dinamic mode (RAM.h, RAM.cpp)
