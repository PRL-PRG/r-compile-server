#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2751153939_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2751153939_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2751153939_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2751153939_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2751153939_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2751153939_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2751153939_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner2751153939
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2751153939_, RHO, CCP);
  // st `languageEl<-` = r
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
SEXP Rsh_Fir_user_function_inner2751153939_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2751153939 dynamic dispatch ([object, which, value])

  return Rsh_Fir_user_version_inner2751153939_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2751153939_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2751153939 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2751153939/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_as_list;  // as_list
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_data1_;  // data1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_typeof;  // typeof
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_type;  // type
  SEXP Rsh_Fir_reg_type1_;  // type1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_environment;  // environment
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_which1_;  // which1
  SEXP Rsh_Fir_reg_which2_;  // which2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_which3_;  // which3
  SEXP Rsh_Fir_reg_which4_;  // which4
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_data2_;  // data2
  SEXP Rsh_Fir_reg_data3_;  // data3
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_data4_;  // data4
  SEXP Rsh_Fir_reg_data5_;  // data5
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_data7_;  // data7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_data8_;  // data8
  SEXP Rsh_Fir_reg_data9_;  // data9
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_data11_;  // data11
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_which5_;  // which5
  SEXP Rsh_Fir_reg_which6_;  // which6
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_body;  // body
  SEXP Rsh_Fir_reg_body1_;  // body1
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_body3_;  // body3
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_body5_;  // body5
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_body6_;  // body6
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_value10_;  // value10
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_value12_;  // value12
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_which7_;  // which7
  SEXP Rsh_Fir_reg_which8_;  // which8
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_which9_;  // which9
  SEXP Rsh_Fir_reg_which10_;  // which10
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_which11_;  // which11
  SEXP Rsh_Fir_reg_which12_;  // which12
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_value13_;  // value13
  SEXP Rsh_Fir_reg_value14_;  // value14
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_value16_;  // value16
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_value18_;  // value18
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_which13_;  // which13
  SEXP Rsh_Fir_reg_which14_;  // which14
  SEXP Rsh_Fir_reg_____3_;  // ____3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_as_function;  // as_function
  SEXP Rsh_Fir_reg_data12_;  // data12
  SEXP Rsh_Fir_reg_data13_;  // data13
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_ev;  // ev
  SEXP Rsh_Fir_reg_ev1_;  // ev1
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_environment__;  // environment__
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_type2_;  // type2
  SEXP Rsh_Fir_reg_type3_;  // type3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_which15_;  // which15
  SEXP Rsh_Fir_reg_which16_;  // which16
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_value19_;  // value19
  SEXP Rsh_Fir_reg_value20_;  // value20
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_value22_;  // value22
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_value24_;  // value24
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_which17_;  // which17
  SEXP Rsh_Fir_reg_which18_;  // which18
  SEXP Rsh_Fir_reg_____4_;  // ____4
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_isGrammarSymbol;  // isGrammarSymbol
  SEXP Rsh_Fir_reg_data14_;  // data14
  SEXP Rsh_Fir_reg_data15_;  // data15
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_data17_;  // data17
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_value26_;  // value26
  SEXP Rsh_Fir_reg_value27_;  // value27
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_value29_;  // value29
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_value31_;  // value31
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_which19_;  // which19
  SEXP Rsh_Fir_reg_which20_;  // which20
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_____5_;  // ____5
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_which21_;  // which21
  SEXP Rsh_Fir_reg_which22_;  // which22
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_value32_;  // value32
  SEXP Rsh_Fir_reg_value33_;  // value33
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_as_symbol;  // as_symbol
  SEXP Rsh_Fir_reg_value34_;  // value34
  SEXP Rsh_Fir_reg_value35_;  // value35
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_value36_;  // value36
  SEXP Rsh_Fir_reg_value37_;  // value37
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_value39_;  // value39
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_value41_;  // value41
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_which23_;  // which23
  SEXP Rsh_Fir_reg_which24_;  // which24
  SEXP Rsh_Fir_reg_____6_;  // ____6
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_data18_;  // data18
  SEXP Rsh_Fir_reg_data19_;  // data19
  SEXP Rsh_Fir_reg_as_call;  // as_call
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_value42_;  // value42
  SEXP Rsh_Fir_reg_value43_;  // value43
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_value45_;  // value45
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_which25_;  // which25
  SEXP Rsh_Fir_reg_which26_;  // which26
  SEXP Rsh_Fir_reg_____7_;  // ____7
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_which = PARAMS[1];
  Rsh_Fir_reg_value = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st which = which
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_which, RHO);
  (void)(Rsh_Fir_reg_which);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // as_list = ldf `as.list`
  Rsh_Fir_reg_as_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L35() else D0()
  // L35()
  goto L35_;

L0_:;
  // st n = r3
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym1 = ldf typeof
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf typeof in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard1 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L1_:;
  // st type = r6
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // type = ld type
  Rsh_Fir_reg_type = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L45() else D6()
  // L45()
  goto L45_;

L2_:;
  // type2 = ld type
  Rsh_Fir_reg_type2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L113() else D38()
  // L113()
  goto L113_;

