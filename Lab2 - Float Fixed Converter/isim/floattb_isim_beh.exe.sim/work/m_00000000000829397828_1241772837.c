/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Marco/Dropbox/School/SPRING 2017/161L/Lab Assignments/CS-161L/Lab2 - Float Fixed Converter/float2fix.v";
static int ng1[] = {30, 0};
static int ng2[] = {8, 0};
static unsigned int ng3[] = {127U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {23, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {4294967295U, 0U, 0U, 0U};
static int ng8[] = {1, 0, 0, 0};
static unsigned int ng9[] = {4294967295U, 0U};
static int ng10[] = {9, 0};



static void Always_17_0(char *t0)
{
    char t4[8];
    char t12[8];
    char t33[16];
    char t77[16];
    char t79[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t78;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 1008U);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    t10 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t4, 32, t6, ((int*)(t8)), 2, t9, 32, 1, t10, 32, 1, 0);
    t11 = ((char*)((ng3)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 32, t4, 32, t11, 32);
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 9);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    t8 = ((char*)((ng5)));
    xsi_vlog_get_indexed_partselect(t12, 23, t3, ((int*)(t6)), 2, t7, 32, 1, t8, 32, 1, 1);
    t9 = ((char*)((ng6)));
    xsi_vlogtype_concat(t4, 24, 24, 2U, t9, 1, t12, 23);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 24);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB9;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    t10 = (t4 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(25, ng0);

LAB27:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB12:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    t7 = (t0 + 2248);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t6, 32, t9, 9);
    t10 = (t0 + 1208U);
    t11 = *((char **)t10);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 32, t4, 32, t11, 5);
    memset(t79, 0, 8);
    xsi_vlog_unsigned_rshift(t79, 24, t5, 24, t12, 32);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t79, 0, 0, 24);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2088);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    *((unsigned int *)t4) = t16;
    t9 = (t5 + 4);
    t10 = (t8 + 4);
    t11 = (t4 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 | t18);
    *((unsigned int *)t11) = t19;
    t20 = *((unsigned int *)t11);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB28;

LAB29:
LAB30:    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 24);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t4, t5, 8);
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    goto LAB2;

LAB8:    t9 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(21, ng0);

LAB13:    xsi_set_current_line(22, ng0);
    t11 = (t0 + 1928);
    t13 = (t11 + 56U);
    t31 = *((char **)t13);
    t32 = ((char*)((ng7)));
    t34 = 0;

LAB17:    t35 = (t34 < 1);
    if (t35 == 1)
        goto LAB18;

LAB19:    t34 = 1;

LAB20:    t57 = (t34 < 2);
    if (t57 == 1)
        goto LAB21;

LAB26:    t76 = ((char*)((ng8)));
    xsi_vlog_unsigned_add(t77, 36, t33, 36, t76, 32);
    t78 = (t0 + 1928);
    xsi_vlogvar_assign_value(t78, t77, 0, 0, 24);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng10)));
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t7, 9);
    t8 = (t0 + 1208U);
    t9 = *((char **)t8);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t4, 32, t9, 5);
    memset(t79, 0, 8);
    xsi_vlog_unsigned_lshift(t79, 32, t2, 32, t12, 32);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t79, 0, 0, 32);
    goto LAB12;

LAB14:    t55 = *((unsigned int *)t39);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t39) = (t55 | t56);

LAB16:    t34 = (t34 + 1);
    goto LAB17;

LAB15:    goto LAB16;

LAB18:    t36 = (t34 * 8);
    t37 = (t31 + t36);
    t38 = (t32 + t36);
    t39 = (t33 + t36);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 ^ t41);
    *((unsigned int *)t39) = t42;
    t43 = (t34 * 8);
    t44 = (t43 + 4);
    t45 = (t31 + t44);
    t46 = (t43 + 4);
    t47 = (t32 + t46);
    t48 = (t43 + 4);
    t49 = (t33 + t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t47);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB14;
    else
        goto LAB15;

LAB21:    t58 = (t34 * 8);
    t59 = (t33 + t58);
    *((unsigned int *)t59) = 0;
    t60 = (t58 + 4);
    t61 = (t33 + t60);
    *((unsigned int *)t61) = 0;
    t62 = (t34 < 1);
    if (t62 == 1)
        goto LAB22;

LAB24:    t69 = (t34 < 2);
    if (t69 == 1)
        goto LAB23;

LAB25:    t34 = (t34 + 1);
    goto LAB20;

LAB22:    t63 = (t31 + t58);
    t64 = (t58 + 4);
    t65 = (t31 + t64);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t65);
    t68 = (t66 | t67);
    *((unsigned int *)t59) = t68;
    *((unsigned int *)t61) = *((unsigned int *)t65);
    goto LAB25;

LAB23:    t70 = (t32 + t58);
    t71 = (t58 + 4);
    t72 = (t32 + t71);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t72);
    t75 = (t73 | t74);
    *((unsigned int *)t59) = t75;
    *((unsigned int *)t61) = *((unsigned int *)t72);
    goto LAB25;

LAB28:    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t11);
    *((unsigned int *)t4) = (t22 | t23);
    goto LAB30;

}


extern void work_m_00000000000829397828_1241772837_init()
{
	static char *pe[] = {(void *)Always_17_0};
	xsi_register_didat("work_m_00000000000829397828_1241772837", "isim/floattb_isim_beh.exe.sim/work/m_00000000000829397828_1241772837.didat");
	xsi_register_executes(pe);
}
