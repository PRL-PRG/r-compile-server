#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3264246192_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3264246192_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3264246192_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3264246192_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3264246192
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3264246192_, RHO, CCP);
  // st `boxplot.default` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner3264246192_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3264246192 dynamic dispatch ([x, `...`, range, width, varwidth, notch, outline, names, plot, border, col, log, pars, ann, horizontal, add, at])

  return Rsh_Fir_user_version_inner3264246192_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3264246192_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3264246192 version 0 (*, dots, *, *, *, *, *, *, *, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 17) Rsh_error("FIŘ arity mismatch for inner3264246192/0: expected 17, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_range;  // range
  SEXP Rsh_Fir_reg_width;  // width
  SEXP Rsh_Fir_reg_varwidth;  // varwidth
  SEXP Rsh_Fir_reg_notch;  // notch
  SEXP Rsh_Fir_reg_outline;  // outline
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_plot;  // plot
  SEXP Rsh_Fir_reg_border;  // border
  SEXP Rsh_Fir_reg_col;  // col
  SEXP Rsh_Fir_reg_log;  // log
  SEXP Rsh_Fir_reg_pars;  // pars
  SEXP Rsh_Fir_reg_ann;  // ann
  SEXP Rsh_Fir_reg_horizontal;  // horizontal
  SEXP Rsh_Fir_reg_add;  // add
  SEXP Rsh_Fir_reg_at;  // at
  SEXP Rsh_Fir_reg_range_isMissing;  // range_isMissing
  SEXP Rsh_Fir_reg_range_orDefault;  // range_orDefault
  SEXP Rsh_Fir_reg_width_isMissing;  // width_isMissing
  SEXP Rsh_Fir_reg_width_orDefault;  // width_orDefault
  SEXP Rsh_Fir_reg_varwidth_isMissing;  // varwidth_isMissing
  SEXP Rsh_Fir_reg_varwidth_orDefault;  // varwidth_orDefault
  SEXP Rsh_Fir_reg_notch_isMissing;  // notch_isMissing
  SEXP Rsh_Fir_reg_notch_orDefault;  // notch_orDefault
  SEXP Rsh_Fir_reg_outline_isMissing;  // outline_isMissing
  SEXP Rsh_Fir_reg_outline_orDefault;  // outline_orDefault
  SEXP Rsh_Fir_reg_plot_isMissing;  // plot_isMissing
  SEXP Rsh_Fir_reg_plot_orDefault;  // plot_orDefault
  SEXP Rsh_Fir_reg_border_isMissing;  // border_isMissing
  SEXP Rsh_Fir_reg_border_orDefault;  // border_orDefault
  SEXP Rsh_Fir_reg_par;  // par
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_col_isMissing;  // col_isMissing
  SEXP Rsh_Fir_reg_col_orDefault;  // col_orDefault
  SEXP Rsh_Fir_reg_log_isMissing;  // log_isMissing
  SEXP Rsh_Fir_reg_log_orDefault;  // log_orDefault
  SEXP Rsh_Fir_reg_pars_isMissing;  // pars_isMissing
  SEXP Rsh_Fir_reg_pars_orDefault;  // pars_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_ann_isMissing;  // ann_isMissing
  SEXP Rsh_Fir_reg_ann_orDefault;  // ann_orDefault
  SEXP Rsh_Fir_reg_add1_;  // add1
  SEXP Rsh_Fir_reg_add2_;  // add2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_horizontal_isMissing;  // horizontal_isMissing
  SEXP Rsh_Fir_reg_horizontal_orDefault;  // horizontal_orDefault
  SEXP Rsh_Fir_reg_add_isMissing;  // add_isMissing
  SEXP Rsh_Fir_reg_add_orDefault;  // add_orDefault
  SEXP Rsh_Fir_reg_at_isMissing;  // at_isMissing
  SEXP Rsh_Fir_reg_at_orDefault;  // at_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_args1_;  // args1
  SEXP Rsh_Fir_reg_attributes;  // attributes
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_args2_;  // args2
  SEXP Rsh_Fir_reg_args3_;  // args3
  SEXP Rsh_Fir_reg_attributes1_;  // attributes1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_args4_;  // args4
  SEXP Rsh_Fir_reg_args5_;  // args5
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_args6_;  // args6
  SEXP Rsh_Fir_reg_args7_;  // args7
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_args9_;  // args9
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_namedargs;  // namedargs
  SEXP Rsh_Fir_reg_namedargs1_;  // namedargs1
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_groups;  // groups
  SEXP Rsh_Fir_reg_groups1_;  // groups1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_groups2_;  // groups2
  SEXP Rsh_Fir_reg_groups3_;  // groups3
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_groups4_;  // groups4
  SEXP Rsh_Fir_reg_groups5_;  // groups5
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_groups6_;  // groups6
  SEXP Rsh_Fir_reg_groups7_;  // groups7
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_groups8_;  // groups8
  SEXP Rsh_Fir_reg_groups9_;  // groups9
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_groups10_;  // groups10
  SEXP Rsh_Fir_reg_groups11_;  // groups11
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_class1_;  // class1
  SEXP Rsh_Fir_reg_class2_;  // class2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_groups12_;  // groups12
  SEXP Rsh_Fir_reg_groups13_;  // groups13
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_cls;  // cls
  SEXP Rsh_Fir_reg_cls1_;  // cls1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_cls2_;  // cls2
  SEXP Rsh_Fir_reg_cls3_;  // cls3
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_cls5_;  // cls5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_boxplot_stats;  // boxplot_stats
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_groups14_;  // groups14
  SEXP Rsh_Fir_reg_groups15_;  // groups15
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_groups17_;  // groups17
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_unclass1_;  // unclass1
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_range1_;  // range1
  SEXP Rsh_Fir_reg_range2_;  // range2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_list2_;  // list2
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_matrix1_;  // matrix1
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_numeric;  // numeric
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_groups18_;  // groups18
  SEXP Rsh_Fir_reg_groups19_;  // groups19
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_ct;  // ct
  SEXP Rsh_Fir_reg_ct1_;  // ct1
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_i42_;  // i42
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_i44_;  // i44
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_ct2_;  // ct2
  SEXP Rsh_Fir_reg_ct3_;  // ct3
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_i47_;  // i47
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_ng;  // ng
  SEXP Rsh_Fir_reg_ng1_;  // ng1
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg_i49_;  // i49
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_i52_;  // i52
  SEXP Rsh_Fir_reg_i53_;  // i53
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_i55_;  // i55
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_i58_;  // i58
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_i59_;  // i59
  SEXP Rsh_Fir_reg_i60_;  // i60
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_i63_;  // i63
  SEXP Rsh_Fir_reg_i64_;  // i64
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_i66_;  // i66
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_i71_;  // i71
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_out;  // out
  SEXP Rsh_Fir_reg_out1_;  // out1
  SEXP Rsh_Fir_reg_i72_;  // i72
  SEXP Rsh_Fir_reg_i73_;  // i73
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_i76_;  // i76
  SEXP Rsh_Fir_reg_i77_;  // i77
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_i79_;  // i79
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_i82_;  // i82
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg_group;  // group
  SEXP Rsh_Fir_reg_group1_;  // group1
  SEXP Rsh_Fir_reg_sym24_;  // sym24
  SEXP Rsh_Fir_reg_base24_;  // base24
  SEXP Rsh_Fir_reg_guard24_;  // guard24
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_i85_;  // i85
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_ct4_;  // ct4
  SEXP Rsh_Fir_reg_ct5_;  // ct5
  SEXP Rsh_Fir_reg_lo;  // lo
  SEXP Rsh_Fir_reg_lo1_;  // lo1
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_r133_;  // r133
  SEXP Rsh_Fir_reg_i86_;  // i86
  SEXP Rsh_Fir_reg_ct6_;  // ct6
  SEXP Rsh_Fir_reg_ct7_;  // ct7
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_sym25_;  // sym25
  SEXP Rsh_Fir_reg_base25_;  // base25
  SEXP Rsh_Fir_reg_guard25_;  // guard25
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_cl;  // cl
  SEXP Rsh_Fir_reg_cl1_;  // cl1
  SEXP Rsh_Fir_reg_length5_;  // length5
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_cl2_;  // cl2
  SEXP Rsh_Fir_reg_cl3_;  // cl3
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_cl4_;  // cl4
  SEXP Rsh_Fir_reg_cl5_;  // cl5
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_oldClass__;  // oldClass__
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_oldClass__1_;  // oldClass__1
  SEXP Rsh_Fir_reg_r142_;  // r142
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_oldClass__2_;  // oldClass__2
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg_sym26_;  // sym26
  SEXP Rsh_Fir_reg_base26_;  // base26
  SEXP Rsh_Fir_reg_guard26_;  // guard26
  SEXP Rsh_Fir_reg_r144_;  // r144
  SEXP Rsh_Fir_reg_r145_;  // r145
  SEXP Rsh_Fir_reg_stats;  // stats
  SEXP Rsh_Fir_reg_stats1_;  // stats1
  SEXP Rsh_Fir_reg_ng2_;  // ng2
  SEXP Rsh_Fir_reg_ng3_;  // ng3
  SEXP Rsh_Fir_reg_conf;  // conf
  SEXP Rsh_Fir_reg_conf1_;  // conf1
  SEXP Rsh_Fir_reg_out2_;  // out2
  SEXP Rsh_Fir_reg_out3_;  // out3
  SEXP Rsh_Fir_reg_group2_;  // group2
  SEXP Rsh_Fir_reg_group3_;  // group3
  SEXP Rsh_Fir_reg_names4_;  // names4
  SEXP Rsh_Fir_reg_names5_;  // names5
  SEXP Rsh_Fir_reg_list3_;  // list3
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_plot1_;  // plot1
  SEXP Rsh_Fir_reg_plot2_;  // plot2
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_sym27_;  // sym27
  SEXP Rsh_Fir_reg_base27_;  // base27
  SEXP Rsh_Fir_reg_guard27_;  // guard27
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_pars1_;  // pars1
  SEXP Rsh_Fir_reg_pars2_;  // pars2
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_pars4_;  // pars4
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_sym28_;  // sym28
  SEXP Rsh_Fir_reg_base28_;  // base28
  SEXP Rsh_Fir_reg_guard28_;  // guard28
  SEXP Rsh_Fir_reg_r150_;  // r150
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_args10_;  // args10
  SEXP Rsh_Fir_reg_args11_;  // args11
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_args13_;  // args13
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_r152_;  // r152
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_c62_;  // c62
  SEXP Rsh_Fir_reg_col1_;  // col1
  SEXP Rsh_Fir_reg_col2_;  // col2
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_col4_;  // col4
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_col6_;  // col6
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_r153_;  // r153
  SEXP Rsh_Fir_reg_do_call;  // do_call
  SEXP Rsh_Fir_reg_bxp;  // bxp
  SEXP Rsh_Fir_reg_bxp1_;  // bxp1
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_sym29_;  // sym29
  SEXP Rsh_Fir_reg_base29_;  // base29
  SEXP Rsh_Fir_reg_guard29_;  // guard29
  SEXP Rsh_Fir_reg_r155_;  // r155
  SEXP Rsh_Fir_reg_r156_;  // r156
  SEXP Rsh_Fir_reg_sym30_;  // sym30
  SEXP Rsh_Fir_reg_base30_;  // base30
  SEXP Rsh_Fir_reg_guard30_;  // guard30
  SEXP Rsh_Fir_reg_r157_;  // r157
  SEXP Rsh_Fir_reg_r158_;  // r158
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_notch1_;  // notch1
  SEXP Rsh_Fir_reg_notch2_;  // notch2
  SEXP Rsh_Fir_reg_width1_;  // width1
  SEXP Rsh_Fir_reg_width2_;  // width2
  SEXP Rsh_Fir_reg_varwidth1_;  // varwidth1
  SEXP Rsh_Fir_reg_varwidth2_;  // varwidth2
  SEXP Rsh_Fir_reg_log1_;  // log1
  SEXP Rsh_Fir_reg_log2_;  // log2
  SEXP Rsh_Fir_reg_border1_;  // border1
  SEXP Rsh_Fir_reg_border2_;  // border2
  SEXP Rsh_Fir_reg_pars5_;  // pars5
  SEXP Rsh_Fir_reg_pars6_;  // pars6
  SEXP Rsh_Fir_reg_outline1_;  // outline1
  SEXP Rsh_Fir_reg_outline2_;  // outline2
  SEXP Rsh_Fir_reg_horizontal1_;  // horizontal1
  SEXP Rsh_Fir_reg_horizontal2_;  // horizontal2
  SEXP Rsh_Fir_reg_add3_;  // add3
  SEXP Rsh_Fir_reg_add4_;  // add4
  SEXP Rsh_Fir_reg_ann1_;  // ann1
  SEXP Rsh_Fir_reg_ann2_;  // ann2
  SEXP Rsh_Fir_reg_at1_;  // at1
  SEXP Rsh_Fir_reg_at2_;  // at2
  SEXP Rsh_Fir_reg_list4_;  // list4
  SEXP Rsh_Fir_reg_r159_;  // r159
  SEXP Rsh_Fir_reg_args14_;  // args14
  SEXP Rsh_Fir_reg_args15_;  // args15
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg_args17_;  // args17
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_namedargs2_;  // namedargs2
  SEXP Rsh_Fir_reg_namedargs3_;  // namedargs3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r160_;  // r160
  SEXP Rsh_Fir_reg_c65_;  // c65
  SEXP Rsh_Fir_reg_r161_;  // r161
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r163_;  // r163
  SEXP Rsh_Fir_reg_sym31_;  // sym31
  SEXP Rsh_Fir_reg_base31_;  // base31
  SEXP Rsh_Fir_reg_guard31_;  // guard31
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_r165_;  // r165
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r166_;  // r166
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_z5_;  // z5

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];
  Rsh_Fir_reg_range = PARAMS[2];
  Rsh_Fir_reg_width = PARAMS[3];
  Rsh_Fir_reg_varwidth = PARAMS[4];
  Rsh_Fir_reg_notch = PARAMS[5];
  Rsh_Fir_reg_outline = PARAMS[6];
  Rsh_Fir_reg_names = PARAMS[7];
  Rsh_Fir_reg_plot = PARAMS[8];
  Rsh_Fir_reg_border = PARAMS[9];
  Rsh_Fir_reg_col = PARAMS[10];
  Rsh_Fir_reg_log = PARAMS[11];
  Rsh_Fir_reg_pars = PARAMS[12];
  Rsh_Fir_reg_ann = PARAMS[13];
  Rsh_Fir_reg_horizontal = PARAMS[14];
  Rsh_Fir_reg_add = PARAMS[15];
  Rsh_Fir_reg_at = PARAMS[16];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // range_isMissing = missing.0(range)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_range;
  Rsh_Fir_reg_range_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if range_isMissing then L0(1.5) else L0(range)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_range_isMissing)) {
  // L0(1.5)
    Rsh_Fir_reg_range_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(range)
    Rsh_Fir_reg_range_orDefault = Rsh_Fir_reg_range;
    goto L0_;
  }

L0_:;
  // st range = range_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_range_orDefault, RHO);
  (void)(Rsh_Fir_reg_range_orDefault);
  // width_isMissing = missing.0(width)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_width;
  Rsh_Fir_reg_width_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if width_isMissing then L1(NULL) else L1(width)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_width_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_width_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(width)
    Rsh_Fir_reg_width_orDefault = Rsh_Fir_reg_width;
    goto L1_;
  }

L1_:;
  // st width = width_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_width_orDefault, RHO);
  (void)(Rsh_Fir_reg_width_orDefault);
  // varwidth_isMissing = missing.0(varwidth)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_varwidth;
  Rsh_Fir_reg_varwidth_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if varwidth_isMissing then L2(FALSE) else L2(varwidth)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_varwidth_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_varwidth_orDefault = Rsh_const(CCP, 7);
    goto L2_;
  } else {
  // L2(varwidth)
    Rsh_Fir_reg_varwidth_orDefault = Rsh_Fir_reg_varwidth;
    goto L2_;
  }

