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
static const char *ng0 = "C:/Users/Marco/Dropbox/School/SPRING 2017/161L/Lab Assignments/CS-161L/Lab2 - Float Fixed Converter/fix2float.v";
static int ng1[] = {31, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {4294967295U, 0U};
static int ng4[] = {23, 0};
static int ng5[] = {127, 0};
static int ng6[] = {30, 0};
static int ng7[] = {8, 0};



static void Always_15_0(char *t0)
{
    char t6[8];
    char t11[8];
    char t35[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
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
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1008U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB9;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(18, ng0);

LAB17:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB12:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(24, ng0);

LAB18:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2088);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t8, 2, t12, 6, 2);
    t13 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t26 = (t6 + 4);
    t27 = (t13 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t26);
    t18 = *((unsigned int *)t27);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t27);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB20;

LAB19:    if (t23 != 0)
        goto LAB21;

LAB22:    t34 = (t11 + 4);
    t28 = *((unsigned int *)t34);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 2088);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 32, t9, 6);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_lshift(t11, 32, t4, 32, t6, 32);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 32);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t2, 32, t5, 6);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t6, 32, t8, 5);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 8);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t20 = *((unsigned int *)t12);
    t52 = (!(t20));
    if (t52 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    t12 = ((char*)((ng7)));
    xsi_vlog_convert_indexed_partindices(t6, t11, t35, ((int*)(t9)), 2, t10, 32, 1, t12, 32, 1, 0);
    t13 = (t6 + 4);
    t14 = *((unsigned int *)t13);
    t52 = (!(t14));
    t26 = (t11 + 4);
    t15 = *((unsigned int *)t26);
    t53 = (!(t15));
    t54 = (t52 && t53);
    t27 = (t35 + 4);
    t16 = *((unsigned int *)t27);
    t55 = (!(t16));
    t56 = (t54 && t55);
    if (t56 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB2;

LAB8:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(16, ng0);

LAB13:    xsi_set_current_line(17, ng0);
    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng3)));
    t36 = *((unsigned int *)t34);
    t37 = *((unsigned int *)t33);
    t38 = (t36 ^ t37);
    *((unsigned int *)t35) = t38;
    t39 = (t34 + 4);
    t40 = (t33 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB14;

LAB15:
LAB16:    t49 = ((char*)((ng2)));
    memset(t50, 0, 8);
    xsi_vlog_unsigned_add(t50, 32, t35, 32, t49, 32);
    t51 = (t0 + 1928);
    xsi_vlogvar_assign_value(t51, t50, 0, 0, 32);
    goto LAB12;

LAB14:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    goto LAB16;

LAB20:    *((unsigned int *)t11) = 1;
    goto LAB22;

LAB21:    t33 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(24, ng0);

LAB25:    xsi_set_current_line(25, ng0);
    t39 = (t0 + 2088);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t49 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t41, 6, t49, 32);
    t51 = (t0 + 2088);
    xsi_vlogvar_assign_value(t51, t35, 0, 0, 6);
    goto LAB18;

LAB26:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t11), 1);
    goto LAB27;

LAB28:    t17 = *((unsigned int *)t35);
    t57 = (t17 + 0);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t11);
    t58 = (t18 - t19);
    t59 = (t58 + 1);
    xsi_vlogvar_assign_value(t5, t4, t57, *((unsigned int *)t11), t59);
    goto LAB29;

}


extern void work_m_00000000001378895147_3586942087_init()
{
	static char *pe[] = {(void *)Always_15_0};
	xsi_register_didat("work_m_00000000001378895147_3586942087", "isim/floattb_isim_beh.exe.sim/work/m_00000000001378895147_3586942087.didat");
	xsi_register_executes(pe);
}
