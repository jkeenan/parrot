/* ex: set ro ft=c:
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 *
 * This file is generated automatically by tools/dev/nci_thunk_gen.pir
 *
 * Any changes made here will be lost!
 *
 */

/* src/nci/core_thunks.c
 *  Copyright (C) 2010-2015, Parrot Foundation.
 *
 * Native Call Interface routines.
 * Code to call C from parrot without libffi.
 */


#include "parrot/parrot.h"
#include "parrot/nci.h"
#include "pmc/pmc_nci.h"

#ifdef PARROT_IN_EXTENSION
/* external libraries can't have strings statically compiled into parrot */
#  define CONST_STRING(i, s) Parrot_str_new_constant((i), (s))
#else
#  include "core_thunks.str"
#endif

/* HEADERIZER HFILE: none */

 void
Parrot_nci_load_core_thunks(PARROT_INTERP);
/* HEADERIZER STOP */

/* All our static functions that call in various ways. */


static void
pcf_char(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef char(* func_t)(void);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    INTVAL t_0; char v_0;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "");
    ;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)();
    t_0 = (INTVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "I", t_0);
}
static void
pcf_char_short_char(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef char(* func_t)(short, char);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    INTVAL t_0; char v_0;
    INTVAL t_1; short v_1;
    INTVAL t_2; char v_2;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "II", &t_1, &t_2);
    v_1 = (short)t_1;
    v_2 = (char)t_2;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1, v_2);
    t_0 = (INTVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "I", t_0);
}
static void
pcf_double(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef double(* func_t)(void);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    FLOATVAL t_0; double v_0;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "");
    ;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)();
    t_0 = (FLOATVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "N", t_0);
}
static void
pcf_double_double(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef double(* func_t)(double);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    FLOATVAL t_0; double v_0;
    FLOATVAL t_1; double v_1;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "N", &t_1);
    v_1 = (double)t_1;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1);
    t_0 = (FLOATVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "N", t_0);
}
static void
pcf_float(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef float(* func_t)(void);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    FLOATVAL t_0; float v_0;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "");
    ;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)();
    t_0 = (FLOATVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "N", t_0);
}
static void
pcf_float_float_float(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef float(* func_t)(float, float);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    FLOATVAL t_0; float v_0;
    FLOATVAL t_1; float v_1;
    FLOATVAL t_2; float v_2;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "NN", &t_1, &t_2);
    v_1 = (float)t_1;
    v_2 = (float)t_2;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1, v_2);
    t_0 = (FLOATVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "N", t_0);
}
static void
pcf_int(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef int(* func_t)(void);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    INTVAL t_0; int v_0;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "");
    ;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)();
    t_0 = (INTVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "I", t_0);
}
static void
pcf_int_int_int_int(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef int(* func_t)(int, int, int);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    INTVAL t_0; int v_0;
    INTVAL t_1; int v_1;
    INTVAL t_2; int v_2;
    INTVAL t_3; int v_3;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "III", &t_1, &t_2, &t_3);
    v_1 = (int)t_1;
    v_2 = (int)t_2;
    v_3 = (int)t_3;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1, v_2, v_3);
    t_0 = (INTVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "I", t_0);
}
static void
pcf_int_ptr(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef int(* func_t)(void *);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    INTVAL t_0; int v_0;
    PMC  * t_1; void * v_1;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "P", &t_1);
    v_1 = PMC_IS_NULL(t_1) ? NULL : VTABLE_get_pointer(interp, t_1);;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1);
    t_0 = (INTVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "I", t_0);
}
static void
pcf_int_ptr_ptr(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef int(* func_t)(void *, void *);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    INTVAL t_0; int v_0;
    PMC  * t_1; void * v_1;
    PMC  * t_2; void * v_2;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "PP", &t_1, &t_2);
    v_1 = PMC_IS_NULL(t_1) ? NULL : VTABLE_get_pointer(interp, t_1);;
    v_2 = PMC_IS_NULL(t_2) ? NULL : VTABLE_get_pointer(interp, t_2);;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1, v_2);
    t_0 = (INTVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "I", t_0);
}
static void
pcf_int_short_char(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef int(* func_t)(short, char);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    INTVAL t_0; int v_0;
    INTVAL t_1; short v_1;
    INTVAL t_2; char v_2;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "II", &t_1, &t_2);
    v_1 = (short)t_1;
    v_2 = (char)t_2;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1, v_2);
    t_0 = (INTVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "I", t_0);
}
static void
pcf_int_cstr(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef int(* func_t)(char *);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    INTVAL t_0; int v_0;
    STRING * t_1; char * v_1;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "S", &t_1);
    v_1 = STRING_IS_NULL(t_1) ? NULL : Parrot_str_to_cstring(interp, t_1);
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1);
    t_0 = (INTVAL)v_0;
    t_1 = Parrot_str_new(interp, v_1, 0);
    Parrot_pcc_set_call_from_c_args(interp, call_object, "IS", t_0, t_1);
}
static void
pcf_long(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef long(* func_t)(void);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    INTVAL t_0; long v_0;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "");
    ;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)();
    t_0 = (INTVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "I", t_0);
}
static void
pcf_ptr(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void *(* func_t)(void);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    PMC  * t_0; void * v_0;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "");
    ;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)();
    if (v_0 != NULL) {
          t_0 = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
          VTABLE_set_pointer(interp, t_0, v_0);
       }
       else {
           t_0 = PMCNULL;
       };
    Parrot_pcc_set_call_from_c_args(interp, call_object, "P", t_0);
}
static void
pcf_ptr_int(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void *(* func_t)(int);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    PMC  * t_0; void * v_0;
    INTVAL t_1; int v_1;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "I", &t_1);
    v_1 = (int)t_1;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1);
    if (v_0 != NULL) {
          t_0 = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
          VTABLE_set_pointer(interp, t_0, v_0);
       }
       else {
           t_0 = PMCNULL;
       };
    Parrot_pcc_set_call_from_c_args(interp, call_object, "P", t_0);
}
static void
pcf_ptr_int_int(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void *(* func_t)(int, int);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    PMC  * t_0; void * v_0;
    INTVAL t_1; int v_1;
    INTVAL t_2; int v_2;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "II", &t_1, &t_2);
    v_1 = (int)t_1;
    v_2 = (int)t_2;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1, v_2);
    if (v_0 != NULL) {
          t_0 = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
          VTABLE_set_pointer(interp, t_0, v_0);
       }
       else {
           t_0 = PMCNULL;
       };
    Parrot_pcc_set_call_from_c_args(interp, call_object, "P", t_0);
}
static void
pcf_ptr_int_int_int_int(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void *(* func_t)(int, int, int, int);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    PMC  * t_0; void * v_0;
    INTVAL t_1; int v_1;
    INTVAL t_2; int v_2;
    INTVAL t_3; int v_3;
    INTVAL t_4; int v_4;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "IIII", &t_1, &t_2, &t_3, &t_4);
    v_1 = (int)t_1;
    v_2 = (int)t_2;
    v_3 = (int)t_3;
    v_4 = (int)t_4;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1, v_2, v_3, v_4);
    if (v_0 != NULL) {
          t_0 = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
          VTABLE_set_pointer(interp, t_0, v_0);
       }
       else {
           t_0 = PMCNULL;
       };
    Parrot_pcc_set_call_from_c_args(interp, call_object, "P", t_0);
}
static void
pcf_ptr_int_ptr(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void *(* func_t)(int, void *);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    PMC  * t_0; void * v_0;
    INTVAL t_1; int v_1;
    PMC  * t_2; void * v_2;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "IP", &t_1, &t_2);
    v_1 = (int)t_1;
    v_2 = PMC_IS_NULL(t_2) ? NULL : VTABLE_get_pointer(interp, t_2);;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1, v_2);
    if (v_0 != NULL) {
          t_0 = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
          VTABLE_set_pointer(interp, t_0, v_0);
       }
       else {
           t_0 = PMCNULL;
       };
    Parrot_pcc_set_call_from_c_args(interp, call_object, "P", t_0);
}
static void
pcf_ptr_ptr(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void *(* func_t)(void *);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    PMC  * t_0; void * v_0;
    PMC  * t_1; void * v_1;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "P", &t_1);
    v_1 = PMC_IS_NULL(t_1) ? NULL : VTABLE_get_pointer(interp, t_1);;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1);
    if (v_0 != NULL) {
          t_0 = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
          VTABLE_set_pointer(interp, t_0, v_0);
       }
       else {
           t_0 = PMCNULL;
       };
    Parrot_pcc_set_call_from_c_args(interp, call_object, "P", t_0);
}
static void
pcf_ptr_ptr_STRING(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void *(* func_t)(void *, STRING *);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    PMC  * t_0; void * v_0;
    PMC  * t_1; void * v_1;
    STRING * t_2; STRING * v_2;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "PS", &t_1, &t_2);
    v_1 = PMC_IS_NULL(t_1) ? NULL : VTABLE_get_pointer(interp, t_1);;
    v_2 = t_2;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1, v_2);
    if (v_0 != NULL) {
          t_0 = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
          VTABLE_set_pointer(interp, t_0, v_0);
       }
       else {
           t_0 = PMCNULL;
       };
    Parrot_pcc_set_call_from_c_args(interp, call_object, "P", t_0);
}
static void
pcf_short(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef short(* func_t)(void);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    INTVAL t_0; short v_0;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "");
    ;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)();
    t_0 = (INTVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "I", t_0);
}
static void
pcf_short_short_char(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef short(* func_t)(short, char);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    INTVAL t_0; short v_0;
    INTVAL t_1; short v_1;
    INTVAL t_2; char v_2;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "II", &t_1, &t_2);
    v_1 = (short)t_1;
    v_2 = (char)t_2;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1, v_2);
    t_0 = (INTVAL)v_0;
    Parrot_pcc_set_call_from_c_args(interp, call_object, "I", t_0);
}
static void
pcf_cstr(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef char *(* func_t)(void);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    STRING * t_0; char * v_0;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "");
    ;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)();
    t_0 = Parrot_str_new(interp, v_0, 0);
    Parrot_pcc_set_call_from_c_args(interp, call_object, "S", t_0);
}
static void
pcf_cstr_cstr(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef char *(* func_t)(char *);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    STRING * t_0; char * v_0;
    STRING * t_1; char * v_1;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "S", &t_1);
    v_1 = STRING_IS_NULL(t_1) ? NULL : Parrot_str_to_cstring(interp, t_1);
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1);
    t_0 = Parrot_str_new(interp, v_0, 0);
    t_1 = Parrot_str_new(interp, v_1, 0);
    Parrot_pcc_set_call_from_c_args(interp, call_object, "SS", t_0, t_1);
}
static void
pcf_cstr_cstr_cstr(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef char *(* func_t)(char *, char *);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    STRING * t_0; char * v_0;
    STRING * t_1; char * v_1;
    STRING * t_2; char * v_2;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "SS", &t_1, &t_2);
    v_1 = STRING_IS_NULL(t_1) ? NULL : Parrot_str_to_cstring(interp, t_1);
    v_2 = STRING_IS_NULL(t_2) ? NULL : Parrot_str_to_cstring(interp, t_2);
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
    v_0 =  (*fn_pointer)(v_1, v_2);
    t_0 = Parrot_str_new(interp, v_0, 0);
    t_1 = Parrot_str_new(interp, v_1, 0);
    t_2 = Parrot_str_new(interp, v_2, 0);
    Parrot_pcc_set_call_from_c_args(interp, call_object, "SSS", t_0, t_1, t_2);
}
static void
pcf_void(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void(* func_t)(void);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    ;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "");
    ;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
     (*fn_pointer)();
    Parrot_pcc_set_call_from_c_args(interp, call_object, "");
}
static void
pcf_void_float_float_float(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void(* func_t)(float, float, float);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    FLOATVAL t_1; float v_1;
    FLOATVAL t_2; float v_2;
    FLOATVAL t_3; float v_3;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "NNN", &t_1, &t_2, &t_3);
    v_1 = (float)t_1;
    v_2 = (float)t_2;
    v_3 = (float)t_3;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
     (*fn_pointer)(v_1, v_2, v_3);
    Parrot_pcc_set_call_from_c_args(interp, call_object, "");
}
static void
pcf_void_ptr(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void(* func_t)(void *);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    PMC  * t_1; void * v_1;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "P", &t_1);
    v_1 = PMC_IS_NULL(t_1) ? NULL : VTABLE_get_pointer(interp, t_1);;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
     (*fn_pointer)(v_1);
    Parrot_pcc_set_call_from_c_args(interp, call_object, "");
}
static void
pcf_void_PMC(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void(* func_t)(PMC *);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    PMC * t_1; PMC * v_1;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "P", &t_1);
    v_1 = t_1;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
     (*fn_pointer)(v_1);
    Parrot_pcc_set_call_from_c_args(interp, call_object, "");
}
static void
pcf_void_ptr_int_int(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void(* func_t)(void *, int, int);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    PMC  * t_1; void * v_1;
    INTVAL t_2; int v_2;
    INTVAL t_3; int v_3;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "PII", &t_1, &t_2, &t_3);
    v_1 = PMC_IS_NULL(t_1) ? NULL : VTABLE_get_pointer(interp, t_1);;
    v_2 = (int)t_2;
    v_3 = (int)t_3;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
     (*fn_pointer)(v_1, v_2, v_3);
    Parrot_pcc_set_call_from_c_args(interp, call_object, "");
}
static void
pcf_void_ptr_PMC(PARROT_INTERP, PMC *nci, SHIM(PMC *self))
{
    typedef void(* func_t)(void *, PMC *);
    func_t fn_pointer;
    void *orig_func;
    PMC * const ctx         = CURRENT_CONTEXT(interp);
    PMC * const call_object = Parrot_pcc_get_signature(interp, ctx);
    PMC  * t_1; void * v_1;
    PMC * t_2; PMC * v_2;
    Parrot_pcc_fill_params_from_c_args(interp, call_object, "PP", &t_1, &t_2);
    v_1 = PMC_IS_NULL(t_1) ? NULL : VTABLE_get_pointer(interp, t_1);;
    v_2 = t_2;
    GETATTR_NCI_orig_func(interp, nci, orig_func);
    fn_pointer = (func_t)D2FPTR(orig_func);
     (*fn_pointer)(v_1, v_2);
    Parrot_pcc_set_call_from_c_args(interp, call_object, "");
}

 void