L2_:;
  // st varwidth = varwidth_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_varwidth_orDefault, RHO);
  (void)(Rsh_Fir_reg_varwidth_orDefault);
  // notch_isMissing = missing.0(notch)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_notch;
  Rsh_Fir_reg_notch_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if notch_isMissing then L3(FALSE) else L3(notch)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_notch_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_notch_orDefault = Rsh_const(CCP, 7);
    goto L3_;
  } else {
  // L3(notch)
    Rsh_Fir_reg_notch_orDefault = Rsh_Fir_reg_notch;
    goto L3_;
  }

L3_:;
  // st notch = notch_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_notch_orDefault, RHO);
  (void)(Rsh_Fir_reg_notch_orDefault);
  // outline_isMissing = missing.0(outline)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_outline;
  Rsh_Fir_reg_outline_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if outline_isMissing then L4(TRUE) else L4(outline)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_outline_isMissing)) {
  // L4(TRUE)
    Rsh_Fir_reg_outline_orDefault = Rsh_const(CCP, 10);
    goto L4_;
  } else {
  // L4(outline)
    Rsh_Fir_reg_outline_orDefault = Rsh_Fir_reg_outline;
    goto L4_;
  }

L4_:;
  // st outline = outline_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_outline_orDefault, RHO);
  (void)(Rsh_Fir_reg_outline_orDefault);
  // st names = names
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_names, RHO);
  (void)(Rsh_Fir_reg_names);
  // plot_isMissing = missing.0(plot)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_plot;
  Rsh_Fir_reg_plot_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if plot_isMissing then L5(TRUE) else L5(plot)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_plot_isMissing)) {
  // L5(TRUE)
    Rsh_Fir_reg_plot_orDefault = Rsh_const(CCP, 10);
    goto L5_;
  } else {
  // L5(plot)
    Rsh_Fir_reg_plot_orDefault = Rsh_Fir_reg_plot;
    goto L5_;
  }

L5_:;
  // st plot = plot_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_plot_orDefault, RHO);
  (void)(Rsh_Fir_reg_plot_orDefault);
  // border_isMissing = missing.0(border)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_border;
  Rsh_Fir_reg_border_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if border_isMissing then L6() else L7(border)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_border_isMissing)) {
  // L6()
    goto L6_;
  } else {
  // L7(border)
    Rsh_Fir_reg_border_orDefault = Rsh_Fir_reg_border;
    goto L7_;
  }

L6_:;
  // p = prom<V +>{
  //   par = ldf par;
  //   r = dyn par("fg");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_, CCP, RHO);
  // goto L7(p)
  // L7(p)
  Rsh_Fir_reg_border_orDefault = Rsh_Fir_reg_p;
  goto L7_;

L7_:;
  // st border = border_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_border_orDefault, RHO);
  (void)(Rsh_Fir_reg_border_orDefault);
  // col_isMissing = missing.0(col)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_col;
  Rsh_Fir_reg_col_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if col_isMissing then L8("lightgray") else L8(col)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_col_isMissing)) {
  // L8("lightgray")
    Rsh_Fir_reg_col_orDefault = Rsh_const(CCP, 17);
    goto L8_;
  } else {
  // L8(col)
    Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_col;
    goto L8_;
  }

L8_:;
  // st col = col_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_col_orDefault, RHO);
  (void)(Rsh_Fir_reg_col_orDefault);
  // log_isMissing = missing.0(log)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_log;
  Rsh_Fir_reg_log_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if log_isMissing then L9("") else L9(log)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_isMissing)) {
  // L9("")
    Rsh_Fir_reg_log_orDefault = Rsh_const(CCP, 19);
    goto L9_;
  } else {
  // L9(log)
    Rsh_Fir_reg_log_orDefault = Rsh_Fir_reg_log;
    goto L9_;
  }

L9_:;
  // st log = log_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_log_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_orDefault);
  // pars_isMissing = missing.0(pars)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_pars;
  Rsh_Fir_reg_pars_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if pars_isMissing then L10() else L11(pars)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pars_isMissing)) {
  // L10()
    goto L10_;
  } else {
  // L11(pars)
    Rsh_Fir_reg_pars_orDefault = Rsh_Fir_reg_pars;
    goto L11_;
  }

L10_:;
  // p1 = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   list = ldf list in base;
  //   r4 = dyn list(0.8, 0.5, 0.5);
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base[boxwex, staplewex, outwex](0.8, 0.5, 0.5);
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_1, CCP, RHO);
  // goto L11(p1)
  // L11(p1)
  Rsh_Fir_reg_pars_orDefault = Rsh_Fir_reg_p1_;
  goto L11_;

L11_:;
  // st pars = pars_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_pars_orDefault, RHO);
  (void)(Rsh_Fir_reg_pars_orDefault);
  // ann_isMissing = missing.0(ann)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_ann;
  Rsh_Fir_reg_ann_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if ann_isMissing then L12() else L13(ann)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ann_isMissing)) {
  // L12()
    goto L12_;
  } else {
  // L13(ann)
    Rsh_Fir_reg_ann_orDefault = Rsh_Fir_reg_ann;
    goto L13_;
  }

L12_:;
  // p2 = prom<V +>{
  //   add1 = ld add;
  //   add2 = force? add1;
  //   checkMissing(add2);
  //   r6 = `!`(add2);
  //   return r6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_2, CCP, RHO);
  // goto L13(p2)
  // L13(p2)
  Rsh_Fir_reg_ann_orDefault = Rsh_Fir_reg_p2_;
  goto L13_;

L13_:;
  // st ann = ann_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_ann_orDefault, RHO);
  (void)(Rsh_Fir_reg_ann_orDefault);
  // horizontal_isMissing = missing.0(horizontal)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_horizontal;
  Rsh_Fir_reg_horizontal_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args17);
  // if horizontal_isMissing then L14(FALSE) else L14(horizontal)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_horizontal_isMissing)) {
  // L14(FALSE)
    Rsh_Fir_reg_horizontal_orDefault = Rsh_const(CCP, 7);
    goto L14_;
  } else {
  // L14(horizontal)
    Rsh_Fir_reg_horizontal_orDefault = Rsh_Fir_reg_horizontal;
    goto L14_;
  }

L14_:;
  // st horizontal = horizontal_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_horizontal_orDefault, RHO);
  (void)(Rsh_Fir_reg_horizontal_orDefault);
  // add_isMissing = missing.0(add)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_add;
  Rsh_Fir_reg_add_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args18);
  // if add_isMissing then L15(FALSE) else L15(add)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_add_isMissing)) {
  // L15(FALSE)
    Rsh_Fir_reg_add_orDefault = Rsh_const(CCP, 7);
    goto L15_;
  } else {
  // L15(add)
    Rsh_Fir_reg_add_orDefault = Rsh_Fir_reg_add;
    goto L15_;
  }

L15_:;
  // st add = add_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_add_orDefault, RHO);
  (void)(Rsh_Fir_reg_add_orDefault);
  // at_isMissing = missing.0(at)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_at;
  Rsh_Fir_reg_at_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args19);
  // if at_isMissing then L16(NULL) else L16(at)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_at_isMissing)) {
  // L16(NULL)
    Rsh_Fir_reg_at_orDefault = Rsh_const(CCP, 5);
    goto L16_;
  } else {
  // L16(at)
    Rsh_Fir_reg_at_orDefault = Rsh_Fir_reg_at;
    goto L16_;
  }

L16_:;
  // st at = at_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_at_orDefault, RHO);
  (void)(Rsh_Fir_reg_at_orDefault);
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L17_:;
  // st args = r9
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L18_:;
  // r20 = `!`(r13)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c2 then L90() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L90()
    goto L90_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // c = `is.object`(r15)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c then L87() else L88(r15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L87()
    goto L87_;
  } else {
  // L88(r15)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r15_;
    goto L88_;
  }

L20_:;
  // sym5 = ldf rep_len
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base5 = ldf rep_len in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard5 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L21_:;
  // c3 = `is.object`(r22)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c3 then L96() else L97(r22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L96()
    goto L96_;
  } else {
  // L97(r22)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r22_;
    goto L97_;
  }

L22_:;
  // st namedargs = r28
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // sym7 = ldf `is.list`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base7 = ldf `is.list` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard7 then L107() else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L107()
    goto L107_;
  } else {
  // L108()
    goto L108_;
  }

L23_:;
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r33 = dyn rep_len(FALSE, r31)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L106() else D8()
  // L106()
  goto L106_;

L24_:;
  // c4 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c4 then L111() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L111()
    goto L111_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // args6 = ld args
  Rsh_Fir_reg_args6_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L114() else D12()
  // L114()
  goto L114_;

L26_:;
  // st groups = x7
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_x7_, RHO);
  (void)(Rsh_Fir_reg_x7_);
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard8 then L119() else L120()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L119()
    goto L119_;
  } else {
  // L120()
    goto L120_;
  }

L27_:;
  // st n = r43
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // r45 = `==`(r42, r43)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c6 then L123() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L123()
    goto L123_;
  } else {
  // L28()
    goto L28_;
  }

L28_:;
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard9 then L127() else L128()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L127()
    goto L127_;
  } else {
  // L128()
    goto L128_;
  }

L30_:;
  // c7 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c7 then L134() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L134()
    goto L134_;
  } else {
  // L32()
    goto L32_;
  }

L31_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r53 = dyn length2(r51)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L133() else D20()
  // L133()
  goto L133_;

L32_:;
  // goto L34()
  // L34()
  goto L34_;

L33_:;
  // st groups = r55
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r55_, RHO);
  (void)(Rsh_Fir_reg_r55_);
  // goto L34()
  // L34()
  goto L34_;

L34_:;
  // sym12 = ldf missing
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base12 = ldf missing in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard12 then L140() else L141()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L140()
    goto L140_;
  } else {
  // L141()
    goto L141_;
  }

L35_:;
  // r61 = `!`(r59)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r61)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c8 then L142() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L142()
    goto L142_;
  } else {
  // L36()
    goto L36_;
  }

L36_:;
  // sym13 = ldf `is.null`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base13 = ldf `is.null` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard13 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L37_:;
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L162() else D33()
  // L162()
  goto L162_;

L38_:;
  // c10 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c10 then L153() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L153()
    goto L153_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // c9 = `==`(r66, NULL)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L38(c9)
  // L38(c9)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_c9_;
  goto L38_;

L40_:;
  // goto L41()
  // L41()
  goto L41_;

L41_:;
  // sym15 = ldf attr
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base15 = ldf attr in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard15 then L158() else L159()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L158()
    goto L158_;
  } else {
  // L159()
    goto L159_;
  }

L42_:;
  // st names = r72
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r72_, RHO);
  (void)(Rsh_Fir_reg_r72_);
  // goto L37()
  // L37()
  goto L37_;

L43_:;
  // c11 = `as.logical`(r78)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c11 then L169() else L44(c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L169()
    goto L169_;
  } else {
  // L44(c11)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
    goto L44_;
  }

L44_:;
  // c20 = `as.logical`(c13)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c20 then L176() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L176()
    goto L176_;
  } else {
  // L46()
    goto L46_;
  }

L45_:;
  // r89 = `==`(r85, 1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r89)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // c18 = `&&`(c16, c17)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L44(c18)
  // L44(c18)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c18_;
  goto L44_;

L46_:;
  // goto L48()
  // L48()
  goto L48_;

L47_:;
  // st cl = dx6
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // goto L48()
  // L48()
  goto L48_;

L48_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L182() else D42()
  // L182()
  goto L182_;

L49_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // c22 = `<`.1(l2, i2)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if c22 then L183() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L183()
    goto L183_;
  } else {
  // L52()
    goto L52_;
  }

L50_:;
  // l3 = ld groups
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // c24 = `is.object`(l3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c24 then L189() else L190(i7, r93, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L189()
    goto L189_;
  } else {
  // L190(i7, r93, l3)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r93_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L190_;
  }

L51_:;
  // st groups = dx11
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L49(i13)
  // L49(i13)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i13_;
  goto L49_;

L52_:;
  // x8 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args51[4];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args51[3] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_x8_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // st i = x8
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_x8_, RHO);
  (void)(Rsh_Fir_reg_x8_);
  // sym18 = ldf list
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base18 = ldf list in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard18 then L184() else L185()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L184()
    goto L184_;
  } else {
  // L185()
    goto L185_;
  }

L53_:;
  // i18 = `+`.1(i17, 1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_i18_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // c25 = `<`.1(l6, i18)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if c25 then L200() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L200()
    goto L200_;
  } else {
  // L63()
    goto L63_;
  }

L54_:;
  // st stats = dx19
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // i33 = ld i
  Rsh_Fir_reg_i33_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L210() else D56()
  // L210()
  goto L210_;

L55_:;
  // st conf = dx27
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_dx27_, RHO);
  (void)(Rsh_Fir_reg_dx27_);
  // sym20 = ldf c
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base20 = ldf c in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard20 then L219() else L220()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L219()
    goto L219_;
  } else {
  // L220()
    goto L220_;
  }

L56_:;
  // st ng = r117
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_r117_, RHO);
  (void)(Rsh_Fir_reg_r117_);
  // sym21 = ldf length
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base21 = ldf length in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard21 then L228() else L229()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L228()
    goto L228_;
  } else {
  // L229()
    goto L229_;
  }

L57_:;
  // st lo = r121
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r121_, RHO);
  (void)(Rsh_Fir_reg_r121_);
  // c33 = `as.logical`(r121)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c33 then L236() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L236()
    goto L236_;
  } else {
  // L58()
    goto L58_;
  }

L58_:;
  // goto L62(i58)
  // L62(i58)
  Rsh_Fir_reg_i86_ = Rsh_Fir_reg_i58_;
  goto L62_;

L59_:;
  // st out = r125
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r125_, RHO);
  (void)(Rsh_Fir_reg_r125_);
  // sym23 = ldf c
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base23 = ldf c in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard23 then L246() else L247()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L246()
    goto L246_;
  } else {
  // L247()
    goto L247_;
  }

L60_:;
  // st group = r129
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r129_, RHO);
  (void)(Rsh_Fir_reg_r129_);
  // goto L62(i82)
  // L62(i82)
  Rsh_Fir_reg_i86_ = Rsh_Fir_reg_i82_;
  goto L62_;

L61_:;
  // c36 = ldf c in base
  Rsh_Fir_reg_c36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r133 = dyn c36(group1, r131)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_group1_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_r131_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c36_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L254() else D70()
  // L254()
  goto L254_;

L62_:;
  // ct6 = ld ct
  Rsh_Fir_reg_ct6_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L256() else D71()
  // L256()
  goto L256_;

L63_:;
  // x9 = `[[`(s1, i18, NULL, TRUE)
  SEXP Rsh_Fir_array_args60[4];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args60[3] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_x9_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // st i = x9
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_x9_, RHO);
  (void)(Rsh_Fir_reg_x9_);
  // i21 = ld i
  Rsh_Fir_reg_i21_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L201() else D54()
  // L201()
  goto L201_;

L64_:;
  // r139 = `==`(r137, 1)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r137_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // c37 = `as.logical`(r139)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r139_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c37 then L261() else L65(c37)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L261()
    goto L261_;
  } else {
  // L65(c37)
    Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c37_;
    goto L65_;
  }

L65_:;
  // c43 = `as.logical`(c39)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c43 then L264() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L264()
    goto L264_;
  } else {
  // L66()
    goto L66_;
  }

L66_:;
  // goto L67()
  // L67()
  goto L67_;

L67_:;
  // sym26 = ldf list
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base26 = ldf list in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard26 then L273() else L274()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L273()
    goto L273_;
  } else {
  // L274()
    goto L274_;
  }