L3_:;
  // c2 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L52() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L52()
    goto L52_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // which9 = ld which
  Rsh_Fir_reg_which9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L92() else D25()
  // L92()
  goto L92_;

L5_:;
  // c3 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c3 then L64() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L64()
    goto L64_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r21 = dyn is_na(r16)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L63() else D14()
  // L63()
  goto L63_;

L7_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r20 = dyn match(which4, r18, NA_INT, NULL)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_which4_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L62() else D13()
  // L62()
  goto L62_;

L8_:;
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L86() else D23()
  // L86()
  goto L86_;

L9_:;
  // st body = dx1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // data8 = ld data
  Rsh_Fir_reg_data8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L70() else D17()
  // L70()
  goto L70_;

L10_:;
  // st data = dx3
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L75() else D19()
  // L75()
  goto L75_;

L11_:;
  // st data = dx5
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // body = ld body
  Rsh_Fir_reg_body = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L80() else D21()
  // L80()
  goto L80_;

L12_:;
  // st data = dx7
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L13(body5)
  // L13(body5)
  Rsh_Fir_reg_body6_ = Rsh_Fir_reg_body5_;
  goto L13_;

L13_:;
  // goto L15()
  // L15()
  goto L15_;

L14_:;
  // st data = dx9
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L13(value12)
  // L13(value12)
  Rsh_Fir_reg_body6_ = Rsh_Fir_reg_value12_;
  goto L13_;

L15_:;
  // as_function = ldf `as.function`
  Rsh_Fir_reg_as_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L106() else D32()
  // L106()
  goto L106_;

L16_:;
  // c15 = `as.logical`(c10)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c15 then L97() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L97()
    goto L97_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // value13 = ld value
  Rsh_Fir_reg_value13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L101() else D30()
  // L101()
  goto L101_;

L19_:;
  // st data = dx11
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L15()
  // L15()
  goto L15_;

L20_:;
  // value42 = ld value
  Rsh_Fir_reg_value42_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L157() else D55()
  // L157()
  goto L157_;

L21_:;
  // c19 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c19 then L118() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L118()
    goto L118_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // isGrammarSymbol = ldf isGrammarSymbol
  Rsh_Fir_reg_isGrammarSymbol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L125() else D42()
  // L125()
  goto L125_;

L23_:;
  // st data = dx13
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L24()
  // L24()
  goto L24_;

L24_:;
  // sym9 = ldf `as.call`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base9 = ldf `as.call` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard9 then L152() else L153()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L152()
    goto L152_;
  } else {
  // L153()
    goto L153_;
  }

L25_:;
  // sym7 = ldf identical
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base7 = ldf identical in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard7 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L26_:;
  // st data = dx17
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // goto L24()
  // L24()
  goto L24_;

L27_:;
  // c24 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c24 then L138() else L28(c24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L138()
    goto L138_;
  } else {
  // L28(c24)
    Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c24_;
    goto L28_;
  }

L28_:;
  // c34 = `as.logical`(c26)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c34 then L143() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L143()
    goto L143_;
  } else {
  // L30()
    goto L30_;
  }

L29_:;
  // c31 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c32 = `&&`(c29, c31)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c29_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L28(c32)
  // L28(c32)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c32_;
  goto L28_;

L30_:;
  // goto L31()
  // L31()
  goto L31_;

L31_:;
  // value36 = ld value
  Rsh_Fir_reg_value36_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L147() else D51()
  // L147()
  goto L147_;

L32_:;
  // st data = dx19
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // goto L24()
  // L24()
  goto L24_;

L33_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r56
  return Rsh_Fir_reg_r56_;

L34_:;
  // st object = dx21
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L162() else D57()
  // L162()
  goto L162_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p = prom<V +>{
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   return object2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2751153939_, CCP, RHO);
  // r1 = dyn as_list(p)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L36() else D1()
  // L36()
  goto L36_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L36_:;
  // st data = r1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // data = ld data
  Rsh_Fir_reg_data = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L39() else D2()
  // L39()
  goto L39_;

L38_:;
  // r2 = dyn base(<sym data>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 7 [data]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_data;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L39_:;
  // data1 = force? data
  Rsh_Fir_reg_data1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data);
  // checkMissing(data1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_data1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r4 = dyn length(data1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_data1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L40() else D3()
  // L40()
  goto L40_;

D3_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L41_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L43() else D4()
  // L43()
  goto L43_;

L42_:;
  // r5 = dyn base1(<sym object>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L1_;

D4_:;
  // deopt 14 [object3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L43_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // typeof = ldf typeof in base
  Rsh_Fir_reg_typeof = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r7 = dyn typeof(object4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_object4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_typeof, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L44() else D5()
  // L44()
  goto L44_;

D5_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L1_;

D6_:;
  // deopt 19 [type]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_type;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L45_:;
  // type1 = force? type
  Rsh_Fir_reg_type1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type);
  // checkMissing(type1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_type1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // r8 = `==`(type1, "closure")
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_type1_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r8)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c then L46() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L46()
    goto L46_;
  } else {
  // L2()
    goto L2_;
  }

L46_:;
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L47() else D7()
  // L47()
  goto L47_;

