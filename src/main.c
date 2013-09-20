#include "LPC17xx.h"
#include "lpc17xx_uart.h"
#include "lpc_types.h"
#include "lpc17xx_timer.h"
#include "lpc17xx_pinsel.h"
#include "debug_frmwrk.h"

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main (void) {
    debug_frmwrk_init();
    _printf("Up and running!");

    while(true) {
        _printf("Still running...");
    }

    return  0;
}