L68_:;
  // st z = r145
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_r145_, RHO);
  (void)(Rsh_Fir_reg_r145_);
  // plot1 = ld plot
  Rsh_Fir_reg_plot1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L282() else D89()
  // L282()
  goto L282_;

L69_:;
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L314() else D97()
  // L314()
  goto L314_;

L70_:;
  // c47 = `as.logical`(r148)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r148_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c47 then L291() else L71(c47)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L291()
    goto L291_;
  } else {
  // L71(c47)
    Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c47_;
    goto L71_;
  }

L71_:;
  // c62 = `as.logical`(c49)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_c49_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c62 then L300() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c62_)) {
  // L300()
    goto L300_;
  } else {
  // L73()
    goto L73_;
  }

L72_:;
  // c59 = `as.logical`(r151)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r151_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // c60 = `&&`(c52, c59)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_c52_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L71(c60)
  // L71(c60)
  Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c60_;
  goto L71_;

L73_:;
  // goto L74()
  // L74()
  goto L74_;

L74_:;
  // do_call = ldf `do.call`
  Rsh_Fir_reg_do_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L307() else D93()
  // L307()
  goto L307_;

L75_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r165
  return Rsh_Fir_reg_r165_;

L76_:;
  // list1 = ldf list
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L78() else D0()
  // L78()
  goto L78_;

L77_:;
  // r8 = dyn base1(<sym x>, <sym ...>)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L17(r8)
  // L17(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L17_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L78_:;
  // p3 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_3, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // r11 = dyn list1[, `...`](p3, ddd1)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L79() else D1()
  // L79()
  goto L79_;

D1_:;
  // deopt 5 [r11]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L17(r11)
  // L17(r11)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r11_;
  goto L17_;

L80_:;
  // sym3 = ldf attributes
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // base3 = ldf attributes in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard3 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L81_:;
  // r12 = dyn base2(<lang `$`(attributes(args), names)>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L18(r12)
  // L18(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L18_;

L82_:;
  // args = ld args
  Rsh_Fir_reg_args = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L84() else D2()
  // L84()
  goto L84_;

L83_:;
  // r14 = dyn base3(<sym args>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L19(r14)
  // L19(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L19_;

D2_:;
  // deopt 10 [args]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_args;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L84_:;
  // args1 = force? args
  Rsh_Fir_reg_args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args);
  // checkMissing(args1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // attributes = ldf attributes in base
  Rsh_Fir_reg_attributes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r16 = dyn attributes(args1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_args1_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L85() else D3()
  // L85()
  goto L85_;

D3_:;
  // deopt 13 [r16]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L19(r16)
  // L19(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L19_;

L86_:;
  // c1 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L18(c1)
  // L18(c1)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_c1_;
  goto L18_;

L87_:;
  // dr = tryDispatchBuiltin.1("$", r15)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args78);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc then L89() else L88(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L89()
    goto L89_;
  } else {
  // L88(dr)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_dr;
    goto L88_;
  }

L88_:;
  // r19 = `$`(r18, <sym names>)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L86(r19)
  // L86(r19)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r19_;
  goto L86_;

L89_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L86(dx)
  // L86(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L86_;

L90_:;
  // sym4 = ldf attributes
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // base4 = ldf attributes in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard4 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L91_:;
  // args2 = ld args
  Rsh_Fir_reg_args2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L93() else D4()
  // L93()
  goto L93_;

L92_:;
  // r21 = dyn base4(<sym args>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L21(r21)
  // L21(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L21_;

D4_:;
  // deopt 19 [args2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_args2_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L93_:;
  // args3 = force? args2
  Rsh_Fir_reg_args3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args2_);
  // checkMissing(args3)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_args3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // attributes1 = ldf attributes in base
  Rsh_Fir_reg_attributes1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r23 = dyn attributes1(args3)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_args3_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes1_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L94() else D5()
  // L94()
  goto L94_;

D5_:;
  // deopt 22 [r23]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L21(r23)
  // L21(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L21_;

L95_:;
  // r27 = `!=`(dx3, "")
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L22(r27)
  // L22(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L22_;

L96_:;
  // dr2 = tryDispatchBuiltin.1("$", r22)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc1 then L98() else L97(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L98()
    goto L98_;
  } else {
  // L97(dr2)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_dr2_;
    goto L97_;
  }

L97_:;
  // r26 = `$`(r25, <sym names>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L95(r26)
  // L95(r26)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r26_;
  goto L95_;

L98_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L95(dx2)
  // L95(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L95_;

L100_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard6 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L101_:;
  // r29 = dyn base5(FALSE, <lang length(args)>)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L22(r29)
  // L22(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L22_;

L102_:;
  // args4 = ld args
  Rsh_Fir_reg_args4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L104() else D6()
  // L104()
  goto L104_;

L103_:;
  // r30 = dyn base6(<sym args>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L23(r30)
  // L23(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L23_;

D6_:;
  // deopt 31 [args4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_args4_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L104_:;
  // args5 = force? args4
  Rsh_Fir_reg_args5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args4_);
  // checkMissing(args5)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_args5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r32 = dyn length(args5)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_args5_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L105() else D7()
  // L105()
  goto L105_;

D7_:;
  // deopt 34 [r32]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L105_:;
  // goto L23(r32)
  // L23(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L23_;

D8_:;
  // deopt 36 [r33]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L106_:;
  // goto L22(r33)
  // L22(r33)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r33_;
  goto L22_;

L107_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L109() else D9()
  // L109()
  goto L109_;

L108_:;
  // r34 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L24(r34)
  // L24(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L24_;

D9_:;
  // deopt 40 [x3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L109_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r36 = dyn is_list(x4)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L110() else D10()
  // L110()
  goto L110_;

D10_:;
  // deopt 43 [r36]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L110_:;
  // goto L24(r36)
  // L24(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L24_;

L111_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L112() else D11()
  // L112()
  goto L112_;

D11_:;
  // deopt 44 [x5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L112_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // goto L26(x6)
  // L26(x6)
  Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x6_;
  goto L26_;

D12_:;
  // deopt 46 [args6]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_args6_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L114_:;
  // args7 = force? args6
  Rsh_Fir_reg_args7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args6_);
  // checkMissing(args7)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_args7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(args7)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_args7_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if c5 then L115() else L116(args7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L115()
    goto L115_;
  } else {
  // L116(args7)
    Rsh_Fir_reg_args9_ = Rsh_Fir_reg_args7_;
    goto L116_;
  }

L115_:;
  // dr4 = tryDispatchBuiltin.1("[", args7)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_args7_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args102);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if dc2 then L117() else L116(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L117()
    goto L117_;
  } else {
  // L116(dr4)
    Rsh_Fir_reg_args9_ = Rsh_Fir_reg_dr4_;
    goto L116_;
  }

L116_:;
  // namedargs = ld namedargs
  Rsh_Fir_reg_namedargs = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L118() else D13()
  // L118()
  goto L118_;

L117_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // goto L26(dx4)
  // L26(dx4)
  Rsh_Fir_reg_x7_ = Rsh_Fir_reg_dx4_;
  goto L26_;

D13_:;
  // deopt 48 [args9, namedargs]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_args9_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_namedargs;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L118_:;
  // namedargs1 = force? namedargs
  Rsh_Fir_reg_namedargs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_namedargs);
  // checkMissing(namedargs1)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_namedargs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // r37 = `!`(namedargs1)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_namedargs1_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r38 = dyn __(args9, r37)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_args9_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L26(r38)
  // L26(r38)
  Rsh_Fir_reg_x7_ = Rsh_Fir_reg_r38_;
  goto L26_;

L119_:;
  // groups = ld groups
  Rsh_Fir_reg_groups = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L121() else D14()
  // L121()
  goto L121_;

L120_:;
  // r41 = dyn base8(<sym groups>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L27(0, r41)
  // L27(0, r41)
  Rsh_Fir_reg_r42_ = Rsh_const(CCP, 62);
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r41_;
  goto L27_;

D14_:;
  // deopt 56 [0, groups]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_groups;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L121_:;
  // groups1 = force? groups
  Rsh_Fir_reg_groups1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_groups);
  // checkMissing(groups1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_groups1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r44 = dyn length1(groups1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_groups1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L122() else D15()
  // L122()
  goto L122_;

D15_:;
  // deopt 59 [0, r44]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L122_:;
  // goto L27(0, r44)
  // L27(0, r44)
  Rsh_Fir_reg_r42_ = Rsh_const(CCP, 62);
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L27_;

L123_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // check L124() else D16()
  // L124()
  goto L124_;

D16_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L124_:;
  // r46 = dyn stop("invalid first argument")
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L125() else D17()
  // L125()
  goto L125_;

D17_:;
  // deopt 65 [r46]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L125_:;
  // goto L29()
  // L29()
  goto L29_;

L127_:;
  // sym10 = ldf class
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // base10 = ldf class in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 65), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args112);
  // if guard10 then L129() else L130()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L129()
    goto L129_;
  } else {
  // L130()
    goto L130_;
  }

L128_:;
  // r48 = dyn base9(<lang class(groups)>)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L30(r48)
  // L30(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L30_;

L129_:;
  // groups2 = ld groups
  Rsh_Fir_reg_groups2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L131() else D18()
  // L131()
  goto L131_;

L130_:;
  // r50 = dyn base10(<sym groups>)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L31(r50)
  // L31(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L31_;

D18_:;
  // deopt 72 [groups2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_groups2_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L131_:;
  // groups3 = force? groups2
  Rsh_Fir_reg_groups3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_groups2_);
  // checkMissing(groups3)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_groups3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 65), RHO);
  // r52 = dyn class(groups3)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_groups3_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L132() else D19()
  // L132()
  goto L132_;

D19_:;
  // deopt 75 [r52]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L132_:;
  // goto L31(r52)
  // L31(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L31_;

D20_:;
  // deopt 77 [r53]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L133_:;
  // goto L30(r53)
  // L30(r53)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r53_;
  goto L30_;

L134_:;
  // sym11 = ldf unclass
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base11 = ldf unclass in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args117);
  // if guard11 then L135() else L136()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L135()
    goto L135_;
  } else {
  // L136()
    goto L136_;
  }

L135_:;
  // groups4 = ld groups
  Rsh_Fir_reg_groups4_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L137() else D21()
  // L137()
  goto L137_;

L136_:;
  // r54 = dyn base11(<sym groups>)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L33(r54)
  // L33(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L33_;

D21_:;
  // deopt 80 [groups4]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_groups4_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L137_:;
  // groups5 = force? groups4
  Rsh_Fir_reg_groups5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_groups4_);
  // checkMissing(groups5)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_groups5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r56 = dyn unclass(groups5)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_groups5_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L138() else D22()
  // L138()
  goto L138_;

D22_:;
  // deopt 83 [r56]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L138_:;
  // goto L33(r56)
  // L33(r56)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L33_;

L140_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r60 = dyn missing(<sym names>)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L35(r60)
  // L35(r60)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r60_;
  goto L35_;

L141_:;
  // r58 = dyn base12(<sym names>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L35(r58)
  // L35(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L35_;

L142_:;
  // names1 = ld names
  Rsh_Fir_reg_names1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L143() else D23()
  // L143()
  goto L143_;

D23_:;
  // deopt 91 [names1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_names1_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L143_:;
  // names2 = force? names1
  Rsh_Fir_reg_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names1_);
  // checkMissing(names2)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // l = ld groups
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L144() else D24()
  // L144()
  goto L144_;

D24_:;
  // deopt 94 [names2, l, names2]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_names2_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_names2_;
  Rsh_Fir_deopt(94, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L144_:;
  // r62 = dyn attr__(l, NULL, "names", names2)
  SEXP Rsh_Fir_array_args124[4];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args124[2] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args124[3] = Rsh_Fir_reg_names2_;
  SEXP Rsh_Fir_array_arg_names29[4];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L145() else D25()
  // L145()
  goto L145_;

D25_:;
  // deopt 97 [names2, r62]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_names2_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L145_:;
  // st groups = r62
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // goto L37()
  // L37()
  goto L37_;

L147_:;
  // sym14 = ldf attr
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base14 = ldf attr in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args125);
  // if guard14 then L149() else L150()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L149()
    goto L149_;
  } else {
  // L150()
    goto L150_;
  }

L148_:;
  // r63 = dyn base13(<lang attr(groups, "names")>)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L38(r63)
  // L38(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L38_;

L149_:;
  // groups6 = ld groups
  Rsh_Fir_reg_groups6_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L151() else D26()
  // L151()
  goto L151_;

L150_:;
  // r65 = dyn base14(<sym groups>, "names")
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L39(r65)
  // L39(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L39_;

D26_:;
  // deopt 102 [groups6]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_groups6_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L151_:;
  // groups7 = force? groups6
  Rsh_Fir_reg_groups7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_groups6_);
  // checkMissing(groups7)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_groups7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r67 = dyn attr(groups7, "names")
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_groups7_;
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L152() else D27()
  // L152()
  goto L152_;

D27_:;
  // deopt 106 [r67]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L152_:;
  // goto L39(r67)
  // L39(r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L39_;

L153_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L154() else D28()
  // L154()
  goto L154_;

D28_:;
  // deopt 109 [1, n]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L154_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // r68 = `:`(1, n1)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // l1 = ld groups
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L155() else D29()
  // L155()
  goto L155_;

D29_:;
  // deopt 113 [r68, l1, r68]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(113, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L155_:;
  // r69 = dyn attr__1(l1, NULL, "names", r68)
  SEXP Rsh_Fir_array_args132[4];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args132[2] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args132[3] = Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_array_arg_names33[4];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_array_arg_names33[3] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L156() else D30()
  // L156()
  goto L156_;

D30_:;
  // deopt 116 [r68, r69]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L156_:;
  // st groups = r69
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r69_, RHO);
  (void)(Rsh_Fir_reg_r69_);
  // goto L41()
  // L41()
  goto L41_;

L158_:;
  // groups8 = ld groups
  Rsh_Fir_reg_groups8_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L160() else D31()
  // L160()
  goto L160_;

L159_:;
  // r71 = dyn base15(<sym groups>, "names")
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args133[1] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L42(r71)
  // L42(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L42_;

D31_:;
  // deopt 122 [groups8]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_groups8_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L160_:;
  // groups9 = force? groups8
  Rsh_Fir_reg_groups9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_groups8_);
  // checkMissing(groups9)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_groups9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r73 = dyn attr1(groups9, "names")
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_groups9_;
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L161() else D32()
  // L161()
  goto L161_;

D32_:;
  // deopt 126 [r73]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L161_:;
  // goto L42(r73)
  // L42(r73)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r73_;
  goto L42_;

D33_:;
  // deopt 129 []
  Rsh_Fir_deopt(129, 0, NULL, CCP, RHO);
  return R_NilValue;

L162_:;
  // p4 = prom<V +>{
  //   groups10 = ld groups;
  //   groups11 = force? groups10;
  //   checkMissing(groups11);
  //   return groups11;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_4, CCP, RHO);
  // p5 = prom<V +>{
  //   class1 = ld class;
  //   class2 = force? class1;
  //   checkMissing(class2);
  //   return class2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_5, CCP, RHO);
  // r76 = dyn lapply(p4, p5)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L163() else D34()
  // L163()
  goto L163_;

D34_:;
  // deopt 132 [r76]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L163_:;
  // st cls = r76
  Rsh_Fir_store(Rsh_const(CCP, 71), Rsh_Fir_reg_r76_, RHO);
  (void)(Rsh_Fir_reg_r76_);
  // st cl = NULL
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_const(CCP, 5), RHO);
  (void)(Rsh_const(CCP, 5));
  // sym16 = ldf all
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 72), RHO);
  // base16 = ldf all in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 72), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args139);
  // if guard16 then L164() else L165()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L164()
    goto L164_;
  } else {
  // L165()
    goto L165_;
  }

