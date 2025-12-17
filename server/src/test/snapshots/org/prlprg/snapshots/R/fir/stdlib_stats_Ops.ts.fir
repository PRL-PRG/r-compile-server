fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4284372013;
    st `Ops.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4284372013(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg NextMethod:cls, reg _Generic:*, reg _Generic1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg _Method:*, reg _Method1:V, reg nzchar:cls, reg r9:V, reg r10:V, reg any:cls, reg r11:V, reg c1:L, reg NextMethod1:cls, reg _Generic2:*, reg _Generic3:V, reg p1:p(V +), reg r13:V, reg NCOL:cls, reg e3:*, reg e4:V, reg p2:p(V +), reg r15:V, reg NCOL1:cls, reg e5:*, reg e6:V, reg p3:p(V +), reg r17:V, reg _cbind_ts:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg e7:*, reg e8:V, reg e9:*, reg e10:V, reg list:cls, reg r20:V, reg p4:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg deparse:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg substitute:cls, reg r26:V, reg p5:p(V +), reg r28:V, reg c2:L, reg r30:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r31:V, reg deparse1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg substitute1:cls, reg r34:V, reg p6:p(V +), reg r36:V, reg c3:L, reg r38:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r39:V, reg c4:cls, reg r40:V, reg p7:p(V +), reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg e11:*, reg e12:V, reg is_matrix:cls, reg r45:V, reg c5:L, reg e13:*, reg e14:V, reg c6:L, reg e16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg nc1:*, reg nc2:V, reg r46:V, reg __2:cls, reg r47:V, reg dx6:V, reg e17:*, reg e18:V, reg c7:L, reg dr6:V, reg dc3:L, reg dx7:V, reg __3:cls, reg r48:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg r50:V, reg e21:*, reg e22:V, reg is_matrix1:cls, reg r51:V, reg c8:L, reg e23:*, reg e24:V, reg c9:L, reg e26:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg nc3:*, reg nc4:V, reg nc5:*, reg nc6:V, reg r52:V, reg r53:V, reg __4:cls, reg r54:V, reg dx10:V, reg e27:*, reg e28:V, reg c10:L, reg e30:V, reg dr10:V, reg dc5:L, reg dx11:V, reg nc7:*, reg nc8:V, reg r55:V, reg __5:cls, reg r56:V, reg NextMethod2:cls, reg _Generic4:*, reg _Generic5:V, reg p8:p(V +), reg r58:V |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    c = `as.logical`(r1);
    if c then L15() else L1();
  L13():
    missing = ldf missing in base;
    r2 = dyn missing(<sym e2>);
    goto L0(r2);
  L14():
    r = dyn base(<sym e2>);
    goto L0(r);
  L1():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L15():
    NextMethod = ldf NextMethod;
    check L16() else D0();
  D0():
    deopt 4 [];
  L2(r6):
    c1 = `as.logical`(r6);
    if c1 then L26() else L4();
  L16():
    p = prom<V +>{
      _Generic = ld `.Generic`;
      _Generic1 = force? _Generic;
      checkMissing(_Generic1);
      return _Generic1;
    };
    r4 = dyn NextMethod(p);
    check L17() else D1();
  L19():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L20():
    r5 = dyn base1(<lang `!`(nzchar(.Method))>);
    goto L2(r5);
  D1():
    deopt 6 [r4];
  L3(r8):
    r10 = `!`(r8);
    any = ldf any in base;
    r11 = dyn any(r10);
    check L25() else D4();
  L4():
    NCOL = ldf NCOL;
    check L30() else D7();
  L17():
    popenv;
    return r4;
  L21():
    _Method = ld `.Method`;
    check L23() else D2();
  L22():
    r7 = dyn base2(<sym .Method>);
    goto L3(r7);
  L26():
    NextMethod1 = ldf NextMethod;
    check L27() else D5();
  D2():
    deopt 11 [_Method];
  D4():
    deopt 17 [r11];
  D5():
    deopt 19 [];
  D7():
    deopt 23 [];
  L23():
    _Method1 = force? _Method;
    checkMissing(_Method1);
    nzchar = ldf nzchar in base;
    r9 = dyn nzchar(_Method1);
    check L24() else D3();
  L25():
    goto L2(r11);
  L27():
    p1 = prom<V +>{
      _Generic2 = ld `.Generic`;
      _Generic3 = force? _Generic2;
      checkMissing(_Generic3);
      return _Generic3;
    };
    r13 = dyn NextMethod1(p1);
    check L28() else D6();
  L30():
    p2 = prom<V +>{
      e3 = ld e1;
      e4 = force? e3;
      checkMissing(e4);
      return e4;
    };
    r15 = dyn NCOL(p2);
    check L31() else D8();
  D3():
    deopt 14 [r9];
  D6():
    deopt 21 [r13];
  D8():
    deopt 25 [r15];
  L24():
    goto L3(r9);
  L28():
    popenv;
    return r13;
  L31():
    st nc1 = r15;
    NCOL1 = ldf NCOL;
    check L32() else D9();
  D9():
    deopt 28 [];
  L32():
    p3 = prom<V +>{
      e5 = ld e2;
      e6 = force? e5;
      checkMissing(e6);
      return e6;
    };
    r17 = dyn NCOL1(p3);
    check L33() else D10();
  D10():
    deopt 30 [r17];
  L33():
    st nc2 = r17;
    _cbind_ts = ldf `.cbind.ts`;
    check L34() else D11();
  D11():
    deopt 33 [];
  L34():
    p4 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      e7 = ld e1;
      e8 = force? e7;
      checkMissing(e8);
      e9 = ld e2;
      e10 = force? e9;
      checkMissing(e10);
      list = ldf list in base;
      r20 = dyn list(e8, e10);
      goto L0(r20);
    L2():
      r18 = dyn base3(<sym e1>, <sym e2>);
      goto L0(r18);
    };
    p7 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L3() else L4();
    L0(r23):
      return r23;
    L3():
      deparse = ldf deparse;
      p5 = prom<V +>{
        sym5 = ldf substitute;
        base5 = ldf substitute in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r25):
        return r25;
      L1():
        substitute = ldf substitute in base;
        r26 = dyn substitute(<sym e1>);
        goto L0(r26);
      L2():
        r24 = dyn base5(<sym e1>);
        goto L0(r24);
      };
      r28 = dyn deparse(p5);
      c2 = `is.object`(r28);
      if c2 then L5() else L6(r28);
    L4():
      r22 = dyn base4(<lang `[`(deparse(substitute(e1)), 1)>, <lang `[`(deparse(substitute(e2)), 1)>);
      goto L0(r22);
    L1(dx1):
      deparse1 = ldf deparse;
      p6 = prom<V +>{
        sym6 = ldf substitute;
        base6 = ldf substitute in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r33):
        return r33;
      L1():
        substitute1 = ldf substitute in base;
        r34 = dyn substitute1(<sym e2>);
        goto L0(r34);
      L2():
        r32 = dyn base6(<sym e2>);
        goto L0(r32);
      };
      r36 = dyn deparse1(p6);
      c3 = `is.object`(r36);
      if c3 then L8() else L9(r36);
    L5():
      dr = tryDispatchBuiltin.1("[", r28);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(r30):
      __ = ldf `[` in base;
      r31 = dyn __(r30, 1);
      goto L1(r31);
    L2(dx3):
      c4 = ldf c in base;
      r40 = dyn c4(dx1, dx3);
      goto L0(r40);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      dr2 = tryDispatchBuiltin.1("[", r36);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L10() else L9(dr2);
    L9(r38):
      __1 = ldf `[` in base;
      r39 = dyn __1(r38, 1);
      goto L2(r39);
    L10():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L2(dx2);
    };
    r42 = dyn _cbind_ts[, , union](p4, p7, FALSE);
    check L35() else D12();
  D12():
    deopt 38 [r42];
  L35():
    st e12 = r42;
    sym7 = ldf `is.matrix`;
    base7 = ldf `is.matrix` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L36() else L37();
  L5(r44):
    c5 = `as.logical`(r44);
    if c5 then L40() else L6();
  L36():
    e11 = ld e1;
    check L38() else D13();
  L37():
    r43 = dyn base7(<sym e1>);
    goto L5(r43);
  D13():
    deopt 42 [e11];
  L6():
    e17 = ld e12;
    check L47() else D17();
  L8(dx6):
    st e1 = dx6;
    sym8 = ldf `is.matrix`;
    base8 = ldf `is.matrix` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L51() else L52();
  L38():
    e12 = force? e11;
    checkMissing(e12);
    is_matrix = ldf `is.matrix` in base;
    r45 = dyn is_matrix(e12);
    check L39() else D14();
  L40():
    e13 = ld e12;
    check L41() else D15();
  D14():
    deopt 45 [r45];
  D15():
    deopt 46 [e13];
  D17():
    deopt 57 [e17];
  L9(r50):
    c8 = `as.logical`(r50);
    if c8 then L55() else L10();
  L39():
    goto L5(r45);
  L41():
    e14 = force? e13;
    checkMissing(e14);
    c6 = `is.object`(e14);
    if c6 then L42() else L43(e14);
  L47():
    e18 = force? e17;
    checkMissing(e18);
    c7 = `is.object`(e18);
    if c7 then L48() else L49();
  L51():
    e21 = ld e2;
    check L53() else D18();
  L52():
    r49 = dyn base8(<sym e2>);
    goto L9(r49);
  D18():
    deopt 66 [e21];
  L7(dx5):
    goto L8(dx5);
  L10():
    e27 = ld e12;
    check L63() else D23();
  L12(dx10):
    st e2 = dx10;
    NextMethod2 = ldf NextMethod;
    check L68() else D25();
  L42():
    dr4 = tryDispatchBuiltin.1("[", e14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(dr4);
  L43(e16):
    nc1 = ld nc1;
    check L45() else D16();
  L48():
    dr6 = tryDispatchBuiltin.1("[", e18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L50() else L49();
  L49():
    __3 = ldf `[` in base;
    r48 = dyn __3(e18, <missing>, 1.0);
    goto L8(r48);
  L53():
    e22 = force? e21;
    checkMissing(e22);
    is_matrix1 = ldf `is.matrix` in base;
    r51 = dyn is_matrix1(e22);
    check L54() else D19();
  L55():
    e23 = ld e12;
    check L56() else D20();
  D16():
    deopt 50 [e16, 1, nc1];
  D19():
    deopt 69 [r51];
  D20():
    deopt 70 [e23];
  D23():
    deopt 83 [e27];
  D25():
    deopt 94 [];
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L45():
    nc2 = force? nc1;
    checkMissing(nc2);
    r46 = `:`(1, nc2);
    __2 = ldf `[` in base;
    r47 = dyn __2(e14, <missing>, r46, FALSE);
    goto L7(r47);
  L50():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx7);
  L54():
    goto L9(r51);
  L56():
    e24 = force? e23;
    checkMissing(e24);
    c9 = `is.object`(e24);
    if c9 then L57() else L58(e24);
  L63():
    e28 = force? e27;
    checkMissing(e28);
    c10 = `is.object`(e28);
    if c10 then L64() else L65(e28);
  L68():
    p8 = prom<V +>{
      _Generic4 = ld `.Generic`;
      _Generic5 = force? _Generic4;
      checkMissing(_Generic5);
      return _Generic5;
    };
    r58 = dyn NextMethod2(p8);
    check L69() else D26();
  D26():
    deopt 96 [r58];
  L11(dx9):
    goto L12(dx9);
  L57():
    dr8 = tryDispatchBuiltin.1("[", e24);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L59() else L58(dr8);
  L58(e26):
    nc3 = ld nc1;
    check L60() else D21();
  L64():
    dr10 = tryDispatchBuiltin.1("[", e28);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L66() else L65(dr10);
  L65(e30):
    nc7 = ld nc1;
    check L67() else D24();
  L69():
    popenv;
    return r58;
  D21():
    deopt 73 [e26, nc3];
  D24():
    deopt 86 [e30, nc7];
  L59():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L11(dx8);
  L60():
    nc4 = force? nc3;
    checkMissing(nc4);
    nc5 = ld nc2;
    check L61() else D22();
  L66():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L12(dx11);
  L67():
    nc8 = force? nc7;
    checkMissing(nc8);
    r55 = `+`(nc8, 1.0);
    __5 = ldf `[` in base;
    r56 = dyn __5(e28, <missing>, r55);
    goto L12(r56);
  D22():
    deopt 75 [e26, nc4, 1, nc5];
  L61():
    nc6 = force? nc5;
    checkMissing(nc6);
    r52 = `:`(1, nc6);
    r53 = `+`(nc4, r52);
    __4 = ldf `[` in base;
    r54 = dyn __4(e24, <missing>, r53, FALSE);
    goto L11(r54);
  }
}