D7_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p1 = prom<V +>{
  //   object5 = ld object;
  //   object6 = force? object5;
  //   checkMissing(object6);
  //   return object6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2751153939_1, CCP, RHO);
  // r10 = dyn environment(p1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L48() else D8()
  // L48()
  goto L48_;

D8_:;
  // deopt 26 [r10]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L48_:;
  // st ev = r10
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym2 = ldf `is.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base2 = ldf `is.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L49_:;
  // which1 = ld which
  Rsh_Fir_reg_which1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L51() else D9()
  // L51()
  goto L51_;

L50_:;
  // r11 = dyn base2(<sym which>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L3_;

D9_:;
  // deopt 29 [which1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_which1_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L51_:;
  // which2 = force? which1
  Rsh_Fir_reg_which2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which1_);
  // checkMissing(which2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_which2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c1 = `is.character`(which2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_which2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L3(c1)
  // L3(c1)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_c1_;
  goto L3_;

L52_:;
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard3 then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L53_:;
  // sym4 = ldf match
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base4 = ldf match in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard4 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L54_:;
  // r13 = dyn base3(<lang match(which, names(data))>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r13)
  // L5(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L5_;

L55_:;
  // which3 = ld which
  Rsh_Fir_reg_which3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L57() else D10()
  // L57()
  goto L57_;

L56_:;
  // r15 = dyn base4(<sym which>, <lang names(data)>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r15)
  // L6(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L6_;

D10_:;
  // deopt 36 [which3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_which3_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L57_:;
  // which4 = force? which3
  Rsh_Fir_reg_which4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which3_);
  // checkMissing(which4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_which4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // sym5 = ldf names
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base5 = ldf names in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard5 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L58_:;
  // data2 = ld data
  Rsh_Fir_reg_data2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L60() else D11()
  // L60()
  goto L60_;

L59_:;
  // r17 = dyn base5(<sym data>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L7_;

D11_:;
  // deopt 40 [data2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_data2_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L60_:;
  // data3 = force? data2
  Rsh_Fir_reg_data3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data2_);
  // checkMissing(data3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_data3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r19 = dyn names(data3)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_data3_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L61() else D12()
  // L61()
  goto L61_;

D12_:;
  // deopt 43 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L7(r19)
  // L7(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L7_;

D13_:;
  // deopt 47 [r20]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L6(r20)
  // L6(r20)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r20_;
  goto L6_;

D14_:;
  // deopt 49 [r21]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L5(r21)
  // L5(r21)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r21_;
  goto L5_;

L64_:;
  // data4 = ld data
  Rsh_Fir_reg_data4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L65() else D15()
  // L65()
  goto L65_;

D15_:;
  // deopt 50 [data4]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_data4_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L65_:;
  // data5 = force? data4
  Rsh_Fir_reg_data5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data4_);
  // checkMissing(data5)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_data5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(data5)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_data5_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c4 then L66() else L67(data5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L66()
    goto L66_;
  } else {
  // L67(data5)
    Rsh_Fir_reg_data7_ = Rsh_Fir_reg_data5_;
    goto L67_;
  }

L66_:;
  // dr = tryDispatchBuiltin.1("[[", data5)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_data5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc then L68() else L67(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L68()
    goto L68_;
  } else {
  // L67(dr)
    Rsh_Fir_reg_data7_ = Rsh_Fir_reg_dr;
    goto L67_;
  }

L67_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L69() else D16()
  // L69()
  goto L69_;

L68_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L9(dx)
  // L9(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L9_;

D16_:;
  // deopt 52 [data7, n]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_data7_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L69_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r22 = dyn __(data7, n1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_data7_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L9(r22)
  // L9(r22)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r22_;
  goto L9_;

D17_:;
  // deopt 56 [data8]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_data8_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L70_:;
  // data9 = force? data8
  Rsh_Fir_reg_data9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data8_);
  // checkMissing(data9)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_data9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(data9)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_data9_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c5 then L71() else L72(data9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L71()
    goto L71_;
  } else {
  // L72(data9)
    Rsh_Fir_reg_data11_ = Rsh_Fir_reg_data9_;
    goto L72_;
  }

L71_:;
  // dr2 = tryDispatchBuiltin.1("[", data9)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_data9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc1 then L73() else L72(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L73()
    goto L73_;
  } else {
  // L72(dr2)
    Rsh_Fir_reg_data11_ = Rsh_Fir_reg_dr2_;
    goto L72_;
  }

L72_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L74() else D18()
  // L74()
  goto L74_;

L73_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L10(dx2)
  // L10(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L10_;

D18_:;
  // deopt 58 [data11, n2]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_data11_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L74_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // r23 = `-`(<missing>, n3)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r24 = dyn __1(data11, r23)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_data11_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(r24)
  // L10(r24)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r24_;
  goto L10_;

D19_:;
  // deopt 63 [value1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L75_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // l = ld data
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c6 = `is.object`(l)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c6 then L76() else L77(value2, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L76()
    goto L76_;
  } else {
  // L77(value2, l)
    Rsh_Fir_reg_value4_ = Rsh_Fir_reg_value2_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L77_;
  }