L164_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // check L166() else D35()
  // L166()
  goto L166_;

L165_:;
  // r77 = dyn base16(<lang vapply(groups, function((e=), {
  //       `&&`(is.numeric(unclass(e)), identical(names(attributes(e)), "class"))
  //     }, NULL), NA_LGL)>)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 74);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L43(r77)
  // L43(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L43_;

D35_:;
  // deopt 140 []
  Rsh_Fir_deopt(140, 0, NULL, CCP, RHO);
  return R_NilValue;

L166_:;
  // p6 = prom<V +>{
  //   groups12 = ld groups;
  //   groups13 = force? groups12;
  //   checkMissing(groups13);
  //   return groups13;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_6, CCP, RHO);
  // p7 = prom<V +>{
  //   r80 = clos inner3708401697;
  //   return r80;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_7, CCP, RHO);
  // r82 = dyn vapply(p6, p7, NA_LGL)
  SEXP Rsh_Fir_array_args142[3];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args142[2] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L167() else D36()
  // L167()
  goto L167_;

D36_:;
  // deopt 144 [r82]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L167_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 72), RHO);
  // r83 = dyn all(r82)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L168() else D37()
  // L168()
  goto L168_;

D37_:;
  // deopt 146 [r83]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L168_:;
  // goto L43(r83)
  // L43(r83)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r83_;
  goto L43_;

L169_:;
  // sym17 = ldf length
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base17 = ldf length in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args144);
  // if guard17 then L170() else L171()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L170()
    goto L170_;
  } else {
  // L171()
    goto L171_;
  }

L170_:;
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 76), RHO);
  // check L172() else D38()
  // L172()
  goto L172_;

L171_:;
  // r84 = dyn base17(<lang unique(cls)>)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 77);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L45(c11, r84)
  // L45(c11, r84)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L45_;

D38_:;
  // deopt 150 [c11]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L172_:;
  // p8 = prom<V +>{
  //   cls = ld cls;
  //   cls1 = force? cls;
  //   checkMissing(cls1);
  //   return cls1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_8, CCP, RHO);
  // r87 = dyn unique(p8)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L173() else D39()
  // L173()
  goto L173_;

D39_:;
  // deopt 152 [c11, r87]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(152, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L173_:;
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r88 = dyn length3(r87)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L174() else D40()
  // L174()
  goto L174_;

D40_:;
  // deopt 154 [c11, r88]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(154, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L174_:;
  // goto L45(c11, r88)
  // L45(c11, r88)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r88_;
  goto L45_;

L176_:;
  // cls2 = ld cls
  Rsh_Fir_reg_cls2_ = Rsh_Fir_load(Rsh_const(CCP, 71), RHO);
  // check L177() else D41()
  // L177()
  goto L177_;

D41_:;
  // deopt 158 [cls2]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_cls2_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L177_:;
  // cls3 = force? cls2
  Rsh_Fir_reg_cls3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cls2_);
  // checkMissing(cls3)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_cls3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(cls3)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_cls3_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // if c21 then L178() else L179(cls3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L178()
    goto L178_;
  } else {
  // L179(cls3)
    Rsh_Fir_reg_cls5_ = Rsh_Fir_reg_cls3_;
    goto L179_;
  }

L178_:;
  // dr6 = tryDispatchBuiltin.1("[[", cls3)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_cls3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args151);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if dc3 then L180() else L179(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L180()
    goto L180_;
  } else {
  // L179(dr6)
    Rsh_Fir_reg_cls5_ = Rsh_Fir_reg_dr6_;
    goto L179_;
  }

L179_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r90 = dyn __1(cls5, 1)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_cls5_;
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L47(r90)
  // L47(r90)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r90_;
  goto L47_;

L180_:;
  // dx5 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L47(dx5)
  // L47(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L47_;

D42_:;
  // deopt 167 [1, n2]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(167, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L182_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // r91 = `:`(1, n3)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // s = toForSeq(r91)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // l2 = length(s)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l2_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 62);
  // goto L49(i)
  // L49(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L49_;

L183_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // check L193() else D47()
  // L193()
  goto L193_;

L184_:;
  // boxplot_stats = ldf `boxplot.stats`
  Rsh_Fir_reg_boxplot_stats = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 81), RHO);
  // check L186() else D43()
  // L186()
  goto L186_;

L185_:;
  // r92 = dyn base18(<lang boxplot.stats(unclass(`[[`(groups, i)), range)>)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 82);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L50(i2, r92)
  // L50(i2, r92)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r92_;
  goto L50_;

D43_:;
  // deopt 173 [i2]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(173, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L186_:;
  // p9 = prom<V +>{
  //   sym19 = ldf unclass;
  //   base19 = ldf unclass in base;
  //   guard19 = `==`.4(sym19, base19);
  //   if guard19 then L2() else L3();
  // L0(r95):
  //   return r95;
  // L2():
  //   groups14 = ld groups;
  //   groups15 = force? groups14;
  //   checkMissing(groups15);
  //   c23 = `is.object`(groups15);
  //   if c23 then L4() else L5(groups15);
  // L3():
  //   r94 = dyn base19(<lang `[[`(groups, i)>);
  //   goto L0(r94);
  // L1(dx9):
  //   unclass1 = ldf unclass in base;
  //   r97 = dyn unclass1(dx9);
  //   goto L0(r97);
  // L4():
  //   dr8 = tryDispatchBuiltin.1("[[", groups15);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L6() else L5(dr8);
  // L5(groups17):
  //   i8 = ld i;
  //   i9 = force? i8;
  //   __2 = ldf `[[` in base;
  //   r96 = dyn __2(groups17, i9);
  //   goto L1(r96);
  // L6():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L1(dx8);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_9, CCP, RHO);
  // p10 = prom<V +>{
  //   range1 = ld range;
  //   range2 = force? range1;
  //   checkMissing(range2);
  //   return range2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_10, CCP, RHO);
  // r100 = dyn boxplot_stats(p9, p10)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_boxplot_stats, 2, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L187() else D44()
  // L187()
  goto L187_;

D44_:;
  // deopt 176 [i2, r100]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(176, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L187_:;
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r101 = dyn list2(r100)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 1, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L188() else D45()
  // L188()
  goto L188_;

D45_:;
  // deopt 178 [i2, r101]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r101_;
  Rsh_Fir_deopt(178, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L188_:;
  // goto L50(i2, r101)
  // L50(i2, r101)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r101_;
  goto L50_;

L189_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l3, r93)
  SEXP Rsh_Fir_array_args172[3];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args172[2] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args172);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // if dc5 then L191() else L190(i7, r93, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L191()
    goto L191_;
  } else {
  // L190(i7, r93, dr10)
    Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r93_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr10_;
    goto L190_;
  }

L190_:;
  // i14 = ld i
  Rsh_Fir_reg_i14_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L192() else D46()
  // L192()
  goto L192_;

L191_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // goto L51(i7, dx10)
  // L51(i7, dx10)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L51_;

D46_:;
  // deopt 180 [i11, r103, l5, r93, i14]
  SEXP Rsh_Fir_array_deopt_stack42[5];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r103_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_r93_;
  Rsh_Fir_array_deopt_stack42[4] = Rsh_Fir_reg_i14_;
  Rsh_Fir_deopt(180, 5, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L192_:;
  // i15 = force? i14
  Rsh_Fir_reg_i15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i14_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r106 = dyn ___(l5, r93, i15)
  SEXP Rsh_Fir_array_args175[3];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_r93_;
  Rsh_Fir_array_args175[2] = Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L51(i11, r106)
  // L51(i11, r106)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r106_;
  goto L51_;

D47_:;
  // deopt 188 []
  Rsh_Fir_deopt(188, 0, NULL, CCP, RHO);
  return R_NilValue;

L193_:;
  // p11 = prom<V +>{
  //   n4 = ld n;
  //   n5 = force? n4;
  //   checkMissing(n5);
  //   return n5;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_11, CCP, RHO);
  // r108 = dyn matrix[, nrow, ncol](0.0, 5, p11)
  SEXP Rsh_Fir_array_args177[3];
  Rsh_Fir_array_args177[0] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args177[1] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args177[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names51[3];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = Rsh_const(CCP, 88);
  Rsh_Fir_array_arg_names51[2] = Rsh_const(CCP, 89);
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L194() else D48()
  // L194()
  goto L194_;

D48_:;
  // deopt 194 [r108]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(194, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L194_:;
  // st stats = r108
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r108_, RHO);
  (void)(Rsh_Fir_reg_r108_);
  // matrix1 = ldf matrix
  Rsh_Fir_reg_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // check L195() else D49()
  // L195()
  goto L195_;

D49_:;
  // deopt 197 []
  Rsh_Fir_deopt(197, 0, NULL, CCP, RHO);
  return R_NilValue;

L195_:;
  // p12 = prom<V +>{
  //   n6 = ld n;
  //   n7 = force? n6;
  //   checkMissing(n7);
  //   return n7;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_12, CCP, RHO);
  // r110 = dyn matrix1[, nrow, ncol](0.0, 2, p12)
  SEXP Rsh_Fir_array_args179[3];
  Rsh_Fir_array_args179[0] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args179[1] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args179[2] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names52[3];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = Rsh_const(CCP, 88);
  Rsh_Fir_array_arg_names52[2] = Rsh_const(CCP, 89);
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1_, 3, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L196() else D50()
  // L196()
  goto L196_;

D50_:;
  // deopt 203 [r110]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L196_:;
  // st conf = r110
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r110_, RHO);
  (void)(Rsh_Fir_reg_r110_);
  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 91), RHO);
  // check L197() else D51()
  // L197()
  goto L197_;

D51_:;
  // deopt 206 []
  Rsh_Fir_deopt(206, 0, NULL, CCP, RHO);
  return R_NilValue;

L197_:;
  // r111 = dyn numeric(0)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 1, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L198() else D52()
  // L198()
  goto L198_;

D52_:;
  // deopt 208 [r111]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L198_:;
  // st group = r111
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r111_, RHO);
  (void)(Rsh_Fir_reg_r111_);
  // st out = r111
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r111_, RHO);
  (void)(Rsh_Fir_reg_r111_);
  // st ng = r111
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_r111_, RHO);
  (void)(Rsh_Fir_reg_r111_);
  // st ct = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_const(CCP, 92), RHO);
  (void)(Rsh_const(CCP, 92));
  // groups18 = ld groups
  Rsh_Fir_reg_groups18_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L199() else D53()
  // L199()
  goto L199_;

D53_:;
  // deopt 215 [groups18]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_groups18_;
  Rsh_Fir_deopt(215, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L199_:;
  // groups19 = force? groups18
  Rsh_Fir_reg_groups19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_groups18_);
  // checkMissing(groups19)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_groups19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // s1 = toForSeq(groups19)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_groups19_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // l6 = length(s1)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // i16 = 0
  Rsh_Fir_reg_i16_ = Rsh_const(CCP, 62);
  // goto L53(i16)
  // L53(i16)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i16_;
  goto L53_;

L200_:;
  // sym25 = ldf length
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base25 = ldf length in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args184);
  // if guard25 then L257() else L258()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L257()
    goto L257_;
  } else {
  // L258()
    goto L258_;
  }

D54_:;
  // deopt 217 [i18, i21]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(217, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L201_:;
  // i22 = force? i21
  Rsh_Fir_reg_i22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i21_);
  // checkMissing(i22)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_i22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(i22)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if c26 then L203() else L204(i18, i22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L203()
    goto L203_;
  } else {
  // L204(i18, i22)
    Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i18_;
    Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i22_;
    goto L204_;
  }

L202_:;
  // l7 = ld stats
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // c27 = `is.object`(l7)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // if c27 then L206() else L207(i28, dx13, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L206()
    goto L206_;
  } else {
  // L207(i28, dx13, l7)
    Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i28_;
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L207_;
  }

L203_:;
  // dr12 = tryDispatchBuiltin.1("$", i22)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args188);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // if dc6 then L205() else L204(i18, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L205()
    goto L205_;
  } else {
  // L204(i18, dr12)
    Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i18_;
    Rsh_Fir_reg_i26_ = Rsh_Fir_reg_dr12_;
    goto L204_;
  }

L204_:;
  // r112 = `$`(i26, <sym stats>)
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_args190[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // goto L202(i25, r112)
  // L202(i25, r112)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r112_;
  goto L202_;

L205_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty());
  // goto L202(i18, dx12)
  // L202(i18, dx12)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L202_;

L206_:;
  // dr14 = tryDispatchBuiltin.0("[<-", l7, dx13)
  SEXP Rsh_Fir_array_args192[3];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args192[2] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args192);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // if dc7 then L208() else L207(i28, dx13, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L208()
    goto L208_;
  } else {
  // L207(i28, dx13, dr14)
    Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i28_;
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr14_;
    goto L207_;
  }

L207_:;
  // ct = ld ct
  Rsh_Fir_reg_ct = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L209() else D55()
  // L209()
  goto L209_;

L208_:;
  // dx17 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // goto L54(i28, dx17)
  // L54(i28, dx17)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx17_;
  goto L54_;

D55_:;
  // deopt 222 [i30, dx15, l9, dx13, ct]
  SEXP Rsh_Fir_array_deopt_stack48[5];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_i30_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack48[2] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack48[3] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack48[4] = Rsh_Fir_reg_ct;
  Rsh_Fir_deopt(222, 5, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L209_:;
  // ct1 = force? ct
  Rsh_Fir_reg_ct1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ct);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r113 = dyn ___1(l7, <missing>, ct1, dx13)
  SEXP Rsh_Fir_array_args195[4];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args195[1] = Rsh_const(CCP, 93);
  Rsh_Fir_array_args195[2] = Rsh_Fir_reg_ct1_;
  Rsh_Fir_array_args195[3] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names54[4];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_array_arg_names54[2] = R_MissingArg;
  Rsh_Fir_array_arg_names54[3] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L54(i30, r113)
  // L54(i30, r113)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r113_;
  goto L54_;

D56_:;
  // deopt 227 [i32, i33]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_i33_;
  Rsh_Fir_deopt(227, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L210_:;
  // i34 = force? i33
  Rsh_Fir_reg_i34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i33_);
  // checkMissing(i34)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_i34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(i34)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // if c28 then L212() else L213(i32, i34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L212()
    goto L212_;
  } else {
  // L213(i32, i34)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i32_;
    Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i34_;
    goto L213_;
  }

L211_:;
  // l10 = ld conf
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // c29 = `is.object`(l10)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // if c29 then L215() else L216(i40, dx21, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L215()
    goto L215_;
  } else {
  // L216(i40, dx21, l10)
    Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i40_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L216_;
  }

L212_:;
  // dr16 = tryDispatchBuiltin.1("$", i34)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args199);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // if dc8 then L214() else L213(i32, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L214()
    goto L214_;
  } else {
  // L213(i32, dr16)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i32_;
    Rsh_Fir_reg_i38_ = Rsh_Fir_reg_dr16_;
    goto L213_;
  }

L213_:;
  // r114 = `$`(i38, <sym conf>)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_args201[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // goto L211(i37, r114)
  // L211(i37, r114)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r114_;
  goto L211_;

L214_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // goto L211(i32, dx20)
  // L211(i32, dx20)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L211_;

L215_:;
  // dr18 = tryDispatchBuiltin.0("[<-", l10, dx21)
  SEXP Rsh_Fir_array_args203[3];
  Rsh_Fir_array_args203[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args203[2] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args203);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty());
  // if dc9 then L217() else L216(i40, dx21, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L217()
    goto L217_;
  } else {
  // L216(i40, dx21, dr18)
    Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i40_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr18_;
    goto L216_;
  }

L216_:;
  // ct2 = ld ct
  Rsh_Fir_reg_ct2_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L218() else D57()
  // L218()
  goto L218_;

L217_:;
  // dx25 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // goto L55(i40, dx25)
  // L55(i40, dx25)
  Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i40_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx25_;
  goto L55_;

