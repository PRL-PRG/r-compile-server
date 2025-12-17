fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3336174902;
    st `by.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3336174902(data, INDICES, FUN, `...`, simplify) {
  (reg data:*, reg INDICES:*, reg FUN:*, reg ddd:dots, reg simplify:*) -+> V { var data:*, var INDICES:*, var FUN:*, var `...`:dots?, var simplify:*, reg simplify_isMissing:L, reg simplify_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg INDICES1:*, reg INDICES2:V, reg inherits:cls, reg r2:V, reg c:L, reg _formula2varlist:cls, reg INDICES3:*, reg INDICES4:V, reg p:p(V +), reg data1:*, reg data2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg INDICES5:*, reg INDICES6:V, reg is_list:cls, reg r9:V, reg r10:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg INDICES7:*, reg INDICES8:V, reg list:cls, reg r13:V, reg deparse:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg substitute:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg c2:L, reg r20:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg l:*, reg names__:cls, reg r22:V, reg INDICES9:*, reg INDICES10:V, reg r23:cls, reg nrow:cls, reg data3:*, reg data4:V, reg p3:p(V +), reg r25:V, reg structure:cls, reg eval:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg substitute1:cls, reg r28:V, reg p4:p(V +), reg data5:*, reg data6:V, reg p5:p(V +), reg r31:V, reg p6:p(V +), reg match_call:cls, reg r33:V, reg p7:p(V +), reg r35:V |
    mkenv;
    st data = data;
    st INDICES = INDICES;
    st FUN = FUN;
    st `...` = ddd;
    simplify_isMissing = missing.0(simplify);
    if simplify_isMissing then L0(TRUE) else L0(simplify);
  L0(simplify_orDefault):
    st simplify = simplify_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r1):
    c = `as.logical`(r1);
    if c then L13() else L2();
  L9():
    INDICES1 = ld INDICES;
    check L11() else D0();
  L10():
    r = dyn base(<sym INDICES>, "formula");
    goto L1(r);
  D0():
    deopt 2 [INDICES1];
  L2():
    goto L3();
  L3():
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L11():
    INDICES2 = force? INDICES1;
    checkMissing(INDICES2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(INDICES2, "formula", FALSE);
    check L12() else D1();
  L13():
    _formula2varlist = ldf `.formula2varlist`;
    check L14() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  L4(r8):
    r10 = `!`(r8);
    c1 = `as.logical`(r10);
    if c1 then L21() else L5();
  L12():
    goto L1(r2);
  L14():
    p = prom<V +>{
      INDICES3 = ld INDICES;
      INDICES4 = force? INDICES3;
      checkMissing(INDICES4);
      return INDICES4;
    };
    p1 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r5 = dyn _formula2varlist(p, p1);
    check L15() else D3();
  L17():
    INDICES5 = ld INDICES;
    check L19() else D4();
  L18():
    r7 = dyn base1(<sym INDICES>);
    goto L4(r7);
  D3():
    deopt 12 [r5];
  D4():
    deopt 18 [INDICES5];
  L5():
    INDICES9 = ld INDICES;
    check L34() else D12();
  L8():
    r23 = clos inner2501545716;
    st FUNx = r23;
    nrow = ldf nrow;
    check L35() else D13();
  L15():
    st INDICES = r5;
    goto L3();
  L19():
    INDICES6 = force? INDICES5;
    checkMissing(INDICES6);
    is_list = ldf `is.list` in base;
    r9 = dyn is_list(INDICES6);
    check L20() else D5();
  L21():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  D5():
    deopt 21 [r9];
  D12():
    deopt 42 [INDICES9];
  D13():
    deopt 49 [];
  L6(r12):
    st IND = r12;
    deparse = ldf deparse;
    check L26() else D8();
  L20():
    goto L4(r9);
  L22():
    INDICES7 = ld INDICES;
    check L24() else D6();
  L23():
    r11 = dyn base2(<sym INDICES>);
    goto L6(r11);
  L34():
    INDICES10 = force? INDICES9;
    checkMissing(INDICES10);
    st IND = INDICES10;
    goto L8();
  L35():
    p3 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    r25 = dyn nrow(p3);
    check L36() else D14();
  D6():
    deopt 25 [INDICES7];
  D8():
    deopt 31 [];
  D14():
    deopt 51 [r25];
  L24():
    INDICES8 = force? INDICES7;
    checkMissing(INDICES8);
    list = ldf list in base;
    r13 = dyn list(INDICES8);
    check L25() else D7();
  L26():
    p2 = prom<V +>{
      sym3 = ldf substitute;
      base3 = ldf substitute in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      substitute = ldf substitute in base;
      r16 = dyn substitute(<sym INDICES>);
      goto L0(r16);
    L2():
      r14 = dyn base3(<sym INDICES>);
      goto L0(r14);
    };
    r18 = dyn deparse(p2);
    check L27() else D9();
  L36():
    st nd = r25;
    structure = ldf structure;
    check L37() else D15();
  D7():
    deopt 28 [r13];
  D9():
    deopt 33 [r18];
  D15():
    deopt 54 [];
  L25():
    goto L6(r13);
  L27():
    c2 = `is.object`(r18);
    if c2 then L28() else L29(r18);
  L37():
    p6 = prom<V +>{
      eval = ldf eval;
      p4 = prom<V +>{
        sym4 = ldf substitute;
        base4 = ldf substitute in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r27):
        return r27;
      L1():
        substitute1 = ldf substitute in base;
        r28 = dyn substitute1(<lang tapply(seq_len(nd), IND, FUNx, simplify=simplify)>);
        goto L0(r28);
      L2():
        r26 = dyn base4(<lang tapply(seq_len(nd), IND, FUNx, simplify=simplify)>);
        goto L0(r26);
      };
      p5 = prom<V +>{
        data5 = ld data;
        data6 = force? data5;
        checkMissing(data6);
        return data6;
      };
      r31 = dyn eval(p4, p5);
      return r31;
    };
    p7 = prom<V +>{
      match_call = ldf `match.call`;
      r33 = dyn match_call();
      return r33;
    };
    r35 = dyn structure[, call, class](p6, p7, "by");
    check L38() else D16();
  D16():
    deopt 60 [r35];
  L7(dx1):
    l = ld IND;
    names__ = ldf `names<-`;
    check L31() else D10();
  L28():
    dr = tryDispatchBuiltin.1("[", r18);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(r20):
    __ = ldf `[` in base;
    r21 = dyn __(r20, 1);
    goto L7(r21);
  L38():
    popenv;
    return r35;
  D10():
    deopt 38 [dx1, l, dx1];
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L31():
    r22 = dyn names__(l, NULL, dx1);
    check L32() else D11();
  D11():
    deopt 40 [dx1, r22];
  L32():
    st IND = r22;
    goto L8();
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg FUN:cls, reg data:*, reg data1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x1:*, reg x2:V, reg __:cls, reg r:V, reg p:p(V +), reg ddd:*, reg r2:V |
    mkenv;
    st x = x;
    FUN = ldf FUN;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      data = ld data;
      data1 = force? data;
      checkMissing(data1);
      c = `is.object`(data1);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", data1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      x1 = ld x;
      x2 = force? x1;
      __ = ldf `[` in base;
      r = dyn __(data1, x2, <missing>, FALSE);
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