L76_:;
  // dr4 = tryDispatchBuiltin.0("[[<-", l, value2)
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args56[2] = Rsh_Fir_reg_value2_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args56);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc2 then L78() else L77(value2, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L78()
    goto L78_;
  } else {
  // L77(value2, dr4)
    Rsh_Fir_reg_value4_ = Rsh_Fir_reg_value2_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L77_;
  }

L77_:;
  // which5 = ld which
  Rsh_Fir_reg_which5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L79() else D20()
  // L79()
  goto L79_;

L78_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L11(dx4)
  // L11(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L11_;

D20_:;
  // deopt 66 [value4, l2, value2, which5]
  SEXP Rsh_Fir_array_deopt_stack18[4];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_value4_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_which5_;
  Rsh_Fir_deopt(66, 4, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L79_:;
  // which6 = force? which5
  Rsh_Fir_reg_which6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which5_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r25 = dyn ____(l2, value2, which6)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_which6_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r25)
  // L11(r25)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r25_;
  goto L11_;

D21_:;
  // deopt 70 [body]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_body;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L80_:;
  // body1 = force? body
  Rsh_Fir_reg_body1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_body);
  // checkMissing(body1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_body1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // l3 = ld data
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c7 = `is.object`(l3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c7 then L81() else L82(body1, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L81()
    goto L81_;
  } else {
  // L82(body1, l3)
    Rsh_Fir_reg_body3_ = Rsh_Fir_reg_body1_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L82_;
  }

L81_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l3, body1)
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args62[2] = Rsh_Fir_reg_body1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args62);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc3 then L83() else L82(body1, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L83()
    goto L83_;
  } else {
  // L82(body1, dr6)
    Rsh_Fir_reg_body3_ = Rsh_Fir_reg_body1_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr6_;
    goto L82_;
  }

L82_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L84() else D22()
  // L84()
  goto L84_;

L83_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L12(body1, dx6)
  // L12(body1, dx6)
  Rsh_Fir_reg_body5_ = Rsh_Fir_reg_body1_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L12_;

D22_:;
  // deopt 73 [body3, l5, body1, n4]
  SEXP Rsh_Fir_array_deopt_stack20[4];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_body3_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_body1_;
  Rsh_Fir_array_deopt_stack20[3] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(73, 4, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L84_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r26 = `+`(n5, 1.0)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r27 = dyn ____1(l5, body1, r26)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_body1_;
  Rsh_Fir_array_args67[2] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L12(body3, r27)
  // L12(body3, r27)
  Rsh_Fir_reg_body5_ = Rsh_Fir_reg_body3_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r27_;
  goto L12_;

D23_:;
  // deopt 79 [value7]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_value7_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L86_:;
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // l6 = ld data
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c8 = `is.object`(l6)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c8 then L87() else L88(value8, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L87()
    goto L87_;
  } else {
  // L88(value8, l6)
    Rsh_Fir_reg_value10_ = Rsh_Fir_reg_value8_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L88_;
  }

L87_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l6, value8)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args70[2] = Rsh_Fir_reg_value8_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args70);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc4 then L89() else L88(value8, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L89()
    goto L89_;
  } else {
  // L88(value8, dr8)
    Rsh_Fir_reg_value10_ = Rsh_Fir_reg_value8_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr8_;
    goto L88_;
  }

L88_:;
  // which7 = ld which
  Rsh_Fir_reg_which7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L90() else D24()
  // L90()
  goto L90_;

L89_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L14(value8, dx8)
  // L14(value8, dx8)
  Rsh_Fir_reg_value12_ = Rsh_Fir_reg_value8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L14_;

D24_:;
  // deopt 82 [value10, l8, value8, which7]
  SEXP Rsh_Fir_array_deopt_stack22[4];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_value10_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_value8_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_which7_;
  Rsh_Fir_deopt(82, 4, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L90_:;
  // which8 = force? which7
  Rsh_Fir_reg_which8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which7_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r28 = dyn ____2(l8, value8, which8)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_value8_;
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_which8_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(value10, r28)
  // L14(value10, r28)
  Rsh_Fir_reg_value12_ = Rsh_Fir_reg_value10_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r28_;
  goto L14_;

D25_:;
  // deopt 86 [which9]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_which9_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L92_:;
  // which10 = force? which9
  Rsh_Fir_reg_which10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which9_);
  // checkMissing(which10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_which10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r29 = `<`(which10, 1.0)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_which10_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c9 then L16(c9) else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L16(c9)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c9_;
    goto L16_;
  } else {
  // L93()
    goto L93_;
  }

L93_:;
  // which11 = ld which
  Rsh_Fir_reg_which11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L94() else D26()
  // L94()
  goto L94_;

D26_:;
  // deopt 90 [c9, which11]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_which11_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L94_:;
  // which12 = force? which11
  Rsh_Fir_reg_which12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which11_);
  // checkMissing(which12)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_which12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L95() else D27()
  // L95()
  goto L95_;

D27_:;
  // deopt 91 [c9, which12, n6]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_which12_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(91, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L95_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // r30 = `>`(which12, n7)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_which12_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // c13 = `||`(c9, c12)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L16(c13)
  // L16(c13)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c13_;
  goto L16_;