D57_:;
  // deopt 232 [i42, dx23, l12, dx21, ct2]
  SEXP Rsh_Fir_array_deopt_stack50[5];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_i42_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack50[3] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_deopt_stack50[4] = Rsh_Fir_reg_ct2_;
  Rsh_Fir_deopt(232, 5, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L218_:;
  // ct3 = force? ct2
  Rsh_Fir_reg_ct3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ct2_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r115 = dyn ___2(l10, <missing>, ct3, dx21)
  SEXP Rsh_Fir_array_args206[4];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args206[1] = Rsh_const(CCP, 93);
  Rsh_Fir_array_args206[2] = Rsh_Fir_reg_ct3_;
  Rsh_Fir_array_args206[3] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names55[4];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_array_arg_names55[3] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 4, Rsh_Fir_array_args206, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L55(i42, r115)
  // L55(i42, r115)
  Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i42_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r115_;
  goto L55_;

L219_:;
  // ng = ld ng
  Rsh_Fir_reg_ng = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L221() else D58()
  // L221()
  goto L221_;

L220_:;
  // r116 = dyn base20(<sym ng>, <lang `$`(i, n)>)
  SEXP Rsh_Fir_array_args207[2];
  Rsh_Fir_array_args207[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args207[1] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 2, Rsh_Fir_array_args207, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L56(i44, r116)
  // L56(i44, r116)
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i44_;
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r116_;
  goto L56_;

D58_:;
  // deopt 239 [i44, ng]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_i44_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_ng;
  Rsh_Fir_deopt(239, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L221_:;
  // ng1 = force? ng
  Rsh_Fir_reg_ng1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ng);
  // checkMissing(ng1)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_ng1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty()));
  // i48 = ld i
  Rsh_Fir_reg_i48_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L222() else D59()
  // L222()
  goto L222_;

D59_:;
  // deopt 241 [i44, i48]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_i44_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_i48_;
  Rsh_Fir_deopt(241, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L222_:;
  // i49 = force? i48
  Rsh_Fir_reg_i49_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i48_);
  // checkMissing(i49)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_i49_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(i49)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty());
  // if c30 then L224() else L225(i44, i49)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L224()
    goto L224_;
  } else {
  // L225(i44, i49)
    Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i44_;
    Rsh_Fir_reg_i53_ = Rsh_Fir_reg_i49_;
    goto L225_;
  }

L223_:;
  // c31 = ldf c in base
  Rsh_Fir_reg_c31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r119 = dyn c31(ng1, dx29)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_ng1_;
  Rsh_Fir_array_args211[1] = Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c31_, 2, Rsh_Fir_array_args211, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L227() else D60()
  // L227()
  goto L227_;

L224_:;
  // dr20 = tryDispatchBuiltin.1("$", i49)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args212[1] = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args212);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty());
  // if dc10 then L226() else L225(i44, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L226()
    goto L226_;
  } else {
  // L225(i44, dr20)
    Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i44_;
    Rsh_Fir_reg_i53_ = Rsh_Fir_reg_dr20_;
    goto L225_;
  }

L225_:;
  // r118 = `$`(i53, <sym n>)
  SEXP Rsh_Fir_array_args214[2];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_i53_;
  Rsh_Fir_array_args214[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // goto L223(i52, r118)
  // L223(i52, r118)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i52_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r118_;
  goto L223_;

L226_:;
  // dx28 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // goto L223(i44, dx28)
  // L223(i44, dx28)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i44_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L223_;

D60_:;
  // deopt 245 [i55, r119]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_r119_;
  Rsh_Fir_deopt(245, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L227_:;
  // goto L56(i55, r119)
  // L56(i55, r119)
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r119_;
  goto L56_;

L228_:;
  // i59 = ld i
  Rsh_Fir_reg_i59_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L230() else D61()
  // L230()
  goto L230_;

L229_:;
  // r120 = dyn base21(<lang `$`(i, out)>)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_const(CCP, 95);
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args216, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L57(i47, r120)
  // L57(i47, r120)
  Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i47_;
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r120_;
  goto L57_;

D61_:;
  // deopt 249 [i47, i59]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_i47_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_i59_;
  Rsh_Fir_deopt(249, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L230_:;
  // i60 = force? i59
  Rsh_Fir_reg_i60_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i59_);
  // checkMissing(i60)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_i60_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(i60)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_i60_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // if c32 then L232() else L233(i47, i60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L232()
    goto L232_;
  } else {
  // L233(i47, i60)
    Rsh_Fir_reg_i63_ = Rsh_Fir_reg_i47_;
    Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i60_;
    goto L233_;
  }

L231_:;
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r123 = dyn length4(dx31)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args219, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L235() else D62()
  // L235()
  goto L235_;

L232_:;
  // dr22 = tryDispatchBuiltin.1("$", i60)
  SEXP Rsh_Fir_array_args220[2];
  Rsh_Fir_array_args220[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args220[1] = Rsh_Fir_reg_i60_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args220);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty());
  // if dc11 then L234() else L233(i47, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L234()
    goto L234_;
  } else {
  // L233(i47, dr22)
    Rsh_Fir_reg_i63_ = Rsh_Fir_reg_i47_;
    Rsh_Fir_reg_i64_ = Rsh_Fir_reg_dr22_;
    goto L233_;
  }

L233_:;
  // r122 = `$`(i64, <sym out>)
  SEXP Rsh_Fir_array_args222[2];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_i64_;
  Rsh_Fir_array_args222[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // goto L231(i63, r122)
  // L231(i63, r122)
  Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i63_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r122_;
  goto L231_;

L234_:;
  // dx30 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // goto L231(i47, dx30)
  // L231(i47, dx30)
  Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i47_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L231_;

D62_:;
  // deopt 253 [i66, r123]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_i66_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_r123_;
  Rsh_Fir_deopt(253, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L235_:;
  // goto L57(i66, r123)
  // L57(i66, r123)
  Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i66_;
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r123_;
  goto L57_;

L236_:;
  // sym22 = ldf c
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base22 = ldf c in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args224);
  // if guard22 then L237() else L238()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L237()
    goto L237_;
  } else {
  // L238()
    goto L238_;
  }

L237_:;
  // out = ld out
  Rsh_Fir_reg_out = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L239() else D63()
  // L239()
  goto L239_;

L238_:;
  // r124 = dyn base22(<sym out>, <lang `$`(i, out)>)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args225[1] = Rsh_const(CCP, 95);
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 2, Rsh_Fir_array_args225, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L59(i58, r124)
  // L59(i58, r124)
  Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i58_;
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r124_;
  goto L59_;

D63_:;
  // deopt 257 [i58, out]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_i58_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_out;
  Rsh_Fir_deopt(257, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L239_:;
  // out1 = force? out
  Rsh_Fir_reg_out1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out);
  // checkMissing(out1)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_out1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty()));
  // i72 = ld i
  Rsh_Fir_reg_i72_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L240() else D64()
  // L240()
  goto L240_;

D64_:;
  // deopt 259 [i58, i72]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_i58_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_i72_;
  Rsh_Fir_deopt(259, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L240_:;
  // i73 = force? i72
  Rsh_Fir_reg_i73_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i72_);
  // checkMissing(i73)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_i73_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(i73)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_i73_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty());
  // if c34 then L242() else L243(i58, i73)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L242()
    goto L242_;
  } else {
  // L243(i58, i73)
    Rsh_Fir_reg_i76_ = Rsh_Fir_reg_i58_;
    Rsh_Fir_reg_i77_ = Rsh_Fir_reg_i73_;
    goto L243_;
  }

L241_:;
  // c35 = ldf c in base
  Rsh_Fir_reg_c35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r127 = dyn c35(out1, dx33)
  SEXP Rsh_Fir_array_args229[2];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_out1_;
  Rsh_Fir_array_args229[1] = Rsh_Fir_reg_dx33_;
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c35_, 2, Rsh_Fir_array_args229, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L245() else D65()
  // L245()
  goto L245_;

L242_:;
  // dr24 = tryDispatchBuiltin.1("$", i73)
  SEXP Rsh_Fir_array_args230[2];
  Rsh_Fir_array_args230[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_i73_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args230);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // if dc12 then L244() else L243(i58, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L244()
    goto L244_;
  } else {
  // L243(i58, dr24)
    Rsh_Fir_reg_i76_ = Rsh_Fir_reg_i58_;
    Rsh_Fir_reg_i77_ = Rsh_Fir_reg_dr24_;
    goto L243_;
  }

L243_:;
  // r126 = `$`(i77, <sym out>)
  SEXP Rsh_Fir_array_args232[2];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_i77_;
  Rsh_Fir_array_args232[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // goto L241(i76, r126)
  // L241(i76, r126)
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i76_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r126_;
  goto L241_;

L244_:;
  // dx32 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // goto L241(i58, dx32)
  // L241(i58, dx32)
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i58_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L241_;

D65_:;
  // deopt 263 [i79, r127]
  SEXP Rsh_Fir_array_deopt_stack58[2];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_i79_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_r127_;
  Rsh_Fir_deopt(263, 2, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L245_:;
  // goto L59(i79, r127)
  // L59(i79, r127)
  Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i79_;
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r127_;
  goto L59_;

L246_:;
  // group = ld group
  Rsh_Fir_reg_group = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L248() else D66()
  // L248()
  goto L248_;

L247_:;
  // r128 = dyn base23(<sym group>, <lang rep.int(ct, lo)>)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args234[1] = Rsh_const(CCP, 96);
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 2, Rsh_Fir_array_args234, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L60(i71, r128)
  // L60(i71, r128)
  Rsh_Fir_reg_i82_ = Rsh_Fir_reg_i71_;
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r128_;
  goto L60_;

D66_:;
  // deopt 267 [i71, group]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_i71_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_group;
  Rsh_Fir_deopt(267, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L248_:;
  // group1 = force? group
  Rsh_Fir_reg_group1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_group);
  // checkMissing(group1)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_group1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty()));
  // sym24 = ldf `rep.int`
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 97), RHO);
  // base24 = ldf `rep.int` in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args236[2];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args236[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args236);
  // if guard24 then L249() else L250()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L249()
    goto L249_;
  } else {
  // L250()
    goto L250_;
  }

L249_:;
  // ct4 = ld ct
  Rsh_Fir_reg_ct4_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L251() else D67()
  // L251()
  goto L251_;

L250_:;
  // r130 = dyn base24(<sym ct>, <sym lo>)
  SEXP Rsh_Fir_array_args237[2];
  Rsh_Fir_array_args237[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args237[1] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 2, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L61(i71, r130)
  // L61(i71, r130)
  Rsh_Fir_reg_i85_ = Rsh_Fir_reg_i71_;
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r130_;
  goto L61_;

D67_:;
  // deopt 271 [i71, ct4]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_i71_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_ct4_;
  Rsh_Fir_deopt(271, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L251_:;
  // ct5 = force? ct4
  Rsh_Fir_reg_ct5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ct4_);
  // checkMissing(ct5)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_ct5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty()));
  // lo = ld lo
  Rsh_Fir_reg_lo = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L252() else D68()
  // L252()
  goto L252_;

D68_:;
  // deopt 273 [i71, lo]
  SEXP Rsh_Fir_array_deopt_stack61[2];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_i71_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_lo;
  Rsh_Fir_deopt(273, 2, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L252_:;
  // lo1 = force? lo
  Rsh_Fir_reg_lo1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lo);
  // checkMissing(lo1)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_lo1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty()));
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 97), RHO);
  // r132 = dyn rep_int(ct5, lo1)
  SEXP Rsh_Fir_array_args240[2];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_ct5_;
  Rsh_Fir_array_args240[1] = Rsh_Fir_reg_lo1_;
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args240, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L253() else D69()
  // L253()
  goto L253_;

D69_:;
  // deopt 276 [i71, r132]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_i71_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_r132_;
  Rsh_Fir_deopt(276, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L253_:;
  // goto L61(i71, r132)
  // L61(i71, r132)
  Rsh_Fir_reg_i85_ = Rsh_Fir_reg_i71_;
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r132_;
  goto L61_;

D70_:;
  // deopt 278 [i85, r133]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_i85_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_r133_;
  Rsh_Fir_deopt(278, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L254_:;
  // goto L60(i85, r133)
  // L60(i85, r133)
  Rsh_Fir_reg_i82_ = Rsh_Fir_reg_i85_;
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r133_;
  goto L60_;

D71_:;
  // deopt 282 [i86, ct6]
  SEXP Rsh_Fir_array_deopt_stack64[2];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_i86_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_ct6_;
  Rsh_Fir_deopt(282, 2, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L256_:;
  // ct7 = force? ct6
  Rsh_Fir_reg_ct7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ct6_);
  // checkMissing(ct7)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_ct7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty()));
  // r135 = `+`(ct7, 1.0)
  SEXP Rsh_Fir_array_args242[2];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_ct7_;
  Rsh_Fir_array_args242[1] = Rsh_const(CCP, 92);
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty());
  // st ct = r135
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r135_, RHO);
  (void)(Rsh_Fir_reg_r135_);
  // goto L53(i86)
  // L53(i86)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i86_;
  goto L53_;

L257_:;
  // cl = ld cl
  Rsh_Fir_reg_cl = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L259() else D72()
  // L259()
  goto L259_;

L258_:;
  // r136 = dyn base25(<sym cl>)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 1, Rsh_Fir_array_args243, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L64(r136)
  // L64(r136)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r136_;
  goto L64_;

D72_:;
  // deopt 292 [cl]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_cl;
  Rsh_Fir_deopt(292, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L259_:;
  // cl1 = force? cl
  Rsh_Fir_reg_cl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl);
  // checkMissing(cl1)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_cl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty()));
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r138 = dyn length5(cl1)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_cl1_;
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args245, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L260() else D73()
  // L260()
  goto L260_;

D73_:;
  // deopt 295 [r138]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_r138_;
  Rsh_Fir_deopt(295, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L260_:;
  // goto L64(r138)
  // L64(r138)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r138_;
  goto L64_;

L261_:;
  // cl2 = ld cl
  Rsh_Fir_reg_cl2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L262() else D74()
  // L262()
  goto L262_;

D74_:;
  // deopt 298 [c37, cl2]
  SEXP Rsh_Fir_array_deopt_stack67[2];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_cl2_;
  Rsh_Fir_deopt(298, 2, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L262_:;
  // cl3 = force? cl2
  Rsh_Fir_reg_cl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl2_);
  // checkMissing(cl3)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_cl3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty()));
  // r140 = `!=`(cl3, "numeric")
  SEXP Rsh_Fir_array_args247[2];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_cl3_;
  Rsh_Fir_array_args247[1] = Rsh_const(CCP, 98);
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty());
  // c40 = `as.logical`(r140)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_r140_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty());
  // c41 = `&&`(c37, c40)
  SEXP Rsh_Fir_array_args249[2];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_args249[1] = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty());
  // goto L65(c41)
  // L65(c41)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c41_;
  goto L65_;

L264_:;
  // cl4 = ld cl
  Rsh_Fir_reg_cl4_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L265() else D75()
  // L265()
  goto L265_;

D75_:;
  // deopt 303 [cl4]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_cl4_;
  Rsh_Fir_deopt(303, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L265_:;
  // cl5 = force? cl4
  Rsh_Fir_reg_cl5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cl4_);
  // checkMissing(cl5)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_cl5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty()));
  // l13 = ld out
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // oldClass__ = ldf `oldClass<-`
  Rsh_Fir_reg_oldClass__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 99), RHO);
  // check L266() else D76()
  // L266()
  goto L266_;

