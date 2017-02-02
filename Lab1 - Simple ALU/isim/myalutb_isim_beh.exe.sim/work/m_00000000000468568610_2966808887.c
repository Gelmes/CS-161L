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
static const char *ng0 = "C:/Users/Marco/Dropbox/School/WINTER 2017/161L/Lab1-SimpleALU/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static int ng9[] = {1, 0};



static void Always_37_0(char *t0)
{
    char t8[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 3944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4512);
    *((int *)t2) = 1;
    t3 = (t0 + 3976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t5, 8, t7, 8);
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 8);
    goto LAB23;

LAB9:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 8, t5, 8, t7, 8);
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 8);
    goto LAB23;

LAB11:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 8, t5, 8, t7, 8);
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 8);
    goto LAB23;

LAB13:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 8, t5, 8, t7, 8);
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 8);
    goto LAB23;

LAB15:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t8) = t13;
    t4 = (t5 + 4);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB24;

LAB25:
LAB26:    t41 = (t0 + 3024);
    xsi_vlogvar_assign_value(t41, t8, 0, 0, 8);
    goto LAB23;

LAB17:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t8) = t13;
    t4 = (t5 + 4);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB27;

LAB28:
LAB29:    t41 = (t0 + 3024);
    xsi_vlogvar_assign_value(t41, t8, 0, 0, 8);
    goto LAB23;

LAB19:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t0 + 1664U);
    t7 = *((char **)t4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t8) = t13;
    t4 = (t5 + 4);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB30;

LAB31:
LAB32:    t23 = (t0 + 3024);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 8);
    goto LAB23;

LAB21:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_rshift(t8, 8, t5, 8, t4, 32);
    t7 = (t0 + 3024);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 8);
    goto LAB23;

LAB24:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = (t5 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    t40 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t40 & t36);
    goto LAB26;

LAB27:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t21 | t22);
    t23 = (t5 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t35 & t31);
    t36 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t36 & t32);
    goto LAB29;

LAB30:    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t8) = (t21 | t22);
    goto LAB32;

}

static void Always_53_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t50[8];
    char t51[8];
    char t52[8];
    char t62[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;

LAB0:    t1 = (t0 + 4192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4528);
    *((int *)t2) = 1;
    t3 = (t0 + 4224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(59, ng0);

LAB14:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t31) = 1;

LAB18:    memset(t30, 0, 8);
    t22 = (t31 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t31);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t22) != 0)
        goto LAB21;

LAB22:    t29 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB23;

LAB24:    t36 = *((unsigned int *)t30);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t29) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t30) > 0)
        goto LAB29;

LAB30:    memcpy(t6, t40, 8);

LAB31:    t41 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t41, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);

LAB32:    t2 = ((char*)((ng1)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng2)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng3)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng4)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t42 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(73, ng0);

LAB132:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB43:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(54, ng0);

LAB13:    xsi_set_current_line(55, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t21 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t30) = 1;
    goto LAB22;

LAB21:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB22;

LAB23:    t35 = ((char*)((ng3)));
    goto LAB24;

LAB25:    t40 = ((char*)((ng1)));
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t6, 32, t35, 32, t40, 32);
    goto LAB31;

LAB29:    memcpy(t6, t35, 8);
    goto LAB31;

LAB33:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 3024);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 1504U);
    t21 = *((char **)t8);
    memset(t31, 0, 8);
    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB45;

LAB44:    t22 = (t21 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB45;

LAB48:    if (*((unsigned int *)t7) < *((unsigned int *)t21))
        goto LAB46;

LAB47:    memset(t30, 0, 8);
    t29 = (t31 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t31);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t29) != 0)
        goto LAB51;

LAB52:    t40 = (t30 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t40);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB53;

LAB54:    t17 = *((unsigned int *)t30);
    t18 = (~(t17));
    t19 = *((unsigned int *)t40);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t40) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t30) > 0)
        goto LAB59;

LAB60:    memcpy(t6, t43, 8);

LAB61:    t44 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t44, t6, 0, 0, 1, 0LL);
    goto LAB43;

LAB35:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 3024);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 1504U);
    t21 = *((char **)t8);
    memset(t31, 0, 8);
    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB63;

LAB62:    t22 = (t21 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t7) > *((unsigned int *)t21))
        goto LAB64;

LAB65:    memset(t30, 0, 8);
    t29 = (t31 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t31);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t29) != 0)
        goto LAB69;

LAB70:    t40 = (t30 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t40);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB71;