L97_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L98() else D28()
  // L98()
  goto L98_;

D28_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

L98_:;
  // r31 = dyn stop("invalid index for function argument")
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L99() else D29()
  // L99()
  goto L99_;

D29_:;
  // deopt 98 [r31]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L99_:;
  // goto L18()
  // L18()
  goto L18_;

D30_:;
  // deopt 101 [value13]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_value13_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L101_:;
  // value14 = force? value13
  Rsh_Fir_reg_value14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value13_);
  // checkMissing(value14)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_value14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // l9 = ld data
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c16 = `is.object`(l9)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c16 then L102() else L103(value14, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L102()
    goto L102_;
  } else {
  // L103(value14, l9)
    Rsh_Fir_reg_value16_ = Rsh_Fir_reg_value14_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L103_;
  }

L102_:;
  // dr10 = tryDispatchBuiltin.0("[[<-", l9, value14)
  SEXP Rsh_Fir_array_args85[3];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args85[2] = Rsh_Fir_reg_value14_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args85);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc5 then L104() else L103(value14, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L104()
    goto L104_;
  } else {
  // L103(value14, dr10)
    Rsh_Fir_reg_value16_ = Rsh_Fir_reg_value14_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr10_;
    goto L103_;
  }

L103_:;
  // which13 = ld which
  Rsh_Fir_reg_which13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L105() else D31()
  // L105()
  goto L105_;

L104_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L19(value14, dx10)
  // L19(value14, dx10)
  Rsh_Fir_reg_value18_ = Rsh_Fir_reg_value14_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L19_;

D31_:;
  // deopt 104 [value16, l11, value14, which13]
  SEXP Rsh_Fir_array_deopt_stack28[4];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_value16_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_value14_;
  Rsh_Fir_array_deopt_stack28[3] = Rsh_Fir_reg_which13_;
  Rsh_Fir_deopt(104, 4, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L105_:;
  // which14 = force? which13
  Rsh_Fir_reg_which14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which13_);
  // ____3 = ldf `[[<-` in base
  Rsh_Fir_reg_____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r33 = dyn ____3(l11, value14, which14)
  SEXP Rsh_Fir_array_args88[3];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_value14_;
  Rsh_Fir_array_args88[2] = Rsh_Fir_reg_which14_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____3_, 3, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L19(value16, r33)
  // L19(value16, r33)
  Rsh_Fir_reg_value18_ = Rsh_Fir_reg_value16_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r33_;
  goto L19_;

D32_:;
  // deopt 109 []
  Rsh_Fir_deopt(109, 0, NULL, CCP, RHO);
  return R_NilValue;

L106_:;
  // p2 = prom<V +>{
  //   data12 = ld data;
  //   data13 = force? data12;
  //   checkMissing(data13);
  //   return data13;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2751153939_2, CCP, RHO);
  // r35 = dyn as_function(p2)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_function, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L107() else D33()
  // L107()
  goto L107_;

D33_:;
  // deopt 111 [r35]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L107_:;
  // st object = r35
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // ev = ld ev
  Rsh_Fir_reg_ev = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L108() else D34()
  // L108()
  goto L108_;

D34_:;
  // deopt 113 [ev]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_ev;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L108_:;
  // ev1 = force? ev
  Rsh_Fir_reg_ev1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ev);
  // checkMissing(ev1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_ev1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // l12 = ld object
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // environment__ = ldf `environment<-`
  Rsh_Fir_reg_environment__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L109() else D35()
  // L109()
  goto L109_;

D35_:;
  // deopt 116 [ev1, l12, ev1]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_ev1_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_ev1_;
  Rsh_Fir_deopt(116, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L109_:;
  // r36 = dyn environment__(l12, NULL, ev1)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args92[2] = Rsh_Fir_reg_ev1_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment__, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L110() else D36()
  // L110()
  goto L110_;

D36_:;
  // deopt 118 [ev1, r36]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_ev1_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(118, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L110_:;
  // st object = r36
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L111() else D37()
  // L111()
  goto L111_;

D37_:;
  // deopt 120 [object7]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_object7_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L111_:;
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return object8
  return Rsh_Fir_reg_object8_;

D38_:;
  // deopt 122 [type2]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_type2_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L113_:;
  // type3 = force? type2
  Rsh_Fir_reg_type3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type2_);
  // checkMissing(type3)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_type3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // r37 = `==`(type3, "language")
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_type3_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if c17 then L114() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L114()
    goto L114_;
  } else {
  // L20()
    goto L20_;
  }

L114_:;
  // sym6 = ldf `is.character`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base6 = ldf `is.character` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard6 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

L115_:;
  // which15 = ld which
  Rsh_Fir_reg_which15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L117() else D39()
  // L117()
  goto L117_;

L116_:;
  // r38 = dyn base6(<sym which>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L21(r38)
  // L21(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L21_;

D39_:;
  // deopt 127 [which15]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_which15_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L117_:;
  // which16 = force? which15
  Rsh_Fir_reg_which16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which15_);
  // checkMissing(which16)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_which16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // c18 = `is.character`(which16)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_which16_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L21(c18)
  // L21(c18)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_c18_;
  goto L21_;