D76_:;
  // deopt 306 [cl5, l13, cl5]
  SEXP Rsh_Fir_array_deopt_stack69[3];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_cl5_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack69[2] = Rsh_Fir_reg_cl5_;
  Rsh_Fir_deopt(306, 3, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L266_:;
  // r141 = dyn oldClass__(l13, NULL, cl5)
  SEXP Rsh_Fir_array_args251[3];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args251[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args251[2] = Rsh_Fir_reg_cl5_;
  SEXP Rsh_Fir_array_arg_names67[3];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_array_arg_names67[2] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass__, 3, Rsh_Fir_array_args251, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L267() else D77()
  // L267()
  goto L267_;

D77_:;
  // deopt 308 [cl5, r141]
  SEXP Rsh_Fir_array_deopt_stack70[2];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_cl5_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_r141_;
  Rsh_Fir_deopt(308, 2, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L267_:;
  // st out = r141
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r141_, RHO);
  (void)(Rsh_Fir_reg_r141_);
  // l14 = ld conf
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // oldClass__1 = ldf `oldClass<-`
  Rsh_Fir_reg_oldClass__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 99), RHO);
  // check L268() else D78()
  // L268()
  goto L268_;

D78_:;
  // deopt 311 [cl5, l14, cl5]
  SEXP Rsh_Fir_array_deopt_stack71[3];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_cl5_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack71[2] = Rsh_Fir_reg_cl5_;
  Rsh_Fir_deopt(311, 3, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L268_:;
  // r142 = dyn oldClass__1(l14, NULL, cl5)
  SEXP Rsh_Fir_array_args252[3];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args252[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args252[2] = Rsh_Fir_reg_cl5_;
  SEXP Rsh_Fir_array_arg_names68[3];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_array_arg_names68[1] = R_MissingArg;
  Rsh_Fir_array_arg_names68[2] = R_MissingArg;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass__1_, 3, Rsh_Fir_array_args252, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L269() else D79()
  // L269()
  goto L269_;

D79_:;
  // deopt 313 [cl5, r142]
  SEXP Rsh_Fir_array_deopt_stack72[2];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_cl5_;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_r142_;
  Rsh_Fir_deopt(313, 2, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L269_:;
  // st conf = r142
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r142_, RHO);
  (void)(Rsh_Fir_reg_r142_);
  // l15 = ld stats
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // oldClass__2 = ldf `oldClass<-`
  Rsh_Fir_reg_oldClass__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 99), RHO);
  // check L270() else D80()
  // L270()
  goto L270_;

D80_:;
  // deopt 316 [cl5, l15, cl5]
  SEXP Rsh_Fir_array_deopt_stack73[3];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_cl5_;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack73[2] = Rsh_Fir_reg_cl5_;
  Rsh_Fir_deopt(316, 3, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L270_:;
  // r143 = dyn oldClass__2(l15, NULL, cl5)
  SEXP Rsh_Fir_array_args253[3];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args253[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args253[2] = Rsh_Fir_reg_cl5_;
  SEXP Rsh_Fir_array_arg_names69[3];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_array_arg_names69[2] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass__2_, 3, Rsh_Fir_array_args253, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L271() else D81()
  // L271()
  goto L271_;

D81_:;
  // deopt 318 [cl5, r143]
  SEXP Rsh_Fir_array_deopt_stack74[2];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_cl5_;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_r143_;
  Rsh_Fir_deopt(318, 2, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L271_:;
  // st stats = r143
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r143_, RHO);
  (void)(Rsh_Fir_reg_r143_);
  // goto L67()
  // L67()
  goto L67_;

L273_:;
  // stats = ld stats
  Rsh_Fir_reg_stats = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L275() else D82()
  // L275()
  goto L275_;

L274_:;
  // r144 = dyn base26[stats, n, conf, out, group, names](<sym stats>, <sym ng>, <sym conf>, <sym out>, <sym group>, <sym names>)
  SEXP Rsh_Fir_array_args254[6];
  Rsh_Fir_array_args254[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args254[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args254[2] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args254[3] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args254[4] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args254[5] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names70[6];
  Rsh_Fir_array_arg_names70[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_arg_names70[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_arg_names70[2] = Rsh_const(CCP, 47);
  Rsh_Fir_array_arg_names70[3] = Rsh_const(CCP, 51);
  Rsh_Fir_array_arg_names70[4] = Rsh_const(CCP, 52);
  Rsh_Fir_array_arg_names70[5] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 6, Rsh_Fir_array_args254, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L68(r144)
  // L68(r144)
  Rsh_Fir_reg_r145_ = Rsh_Fir_reg_r144_;
  goto L68_;

D82_:;
  // deopt 324 [stats]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_stats;
  Rsh_Fir_deopt(324, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L275_:;
  // stats1 = force? stats
  Rsh_Fir_reg_stats1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stats);
  // checkMissing(stats1)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_stats1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty()));
  // ng2 = ld ng
  Rsh_Fir_reg_ng2_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L276() else D83()
  // L276()
  goto L276_;

D83_:;
  // deopt 327 [ng2]
  SEXP Rsh_Fir_array_deopt_stack76[1];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_ng2_;
  Rsh_Fir_deopt(327, 1, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L276_:;
  // ng3 = force? ng2
  Rsh_Fir_reg_ng3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ng2_);
  // checkMissing(ng3)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_ng3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty()));
  // conf = ld conf
  Rsh_Fir_reg_conf = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L277() else D84()
  // L277()
  goto L277_;

D84_:;
  // deopt 330 [conf]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_conf;
  Rsh_Fir_deopt(330, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L277_:;
  // conf1 = force? conf
  Rsh_Fir_reg_conf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_conf);
  // checkMissing(conf1)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_conf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty()));
  // out2 = ld out
  Rsh_Fir_reg_out2_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L278() else D85()
  // L278()
  goto L278_;

D85_:;
  // deopt 333 [out2]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_out2_;
  Rsh_Fir_deopt(333, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L278_:;
  // out3 = force? out2
  Rsh_Fir_reg_out3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out2_);
  // checkMissing(out3)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_out3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty()));
  // group2 = ld group
  Rsh_Fir_reg_group2_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L279() else D86()
  // L279()
  goto L279_;

D86_:;
  // deopt 336 [group2]
  SEXP Rsh_Fir_array_deopt_stack79[1];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_group2_;
  Rsh_Fir_deopt(336, 1, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L279_:;
  // group3 = force? group2
  Rsh_Fir_reg_group3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_group2_);
  // checkMissing(group3)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_group3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty()));
  // names4 = ld names
  Rsh_Fir_reg_names4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L280() else D87()
  // L280()
  goto L280_;

D87_:;
  // deopt 339 [names4]
  SEXP Rsh_Fir_array_deopt_stack80[1];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_names4_;
  Rsh_Fir_deopt(339, 1, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L280_:;
  // names5 = force? names4
  Rsh_Fir_reg_names5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names4_);
  // checkMissing(names5)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_names5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // list3 = ldf list in base
  Rsh_Fir_reg_list3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r146 = dyn list3(stats1, ng3, conf1, out3, group3, names5)
  SEXP Rsh_Fir_array_args261[6];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_stats1_;
  Rsh_Fir_array_args261[1] = Rsh_Fir_reg_ng3_;
  Rsh_Fir_array_args261[2] = Rsh_Fir_reg_conf1_;
  Rsh_Fir_array_args261[3] = Rsh_Fir_reg_out3_;
  Rsh_Fir_array_args261[4] = Rsh_Fir_reg_group3_;
  Rsh_Fir_array_args261[5] = Rsh_Fir_reg_names5_;
  SEXP Rsh_Fir_array_arg_names71[6];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_array_arg_names71[2] = R_MissingArg;
  Rsh_Fir_array_arg_names71[3] = R_MissingArg;
  Rsh_Fir_array_arg_names71[4] = R_MissingArg;
  Rsh_Fir_array_arg_names71[5] = R_MissingArg;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list3_, 6, Rsh_Fir_array_args261, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L281() else D88()
  // L281()
  goto L281_;

D88_:;
  // deopt 343 [r146]
  SEXP Rsh_Fir_array_deopt_stack81[1];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_r146_;
  Rsh_Fir_deopt(343, 1, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L281_:;
  // goto L68(r146)
  // L68(r146)
  Rsh_Fir_reg_r145_ = Rsh_Fir_reg_r146_;
  goto L68_;

D89_:;
  // deopt 345 [plot1]
  SEXP Rsh_Fir_array_deopt_stack82[1];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_plot1_;
  Rsh_Fir_deopt(345, 1, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L282_:;
  // plot2 = force? plot1
  Rsh_Fir_reg_plot2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_plot1_);
  // checkMissing(plot2)
  SEXP Rsh_Fir_array_args262[1];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_plot2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args262, Rsh_Fir_param_types_empty()));
  // c44 = `as.logical`(plot2)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_plot2_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty());
  // if c44 then L283() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L283()
    goto L283_;
  } else {
  // L69()
    goto L69_;
  }

L283_:;
  // sym27 = ldf `is.null`
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base27 = ldf `is.null` in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args264[2];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args264[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args264);
  // if guard27 then L284() else L285()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L284()
    goto L284_;
  } else {
  // L285()
    goto L285_;
  }

L284_:;
  // pars1 = ld pars
  Rsh_Fir_reg_pars1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L286() else D90()
  // L286()
  goto L286_;

L285_:;
  // r147 = dyn base27(<lang `$`(pars, boxfill)>)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_const(CCP, 100);
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 1, Rsh_Fir_array_args265, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L70(r147)
  // L70(r147)
  Rsh_Fir_reg_r148_ = Rsh_Fir_reg_r147_;
  goto L70_;

D90_:;
  // deopt 348 [pars1]
  SEXP Rsh_Fir_array_deopt_stack83[1];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_pars1_;
  Rsh_Fir_deopt(348, 1, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L286_:;
  // pars2 = force? pars1
  Rsh_Fir_reg_pars2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pars1_);
  // checkMissing(pars2)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_pars2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(pars2)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_pars2_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty());
  // if c45 then L288() else L289(pars2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L288()
    goto L288_;
  } else {
  // L289(pars2)
    Rsh_Fir_reg_pars4_ = Rsh_Fir_reg_pars2_;
    goto L289_;
  }

L287_:;
  // c46 = `==`(dx35, NULL)
  SEXP Rsh_Fir_array_args268[2];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_array_args268[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty());
  // goto L70(c46)
  // L70(c46)
  Rsh_Fir_reg_r148_ = Rsh_Fir_reg_c46_;
  goto L70_;

L288_:;
  // dr26 = tryDispatchBuiltin.1("$", pars2)
  SEXP Rsh_Fir_array_args269[2];
  Rsh_Fir_array_args269[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args269[1] = Rsh_Fir_reg_pars2_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args269);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args270[1];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty());
  // if dc13 then L290() else L289(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L290()
    goto L290_;
  } else {
  // L289(dr26)
    Rsh_Fir_reg_pars4_ = Rsh_Fir_reg_dr26_;
    goto L289_;
  }

L289_:;
  // r149 = `$`(pars4, <sym boxfill>)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_pars4_;
  Rsh_Fir_array_args271[1] = Rsh_const(CCP, 101);
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args271, Rsh_Fir_param_types_empty());
  // goto L287(r149)
  // L287(r149)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r149_;
  goto L287_;

L290_:;
  // dx34 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty());
  // goto L287(dx34)
  // L287(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L287_;

L291_:;
  // sym28 = ldf `is.null`
  Rsh_Fir_reg_sym28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base28 = ldf `is.null` in base
  Rsh_Fir_reg_base28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard28 = `==`.4(sym28, base28)
  SEXP Rsh_Fir_array_args273[2];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_sym28_;
  Rsh_Fir_array_args273[1] = Rsh_Fir_reg_base28_;
  Rsh_Fir_reg_guard28_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args273);
  // if guard28 then L292() else L293()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard28_)) {
  // L292()
    goto L292_;
  } else {
  // L293()
    goto L293_;
  }

L292_:;
  // args10 = ld args
  Rsh_Fir_reg_args10_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L294() else D91()
  // L294()
  goto L294_;

L293_:;
  // r150 = dyn base28(<lang `$`(args, boxfill)>)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_const(CCP, 102);
  SEXP Rsh_Fir_array_arg_names73[1];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_reg_r150_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base28_, 1, Rsh_Fir_array_args274, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L72(c47, r150)
  // L72(c47, r150)
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r150_;
  goto L72_;

D91_:;
  // deopt 353 [c47, args10]
  SEXP Rsh_Fir_array_deopt_stack84[2];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_deopt_stack84[1] = Rsh_Fir_reg_args10_;
  Rsh_Fir_deopt(353, 2, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L294_:;
  // args11 = force? args10
  Rsh_Fir_reg_args11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args10_);
  // checkMissing(args11)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_args11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty()));
  // c53 = `is.object`(args11)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_args11_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty());
  // if c53 then L296() else L297(c47, args11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L296()
    goto L296_;
  } else {
  // L297(c47, args11)
    Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c47_;
    Rsh_Fir_reg_args13_ = Rsh_Fir_reg_args11_;
    goto L297_;
  }

L295_:;
  // c58 = `==`(dx37, NULL)
  SEXP Rsh_Fir_array_args277[2];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_dx37_;
  Rsh_Fir_array_args277[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args277, Rsh_Fir_param_types_empty());
  // goto L72(c57, c58)
  // L72(c57, c58)
  Rsh_Fir_reg_c52_ = Rsh_Fir_reg_c57_;
  Rsh_Fir_reg_r151_ = Rsh_Fir_reg_c58_;
  goto L72_;

L296_:;
  // dr28 = tryDispatchBuiltin.1("$", args11)
  SEXP Rsh_Fir_array_args278[2];
  Rsh_Fir_array_args278[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args278[1] = Rsh_Fir_reg_args11_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args278);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args279, Rsh_Fir_param_types_empty());
  // if dc14 then L298() else L297(c47, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L298()
    goto L298_;
  } else {
  // L297(c47, dr28)
    Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c47_;
    Rsh_Fir_reg_args13_ = Rsh_Fir_reg_dr28_;
    goto L297_;
  }

L297_:;
  // r152 = `$`(args13, <sym boxfill>)
  SEXP Rsh_Fir_array_args280[2];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_args13_;
  Rsh_Fir_array_args280[1] = Rsh_const(CCP, 101);
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty());
  // goto L295(c55, r152)
  // L295(c55, r152)
  Rsh_Fir_reg_c57_ = Rsh_Fir_reg_c55_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r152_;
  goto L295_;

L298_:;
  // dx36 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args281, Rsh_Fir_param_types_empty());
  // goto L295(c47, dx36)
  // L295(c47, dx36)
  Rsh_Fir_reg_c57_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L295_;

L300_:;
  // col1 = ld col
  Rsh_Fir_reg_col1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L301() else D92()
  // L301()
  goto L301_;

D92_:;
  // deopt 358 [col1]
  SEXP Rsh_Fir_array_deopt_stack85[1];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_col1_;
  Rsh_Fir_deopt(358, 1, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L301_:;
  // col2 = force? col1
  Rsh_Fir_reg_col2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col1_);
  // checkMissing(col2)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_col2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty()));
  // l16 = ld pars
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // c63 = `is.object`(l16)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args283, Rsh_Fir_param_types_empty());
  // if c63 then L303() else L304(col2, l16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c63_)) {
  // L303()
    goto L303_;
  } else {
  // L304(col2, l16)
    Rsh_Fir_reg_col4_ = Rsh_Fir_reg_col2_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l16_;
    goto L304_;
  }

L302_:;
  // st pars = dx39
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_dx39_, RHO);
  (void)(Rsh_Fir_reg_dx39_);
  // goto L74()
  // L74()
  goto L74_;

L303_:;
  // dr30 = tryDispatchBuiltin.0("$<-", l16, col2)
  SEXP Rsh_Fir_array_args284[3];
  Rsh_Fir_array_args284[0] = Rsh_const(CCP, 103);
  Rsh_Fir_array_args284[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args284[2] = Rsh_Fir_reg_col2_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args284);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args285, Rsh_Fir_param_types_empty());
  // if dc15 then L305() else L304(col2, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L305()
    goto L305_;
  } else {
  // L304(col2, dr30)
    Rsh_Fir_reg_col4_ = Rsh_Fir_reg_col2_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_dr30_;
    goto L304_;
  }