LAB72:    t17 = *((unsigned int *)t30);
    t18 = (~(t17));
    t19 = *((unsigned int *)t40);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t40) > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t30) > 0)
        goto LAB77;

LAB78:    memcpy(t6, t43, 8);

LAB79:    t44 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t44, t6, 0, 0, 1, 0LL);
    goto LAB43;

LAB37:    xsi_set_current_line(65, ng0);

LAB80:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t8 = (t0 + 1664U);
    t21 = *((char **)t8);
    memset(t30, 0, 8);
    t8 = (t30 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t30) = t17;
    t18 = *((unsigned int *)t22);
    t19 = (t18 >> 7);
    t20 = (t19 & 1);
    *((unsigned int *)t8) = t20;
    memset(t31, 0, 8);
    t28 = (t6 + 4);
    t29 = (t30 + 4);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t30);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t28);
    t27 = *((unsigned int *)t29);
    t32 = (t26 ^ t27);
    t33 = (t25 | t32);
    t34 = *((unsigned int *)t28);
    t36 = *((unsigned int *)t29);
    t37 = (t34 | t36);
    t38 = (~(t37));
    t39 = (t33 & t38);
    if (t39 != 0)
        goto LAB84;

LAB81:    if (t37 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t31) = 1;

LAB84:    t40 = (t31 + 4);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t31);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB85;

LAB86:
LAB87:    goto LAB43;

LAB39:    xsi_set_current_line(69, ng0);

LAB106:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t8 = (t0 + 1664U);
    t21 = *((char **)t8);
    memset(t30, 0, 8);
    t8 = (t30 + 4);
    t22 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t30) = t17;
    t18 = *((unsigned int *)t22);
    t19 = (t18 >> 7);
    t20 = (t19 & 1);
    *((unsigned int *)t8) = t20;
    memset(t31, 0, 8);
    t28 = (t6 + 4);
    t29 = (t30 + 4);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t30);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t28);
    t27 = *((unsigned int *)t29);
    t32 = (t26 ^ t27);
    t33 = (t25 | t32);
    t34 = *((unsigned int *)t28);
    t36 = *((unsigned int *)t29);
    t37 = (t34 | t36);
    t38 = (~(t37));
    t39 = (t33 & t38);
    if (t39 != 0)
        goto LAB108;

LAB107:    if (t37 != 0)
        goto LAB109;

LAB110:    t40 = (t31 + 4);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t31);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB111;

LAB112:
LAB113:    goto LAB43;

LAB45:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB47;

LAB46:    *((unsigned int *)t31) = 1;
    goto LAB47;

LAB49:    *((unsigned int *)t30) = 1;
    goto LAB52;

LAB51:    t35 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB52;

LAB53:    t41 = ((char*)((ng3)));
    goto LAB54;

LAB55:    t43 = ((char*)((ng1)));
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t6, 32, t41, 32, t43, 32);
    goto LAB61;

LAB59:    memcpy(t6, t41, 8);
    goto LAB61;

LAB63:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t31) = 1;
    goto LAB65;

LAB67:    *((unsigned int *)t30) = 1;
    goto LAB70;

LAB69:    t35 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB70;

LAB71:    t41 = ((char*)((ng3)));
    goto LAB72;

LAB73:    t43 = ((char*)((ng1)));
    goto LAB74;

LAB75:    xsi_vlog_unsigned_bit_combine(t6, 32, t41, 32, t43, 32);
    goto LAB79;

LAB77:    memcpy(t6, t41, 8);
    goto LAB79;

LAB83:    t35 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(65, ng0);

LAB88:    xsi_set_current_line(66, ng0);
    t41 = (t0 + 1504U);
    t43 = *((char **)t41);
    memset(t52, 0, 8);
    t41 = (t52 + 4);
    t44 = (t43 + 4);
    t53 = *((unsigned int *)t43);
    t54 = (t53 >> 7);
    t55 = (t54 & 1);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t44);
    t57 = (t56 >> 7);
    t58 = (t57 & 1);
    *((unsigned int *)t41) = t58;
    t59 = (t0 + 3024);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t62, 0, 8);
    t63 = (t62 + 4);
    t64 = (t61 + 4);
    t65 = *((unsigned int *)t61);
    t66 = (t65 >> 7);
    t67 = (t66 & 1);
    *((unsigned int *)t62) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 >> 7);
    t70 = (t69 & 1);
    *((unsigned int *)t63) = t70;
    memset(t71, 0, 8);
    t72 = (t52 + 4);
    t73 = (t62 + 4);
    t74 = *((unsigned int *)t52);
    t75 = *((unsigned int *)t62);
    t76 = (t74 ^ t75);
    t77 = *((unsigned int *)t72);
    t78 = *((unsigned int *)t73);
    t79 = (t77 ^ t78);
    t80 = (t76 | t79);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t73);
    t83 = (t81 | t82);
    t84 = (~(t83));
    t85 = (t80 & t84);
    if (t85 != 0)
        goto LAB92;

