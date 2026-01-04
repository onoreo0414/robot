#include "D_Main.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : JAPAN.C
//--------------------------------------------------------------------------------
void user_main(void)
{
    while (TRUE) {
        while (TRUE) {
            if (gAD[CN6] < 531) {
                if (gAD[CN6] > 450) {
                    break;
                } else {
                    if (gAD[CN6] < 306) {
                        gPwm[0] = 0x1E | 0x80;
                        gPwm[1] = 0x1E;
                        gPwm[2] = 0x1E;
                        gPwm[3] = 0x1E | 0x80;
                        gPwm[4] = 0x1E;
                        gPwm[5] = 0x1E | 0x80;
                        pwm_out();
                        wait_ms(1);
                    } else {
                        gPwm[0] = 0x1E;
                        gPwm[1] = 0x1E | 0x80;
                        gPwm[2] = 0x1E | 0x80;
                        gPwm[3] = 0x1E;
                        gPwm[4] = 0x1E | 0x80;
                        gPwm[5] = 0x1E;
                        pwm_out();
                        wait_ms(1);
                    }
                }
            } else {
                if (gAD[CN6] < 716) {
                    gPwm[0] = 0x1E;
                    gPwm[1] = 0x1E | 0x80;
                    gPwm[2] = 0x1E | 0x80;
                    gPwm[3] = 0x1E;
                    gPwm[4] = 0x1E | 0x80;
                    gPwm[5] = 0x1E;
                    pwm_out();
                    wait_ms(1);
                } else {
                    break;
                }
            }
            if (gAD[CN6] < 531) {
                if (gAD[CN6] > 450) {
                    gPwm[0] = 0x00 | 0x80;
                    gPwm[1] = 0x00 | 0x80;
                    gPwm[2] = 0x00 | 0x80;
                    gPwm[3] = 0x00 | 0x80;
                    gPwm[4] = 0x00 | 0x80;
                    gPwm[5] = 0x00 | 0x80;
                    pwm_out();
                    wait_ms(1);
                } else {
                }
            } else {
            }
        }
        gV[VAR_A] = gAD[CN1];
        gV[VAR_B] = gAD[CN2];
        gV[VAR_C] = gAD[CN3];
        gV[VAR_D] = gAD[CN4];
        gV[VAR_E] = gAD[CN5];
        if (gV[VAR_A] > gV[VAR_B]) {
            gV[VAR_G] = gV[VAR_A];
        } else {
            gV[VAR_G] = gV[VAR_B];
        }
        if (gV[VAR_C] > gV[VAR_D]) {
            gV[VAR_H] = gV[VAR_C];
        } else {
            gV[VAR_H] = gV[VAR_D];
        }
        if (gV[VAR_E] > gV[VAR_H]) {
            gV[VAR_I] = gV[VAR_E];
        } else {
            gV[VAR_I] = gV[VAR_H];
        }
        if (gV[VAR_G] > gV[VAR_I]) {
            gV[VAR_J] = gV[VAR_G];
        } else {
            gV[VAR_J] = gV[VAR_I];
        }
        if (gV[VAR_J] > 200) {
            if (gV[VAR_J] == gAD[CN1]) {
                gV[VAR_K] = 0;
                gV[VAR_M] = 0;
                gV[VAR_O] = 0;
                gV[VAR_N] = 0;
                gV[VAR_L] = 0;
                if (gAD[CN7] < 613) {
                    if (gV[VAR_P] == 1) {
                        gPwm[0] = 0x00 | 0x80;
                        gPwm[1] = 0x00 | 0x80;
                        gPwm[2] = 0x00 | 0x80;
                        gPwm[3] = 0x00 | 0x80;
                        gPwm[4] = 0x00 | 0x80;
                        gPwm[5] = 0x00 | 0x80;
                        pwm_out();
                        wait_ms(1);
                    } else {
                        gPwm[0] = 0x32 | 0x80;
                        gPwm[1] = 0x32;
                        gPwm[2] = 0x32 | 0x80;
                        gPwm[3] = 0x32;
                        gPwm[4] = 0x32 | 0x80;
                        gPwm[5] = 0x32;
                        pwm_out();
                        wait_ms(1);
                    }
                } else {
                    gPwm[0] = 0x46;
                    gPwm[1] = 0x46 | 0x80;
                    gPwm[2] = 0x46;
                    gPwm[3] = 0x46 | 0x80;
                    gPwm[4] = 0x46;
                    gPwm[5] = 0x46 | 0x80;
                    pwm_out();
                    wait_ms(500);
                    gV[VAR_P] = gV[VAR_P] + 1;
                }
            } else {
                if (gV[VAR_J] == gAD[CN2]) {
                    gV[VAR_K] = 0;
                    gV[VAR_M] = 0;
                    gV[VAR_P] = 0;
                    gV[VAR_N] = 0;
                    gV[VAR_O] = 0;
                    if (gAD[CN8] < 613) {
                        if (gV[VAR_L] == 1) {
                            gPwm[0] = 0x00 | 0x80;
                            gPwm[1] = 0x00 | 0x80;
                            gPwm[2] = 0x00 | 0x80;
                            gPwm[3] = 0x00 | 0x80;
                            gPwm[4] = 0x00 | 0x80;
                            gPwm[5] = 0x00 | 0x80;
                            pwm_out();
                            wait_ms(1);
                        } else {
                            gPwm[0] = 0x32;
                            gPwm[1] = 0x32;
                            gPwm[2] = 0x32;
                            gPwm[3] = 0x32;
                            gPwm[4] = 0x32;
                            gPwm[5] = 0x32;
                            pwm_out();
                            wait_ms(1);
                        }
                    } else {
                        gPwm[0] = 0x46 | 0x80;
                        gPwm[1] = 0x46 | 0x80;
                        gPwm[2] = 0x46 | 0x80;
                        gPwm[3] = 0x46 | 0x80;
                        gPwm[4] = 0x46 | 0x80;
                        gPwm[5] = 0x46 | 0x80;
                        pwm_out();
                        wait_ms(300);
                        gV[VAR_L] = gV[VAR_L] + 1;
                    }
                } else {
                    if (gV[VAR_J] == gAD[CN3]) {
                        gV[VAR_N] = 0;
                        gV[VAR_L] = 0;
                        gV[VAR_P] = 0;
                        gV[VAR_K] = 0;
                        gV[VAR_C] = gAD[CN3];
                        gV[VAR_D] = gAD[CN4];
                        gV[VAR_D] = gV[VAR_D] + 150;
                        if (gV[VAR_C] > gV[VAR_D]) {
                            if (gAD[CN9] < 613) {
                                if (gAD[CN8] < 613) {
                                    if (gAD[CN10] < 613) {
                                        if (gV[VAR_O] == 1) {
                                            gPwm[0] = 0x00 | 0x80;
                                            gPwm[1] = 0x00 | 0x80;
                                            gPwm[2] = 0x00 | 0x80;
                                            gPwm[3] = 0x00 | 0x80;
                                            gPwm[4] = 0x00 | 0x80;
                                            gPwm[5] = 0x00 | 0x80;
                                            pwm_out();
                                            wait_ms(1);
                                        } else {
                                            gPwm[0] = 0x32;
                                            gPwm[1] = 0x32 | 0x80;
                                            gPwm[2] = 0x32;
                                            gPwm[3] = 0x32 | 0x80;
                                            gPwm[4] = 0x32;
                                            gPwm[5] = 0x32 | 0x80;
                                            pwm_out();
                                            wait_ms(1);
                                        }
                                    } else {
                                        gPwm[0] = 0x46;
                                        gPwm[1] = 0x46;
                                        gPwm[2] = 0x46;
                                        gPwm[3] = 0x46;
                                        gPwm[4] = 0x46;
                                        gPwm[5] = 0x46;
                                        pwm_out();
                                        wait_ms(1000);
                                    }
                                } else {
                                    gPwm[0] = 0x46 | 0x80;
                                    gPwm[1] = 0x46 | 0x80;
                                    gPwm[2] = 0x46 | 0x80;
                                    gPwm[3] = 0x46 | 0x80;
                                    gPwm[4] = 0x46 | 0x80;
                                    gPwm[5] = 0x46 | 0x80;
                                    pwm_out();
                                    wait_ms(1000);
                                }
                            } else {
                                gPwm[0] = 0x46 | 0x80;
                                gPwm[1] = 0x46;
                                gPwm[2] = 0x46 | 0x80;
                                gPwm[3] = 0x46;
                                gPwm[4] = 0x46 | 0x80;
                                gPwm[5] = 0x46;
                                pwm_out();
                                wait_ms(500);
                                gV[VAR_O] = gV[VAR_O] + 1;
                            }
                        } else {
                            if (gAD[CN10] < 613) {
                                if (gV[VAR_M] == 1) {
                                    gPwm[0] = 0x00 | 0x80;
                                    gPwm[1] = 0x00 | 0x80;
                                    gPwm[2] = 0x00 | 0x80;
                                    gPwm[3] = 0x00 | 0x80;
                                    gPwm[4] = 0x00 | 0x80;
                                    gPwm[5] = 0x00 | 0x80;
                                    pwm_out();
                                    wait_ms(1);
                                } else {
                                    if (gV[VAR_O] == 1) {
                                        gPwm[0] = 0x00 | 0x80;
                                        gPwm[1] = 0x00 | 0x80;
                                        gPwm[2] = 0x00 | 0x80;
                                        gPwm[3] = 0x00 | 0x80;
                                        gPwm[4] = 0x00 | 0x80;
                                        gPwm[5] = 0x00 | 0x80;
                                        pwm_out();
                                        wait_ms(1);
                                    } else {
                                        gPwm[0] = 0x32 | 0x80;
                                        gPwm[1] = 0x32 | 0x80;
                                        gPwm[2] = 0x32 | 0x80;
                                        gPwm[3] = 0x32 | 0x80;
                                        gPwm[4] = 0x32 | 0x80;
                                        gPwm[5] = 0x32 | 0x80;
                                        pwm_out();
                                        wait_ms(1);
                                    }
                                }
                            } else {
                                gPwm[0] = 0x46;
                                gPwm[1] = 0x46;
                                gPwm[2] = 0x46;
                                gPwm[3] = 0x46;
                                gPwm[4] = 0x46;
                                gPwm[5] = 0x46;
                                pwm_out();
                                wait_ms(500);
                                gV[VAR_M] = gV[VAR_M] + 1;
                            }
                        }
                    } else {
                        if (gV[VAR_J] == gAD[CN4]) {
                            gV[VAR_L] = 0;
                            gV[VAR_N] = 0;
                            gV[VAR_P] = 0;
                            gV[VAR_M] = 0;
                            gV[VAR_C] = gAD[CN3];
                            gV[VAR_D] = gAD[CN4];
                            gV[VAR_C] = gV[VAR_C] + 150;
                            if (gV[VAR_C] < gV[VAR_D]) {
                                if (gAD[CN9] < 613) {
                                    if (gAD[CN8] < 613) {
                                        if (gAD[CN10] < 613) {
                                            if (gV[VAR_O] == 1) {
                                                gPwm[0] = 0x00 | 0x80;
                                                gPwm[1] = 0x00 | 0x80;
                                                gPwm[2] = 0x00 | 0x80;
                                                gPwm[3] = 0x00 | 0x80;
                                                gPwm[4] = 0x00 | 0x80;
                                                gPwm[5] = 0x00 | 0x80;
                                                pwm_out();
                                                wait_ms(1);
                                            } else {
                                                gPwm[0] = 0x32;
                                                gPwm[1] = 0x32 | 0x80;
                                                gPwm[2] = 0x32;
                                                gPwm[3] = 0x32 | 0x80;
                                                gPwm[4] = 0x32;
                                                gPwm[5] = 0x32 | 0x80;
                                                pwm_out();
                                                wait_ms(1);
                                            }
                                        } else {
                                            gPwm[0] = 0x46;
                                            gPwm[1] = 0x46;
                                            gPwm[2] = 0x46;
                                            gPwm[3] = 0x46;
                                            gPwm[4] = 0x46;
                                            gPwm[5] = 0x46;
                                            pwm_out();
                                            wait_ms(1000);
                                        }
                                    } else {
                                        gPwm[0] = 0x46 | 0x80;
                                        gPwm[1] = 0x46 | 0x80;
                                        gPwm[2] = 0x46 | 0x80;
                                        gPwm[3] = 0x46 | 0x80;
                                        gPwm[4] = 0x46 | 0x80;
                                        gPwm[5] = 0x46 | 0x80;
                                        pwm_out();
                                        wait_ms(1000);
                                    }
                                } else {
                                    gPwm[0] = 0x46 | 0x80;
                                    gPwm[1] = 0x46;
                                    gPwm[2] = 0x46 | 0x80;
                                    gPwm[3] = 0x46;
                                    gPwm[4] = 0x46 | 0x80;
                                    gPwm[5] = 0x46;
                                    pwm_out();
                                    wait_ms(500);
                                    gV[VAR_O] = gV[VAR_O] + 1;
                                }
                            } else {
                                if (gAD[CN8] < 613) {
                                    if (gV[VAR_K] == 1) {
                                        gPwm[0] = 0x00 | 0x80;
                                        gPwm[1] = 0x00 | 0x80;
                                        gPwm[2] = 0x00 | 0x80;
                                        gPwm[3] = 0x00 | 0x80;
                                        gPwm[4] = 0x00 | 0x80;
                                        gPwm[5] = 0x00 | 0x80;
                                        pwm_out();
                                        wait_ms(1);
                                    } else {
                                        if (gV[VAR_O] == 1) {
                                            gPwm[0] = 0x00 | 0x80;
                                            gPwm[1] = 0x00 | 0x80;
                                            gPwm[2] = 0x00 | 0x80;
                                            gPwm[3] = 0x00 | 0x80;
                                            gPwm[4] = 0x00 | 0x80;
                                            gPwm[5] = 0x00 | 0x80;
                                            pwm_out();
                                            wait_ms(1);
                                        } else {
                                            gPwm[0] = 0x32;
                                            gPwm[1] = 0x32;
                                            gPwm[2] = 0x32;
                                            gPwm[3] = 0x32;
                                            gPwm[4] = 0x32;
                                            gPwm[5] = 0x32;
                                            pwm_out();
                                            wait_ms(1);
                                        }
                                    }
                                } else {
                                    gPwm[0] = 0x46 | 0x80;
                                    gPwm[1] = 0x46 | 0x80;
                                    gPwm[2] = 0x46 | 0x80;
                                    gPwm[3] = 0x46 | 0x80;
                                    gPwm[4] = 0x46 | 0x80;
                                    gPwm[5] = 0x46 | 0x80;
                                    pwm_out();
                                    wait_ms(500);
                                    gV[VAR_K] = gV[VAR_K] + 1;
                                }
                            }
                        } else {
                            if (gV[VAR_J] == gAD[CN5]) {
                                gV[VAR_K] = 0;
                                gV[VAR_L] = 0;
                                gV[VAR_M] = 0;
                                gV[VAR_P] = 0;
                                gV[VAR_O] = 0;
                                if (gAD[CN10] < 613) {
                                    if (gV[VAR_N] == 1) {
                                        gPwm[0] = 0x00 | 0x80;
                                        gPwm[1] = 0x00 | 0x80;
                                        gPwm[2] = 0x00 | 0x80;
                                        gPwm[3] = 0x00 | 0x80;
                                        gPwm[4] = 0x00 | 0x80;
                                        gPwm[5] = 0x00 | 0x80;
                                        pwm_out();
                                        wait_ms(1);
                                    } else {
                                        gPwm[0] = 0x32 | 0x80;
                                        gPwm[1] = 0x32 | 0x80;
                                        gPwm[2] = 0x32 | 0x80;
                                        gPwm[3] = 0x32 | 0x80;
                                        gPwm[4] = 0x32 | 0x80;
                                        gPwm[5] = 0x32 | 0x80;
                                        pwm_out();
                                        wait_ms(1);
                                    }
                                } else {
                                    gPwm[0] = 0x46;
                                    gPwm[1] = 0x46;
                                    gPwm[2] = 0x46;
                                    gPwm[3] = 0x46;
                                    gPwm[4] = 0x46;
                                    gPwm[5] = 0x46;
                                    pwm_out();
                                    wait_ms(300);
                                    gV[VAR_N] = gV[VAR_N] + 1;
                                }
                            } else {
                                gPwm[0] = 0x00 | 0x80;
                                gPwm[1] = 0x00 | 0x80;
                                gPwm[2] = 0x00 | 0x80;
                                gPwm[3] = 0x00 | 0x80;
                                gPwm[4] = 0x00 | 0x80;
                                gPwm[5] = 0x00 | 0x80;
                                pwm_out();
                                wait_ms(1);
                            }
                        }
                    }
                }
            }
        } else {
            gPwm[0] = 0x00 | 0x80;
            gPwm[1] = 0x00 | 0x80;
            gPwm[2] = 0x00 | 0x80;
            gPwm[3] = 0x00 | 0x80;
            gPwm[4] = 0x00 | 0x80;
            gPwm[5] = 0x00 | 0x80;
            pwm_out();
            wait_ms(1);
        }
    }
}
//--------------------------------------------------------------------------------