L304_:;
  // r153 = `$<-`(l18, <sym boxfill>, col2)
  SEXP Rsh_Fir_array_args286[3];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args286[1] = Rsh_const(CCP, 101);
  Rsh_Fir_array_args286[2] = Rsh_Fir_reg_col2_;
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args286, Rsh_Fir_param_types_empty());
  // goto L302(col4, r153)
  // L302(col4, r153)
  Rsh_Fir_reg_col6_ = Rsh_Fir_reg_col4_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r153_;
  goto L302_;

L305_:;
  // dx38 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args287[1];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args287, Rsh_Fir_param_types_empty());
  // goto L302(col2, dx38)
  // L302(col2, dx38)
  Rsh_Fir_reg_col6_ = Rsh_Fir_reg_col2_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L302_;

D93_:;
  // deopt 366 []
  Rsh_Fir_deopt(366, 0, NULL, CCP, RHO);
  return R_NilValue;

L307_:;
  // p13 = prom<V +>{
  //   bxp = ld bxp;
  //   bxp1 = force? bxp;
  //   checkMissing(bxp1);
  //   return bxp1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_13, CCP, RHO);
  // p14 = prom<V +>{
  //   sym29 = ldf c;
  //   base29 = ldf c in base;
  //   guard29 = `==`.4(sym29, base29);
  //   if guard29 then L3() else L4();
  // L0(r156):
  //   return r156;
  // L3():
  //   sym30 = ldf list;
  //   base30 = ldf list in base;
  //   guard30 = `==`.4(sym30, base30);
  //   if guard30 then L5() else L6();
  // L4():
  //   r155 = dyn base29(<lang list(z, notch=notch, width=width, varwidth=varwidth, log=log, border=border, pars=pars, outline=outline, horizontal=horizontal, add=add, ann=ann, at=at)>, <lang `[`(args, namedargs)>);
  //   goto L0(r155);
  // L1(r158):
  //   args14 = ld args;
  //   args15 = force? args14;
  //   checkMissing(args15);
  //   c64 = `is.object`(args15);
  //   if c64 then L7() else L8(args15);
  // L5():
  //   z = ld z;
  //   z1 = force? z;
  //   checkMissing(z1);
  //   notch1 = ld notch;
  //   notch2 = force? notch1;
  //   checkMissing(notch2);
  //   width1 = ld width;
  //   width2 = force? width1;
  //   checkMissing(width2);
  //   varwidth1 = ld varwidth;
  //   varwidth2 = force? varwidth1;
  //   checkMissing(varwidth2);
  //   log1 = ld log;
  //   log2 = force? log1;
  //   checkMissing(log2);
  //   border1 = ld border;
  //   border2 = force? border1;
  //   checkMissing(border2);
  //   pars5 = ld pars;
  //   pars6 = force? pars5;
  //   checkMissing(pars6);
  //   outline1 = ld outline;
  //   outline2 = force? outline1;
  //   checkMissing(outline2);
  //   horizontal1 = ld horizontal;
  //   horizontal2 = force? horizontal1;
  //   checkMissing(horizontal2);
  //   add3 = ld add;
  //   add4 = force? add3;
  //   checkMissing(add4);
  //   ann1 = ld ann;
  //   ann2 = force? ann1;
  //   checkMissing(ann2);
  //   at1 = ld at;
  //   at2 = force? at1;
  //   checkMissing(at2);
  //   list4 = ldf list in base;
  //   r159 = dyn list4(z1, notch2, width2, varwidth2, log2, border2, pars6, outline2, horizontal2, add4, ann2, at2);
  //   goto L1(r159);
  // L6():
  //   r157 = dyn base30[, notch, width, varwidth, log, border, pars, outline, horizontal, add, ann, at](<sym z>, <sym notch>, <sym width>, <sym varwidth>, <sym log>, <sym border>, <sym pars>, <sym outline>, <sym horizontal>, <sym add>, <sym ann>, <sym at>);
  //   goto L1(r157);
  // L2(dx41):
  //   c65 = ldf c in base;
  //   r161 = dyn c65(r158, dx41);
  //   goto L0(r161);
  // L7():
  //   dr32 = tryDispatchBuiltin.1("[", args15);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L9() else L8(dr32);
  // L8(args17):
  //   namedargs2 = ld namedargs;
  //   namedargs3 = force? namedargs2;
  //   __3 = ldf `[` in base;
  //   r160 = dyn __3(args17, namedargs3);
  //   goto L2(r160);
  // L9():
  //   dx40 = getTryDispatchBuiltinValue(dr32);
  //   goto L2(dx40);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3264246192_14, CCP, RHO);
  // r163 = dyn do_call[, , quote](p13, p14, TRUE)
  SEXP Rsh_Fir_array_args313[3];
  Rsh_Fir_array_args313[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args313[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args313[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names79[3];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_array_arg_names79[2] = Rsh_const(CCP, 107);
  Rsh_Fir_reg_r163_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call, 3, Rsh_Fir_array_args313, Rsh_Fir_array_arg_names79, CCP, RHO);
  // check L308() else D94()
  // L308()
  goto L308_;

D94_:;
  // deopt 371 [r163]
  SEXP Rsh_Fir_array_deopt_stack86[1];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_r163_;
  Rsh_Fir_deopt(371, 1, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L308_:;
  // sym31 = ldf invisible
  Rsh_Fir_reg_sym31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 108), RHO);
  // base31 = ldf invisible in base
  Rsh_Fir_reg_base31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 108), RHO);
  // guard31 = `==`.4(sym31, base31)
  SEXP Rsh_Fir_array_args314[2];
  Rsh_Fir_array_args314[0] = Rsh_Fir_reg_sym31_;
  Rsh_Fir_array_args314[1] = Rsh_Fir_reg_base31_;
  Rsh_Fir_reg_guard31_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args314);
  // if guard31 then L309() else L310()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard31_)) {
  // L309()
    goto L309_;
  } else {
  // L310()
    goto L310_;
  }

L309_:;
  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L311() else D95()
  // L311()
  goto L311_;

L310_:;
  // r164 = dyn base31(<sym z>)
  SEXP Rsh_Fir_array_args315[1];
  Rsh_Fir_array_args315[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names80[1];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base31_, 1, Rsh_Fir_array_args315, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L75(r164)
  // L75(r164)
  Rsh_Fir_reg_r165_ = Rsh_Fir_reg_r164_;
  goto L75_;

D95_:;
  // deopt 374 [z2]
  SEXP Rsh_Fir_array_deopt_stack87[1];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_z2_;
  Rsh_Fir_deopt(374, 1, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L311_:;
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args316[1];
  Rsh_Fir_array_args316[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args316, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 108), RHO);
  // r166 = dyn invisible(z3)
  SEXP Rsh_Fir_array_args317[1];
  Rsh_Fir_array_args317[0] = Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_array_arg_names81[1];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args317, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L312() else D96()
  // L312()
  goto L312_;

D96_:;
  // deopt 377 [r166]
  SEXP Rsh_Fir_array_deopt_stack88[1];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_r166_;
  Rsh_Fir_deopt(377, 1, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L312_:;
  // goto L75(r166)
  // L75(r166)
  Rsh_Fir_reg_r165_ = Rsh_Fir_reg_r166_;
  goto L75_;

D97_:;
  // deopt 378 [z4]
  SEXP Rsh_Fir_array_deopt_stack89[1];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_z4_;
  Rsh_Fir_deopt(378, 1, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L314_:;
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args318[1];
  Rsh_Fir_array_args318[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args318, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return z5
  return Rsh_Fir_reg_z5_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_(SEXP CCP, SEXP RHO) {
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // r = dyn par("fg")
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner3264246192_1(SEXP CCP, SEXP RHO) {
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r4 = dyn list(0.8, 0.5, 0.5)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base[boxwex, staplewex, outwex](0.8, 0.5, 0.5)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_2(SEXP CCP, SEXP RHO) {
  // add1 = ld add
  Rsh_Fir_reg_add1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // add2 = force? add1
  Rsh_Fir_reg_add2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_add1_);
  // checkMissing(add2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_add2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // r6 = `!`(add2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_add2_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_3(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_4(SEXP CCP, SEXP RHO) {
  // groups10 = ld groups
  Rsh_Fir_reg_groups10_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // groups11 = force? groups10
  Rsh_Fir_reg_groups11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_groups10_);
  // checkMissing(groups11)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_groups11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // return groups11
  return Rsh_Fir_reg_groups11_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_5(SEXP CCP, SEXP RHO) {
  // class1 = ld class
  Rsh_Fir_reg_class1_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // class2 = force? class1
  Rsh_Fir_reg_class2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_class1_);
  // checkMissing(class2)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_class2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // return class2
  return Rsh_Fir_reg_class2_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_6(SEXP CCP, SEXP RHO) {
  // groups12 = ld groups
  Rsh_Fir_reg_groups12_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // groups13 = force? groups12
  Rsh_Fir_reg_groups13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_groups12_);
  // checkMissing(groups13)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_groups13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // return groups13
  return Rsh_Fir_reg_groups13_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_7(SEXP CCP, SEXP RHO) {
  // r80 = clos inner3708401697
  Rsh_Fir_reg_r80_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // return r80
  return Rsh_Fir_reg_r80_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_8(SEXP CCP, SEXP RHO) {
  // cls = ld cls
  Rsh_Fir_reg_cls = Rsh_Fir_load(Rsh_const(CCP, 71), RHO);
  // cls1 = force? cls
  Rsh_Fir_reg_cls1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cls);
  // checkMissing(cls1)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_cls1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // return cls1
  return Rsh_Fir_reg_cls1_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_9(SEXP CCP, SEXP RHO) {
  // sym19 = ldf unclass
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base19 = ldf unclass in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args160);
  // if guard19 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r95
  return Rsh_Fir_reg_r95_;

L1_:;
  // unclass1 = ldf unclass in base
  Rsh_Fir_reg_unclass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r97 = dyn unclass1(dx9)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass1_, 1, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L0(r97)
  // L0(r97)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r97_;
  goto L0_;

L2_:;
  // groups14 = ld groups
  Rsh_Fir_reg_groups14_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // groups15 = force? groups14
  Rsh_Fir_reg_groups15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_groups14_);
  // checkMissing(groups15)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_groups15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(groups15)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_groups15_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if c23 then L4() else L5(groups15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L4()
    goto L4_;
  } else {
  // L5(groups15)
    Rsh_Fir_reg_groups17_ = Rsh_Fir_reg_groups15_;
    goto L5_;
  }

L3_:;
  // r94 = dyn base19(<lang `[[`(groups, i)>)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L0(r94)
  // L0(r94)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r94_;
  goto L0_;

L4_:;
  // dr8 = tryDispatchBuiltin.1("[[", groups15)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_groups15_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args165);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // if dc4 then L6() else L5(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr8)
    Rsh_Fir_reg_groups17_ = Rsh_Fir_reg_dr8_;
    goto L5_;
  }

L5_:;
  // i8 = ld i
  Rsh_Fir_reg_i8_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // i9 = force? i8
  Rsh_Fir_reg_i9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i8_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 79), RHO);
  // r96 = dyn __2(groups17, i9)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_groups17_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L1(r96)
  // L1(r96)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r96_;
  goto L1_;

L6_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // goto L1(dx8)
  // L1(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_10(SEXP CCP, SEXP RHO) {
  // range1 = ld range
  Rsh_Fir_reg_range1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // range2 = force? range1
  Rsh_Fir_reg_range2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_range1_);
  // checkMissing(range2)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_range2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // return range2
  return Rsh_Fir_reg_range2_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_11(SEXP CCP, SEXP RHO) {
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // return n5
  return Rsh_Fir_reg_n5_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_12(SEXP CCP, SEXP RHO) {
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty()));
  // return n7
  return Rsh_Fir_reg_n7_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_13(SEXP CCP, SEXP RHO) {
  // bxp = ld bxp
  Rsh_Fir_reg_bxp = Rsh_Fir_load(Rsh_const(CCP, 104), RHO);
  // bxp1 = force? bxp
  Rsh_Fir_reg_bxp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bxp);
  // checkMissing(bxp1)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_bxp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args288, Rsh_Fir_param_types_empty()));
  // return bxp1
  return Rsh_Fir_reg_bxp1_;
}
SEXP Rsh_Fir_user_promise_inner3264246192_14(SEXP CCP, SEXP RHO) {
  // sym29 = ldf c
  Rsh_Fir_reg_sym29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base29 = ldf c in base
  Rsh_Fir_reg_base29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard29 = `==`.4(sym29, base29)
  SEXP Rsh_Fir_array_args289[2];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_sym29_;
  Rsh_Fir_array_args289[1] = Rsh_Fir_reg_base29_;
  Rsh_Fir_reg_guard29_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args289);
  // if guard29 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard29_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r156
  return Rsh_Fir_reg_r156_;

L1_:;
  // args14 = ld args
  Rsh_Fir_reg_args14_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // args15 = force? args14
  Rsh_Fir_reg_args15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args14_);
  // checkMissing(args15)
  SEXP Rsh_Fir_array_args290[1];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_args15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty()));
  // c64 = `is.object`(args15)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_args15_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args291, Rsh_Fir_param_types_empty());
  // if c64 then L7() else L8(args15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c64_)) {
  // L7()
    goto L7_;
  } else {
  // L8(args15)
    Rsh_Fir_reg_args17_ = Rsh_Fir_reg_args15_;
    goto L8_;
  }

L2_:;
  // c65 = ldf c in base
  Rsh_Fir_reg_c65_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r161 = dyn c65(r158, dx41)
  SEXP Rsh_Fir_array_args292[2];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_r158_;
  Rsh_Fir_array_args292[1] = Rsh_Fir_reg_dx41_;
  SEXP Rsh_Fir_array_arg_names74[2];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_reg_r161_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c65_, 2, Rsh_Fir_array_args292, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L0(r161)
  // L0(r161)
  Rsh_Fir_reg_r156_ = Rsh_Fir_reg_r161_;
  goto L0_;

L3_:;
  // sym30 = ldf list
  Rsh_Fir_reg_sym30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base30 = ldf list in base
  Rsh_Fir_reg_base30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard30 = `==`.4(sym30, base30)
  SEXP Rsh_Fir_array_args293[2];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_sym30_;
  Rsh_Fir_array_args293[1] = Rsh_Fir_reg_base30_;
  Rsh_Fir_reg_guard30_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args293);
  // if guard30 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard30_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r155 = dyn base29(<lang list(z, notch=notch, width=width, varwidth=varwidth, log=log, border=border, pars=pars, outline=outline, horizontal=horizontal, add=add, ann=ann, at=at)>, <lang `[`(args, namedargs)>)
  SEXP Rsh_Fir_array_args294[2];
  Rsh_Fir_array_args294[0] = Rsh_const(CCP, 105);
  Rsh_Fir_array_args294[1] = Rsh_const(CCP, 106);
  SEXP Rsh_Fir_array_arg_names75[2];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base29_, 2, Rsh_Fir_array_args294, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L0(r155)
  // L0(r155)
  Rsh_Fir_reg_r156_ = Rsh_Fir_reg_r155_;
  goto L0_;

