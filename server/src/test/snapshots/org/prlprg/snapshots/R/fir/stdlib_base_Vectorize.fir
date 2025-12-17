fun main() {
  () -+> V { reg r:cls, reg Vectorize:cls, reg rep_int:*, reg rep_int1:V, reg p:p(V +), reg r2:V, reg vrep:cls, reg p1:p(V +), reg p2:p(V +), reg r5:V, reg vrep1:cls, reg p3:p(V +), reg p4:p(V +), reg r8:V, reg Vectorize1:cls, reg rep_int2:*, reg rep_int3:V, reg p5:p(V +), reg r10:V, reg vrep2:cls, reg p6:p(V +), reg r12:V, reg r13:cls, reg Vectorize2:cls, reg f:*, reg f1:V, reg p7:p(V +), reg r15:V, reg f2:cls, reg p8:p(V +), reg p9:p(V +), reg r18:V, reg vf:cls, reg p10:p(V +), reg p11:p(V +), reg r21:V, reg vf1:cls, reg p12:p(V +), reg r23:V, reg sym:cls, reg base:cls, reg guard:L, reg r24:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p13:p(V +), reg r27:V, reg r28:cls, reg Vectorize3:cls, reg SS:*, reg SS1:V, reg p14:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r30:V, reg r31:V, reg c:cls, reg r32:V, reg p15:p(V +), reg r34:V, reg subset:cls, reg Puromycin:*, reg Puromycin1:V, reg p16:p(V +), reg state:*, reg state1:V, reg r36:V, reg p17:p(V +), reg r38:V, reg seq:cls, reg r39:V, reg seq1:cls, reg r40:V, reg outer:cls, reg Vm:*, reg Vm1:V, reg p18:p(V +), reg K:*, reg K1:V, reg p19:p(V +), reg vSS:*, reg vSS1:V, reg p20:p(V +), reg Treated:*, reg Treated1:V, reg c1:L, reg Treated3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r44:V, reg p21:p(V +), reg Treated4:*, reg Treated5:V, reg c2:L, reg Treated7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r46:V, reg p22:p(V +), reg r48:V, reg contour:cls, reg Vm2:*, reg Vm3:V, reg p23:p(V +), reg K2:*, reg K3:V, reg p24:p(V +), reg SSvals:*, reg SSvals1:V, reg p25:p(V +), reg p26:p(V +), reg r53:V, reg Vectorize4:cls, reg r54:cls, reg p27:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r56:V, reg r57:V, reg c3:cls, reg r58:V, reg p28:p(V +), reg r60:V, reg combnV:cls, reg p29:p(V +), reg r62:V, reg combnV1:cls, reg p30:p(V +), reg sum:*, reg sum1:V, reg p31:p(V +), reg r65:V |
    mkenv;
    r = clos inner810739564;
    st Vectorize = r;
    Vectorize = ldf Vectorize;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      rep_int = ld `rep.int`;
      rep_int1 = force? rep_int;
      checkMissing(rep_int1);
      return rep_int1;
    };
    r2 = dyn Vectorize(p);
    check L2() else D1();
  D1():
    deopt 6 [r2];
  L2():
    st vrep = r2;
    vrep = ldf vrep;
    check L3() else D2();
  D2():
    deopt 9 [];
  L3():
    p1 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p2 = prom<V +>{
      return <int 4, 3, 2, 1>;
    };
    r5 = dyn vrep(p1, p2);
    check L4() else D3();
  D3():
    deopt 12 [r5];
  L4():
    vrep1 = ldf vrep;
    check L5() else D4();
  D4():
    deopt 14 [];
  L5():
    p3 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p4 = prom<V +>{
      return <int 4, 3, 2, 1>;
    };
    r8 = dyn vrep1[times, x](p3, p4);
    check L6() else D5();
  D5():
    deopt 19 [r8];
  L6():
    Vectorize1 = ldf Vectorize;
    check L7() else D6();
  D6():
    deopt 21 [];
  L7():
    p5 = prom<V +>{
      rep_int2 = ld `rep.int`;
      rep_int3 = force? rep_int2;
      checkMissing(rep_int3);
      return rep_int3;
    };
    r10 = dyn Vectorize1(p5, "times");
    check L8() else D7();
  D7():
    deopt 24 [r10];
  L8():
    st vrep = r10;
    vrep2 = ldf vrep;
    check L9() else D8();
  D8():
    deopt 27 [];
  L9():
    p6 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    r12 = dyn vrep2[times, x](p6, 42.0);
    check L10() else D9();
  D9():
    deopt 32 [r12];
  L10():
    r13 = clos inner2143169777;
    st f = r13;
    Vectorize2 = ldf Vectorize;
    check L11() else D10();
  D10():
    deopt 37 [];
  L11():
    p7 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r15 = dyn Vectorize2[, SIMPLIFY](p7, FALSE);
    check L12() else D11();
  D11():
    deopt 41 [r15];
  L12():
    st vf = r15;
    f2 = ldf f;
    check L13() else D12();
  D12():
    deopt 44 [];
  L13():
    p8 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p9 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r18 = dyn f2(p8, p9);
    check L14() else D13();
  D13():
    deopt 47 [r18];
  L14():
    vf = ldf vf;
    check L15() else D14();
  D14():
    deopt 49 [];
  L15():
    p10 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p11 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r21 = dyn vf(p10, p11);
    check L16() else D15();
  D15():
    deopt 52 [r21];
  L16():
    vf1 = ldf vf;
    check L17() else D16();
  D16():
    deopt 54 [];
  L17():
    p12 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r23 = dyn vf1[y](p12);
    check L18() else D17();
  D17():
    deopt 57 [r23];
  L18():
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0():
    r28 = clos inner1977746101;
    st SS = r28;
    Vectorize3 = ldf Vectorize;
    check L23() else D20();
  L19():
    require = ldf require;
    check L21() else D18();
  L20():
    r24 = dyn base(<sym graphics>);
    goto L0();
  D18():
    deopt 60 [];
  D20():
    deopt 67 [];
  L21():
    p13 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r27 = dyn require(p13);
    check L22() else D19();
  L23():
    p14 = prom<V +>{
      SS = ld SS;
      SS1 = force? SS;
      checkMissing(SS1);
      return SS1;
    };
    p15 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      c = ldf c in base;
      r32 = dyn c("Vm", "K");
      goto L0(r32);
    L2():
      r30 = dyn base1("Vm", "K");
      goto L0(r30);
    };
    r34 = dyn Vectorize3(p14, p15);
    check L24() else D21();
  D19():
    deopt 62 [r27];
  D21():
    deopt 70 [r34];
  L22():
    goto L0();
  L24():
    st vSS = r34;
    subset = ldf subset;
    check L25() else D22();
  D22():
    deopt 73 [];
  L25():
    p16 = prom<V +>{
      Puromycin = ld Puromycin;
      Puromycin1 = force? Puromycin;
      checkMissing(Puromycin1);
      return Puromycin1;
    };
    p17 = prom<V +>{
      state = ld state;
      state1 = force? state;
      checkMissing(state1);
      r36 = `==`(state1, "treated");
      return r36;
    };
    r38 = dyn subset(p16, p17);
    check L26() else D23();
  D23():
    deopt 76 [r38];
  L26():
    st Treated = r38;
    seq = ldf seq;
    check L27() else D24();
  D24():
    deopt 79 [];
  L27():
    r39 = dyn seq[, , `length.out`](140.0, 310.0, 50.0);
    check L28() else D25();
  D25():
    deopt 84 [r39];
  L28():
    st Vm = r39;
    seq1 = ldf seq;
    check L29() else D26();
  D26():
    deopt 87 [];
  L29():
    r40 = dyn seq1[, , `length.out`](0.0, 0.15, 40.0);
    check L30() else D27();
  D27():
    deopt 92 [r40];
  L30():
    st K = r40;
    outer = ldf outer;
    check L31() else D28();
  D28():
    deopt 95 [];
  L31():
    p18 = prom<V +>{
      Vm = ld Vm;
      Vm1 = force? Vm;
      checkMissing(Vm1);
      return Vm1;
    };
    p19 = prom<V +>{
      K = ld K;
      K1 = force? K;
      checkMissing(K1);
      return K1;
    };
    p20 = prom<V +>{
      vSS = ld vSS;
      vSS1 = force? vSS;
      checkMissing(vSS1);
      return vSS1;
    };
    p21 = prom<V +>{
      Treated = ld Treated;
      Treated1 = force? Treated;
      checkMissing(Treated1);
      c1 = `is.object`(Treated1);
      if c1 then L1() else L2(Treated1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", Treated1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(Treated3):
      r44 = `$`(Treated3, <sym rate>);
      goto L0(r44);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p22 = prom<V +>{
      Treated4 = ld Treated;
      Treated5 = force? Treated4;
      checkMissing(Treated5);
      c2 = `is.object`(Treated5);
      if c2 then L1() else L2(Treated5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", Treated5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(Treated7):
      r46 = `$`(Treated7, <sym conc>);
      goto L0(r46);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r48 = dyn outer(p18, p19, p20, p21, p22);
    check L32() else D29();
  D29():
    deopt 101 [r48];
  L32():
    st SSvals = r48;
    contour = ldf contour;
    check L33() else D30();
  D30():
    deopt 104 [];
  L33():
    p23 = prom<V +>{
      Vm2 = ld Vm;
      Vm3 = force? Vm2;
      checkMissing(Vm3);
      return Vm3;
    };
    p24 = prom<V +>{
      K2 = ld K;
      K3 = force? K2;
      checkMissing(K3);
      return K3;
    };
    p25 = prom<V +>{
      SSvals = ld SSvals;
      SSvals1 = force? SSvals;
      checkMissing(SSvals1);
      return SSvals1;
    };
    p26 = prom<V +>{
      return <real 1.0, 4.0, 9.0, 16.0, 25.0, 36.0, 49.0, 64.0, 81.0, 100.0>;
    };
    r53 = dyn contour[, , , levels, xlab, ylab](p23, p24, p25, p26, "Vm", "K");
    check L34() else D31();
  D31():
    deopt 114 [r53];
  L34():
    Vectorize4 = ldf Vectorize;
    check L35() else D32();
  D32():
    deopt 116 [];
  L35():
    p27 = prom<V +>{
      r54 = clos inner1526084916;
      return r54;
    };
    p28 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r57):
      return r57;
    L1():
      c3 = ldf c in base;
      r58 = dyn c3("x", "m");
      goto L0(r58);
    L2():
      r56 = dyn base2("x", "m");
      goto L0(r56);
    };
    r60 = dyn Vectorize4[, `vectorize.args`](p27, p28);
    check L36() else D33();
  D33():
    deopt 120 [r60];
  L36():
    st combnV = r60;
    combnV = ldf combnV;
    check L37() else D34();
  D34():
    deopt 123 [];
  L37():
    p29 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    r62 = dyn combnV(4.0, p29);
    check L38() else D35();
  D35():
    deopt 126 [r62];
  L38():
    combnV1 = ldf combnV;
    check L39() else D36();
  D36():
    deopt 128 [];
  L39():
    p30 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p31 = prom<V +>{
      sum = ld sum;
      sum1 = force? sum;
      checkMissing(sum1);
      return sum1;
    };
    r65 = dyn combnV1(4.0, p30, p31);
    check L40() else D37();
  D37():
    deopt 132 [r65];
  L40():
    popenv;
    return r65;
  }
}
fun inner810739564(FUN, `vectorize.args`, SIMPLIFY, `USE.NAMES`) {
  (reg FUN:*, reg vectorize_args:*, reg SIMPLIFY:*, reg USE_NAMES:*) -+> V { var FUN:*, var `vectorize.args`:*, reg vectorize_args_isMissing:L, reg vectorize_args_orDefault:*, reg arg_names:*, reg arg_names1:V, reg p:p(V +), var SIMPLIFY:*, reg SIMPLIFY_isMissing:L, reg SIMPLIFY_orDefault:*, var `USE.NAMES`:*, reg USE_NAMES_isMissing:L, reg USE_NAMES_orDefault:*, reg as_list:cls, reg formals:cls, reg FUN1:*, reg FUN2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg l:*, reg c:L, reg r6:dots, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg arg_names2:*, reg arg_names3:V, reg names:cls, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg vectorize_args1:*, reg vectorize_args2:V, reg as_character:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg vectorize_args3:*, reg vectorize_args4:V, reg length:cls, reg r18:V, reg r19:V, reg c1:L, reg FUN3:*, reg FUN4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg _in_:cls, reg vectorize_args5:*, reg vectorize_args6:V, reg p3:p(V +), reg arg_names4:*, reg arg_names5:V, reg p4:p(V +), reg r26:V, reg all:cls, reg r27:V, reg r28:V, reg c2:L, reg stop:cls, reg r29:V, reg _in_1:cls, reg arg_names6:*, reg arg_names7:V, reg p5:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg c3:cls, reg r34:V, reg p6:p(V +), reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg collisions:*, reg collisions1:V, reg any:cls, reg r39:V, reg c4:L, reg stop1:cls, reg sQuote:cls, reg r40:V, reg p7:p(V +), reg paste:cls, reg sQuote1:cls, reg arg_names8:*, reg arg_names9:V, reg c5:L, reg arg_names11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg collisions2:*, reg collisions3:V, reg __:cls, reg r42:V, reg p8:p(V +), reg r44:V, reg p9:p(V +), reg r46:V, reg p10:p(V +), reg r48:V, reg rm:cls, reg arg_names12:*, reg arg_names13:V, reg p11:p(V +), reg collisions4:*, reg collisions5:V, reg p12:p(V +), reg r52:V, reg r53:cls, reg r54:cls, reg r55:V |
    mkenv;
    st FUN = FUN;
    vectorize_args_isMissing = missing.0(vectorize_args);
    if vectorize_args_isMissing then L0() else L1(vectorize_args);
  L0():
    p = prom<V +>{
      arg_names = ld `arg.names`;
      arg_names1 = force? arg_names;
      checkMissing(arg_names1);
      return arg_names1;
    };
    goto L1(p);
  L1(vectorize_args_orDefault):
    st `vectorize.args` = vectorize_args_orDefault;
    SIMPLIFY_isMissing = missing.0(SIMPLIFY);
    if SIMPLIFY_isMissing then L2(TRUE) else L2(SIMPLIFY);
  L2(SIMPLIFY_orDefault):
    st SIMPLIFY = SIMPLIFY_orDefault;
    USE_NAMES_isMissing = missing.0(USE_NAMES);
    if USE_NAMES_isMissing then L3(TRUE) else L3(USE_NAMES);
  L3(USE_NAMES_orDefault):
    st `USE.NAMES` = USE_NAMES_orDefault;
    as_list = ldf `as.list`;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p2 = prom<V +>{
      formals = ldf formals;
      p1 = prom<V +>{
        FUN1 = ld FUN;
        FUN2 = force? FUN1;
        checkMissing(FUN2);
        return FUN2;
      };
      r2 = dyn formals(p1);
      return r2;
    };
    r4 = dyn as_list(p2);
    check L17() else D1();
  D1():
    deopt 3 [r4];
  L17():
    st `arg.names` = r4;
    l = ld `arg.names`;
    c = `is.object`(l);
    if c then L18() else L19(NULL, l);
  L4(dx1):
    st `arg.names` = dx1;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L18():
    dr = tryDispatchBuiltin.0("[[<-", l, NULL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(NULL, dr);
  L19(r6, l2):
    ____ = ldf `[[<-` in base;
    r9 = dyn ____(l2, NULL, "...");
    goto L4(r9);
  L5(r11):
    st `arg.names` = r11;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L21():
    arg_names2 = ld `arg.names`;
    check L23() else D2();
  L22():
    r10 = dyn base(<sym arg.names>);
    goto L5(r10);
  D2():
    deopt 14 [arg_names2];
  L6(r14):
    st `vectorize.args` = r14;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L23():
    arg_names3 = force? arg_names2;
    checkMissing(arg_names3);
    names = ldf names in base;
    r12 = dyn names(arg_names3);
    check L24() else D3();
  L25():
    vectorize_args1 = ld `vectorize.args`;
    check L27() else D4();
  L26():
    r13 = dyn base1(<sym vectorize.args>);
    goto L6(r13);
  D3():
    deopt 17 [r12];
  D4():
    deopt 21 [vectorize_args1];
  L7(r17):
    r19 = `!`(r17);
    c1 = `as.logical`(r19);
    if c1 then L33() else L8();
  L24():
    goto L5(r12);
  L27():
    vectorize_args2 = force? vectorize_args1;
    checkMissing(vectorize_args2);
    as_character = ldf `as.character` in base;
    r15 = dyn as_character(vectorize_args2);
    check L28() else D5();
  L29():
    vectorize_args3 = ld `vectorize.args`;
    check L31() else D6();
  L30():
    r16 = dyn base2(<sym vectorize.args>);
    goto L7(r16);
  D5():
    deopt 24 [r15];
  D6():
    deopt 28 [vectorize_args3];
  L8():
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L28():
    goto L6(r15);
  L31():
    vectorize_args4 = force? vectorize_args3;
    checkMissing(vectorize_args4);
    length = ldf length in base;
    r18 = dyn length(vectorize_args4);
    check L32() else D7();
  L33():
    FUN3 = ld FUN;
    check L34() else D8();
  D7():
    deopt 31 [r18];
  D8():
    deopt 33 [FUN3];
  L10(r23):
    r28 = `!`(r23);
    c2 = `as.logical`(r28);
    if c2 then L42() else L11();
  L32():
    goto L7(r18);
  L34():
    FUN4 = force? FUN3;
    checkMissing(FUN4);
    popenv;
    return FUN4;
  L37():
    _in_ = ldf `%in%`;
    check L39() else D9();
  L38():
    r22 = dyn base3(<lang `%in%`(vectorize.args, arg.names)>);
    goto L10(r22);
  D9():
    deopt 41 [];
  L11():
    goto L12();
  L12():
    _in_1 = ldf `%in%`;
    check L46() else D14();
  L39():
    p3 = prom<V +>{
      vectorize_args5 = ld `vectorize.args`;
      vectorize_args6 = force? vectorize_args5;
      checkMissing(vectorize_args6);
      return vectorize_args6;
    };
    p4 = prom<V +>{
      arg_names4 = ld `arg.names`;
      arg_names5 = force? arg_names4;
      checkMissing(arg_names5);
      return arg_names5;
    };
    r26 = dyn _in_(p3, p4);
    check L40() else D10();
  L42():
    stop = ldf stop;
    check L43() else D12();
  D10():
    deopt 44 [r26];
  D12():
    deopt 49 [];
  D14():
    deopt 55 [];
  L40():
    all = ldf all in base;
    r27 = dyn all(r26);
    check L41() else D11();
  L43():
    r29 = dyn stop("must specify names of formal arguments for 'vectorize'");
    check L44() else D13();
  L46():
    p5 = prom<V +>{
      arg_names6 = ld `arg.names`;
      arg_names7 = force? arg_names6;
      checkMissing(arg_names7);
      return arg_names7;
    };
    p6 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      c3 = ldf c in base;
      r34 = dyn c3("FUN", "SIMPLIFY", "USE.NAMES", "vectorize.args");
      goto L0(r34);
    L2():
      r32 = dyn base4("FUN", "SIMPLIFY", "USE.NAMES", "vectorize.args");
      goto L0(r32);
    };
    r36 = dyn _in_1(p5, p6);
    check L47() else D15();
  D11():
    deopt 46 [r27];
  D13():
    deopt 51 [r29];
  D15():
    deopt 58 [r36];
  L41():
    goto L10(r27);
  L44():
    goto L12();
  L47():
    st collisions = r36;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L13(r38):
    c4 = `as.logical`(r38);
    if c4 then L52() else L14();
  L48():
    collisions = ld collisions;
    check L50() else D16();
  L49():
    r37 = dyn base5(<sym collisions>);
    goto L13(r37);
  D16():
    deopt 62 [collisions];
  L14():
    goto L15();
  L15():
    rm = ldf rm;
    check L56() else D20();
  L50():
    collisions1 = force? collisions;
    checkMissing(collisions1);
    any = ldf any in base;
    r39 = dyn any(collisions1);
    check L51() else D17();
  L52():
    stop1 = ldf stop;
    check L53() else D18();
  D17():
    deopt 65 [r39];
  D18():
    deopt 67 [];
  D20():
    deopt 75 [];
  L51():
    goto L13(r39);
  L53():
    p7 = prom<V +>{
      sQuote = ldf sQuote;
      r40 = dyn sQuote("FUN");
      return r40;
    };
    p10 = prom<V +>{
      paste = ldf paste;
      p9 = prom<V +>{
        sQuote1 = ldf sQuote;
        p8 = prom<V +>{
          arg_names8 = ld `arg.names`;
          arg_names9 = force? arg_names8;
          checkMissing(arg_names9);
          c5 = `is.object`(arg_names9);
          if c5 then L1() else L2(arg_names9);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[", arg_names9);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(arg_names11):
          collisions2 = ld collisions;
          collisions3 = force? collisions2;
          __ = ldf `[` in base;
          r42 = dyn __(arg_names11, collisions3);
          goto L0(r42);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r44 = dyn sQuote1(p8);
        return r44;
      };
      r46 = dyn paste[, collapse](p9, ", ");
      return r46;
    };
    r48 = dyn stop1(p7, " may not have argument(s) named ", p10);
    check L54() else D19();
  L56():
    p11 = prom<V +>{
      arg_names12 = ld `arg.names`;
      arg_names13 = force? arg_names12;
      checkMissing(arg_names13);
      return arg_names13;
    };
    p12 = prom<V +>{
      collisions4 = ld collisions;
      collisions5 = force? collisions4;
      checkMissing(collisions5);
      return collisions5;
    };
    r52 = dyn rm(p11, p12);
    check L57() else D21();
  D19():
    deopt 71 [r48];
  D21():
    deopt 78 [r52];
  L54():
    goto L15();
  L57():
    r53 = clos inner2708337952;
    checkFun.0(r53);
    r54 = r53 as cls;
    r55 = dyn r54();
    check L58() else D22();
  D22():
    deopt 82 [r55];
  L58():
    popenv;
    return r55;
  }
}
fun inner2708337952() {
  () -+> V { reg r:cls, reg formals:cls, reg FUN:*, reg FUN1:V, reg p:p(V +), reg r2:V, reg l:*, reg formals__:cls, reg r3:V, reg parent_env:cls, reg environment:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg l1:*, reg environment__:cls, reg r7:V, reg FUNV:*, reg FUNV1:V |
    mkenv;
    r = clos inner2708337952;
    st FUNV = r;
    formals = ldf formals;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      FUN = ld FUN;
      FUN1 = force? FUN;
      checkMissing(FUN1);
      return FUN1;
    };
    r2 = dyn formals(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    l = ld FUNV;
    formals__ = ldf `formals<-`;
    check L2() else D2();
  D2():
    deopt 8 [r2, l, r2];
  L2():
    r3 = dyn formals__(l, NULL, r2);
    check L3() else D3();
  D3():
    deopt 10 [r2, r3];
  L3():
    st FUNV = r3;
    parent_env = ldf `parent.env`;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p1 = prom<V +>{
      environment = ldf environment;
      r4 = dyn environment();
      return r4;
    };
    r6 = dyn parent_env(p1);
    check L5() else D5();
  D5():
    deopt 15 [r6];
  L5():
    l1 = ld FUNV;
    environment__ = ldf `environment<-`;
    check L6() else D6();
  D6():
    deopt 17 [r6, l1, r6];
  L6():
    r7 = dyn environment__(l1, NULL, r6);
    check L7() else D7();
  D7():
    deopt 19 [r6, r7];
  L7():
    st FUNV = r7;
    FUNV = ld FUNV;
    check L8() else D8();
  D8():
    deopt 21 [FUNV];
  L8():
    FUNV1 = force? FUNV;
    checkMissing(FUNV1);
    popenv;
    return FUNV1;
  }
}
fun inner2143169777(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg p:p(V +), var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg c:cls, reg r3:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0() else L1(x);
  L0():
    p = prom<V +>{
      return <int 1, 2, 3>;
    };
    goto L1(p);
  L1(x_orDefault):
    st x = x_orDefault;
    st y = y;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r2):
    popenv;
    return r2;
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym x>, <sym y>);
    goto L2(r1);
  D0():
    deopt 2 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L6() else D1();
  D1():
    deopt 4 [y1];
  L6():
    y2 = force? y1;
    checkMissing(y2);
    c = ldf c in base;
    r3 = dyn c(x2, y2);
    check L7() else D2();
  D2():
    deopt 7 [r3];
  L7():
    goto L2(r3);
  }
}
fun inner1977746101(Vm, K, resp, conc) {
  (reg Vm:*, reg K:*, reg resp:*, reg conc:*) -+> V { var Vm:*, var K:*, var resp:*, var conc:*, reg Vm1:*, reg Vm2:V, reg conc1:*, reg conc2:V, reg r:V, reg K1:*, reg K2:V, reg conc3:*, reg conc4:V, reg r1:V, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg resp1:*, reg resp2:V, reg pred:*, reg pred1:V, reg r5:V, reg r6:V, reg pred2:*, reg pred3:V, reg r7:V, reg sum:cls, reg r8:V |
    mkenv;
    st Vm = Vm;
    st K = K;
    st resp = resp;
    st conc = conc;
    Vm1 = ld Vm;
    check L1() else D0();
  D0():
    deopt 0 [Vm1];
  L1():
    Vm2 = force? Vm1;
    checkMissing(Vm2);
    conc1 = ld conc;
    check L2() else D1();
  D1():
    deopt 1 [Vm2, conc1];
  L2():
    conc2 = force? conc1;
    checkMissing(conc2);
    r = `*`(Vm2, conc2);
    K1 = ld K;
    check L3() else D2();
  D2():
    deopt 3 [r, K1];
  L3():
    K2 = force? K1;
    checkMissing(K2);
    conc3 = ld conc;
    check L4() else D3();
  D3():
    deopt 4 [r, K2, conc3];
  L4():
    conc4 = force? conc3;
    checkMissing(conc4);
    r1 = `+`(K2, conc4);
    r2 = `/`(r, r1);
    st pred = r2;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r4):
    popenv;
    return r4;
  L5():
    resp1 = ld resp;
    check L7() else D4();
  L6():
    r3 = dyn base(<lang `/`(`^`(`(`(`-`(resp, pred)), 2.0), pred)>);
    goto L0(r3);
  D4():
    deopt 11 [resp1];
  L7():
    resp2 = force? resp1;
    checkMissing(resp2);
    pred = ld pred;
    check L8() else D5();
  D5():
    deopt 12 [resp2, pred];
  L8():
    pred1 = force? pred;
    checkMissing(pred1);
    r5 = `-`(resp2, pred1);
    r6 = `^`(r5, 2.0);
    pred2 = ld pred;
    check L9() else D6();
  D6():
    deopt 16 [r6, pred2];
  L9():
    pred3 = force? pred2;
    checkMissing(pred3);
    r7 = `/`(r6, pred3);
    sum = ldf sum in base;
    r8 = dyn sum(r7);
    check L10() else D7();
  D7():
    deopt 20 [r8];
  L10():
    goto L0(r8);
  }
}
fun inner1526084916(x, m, FUNV) {
  (reg x:*, reg m:*, reg FUNV:*) -+> V { var x:*, var m:*, var FUNV:*, reg FUNV_isMissing:L, reg FUNV_orDefault:*, reg combn:cls, reg x1:*, reg x2:V, reg p:p(V +), reg m1:*, reg m2:V, reg p1:p(V +), reg FUNV1:*, reg FUNV2:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st x = x;
    st m = m;
    FUNV_isMissing = missing.0(FUNV);
    if FUNV_isMissing then L0(NULL) else L0(FUNV);
  L0(FUNV_orDefault):
    st FUNV = FUNV_orDefault;
    combn = ldf combn;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      return m2;
    };
    p2 = prom<V +>{
      FUNV1 = ld FUNV;
      FUNV2 = force? FUNV1;
      checkMissing(FUNV2);
      return FUNV2;
    };
    r3 = dyn combn[, , FUN](p, p1, p2);
    check L2() else D1();
  D1():
    deopt 6 [r3];
  L2():
    popenv;
    return r3;
  }
}