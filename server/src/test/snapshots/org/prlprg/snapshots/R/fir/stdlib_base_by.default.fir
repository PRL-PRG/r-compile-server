fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1188691255;
    st `by.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1188691255(data, INDICES, FUN, `...`, simplify) {
  (reg data:*, reg INDICES:*, reg FUN:*, reg ddd:dots, reg simplify:*) -+> V { var data:*, var INDICES:*, var FUN:*, var `...`:dots?, var simplify:*, reg simplify_isMissing:L, reg simplify_orDefault:*, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg data3:*, reg data4:V, reg dim:cls, reg r6:V, reg length:cls, reg r7:V, reg c:L, reg by:cls, reg dd:*, reg dd1:V, reg p1:p(V +), reg INDICES1:*, reg INDICES2:V, reg p2:p(V +), reg FUN1:*, reg FUN2:V, reg p3:p(V +), reg ddd1:dots?, reg simplify1:*, reg simplify2:V, reg p4:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg INDICES3:*, reg INDICES4:V, reg is_list:cls, reg r15:V, reg r16:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg INDICES5:*, reg INDICES6:V, reg list:cls, reg r19:V, reg deparse:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg substitute:cls, reg r22:V, reg p5:p(V +), reg r24:V, reg c2:L, reg r26:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r27:V, reg l:*, reg names__:cls, reg r28:V, reg INDICES7:*, reg INDICES8:V, reg r29:cls, reg nrow:cls, reg dd2:*, reg dd3:V, reg p6:p(V +), reg r31:V, reg structure:cls, reg eval:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg substitute1:cls, reg r34:V, reg p7:p(V +), reg dd4:*, reg dd5:V, reg p8:p(V +), reg r37:V, reg p9:p(V +), reg match_call:cls, reg r39:V, reg p10:p(V +), reg r41:V |
    mkenv;
    st data = data;
    st INDICES = INDICES;
    st FUN = FUN;
    st `...` = ddd;
    simplify_isMissing = missing.0(simplify);
    if simplify_isMissing then L0(TRUE) else L0(simplify);
  L0(simplify_orDefault):
    st simplify = simplify_orDefault;
    as_data_frame = ldf `as.data.frame`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r1 = dyn as_data_frame(p);
    check L10() else D1();
  D1():
    deopt 3 [r1];
  L10():
    st dd = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r3):
    c = `as.logical`(r3);
    if c then L18() else L3();
  L11():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L12():
    r2 = dyn base(<lang dim(data)>);
    goto L1(r2);
  L2(r5):
    length = ldf length in base;
    r7 = dyn length(r5);
    check L17() else D4();
  L3():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L13():
    data3 = ld data;
    check L15() else D2();
  L14():
    r4 = dyn base1(<sym data>);
    goto L2(r4);
  L18():
    by = ldf by;
    check L19() else D5();
  D2():
    deopt 9 [data3];
  D4():
    deopt 14 [r7];
  D5():
    deopt 16 [];
  L4(r14):
    r16 = `!`(r14);
    c1 = `as.logical`(r16);
    if c1 then L26() else L5();
  L15():
    data4 = force? data3;
    checkMissing(data4);
    dim = ldf dim in base;
    r6 = dyn dim(data4);
    check L16() else D3();
  L17():
    goto L1(r7);
  L19():
    p1 = prom<V +>{
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      return dd1;
    };
    p2 = prom<V +>{
      INDICES1 = ld INDICES;
      INDICES2 = force? INDICES1;
      checkMissing(INDICES2);
      return INDICES2;
    };
    p3 = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    ddd1 = ld `...`;
    p4 = prom<V +>{
      simplify1 = ld simplify;
      simplify2 = force? simplify1;
      checkMissing(simplify2);
      return simplify2;
    };
    r12 = dyn by[, , , `...`, simplify](p1, p2, p3, ddd1, p4);
    check L20() else D6();
  L22():
    INDICES3 = ld INDICES;
    check L24() else D7();
  L23():
    r13 = dyn base2(<sym INDICES>);
    goto L4(r13);
  D3():
    deopt 12 [r6];
  D6():
    deopt 23 [r12];
  D7():
    deopt 26 [INDICES3];
  L5():
    INDICES7 = ld INDICES;
    check L39() else D15();
  L8():
    r29 = clos inner354062069;
    st FUNx = r29;
    nrow = ldf nrow;
    check L40() else D16();
  L16():
    goto L2(r6);
  L20():
    popenv;
    return r12;
  L24():
    INDICES4 = force? INDICES3;
    checkMissing(INDICES4);
    is_list = ldf `is.list` in base;
    r15 = dyn is_list(INDICES4);
    check L25() else D8();
  L26():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  D8():
    deopt 29 [r15];
  D15():
    deopt 50 [INDICES7];
  D16():
    deopt 57 [];
  L6(r18):
    st IND = r18;
    deparse = ldf deparse;
    check L31() else D11();
  L25():
    goto L4(r15);
  L27():
    INDICES5 = ld INDICES;
    check L29() else D9();
  L28():
    r17 = dyn base3(<sym INDICES>);
    goto L6(r17);
  L39():
    INDICES8 = force? INDICES7;
    checkMissing(INDICES8);
    st IND = INDICES8;
    goto L8();
  L40():
    p6 = prom<V +>{
      dd2 = ld dd;
      dd3 = force? dd2;
      checkMissing(dd3);
      return dd3;
    };
    r31 = dyn nrow(p6);
    check L41() else D17();
  D9():
    deopt 33 [INDICES5];
  D11():
    deopt 39 [];
  D17():
    deopt 59 [r31];
  L29():
    INDICES6 = force? INDICES5;
    checkMissing(INDICES6);
    list = ldf list in base;
    r19 = dyn list(INDICES6);
    check L30() else D10();
  L31():
    p5 = prom<V +>{
      sym4 = ldf substitute;
      base4 = ldf substitute in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      substitute = ldf substitute in base;
      r22 = dyn substitute(<sym INDICES>);
      goto L0(r22);
    L2():
      r20 = dyn base4(<sym INDICES>);
      goto L0(r20);
    };
    r24 = dyn deparse(p5);
    check L32() else D12();
  L41():
    st nd = r31;
    structure = ldf structure;
    check L42() else D18();
  D10():
    deopt 36 [r19];
  D12():
    deopt 41 [r24];
  D18():
    deopt 62 [];
  L30():
    goto L6(r19);
  L32():
    c2 = `is.object`(r24);
    if c2 then L33() else L34(r24);
  L42():
    p9 = prom<V +>{
      eval = ldf eval;
      p7 = prom<V +>{
        sym5 = ldf substitute;
        base5 = ldf substitute in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r33):
        return r33;
      L1():
        substitute1 = ldf substitute in base;
        r34 = dyn substitute1(<lang tapply(seq_len(nd), IND, FUNx, simplify=simplify)>);
        goto L0(r34);
      L2():
        r32 = dyn base5(<lang tapply(seq_len(nd), IND, FUNx, simplify=simplify)>);
        goto L0(r32);
      };
      p8 = prom<V +>{
        dd4 = ld dd;
        dd5 = force? dd4;
        checkMissing(dd5);
        return dd5;
      };
      r37 = dyn eval(p7, p8);
      return r37;
    };
    p10 = prom<V +>{
      match_call = ldf `match.call`;
      r39 = dyn match_call();
      return r39;
    };
    r41 = dyn structure[, call, class](p9, p10, "by");
    check L43() else D19();
  D19():
    deopt 68 [r41];
  L7(dx1):
    l = ld IND;
    names__ = ldf `names<-`;
    check L36() else D13();
  L33():
    dr = tryDispatchBuiltin.1("[", r24);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(r26):
    __ = ldf `[` in base;
    r27 = dyn __(r26, 1);
    goto L7(r27);
  L43():
    popenv;
    return r41;
  D13():
    deopt 46 [dx1, l, dx1];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L36():
    r28 = dyn names__(l, NULL, dx1);
    check L37() else D14();
  D14():
    deopt 48 [dx1, r28];
  L37():
    st IND = r28;
    goto L8();
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg FUN:cls, reg dd:*, reg dd1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x1:*, reg x2:V, reg __:cls, reg r:V, reg p:p(V +), reg ddd:*, reg r2:V |
    mkenv;
    st x = x;
    FUN = ldf FUN;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      c = `is.object`(dd1);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", dd1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      x1 = ld x;
      x2 = force? x1;
      __ = ldf `[` in base;
      r = dyn __(dd1, x2, <missing>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    ddd = ld `...`;
    r2 = dyn FUN[, `...`](p, ddd);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}