L5_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args295[1];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args295, Rsh_Fir_param_types_empty()));
  // notch1 = ld notch
  Rsh_Fir_reg_notch1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // notch2 = force? notch1
  Rsh_Fir_reg_notch2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_notch1_);
  // checkMissing(notch2)
  SEXP Rsh_Fir_array_args296[1];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_notch2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args296, Rsh_Fir_param_types_empty()));
  // width1 = ld width
  Rsh_Fir_reg_width1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // width2 = force? width1
  Rsh_Fir_reg_width2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_width1_);
  // checkMissing(width2)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_width2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty()));
  // varwidth1 = ld varwidth
  Rsh_Fir_reg_varwidth1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // varwidth2 = force? varwidth1
  Rsh_Fir_reg_varwidth2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varwidth1_);
  // checkMissing(varwidth2)
  SEXP Rsh_Fir_array_args298[1];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_varwidth2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args298, Rsh_Fir_param_types_empty()));
  // log1 = ld log
  Rsh_Fir_reg_log1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // log2 = force? log1
  Rsh_Fir_reg_log2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log1_);
  // checkMissing(log2)
  SEXP Rsh_Fir_array_args299[1];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_log2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args299, Rsh_Fir_param_types_empty()));
  // border1 = ld border
  Rsh_Fir_reg_border1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // border2 = force? border1
  Rsh_Fir_reg_border2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_border1_);
  // checkMissing(border2)
  SEXP Rsh_Fir_array_args300[1];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_border2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args300, Rsh_Fir_param_types_empty()));
  // pars5 = ld pars
  Rsh_Fir_reg_pars5_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // pars6 = force? pars5
  Rsh_Fir_reg_pars6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pars5_);
  // checkMissing(pars6)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_pars6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty()));
  // outline1 = ld outline
  Rsh_Fir_reg_outline1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // outline2 = force? outline1
  Rsh_Fir_reg_outline2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_outline1_);
  // checkMissing(outline2)
  SEXP Rsh_Fir_array_args302[1];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_outline2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args302, Rsh_Fir_param_types_empty()));
  // horizontal1 = ld horizontal
  Rsh_Fir_reg_horizontal1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // horizontal2 = force? horizontal1
  Rsh_Fir_reg_horizontal2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_horizontal1_);
  // checkMissing(horizontal2)
  SEXP Rsh_Fir_array_args303[1];
  Rsh_Fir_array_args303[0] = Rsh_Fir_reg_horizontal2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args303, Rsh_Fir_param_types_empty()));
  // add3 = ld add
  Rsh_Fir_reg_add3_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // add4 = force? add3
  Rsh_Fir_reg_add4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_add3_);
  // checkMissing(add4)
  SEXP Rsh_Fir_array_args304[1];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_add4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args304, Rsh_Fir_param_types_empty()));
  // ann1 = ld ann
  Rsh_Fir_reg_ann1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // ann2 = force? ann1
  Rsh_Fir_reg_ann2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ann1_);
  // checkMissing(ann2)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_ann2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args305, Rsh_Fir_param_types_empty()));
  // at1 = ld at
  Rsh_Fir_reg_at1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // at2 = force? at1
  Rsh_Fir_reg_at2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at1_);
  // checkMissing(at2)
  SEXP Rsh_Fir_array_args306[1];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_at2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args306, Rsh_Fir_param_types_empty()));
  // list4 = ldf list in base
  Rsh_Fir_reg_list4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r159 = dyn list4(z1, notch2, width2, varwidth2, log2, border2, pars6, outline2, horizontal2, add4, ann2, at2)
  SEXP Rsh_Fir_array_args307[12];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_array_args307[1] = Rsh_Fir_reg_notch2_;
  Rsh_Fir_array_args307[2] = Rsh_Fir_reg_width2_;
  Rsh_Fir_array_args307[3] = Rsh_Fir_reg_varwidth2_;
  Rsh_Fir_array_args307[4] = Rsh_Fir_reg_log2_;
  Rsh_Fir_array_args307[5] = Rsh_Fir_reg_border2_;
  Rsh_Fir_array_args307[6] = Rsh_Fir_reg_pars6_;
  Rsh_Fir_array_args307[7] = Rsh_Fir_reg_outline2_;
  Rsh_Fir_array_args307[8] = Rsh_Fir_reg_horizontal2_;
  Rsh_Fir_array_args307[9] = Rsh_Fir_reg_add4_;
  Rsh_Fir_array_args307[10] = Rsh_Fir_reg_ann2_;
  Rsh_Fir_array_args307[11] = Rsh_Fir_reg_at2_;
  SEXP Rsh_Fir_array_arg_names76[12];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_array_arg_names76[2] = R_MissingArg;
  Rsh_Fir_array_arg_names76[3] = R_MissingArg;
  Rsh_Fir_array_arg_names76[4] = R_MissingArg;
  Rsh_Fir_array_arg_names76[5] = R_MissingArg;
  Rsh_Fir_array_arg_names76[6] = R_MissingArg;
  Rsh_Fir_array_arg_names76[7] = R_MissingArg;
  Rsh_Fir_array_arg_names76[8] = R_MissingArg;
  Rsh_Fir_array_arg_names76[9] = R_MissingArg;
  Rsh_Fir_array_arg_names76[10] = R_MissingArg;
  Rsh_Fir_array_arg_names76[11] = R_MissingArg;
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list4_, 12, Rsh_Fir_array_args307, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L1(r159)
  // L1(r159)
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r159_;
  goto L1_;

L6_:;
  // r157 = dyn base30[, notch, width, varwidth, log, border, pars, outline, horizontal, add, ann, at](<sym z>, <sym notch>, <sym width>, <sym varwidth>, <sym log>, <sym border>, <sym pars>, <sym outline>, <sym horizontal>, <sym add>, <sym ann>, <sym at>)
  SEXP Rsh_Fir_array_args308[12];
  Rsh_Fir_array_args308[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args308[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args308[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args308[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args308[4] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args308[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args308[6] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args308[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args308[8] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args308[9] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args308[10] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args308[11] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names77[12];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names77[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names77[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names77[4] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names77[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names77[6] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names77[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names77[8] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names77[9] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names77[10] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names77[11] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base30_, 12, Rsh_Fir_array_args308, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L1(r157)
  // L1(r157)
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r157_;
  goto L1_;

L7_:;
  // dr32 = tryDispatchBuiltin.1("[", args15)
  SEXP Rsh_Fir_array_args309[2];
  Rsh_Fir_array_args309[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args309[1] = Rsh_Fir_reg_args15_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args309);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args310[1];
  Rsh_Fir_array_args310[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args310, Rsh_Fir_param_types_empty());
  // if dc16 then L9() else L8(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L9()
    goto L9_;
  } else {
  // L8(dr32)
    Rsh_Fir_reg_args17_ = Rsh_Fir_reg_dr32_;
    goto L8_;
  }

L8_:;
  // namedargs2 = ld namedargs
  Rsh_Fir_reg_namedargs2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // namedargs3 = force? namedargs2
  Rsh_Fir_reg_namedargs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_namedargs2_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r160 = dyn __3(args17, namedargs3)
  SEXP Rsh_Fir_array_args311[2];
  Rsh_Fir_array_args311[0] = Rsh_Fir_reg_args17_;
  Rsh_Fir_array_args311[1] = Rsh_Fir_reg_namedargs3_;
  SEXP Rsh_Fir_array_arg_names78[2];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args311, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L2(r160)
  // L2(r160)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r160_;
  goto L2_;

L9_:;
  // dx40 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args312[1];
  Rsh_Fir_array_args312[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args312, Rsh_Fir_param_types_empty());
  // goto L2(dx40)
  // L2(dx40)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L2_;
}
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3708401697 dynamic dispatch ([e])

  return Rsh_Fir_user_version_inner3708401697_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3708401697 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3708401697/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_e;  // e
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_e2_;  // e2
  SEXP Rsh_Fir_reg_unclass1;  // unclass
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_c2_1;  // c2
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_c5_1;  // c5
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_names1;  // names
  SEXP Rsh_Fir_reg_sym3_1;  // sym3
  SEXP Rsh_Fir_reg_base3_1;  // base3
  SEXP Rsh_Fir_reg_guard3_1;  // guard3
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_e3_;  // e3
  SEXP Rsh_Fir_reg_e4_;  // e4
  SEXP Rsh_Fir_reg_attributes1;  // attributes
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r12_1;  // r12
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_c6_1;  // c6
  SEXP Rsh_Fir_reg_c7_1;  // c7

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 109), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // sym = ldf `is.numeric`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 110), RHO);
  // base = ldf `is.numeric` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 110), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args319[2];
  Rsh_Fir_array_args319[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args319[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args319);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args320[1];
  Rsh_Fir_array_args320[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args320, Rsh_Fir_param_types_empty());
  // if c then L11() else L2(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L11()
    goto L11_;
  } else {
  // L2(c)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1;
    goto L2_;
  }

L1_:;
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 110), RHO);
  // r5 = dyn is_numeric(r3)
  SEXP Rsh_Fir_array_args321[1];
  Rsh_Fir_array_args321[0] = Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_array_arg_names82[1];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args321, Rsh_Fir_array_arg_names82, CCP, RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c2
  return Rsh_Fir_reg_c2_1;

L3_:;
  // c6 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args322[1];
  Rsh_Fir_array_args322[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c6_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args322, Rsh_Fir_param_types_empty());
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args323[2];
  Rsh_Fir_array_args323[0] = Rsh_Fir_reg_c5_1;
  Rsh_Fir_array_args323[1] = Rsh_Fir_reg_c6_1;
  Rsh_Fir_reg_c7_1 = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args323, Rsh_Fir_param_types_empty());
  // goto L2(c7)
  // L2(c7)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c7_1;
  goto L2_;

L4_:;
  // sym1 = ldf unclass
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base1 = ldf unclass in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args324[2];
  Rsh_Fir_array_args324[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args324[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args324);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L5_:;
  // r = dyn base(<lang unclass(e)>)
  SEXP Rsh_Fir_array_args325[1];
  Rsh_Fir_array_args325[0] = Rsh_const(CCP, 111);
  SEXP Rsh_Fir_array_arg_names83[1];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args325, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2;
  goto L0_;

L6_:;
  // e1 = ld e
  Rsh_Fir_reg_e1_ = Rsh_Fir_load(Rsh_const(CCP, 109), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r2 = dyn base1(<sym e>)
  SEXP Rsh_Fir_array_args326[1];
  Rsh_Fir_array_args326[0] = Rsh_const(CCP, 109);
  SEXP Rsh_Fir_array_arg_names84[1];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args326, Rsh_Fir_array_arg_names84, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L1_;

D0_:;
  // deopt 4 [e1]
  SEXP Rsh_Fir_array_deopt_stack90[1];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_e1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L8_:;
  // e2 = force? e1
  Rsh_Fir_reg_e2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e1_);
  // checkMissing(e2)
  SEXP Rsh_Fir_array_args327[1];
  Rsh_Fir_array_args327[0] = Rsh_Fir_reg_e2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args327, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r4 = dyn unclass(e2)
  SEXP Rsh_Fir_array_args328[1];
  Rsh_Fir_array_args328[0] = Rsh_Fir_reg_e2_;
  SEXP Rsh_Fir_array_arg_names85[1];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass1, 1, Rsh_Fir_array_args328, Rsh_Fir_array_arg_names85, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack91[1];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_1;
  goto L1_;

D2_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack92[1];
  Rsh_Fir_array_deopt_stack92[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack92, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L0_;

L11_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 112), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 112), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args329[2];
  Rsh_Fir_array_args329[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args329[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args329);
  // if guard2 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // names = ldf names
  Rsh_Fir_reg_names1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L13_:;
  // r6 = dyn base2(<lang names(attributes(e))>, "class")
  SEXP Rsh_Fir_array_args330[2];
  Rsh_Fir_array_args330[0] = Rsh_const(CCP, 113);
  Rsh_Fir_array_args330[1] = Rsh_const(CCP, 114);
  SEXP Rsh_Fir_array_arg_names86[2];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_array_arg_names86[1] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 2, Rsh_Fir_array_args330, Rsh_Fir_array_arg_names86, CCP, RHO);
  // goto L3(c, r6)
  // L3(c, r6)
  Rsh_Fir_reg_c5_1 = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_1;
  goto L3_;

D3_:;
  // deopt 13 [c]
  SEXP Rsh_Fir_array_deopt_stack93[1];
  Rsh_Fir_array_deopt_stack93[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack93, CCP, RHO);
  return R_NilValue;

L14_:;
  // p = prom<V +>{
  //   sym3 = ldf attributes;
  //   base3 = ldf attributes in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r9):
  //   return r9;
  // L1():
  //   e3 = ld e;
  //   e4 = force? e3;
  //   checkMissing(e4);
  //   attributes = ldf attributes in base;
  //   r10 = dyn attributes(e4);
  //   goto L0(r10);
  // L2():
  //   r8 = dyn base3(<sym e>);
  //   goto L0(r8);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3708401697_, CCP, RHO);
  // r12 = dyn names(p)
  SEXP Rsh_Fir_array_args335[1];
  Rsh_Fir_array_args335[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names89[1];
  Rsh_Fir_array_arg_names89[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1, 1, Rsh_Fir_array_args335, Rsh_Fir_array_arg_names89, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 15 [c, r12]
  SEXP Rsh_Fir_array_deopt_stack94[2];
  Rsh_Fir_array_deopt_stack94[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack94[1] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack94, CCP, RHO);
  return R_NilValue;

L15_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 112), RHO);
  // r13 = dyn identical(r12, "class", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args336[9];
  Rsh_Fir_array_args336[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_array_args336[1] = Rsh_const(CCP, 114);
  Rsh_Fir_array_args336[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args336[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args336[4] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args336[5] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args336[6] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args336[7] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args336[8] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names90[9];
  Rsh_Fir_array_arg_names90[0] = R_MissingArg;
  Rsh_Fir_array_arg_names90[1] = R_MissingArg;
  Rsh_Fir_array_arg_names90[2] = R_MissingArg;
  Rsh_Fir_array_arg_names90[3] = R_MissingArg;
  Rsh_Fir_array_arg_names90[4] = R_MissingArg;
  Rsh_Fir_array_arg_names90[5] = R_MissingArg;
  Rsh_Fir_array_arg_names90[6] = R_MissingArg;
  Rsh_Fir_array_arg_names90[7] = R_MissingArg;
  Rsh_Fir_array_arg_names90[8] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args336, Rsh_Fir_array_arg_names90, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 25 [c, r13]
  SEXP Rsh_Fir_array_deopt_stack95[2];
  Rsh_Fir_array_deopt_stack95[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack95[1] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack95, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L3(c, r13)
  // L3(c, r13)
  Rsh_Fir_reg_c5_1 = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r13_1;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner3708401697_(SEXP CCP, SEXP RHO) {
  // sym3 = ldf attributes
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // base3 = ldf attributes in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args331[2];
  Rsh_Fir_array_args331[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args331[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args331);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r9
  return Rsh_Fir_reg_r9_1;

L1_:;
  // e3 = ld e
  Rsh_Fir_reg_e3_ = Rsh_Fir_load(Rsh_const(CCP, 109), RHO);
  // e4 = force? e3
  Rsh_Fir_reg_e4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e3_);
  // checkMissing(e4)
  SEXP Rsh_Fir_array_args332[1];
  Rsh_Fir_array_args332[0] = Rsh_Fir_reg_e4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args332, Rsh_Fir_param_types_empty()));
  // attributes = ldf attributes in base
  Rsh_Fir_reg_attributes1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r10 = dyn attributes(e4)
  SEXP Rsh_Fir_array_args333[1];
  Rsh_Fir_array_args333[0] = Rsh_Fir_reg_e4_;
  SEXP Rsh_Fir_array_arg_names87[1];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes1, 1, Rsh_Fir_array_args333, Rsh_Fir_array_arg_names87, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r10_;
  goto L0_;

L2_:;
  // r8 = dyn base3(<sym e>)
  SEXP Rsh_Fir_array_args334[1];
  Rsh_Fir_array_args334[0] = Rsh_const(CCP, 109);
  SEXP Rsh_Fir_array_arg_names88[1];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args334, Rsh_Fir_array_arg_names88, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