L118_:;
  // value19 = ld value
  Rsh_Fir_reg_value19_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L119() else D40()
  // L119()
  goto L119_;

D40_:;
  // deopt 130 [value19]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_value19_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L119_:;
  // value20 = force? value19
  Rsh_Fir_reg_value20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value19_);
  // checkMissing(value20)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_value20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // l13 = ld data
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c20 = `is.object`(l13)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c20 then L120() else L121(value20, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L120()
    goto L120_;
  } else {
  // L121(value20, l13)
    Rsh_Fir_reg_value22_ = Rsh_Fir_reg_value20_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    goto L121_;
  }

L120_:;
  // dr12 = tryDispatchBuiltin.0("[[<-", l13, value20)
  SEXP Rsh_Fir_array_args103[3];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_value20_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args103);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc6 then L122() else L121(value20, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L122()
    goto L122_;
  } else {
  // L121(value20, dr12)
    Rsh_Fir_reg_value22_ = Rsh_Fir_reg_value20_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr12_;
    goto L121_;
  }

L121_:;
  // which17 = ld which
  Rsh_Fir_reg_which17_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L123() else D41()
  // L123()
  goto L123_;

L122_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L23(value20, dx12)
  // L23(value20, dx12)
  Rsh_Fir_reg_value24_ = Rsh_Fir_reg_value20_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L23_;

D41_:;
  // deopt 133 [value22, l15, value20, which17]
  SEXP Rsh_Fir_array_deopt_stack37[4];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_value22_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_value20_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg_which17_;
  Rsh_Fir_deopt(133, 4, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L123_:;
  // which18 = force? which17
  Rsh_Fir_reg_which18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which17_);
  // ____4 = ldf `[[<-` in base
  Rsh_Fir_reg_____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r40 = dyn ____4(l15, value20, which18)
  SEXP Rsh_Fir_array_args106[3];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_value20_;
  Rsh_Fir_array_args106[2] = Rsh_Fir_reg_which18_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____4_, 3, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L23(value22, r40)
  // L23(value22, r40)
  Rsh_Fir_reg_value24_ = Rsh_Fir_reg_value22_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r40_;
  goto L23_;

D42_:;
  // deopt 138 []
  Rsh_Fir_deopt(138, 0, NULL, CCP, RHO);
  return R_NilValue;

L125_:;
  // p3 = prom<V +>{
  //   data14 = ld data;
  //   data15 = force? data14;
  //   checkMissing(data15);
  //   c21 = `is.object`(data15);
  //   if c21 then L1() else L2(data15);
  // L0(dx15):
  //   return dx15;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("[[", data15);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2(dr14);
  // L2(data17):
  //   __2 = ldf `[[` in base;
  //   r41 = dyn __2(data17, 1);
  //   goto L0(r41);
  // L3():
  //   dx14 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2751153939_3, CCP, RHO);
  // r43 = dyn isGrammarSymbol(p3)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isGrammarSymbol, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L126() else D43()
  // L126()
  goto L126_;

D43_:;
  // deopt 140 [r43]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L126_:;
  // c22 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c22 then L127() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L127()
    goto L127_;
  } else {
  // L25()
    goto L25_;
  }

L127_:;
  // value26 = ld value
  Rsh_Fir_reg_value26_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L128() else D44()
  // L128()
  goto L128_;

D44_:;
  // deopt 141 [value26]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_value26_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L128_:;
  // value27 = force? value26
  Rsh_Fir_reg_value27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value26_);
  // checkMissing(value27)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_value27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // l16 = ld data
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c23 = `is.object`(l16)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if c23 then L129() else L130(value27, l16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L129()
    goto L129_;
  } else {
  // L130(value27, l16)
    Rsh_Fir_reg_value29_ = Rsh_Fir_reg_value27_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l16_;
    goto L130_;
  }

L129_:;
  // dr16 = tryDispatchBuiltin.0("[[<-", l16, value27)
  SEXP Rsh_Fir_array_args117[3];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args117[2] = Rsh_Fir_reg_value27_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args117);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if dc8 then L131() else L130(value27, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L131()
    goto L131_;
  } else {
  // L130(value27, dr16)
    Rsh_Fir_reg_value29_ = Rsh_Fir_reg_value27_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_dr16_;
    goto L130_;
  }

L130_:;
  // which19 = ld which
  Rsh_Fir_reg_which19_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L132() else D45()
  // L132()
  goto L132_;

L131_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L26(value27, dx16)
  // L26(value27, dx16)
  Rsh_Fir_reg_value31_ = Rsh_Fir_reg_value27_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L26_;