LAB89:    if (t83 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t71) = 1;

LAB92:    memset(t51, 0, 8);
    t87 = (t71 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t71);
    t91 = (t90 & t89);
    t92 = (t91 & 1U);
    if (t92 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t87) != 0)
        goto LAB95;

LAB96:    t94 = (t51 + 4);
    t95 = *((unsigned int *)t51);
    t96 = *((unsigned int *)t94);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB97;

LAB98:    t99 = *((unsigned int *)t51);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t94) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t51) > 0)
        goto LAB103;

LAB104:    memcpy(t50, t103, 8);

LAB105:    t104 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t104, t50, 0, 0, 1, 0LL);
    goto LAB87;

LAB91:    t86 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t51) = 1;
    goto LAB96;

LAB95:    t93 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB96;

LAB97:    t98 = ((char*)((ng1)));
    goto LAB98;

LAB99:    t103 = ((char*)((ng3)));
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t50, 32, t98, 32, t103, 32);
    goto LAB105;

LAB103:    memcpy(t50, t98, 8);
    goto LAB105;

LAB108:    *((unsigned int *)t31) = 1;
    goto LAB110;

LAB109:    t35 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(69, ng0);

LAB114:    xsi_set_current_line(70, ng0);
    t41 = (t0 + 1504U);
    t43 = *((char **)t41);
    memset(t52, 0, 8);
    t41 = (t52 + 4);
    t44 = (t43 + 4);
    t53 = *((unsigned int *)t43);
    t54 = (t53 >> 7);
    t55 = (t54 & 1);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t44);
    t57 = (t56 >> 7);
    t58 = (t57 & 1);
    *((unsigned int *)t41) = t58;
    t59 = (t0 + 3024);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t62, 0, 8);
    t63 = (t62 + 4);
    t64 = (t61 + 4);
    t65 = *((unsigned int *)t61);
    t66 = (t65 >> 7);
    t67 = (t66 & 1);
    *((unsigned int *)t62) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 >> 7);
    t70 = (t69 & 1);
    *((unsigned int *)t63) = t70;
    memset(t71, 0, 8);
    t72 = (t52 + 4);
    t73 = (t62 + 4);
    t74 = *((unsigned int *)t52);
    t75 = *((unsigned int *)t62);
    t76 = (t74 ^ t75);
    t77 = *((unsigned int *)t72);
    t78 = *((unsigned int *)t73);
    t79 = (t77 ^ t78);
    t80 = (t76 | t79);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t73);
    t83 = (t81 | t82);
    t84 = (~(t83));
    t85 = (t80 & t84);
    if (t85 != 0)
        goto LAB118;

LAB115:    if (t83 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t71) = 1;

LAB118:    memset(t51, 0, 8);
    t87 = (t71 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t71);
    t91 = (t90 & t89);
    t92 = (t91 & 1U);
    if (t92 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t87) != 0)
        goto LAB121;

LAB122:    t94 = (t51 + 4);
    t95 = *((unsigned int *)t51);
    t96 = *((unsigned int *)t94);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB123;

LAB124:    t99 = *((unsigned int *)t51);
    t100 = (~(t99));
    t101 = *((unsigned int *)t94);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t94) > 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t51) > 0)
        goto LAB129;

LAB130:    memcpy(t50, t103, 8);

LAB131:    t104 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t104, t50, 0, 0, 1, 0LL);
    goto LAB113;

LAB117:    t86 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB118;

LAB119:    *((unsigned int *)t51) = 1;
    goto LAB122;

LAB121:    t93 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB122;

LAB123:    t98 = ((char*)((ng1)));
    goto LAB124;

LAB125:    t103 = ((char*)((ng3)));
    goto LAB126;

LAB127:    xsi_vlog_unsigned_bit_combine(t50, 32, t98, 32, t103, 32);
    goto LAB131;

LAB129:    memcpy(t50, t98, 8);
    goto LAB131;

}


extern void work_m_00000000000468568610_2966808887_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Always_53_1};
	xsi_register_didat("work_m_00000000000468568610_2966808887", "isim/myalutb_isim_beh.exe.sim/work/m_00000000000468568610_2966808887.didat");
	xsi_register_executes(pe);
}