Parrot_nci_load_core_thunks(PARROT_INTERP) {
    PMC * const iglobals = interp->iglobals;
    PMC *nci_funcs;
    PMC *temp_pmc;

    PARROT_ASSERT(!(PMC_IS_NULL(iglobals)));

    nci_funcs = VTABLE_get_pmc_keyed_int(interp, iglobals, IGLOBALS_NCI_FUNCS);
    PARROT_ASSERT(!(PMC_IS_NULL(nci_funcs)));

    {
        const int n = 1;
        static const int sig[] = { 5, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_char);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 3;
        static const int sig[] = { 5, 6, 5, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_char_short_char);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 1;
        static const int sig[] = { 16, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_double);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 2;
        static const int sig[] = { 16, 16, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_double_double);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 1;
        static const int sig[] = { 15, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_float);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 3;
        static const int sig[] = { 15, 15, 15, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_float_float_float);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 1;
        static const int sig[] = { 7, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_int);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 4;
        static const int sig[] = { 7, 7, 7, 7, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_int_int_int_int);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 2;
        static const int sig[] = { 7, 30, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_int_ptr);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 3;
        static const int sig[] = { 7, 30, 30, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_int_ptr_ptr);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 3;
        static const int sig[] = { 7, 6, 5, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_int_short_char);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 2;
        static const int sig[] = { 7, 31, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_int_cstr);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 1;
        static const int sig[] = { 8, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_long);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 1;
        static const int sig[] = { 30, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_ptr);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 2;
        static const int sig[] = { 30, 7, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_ptr_int);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 3;
        static const int sig[] = { 30, 7, 7, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_ptr_int_int);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 5;
        static const int sig[] = { 30, 7, 7, 7, 7, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_ptr_int_int_int_int);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 3;
        static const int sig[] = { 30, 7, 30, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_ptr_int_ptr);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 2;
        static const int sig[] = { 30, 30, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_ptr_ptr);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 3;
        static const int sig[] = { 30, 30, 3, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_ptr_ptr_STRING);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 1;
        static const int sig[] = { 6, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_short);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 3;
        static const int sig[] = { 6, 6, 5, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_short_short_char);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 1;
        static const int sig[] = { 31, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_cstr);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 2;
        static const int sig[] = { 31, 31, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_cstr_cstr);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 3;
        static const int sig[] = { 31, 31, 31, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_cstr_cstr_cstr);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 1;
        static const int sig[] = { 29, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_void);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 4;
        static const int sig[] = { 29, 15, 15, 15, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_void_float_float_float);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 2;
        static const int sig[] = { 29, 30, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_void_ptr);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 2;
        static const int sig[] = { 29, 4, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_void_PMC);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 4;
        static const int sig[] = { 29, 30, 7, 7, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_void_ptr_int_int);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }

    {
        const int n = 3;
        static const int sig[] = { 29, 30, 4, };
        PMC *sig_pmc = Parrot_pmc_new_init_int(interp, enum_class_FixedIntegerArray, n);
        int i;
        for (i = 0; i < n; i++)
            VTABLE_set_integer_keyed_int(interp, sig_pmc, i, sig[i]);
        temp_pmc = Parrot_pmc_new(interp, enum_class_UnManagedStruct);
        VTABLE_set_pointer(interp, temp_pmc, (void *)pcf_void_ptr_PMC);
        VTABLE_set_pmc_keyed(interp, nci_funcs, sig_pmc, temp_pmc);
    }


}


/*
 * Local variables:
 *   c-file-style: "parrot"
 * End:
 * vim: expandtab shiftwidth=4 cinoptions='\:2=2' :
 */

