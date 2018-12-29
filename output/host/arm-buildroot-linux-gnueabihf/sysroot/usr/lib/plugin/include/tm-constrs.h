/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/arm.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_m (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 26 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_o (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 32 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(offsettable_nonstrict_memref_p (op)));
}
static inline bool
satisfies_constraint_V (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 41 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op)))) && (!(
#line 43 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(offsettable_nonstrict_memref_p (op)))));
}
static inline bool
satisfies_constraint__l (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 50 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 51 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)));
}
static inline bool
satisfies_constraint__g (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 57 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 58 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)));
}
static inline bool
satisfies_constraint_p (rtx ARG_UNUSED (op))
{
  return 
#line 62 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(address_operand (op, VOIDmode));
}
static inline bool
satisfies_constraint_i (rtx op)
{
  return (
#line 66 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(CONSTANT_P (op))) && (
#line 67 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_s (rtx op)
{
  return (
#line 71 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(CONSTANT_P (op))) && ((
#line 72 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(!CONST_SCALAR_INT_P (op))) && (
#line 73 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op))));
}
static inline bool
satisfies_constraint_n (rtx op)
{
  return (
#line 77 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(CONST_SCALAR_INT_P (op))) && (
#line 78 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_E (rtx op)
{
  return (
#line 82 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 83 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_F (rtx op)
{
  return (
#line 89 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 90 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_X (rtx ARG_UNUSED (op))
{
  return 
#line 95 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/common.md"
(true);
}
static inline bool
satisfies_constraint_j (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (
#line 71 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_HAVE_MOVT)) && (((GET_CODE (op) == HIGH) && (
#line 73 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(arm_valid_symbolic_address_p (XEXP (op, 0))))) || ((GET_CODE (op) == CONST_INT) && (
#line 75 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
((ival & 0xffff0000) == 0))));
}
static inline bool
satisfies_constraint_Pj (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 80 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 81 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
((ival & 0xfffff000) == 0)));
}
static inline bool
satisfies_constraint_PJ (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 86 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 87 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(((-ival) & 0xfffff000) == 0)));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 110 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (ival)
		   : ival >= 0 && ival <= 255));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 117 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT ? (ival >= -4095 && ival <= 4095)
		   : (ival >= -255 && ival <= -1)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 125 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (~ival)
		   : thumb_shiftable_const (ival)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 132 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (-ival)
		   : (ival >= -7 && ival <= 7)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 141 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT ? ((ival >= 0 && ival <= 32)
				 || (((ival & (ival - 1)) & 0xFFFFFFFF) == 0))
		   : ival >= 0 && ival <= 1020 && (ival & 3) == 0));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 148 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(!TARGET_32BIT && (ival >= 0 && ival <= 31)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 154 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -508 && ival <= 508
		   && ((ival & 3) == 0)));
}
static inline bool
satisfies_constraint_Pa (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 160 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -510 && ival <= 510
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Pb (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 166 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -262 && ival <= 262
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Pc (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 172 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB1
  		    && ival > 1020 && ival <= 1275));
}
static inline bool
satisfies_constraint_Pd (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 178 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB && ival >= 0 && ival <= 7));
}
static inline bool
satisfies_constraint_Pe (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 183 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= 256 && ival <= 510));
}
static inline bool
satisfies_constraint_Pf (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 188 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(!is_mm_relaxed (memmodel_from_int (ival))
		    && !is_mm_consume (memmodel_from_int (ival))
		    && !is_mm_release (memmodel_from_int (ival))));
}
static inline bool
satisfies_constraint_Ps (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 195 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 255));
}
static inline bool
satisfies_constraint_Pt (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 200 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= 7));
}
static inline bool
satisfies_constraint_Pu (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 205 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 1 && ival <= 8));
}
static inline bool
satisfies_constraint_Pv (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 210 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 0));
}
static inline bool
satisfies_constraint_Pw (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 215 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= -1));
}
static inline bool
satisfies_constraint_Px (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 220 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= -1));
}
static inline bool
satisfies_constraint_Py (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 225 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 0 && ival <= 255));
}
static inline bool
satisfies_constraint_Pz (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 230 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && (ival == 0)));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 235 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Dz (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 241 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_NEON && op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_Da (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 248 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 2);
}
static inline bool
satisfies_constraint_Db (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 255 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 3);
}
static inline bool
satisfies_constraint_Dc (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 263 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 4
		   && !(optimize_size || arm_ld_sched));
}
static inline bool
satisfies_constraint_Dd (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 270 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && const_ok_for_dimode_op (ival, PLUS)));
}
static inline bool
satisfies_constraint_De (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 276 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && const_ok_for_dimode_op (ival, AND)));
}
static inline bool
satisfies_constraint_Df (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 282 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && const_ok_for_dimode_op (ival, IOR)));
}
static inline bool
satisfies_constraint_Dg (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 288 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && const_ok_for_dimode_op (ival, XOR)));
}
static inline bool
satisfies_constraint_Di (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return 
#line 295 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_by_immediates (op));
}
static inline bool
satisfies_constraint_Dn (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_VECTOR:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return 
#line 302 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_mov_operand (op, GET_MODE (op)));
}
static inline bool
satisfies_constraint_Dl (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 310 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_DL (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 318 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_inv_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_Do (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 325 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_LDRD && offset_ok_for_ldrd_strd (ival)));
}
static inline bool
satisfies_constraint_Dv (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 332 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Dy (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 339 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && TARGET_VFP_DOUBLE && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Dt (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 345 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && vfp3_const_double_for_fract_bits (op)));
}
static inline bool
satisfies_constraint_Dp (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 351 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT
		    && vfp3_const_double_for_bits (op) > 0));
}
static inline bool
satisfies_constraint_Ua (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return mem_noofs_operand (op, mode);
}
static inline bool
satisfies_constraint_Uh (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 366 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(arm_legitimate_address_p (GET_MODE (op), XEXP (op, 0), false) && !arm_is_constant_pool_ref (op)));
}
static inline bool
satisfies_constraint_Ut (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 373 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_struct_mem_operand (op)));
}
static inline bool
satisfies_constraint_Uv (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 379 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, FALSE)));
}
static inline bool
satisfies_constraint_Uy (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 385 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, TRUE)));
}
static inline bool
satisfies_constraint_Un (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 392 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 0, true)));
}
static inline bool
satisfies_constraint_Um (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 399 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 2, true)));
}
static inline bool
satisfies_constraint_Us (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 406 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 1, true)));
}
static inline bool
satisfies_constraint_Uq (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 412 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_ARM
		   && arm_legitimate_address_outer_p (GET_MODE (op), XEXP (op, 0),
						      SIGN_EXTEND, 0)
		   && !arm_is_constant_pool_ref (op)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 421 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(REG_P (XEXP (op, 0))));
}
static inline bool
satisfies_constraint_Uu (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 427 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB
		   && thumb1_legitimate_address_p (GET_MODE (op), XEXP (op, 0),
						   0)));
}
static inline bool
satisfies_constraint_Uw (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 439 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(TARGET_THUMB
		   && thumb1_legitimate_address_p (GET_MODE (op), XEXP (op, 0),
						   0)
		   && GET_CODE (XEXP (op, 0)) != POST_INC));
}
static inline bool
satisfies_constraint_US (rtx op)
{
  return GET_CODE (op) == SYMBOL_REF;
}
static inline bool
satisfies_constraint_Uz (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 454 "/proj/esdt_sdk/gnu_abe/ABE/builds/lin/arm/arm-linux/snapshots//gcc-linaro-7.2-2017.11-rc1/gcc/config/arm/constraints.md"
(arm_coproc_ldc_stc_legitimate_address (op)));
}
#endif /* tm-constrs.h */