D45_:;
  // deopt 144 [value29, l18, value27, which19]
  SEXP Rsh_Fir_array_deopt_stack40[4];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_value29_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_value27_;
  Rsh_Fir_array_deopt_stack40[3] = Rsh_Fir_reg_which19_;
  Rsh_Fir_deopt(144, 4, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L132_:;
  // which20 = force? which19
  Rsh_Fir_reg_which20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which19_);
  // checkMissing(which20)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_which20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // r44 = `+`(which20, 1.0)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_which20_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // ____5 = ldf `[[<-` in base
  Rsh_Fir_reg_____5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r45 = dyn ____5(l18, value27, r44)
  SEXP Rsh_Fir_array_args122[3];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_value27_;
  Rsh_Fir_array_args122[2] = Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____5_, 3, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L26(value29, r45)
  // L26(value29, r45)
  Rsh_Fir_reg_value31_ = Rsh_Fir_reg_value29_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r45_;
  goto L26_;

L134_:;
  // which21 = ld which
  Rsh_Fir_reg_which21_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L136() else D46()
  // L136()
  goto L136_;

L135_:;
  // r46 = dyn base7(<sym which>, 1.0)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L27(r46)
  // L27(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L27_;

D46_:;
  // deopt 152 [which21]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_which21_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L136_:;
  // which22 = force? which21
  Rsh_Fir_reg_which22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which21_);
  // checkMissing(which22)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_which22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r48 = dyn identical(which22, 1.0, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args125[9];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_which22_;
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args125[2] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args125[3] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args125[4] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args125[5] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args125[6] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args125[7] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args125[8] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names28[9];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_array_arg_names28[4] = R_MissingArg;
  Rsh_Fir_array_arg_names28[5] = R_MissingArg;
  Rsh_Fir_array_arg_names28[6] = R_MissingArg;
  Rsh_Fir_array_arg_names28[7] = R_MissingArg;
  Rsh_Fir_array_arg_names28[8] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L137() else D47()
  // L137()
  goto L137_;

D47_:;
  // deopt 163 [r48]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(163, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L137_:;
  // goto L27(r48)
  // L27(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L27_;

L138_:;
  // sym8 = ldf `is.character`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base8 = ldf `is.character` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args126);
  // if guard8 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

L139_:;
  // value32 = ld value
  Rsh_Fir_reg_value32_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L141() else D48()
  // L141()
  goto L141_;

L140_:;
  // r49 = dyn base8(<sym value>)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L29(c24, r49)
  // L29(c24, r49)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L29_;

D48_:;
  // deopt 165 [c24, value32]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_value32_;
  Rsh_Fir_deopt(165, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L141_:;
  // value33 = force? value32
  Rsh_Fir_reg_value33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value32_);
  // checkMissing(value33)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_value33_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // c30 = `is.character`(value33)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_value33_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L29(c24, c30)
  // L29(c24, c30)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_c30_;
  goto L29_;

L143_:;
  // as_symbol = ldf `as.symbol`
  Rsh_Fir_reg_as_symbol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L144() else D49()
  // L144()
  goto L144_;

D49_:;
  // deopt 170 []
  Rsh_Fir_deopt(170, 0, NULL, CCP, RHO);
  return R_NilValue;

L144_:;
  // p4 = prom<V +>{
  //   value34 = ld value;
  //   value35 = force? value34;
  //   checkMissing(value35);
  //   return value35;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2751153939_4, CCP, RHO);
  // r52 = dyn as_symbol(p4)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_symbol, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L145() else D50()
  // L145()
  goto L145_;

D50_:;
  // deopt 172 [r52]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L145_:;
  // st value = r52
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // goto L31()
  // L31()
  goto L31_;

D51_:;
  // deopt 176 [value36]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_value36_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L147_:;
  // value37 = force? value36
  Rsh_Fir_reg_value37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value36_);
  // checkMissing(value37)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_value37_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // l19 = ld data
  Rsh_Fir_reg_l19_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c35 = `is.object`(l19)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if c35 then L148() else L149(value37, l19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L148()
    goto L148_;
  } else {
  // L149(value37, l19)
    Rsh_Fir_reg_value39_ = Rsh_Fir_reg_value37_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l19_;
    goto L149_;
  }

L148_:;
  // dr18 = tryDispatchBuiltin.0("[[<-", l19, value37)
  SEXP Rsh_Fir_array_args134[3];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args134[2] = Rsh_Fir_reg_value37_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args134);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if dc9 then L150() else L149(value37, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L150()
    goto L150_;
  } else {
  // L149(value37, dr18)
    Rsh_Fir_reg_value39_ = Rsh_Fir_reg_value37_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_dr18_;
    goto L149_;
  }

L149_:;
  // which23 = ld which
  Rsh_Fir_reg_which23_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L151() else D52()
  // L151()
  goto L151_;

L150_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L32(value37, dx18)
  // L32(value37, dx18)
  Rsh_Fir_reg_value41_ = Rsh_Fir_reg_value37_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L32_;

D52_:;
  // deopt 179 [value39, l21, value37, which23]
  SEXP Rsh_Fir_array_deopt_stack46[4];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_value39_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_value37_;
  Rsh_Fir_array_deopt_stack46[3] = Rsh_Fir_reg_which23_;
  Rsh_Fir_deopt(179, 4, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L151_:;
  // which24 = force? which23
  Rsh_Fir_reg_which24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which23_);
  // ____6 = ldf `[[<-` in base
  Rsh_Fir_reg_____6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r54 = dyn ____6(l21, value37, which24)
  SEXP Rsh_Fir_array_args137[3];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_value37_;
  Rsh_Fir_array_args137[2] = Rsh_Fir_reg_which24_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____6_, 3, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L32(value39, r54)
  // L32(value39, r54)
  Rsh_Fir_reg_value41_ = Rsh_Fir_reg_value39_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r54_;
  goto L32_;

