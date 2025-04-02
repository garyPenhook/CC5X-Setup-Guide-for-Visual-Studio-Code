# CC5X Quick Reference

## Compiler Directives

- `#pragma chip PIC16F877` - Set target device
- `#pragma bit LED @ PORTA.0` - Define a bit variable
- `#pragma origin <address>` - Set code origin address
- `#pragma rambank <0,1,2,3>` - Select RAM bank

## Common Functions

- `nop()` - No operation
- `sleep()` - Enter sleep mode
- `clrwdt()` - Clear watchdog timer

## Common Variables

- `PORTA`, `PORTB`, etc. - I/O port registers
- `TRISA`, `TRISB`, etc. - I/O direction registers
- `OPTION` - Option register
- `STATUS` - Status register

## Status Bits

- `Carry` - Carry bit
- `Zero_` - Zero flag
- `PD` - Power-down bit
- `TO` - Time-out bit