L152_:;
  // data18 = ld data
  Rsh_Fir_reg_data18_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L154() else D53()
  // L154()
  goto L154_;

L153_:;
  // r55 = dyn base9(<sym data>)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L33(r55)
  // L33(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L33_;

D53_:;
  // deopt 185 [data18]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_data18_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L154_:;
  // data19 = force? data18
  Rsh_Fir_reg_data19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data18_);
  // checkMissing(data19)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_data19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // as_call = ldf `as.call` in base
  Rsh_Fir_reg_as_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r57 = dyn as_call(data19)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_data19_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_call, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L155() else D54()
  // L155()
  goto L155_;

D54_:;
  // deopt 188 [r57]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L155_:;
  // goto L33(r57)
  // L33(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L33_;

D55_:;
  // deopt 189 [value42]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_value42_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L157_:;
  // value43 = force? value42
  Rsh_Fir_reg_value43_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value42_);
  // checkMissing(value43)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_value43_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // l22 = ld object
  Rsh_Fir_reg_l22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c36 = `is.object`(l22)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if c36 then L158() else L159(value43, l22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L158()
    goto L158_;
  } else {
  // L159(value43, l22)
    Rsh_Fir_reg_value45_ = Rsh_Fir_reg_value43_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l22_;
    goto L159_;
  }

L158_:;
  // dr20 = tryDispatchBuiltin.0("[[<-", l22, value43)
  SEXP Rsh_Fir_array_args143[3];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args143[2] = Rsh_Fir_reg_value43_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args143);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if dc10 then L160() else L159(value43, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L160()
    goto L160_;
  } else {
  // L159(value43, dr20)
    Rsh_Fir_reg_value45_ = Rsh_Fir_reg_value43_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_dr20_;
    goto L159_;
  }

L159_:;
  // which25 = ld which
  Rsh_Fir_reg_which25_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L161() else D56()
  // L161()
  goto L161_;

L160_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L34(dx20)
  // L34(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L34_;

D56_:;
  // deopt 192 [value45, l24, value43, which25]
  SEXP Rsh_Fir_array_deopt_stack50[4];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_value45_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_value43_;
  Rsh_Fir_array_deopt_stack50[3] = Rsh_Fir_reg_which25_;
  Rsh_Fir_deopt(192, 4, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L161_:;
  // which26 = force? which25
  Rsh_Fir_reg_which26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_which25_);
  // ____7 = ldf `[[<-` in base
  Rsh_Fir_reg_____7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r58 = dyn ____7(l24, value43, which26)
  SEXP Rsh_Fir_array_args146[3];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_value43_;
  Rsh_Fir_array_args146[2] = Rsh_Fir_reg_which26_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____7_, 3, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L34(r58)
  // L34(r58)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r58_;
  goto L34_;

D57_:;
  // deopt 196 [object9]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_object9_;
  Rsh_Fir_deopt(196, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L162_:;
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return object10
  return Rsh_Fir_reg_object10_;
}
SEXP Rsh_Fir_user_promise_inner2751153939_(SEXP CCP, SEXP RHO) {
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return object2
  return Rsh_Fir_reg_object2_;
}
SEXP Rsh_Fir_user_promise_inner2751153939_1(SEXP CCP, SEXP RHO) {
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return object6
  return Rsh_Fir_reg_object6_;
}
SEXP Rsh_Fir_user_promise_inner2751153939_2(SEXP CCP, SEXP RHO) {
  // data12 = ld data
  Rsh_Fir_reg_data12_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // data13 = force? data12
  Rsh_Fir_reg_data13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data12_);
  // checkMissing(data13)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_data13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return data13
  return Rsh_Fir_reg_data13_;
}
SEXP Rsh_Fir_user_promise_inner2751153939_3(SEXP CCP, SEXP RHO) {
  // data14 = ld data
  Rsh_Fir_reg_data14_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // data15 = force? data14
  Rsh_Fir_reg_data15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data14_);
  // checkMissing(data15)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_data15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(data15)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_data15_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if c21 then L1() else L2(data15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L1()
    goto L1_;
  } else {
  // L2(data15)
    Rsh_Fir_reg_data17_ = Rsh_Fir_reg_data15_;
    goto L2_;
  }

L0_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("[[", data15)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_data15_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args109);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr14)
    Rsh_Fir_reg_data17_ = Rsh_Fir_reg_dr14_;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r41 = dyn __2(data17, 1)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_data17_;
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r41)
  // L0(r41)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r41_;
  goto L0_;

L3_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2751153939_4(SEXP CCP, SEXP RHO) {
  // value34 = ld value
  Rsh_Fir_reg_value34_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // value35 = force? value34
  Rsh_Fir_reg_value35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value34_);
  // checkMissing(value35)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_value35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // return value35
  return Rsh_Fir_reg_value35_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
