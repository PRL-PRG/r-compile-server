fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st searchpaths = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg search:cls, reg r:V, reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg s:*, reg s1:V, reg r3:I, reg p:p(V +), reg r5:cls, reg p1:p(V +), reg r7:V, reg system_file:cls, reg r8:V, reg l:*, reg c:L, reg r10:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg l5:*, reg r19:V, reg r20:V, reg s2:*, reg s3:V, reg length:cls, reg r21:V, reg ____:cls, reg r22:V, reg grep:cls, reg s4:*, reg s5:V, reg p2:p(V +), reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg m:*, reg m1:V, reg length1:cls, reg r27:V, reg c1:L, reg as_list:cls, reg s6:*, reg s7:V, reg c2:L, reg s9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg m2:*, reg m3:V, reg r28:V, reg __:cls, reg r29:V, reg p3:p(V +), reg r31:V, reg l6:*, reg c3:L, reg r33:V, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r35:V, reg dx5:V, reg m4:*, reg m5:V, reg r36:V, reg ___:cls, reg r37:V, reg unlist:cls, reg paths:*, reg paths1:V, reg p4:p(V +), reg r40:V |
    mkenv;
    search = ldf search;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    r = dyn search();
    check L7() else D1();
  D1():
    deopt 2 [r];
  L7():
    st s = r;
    lapply = ldf lapply;
    check L8() else D2();
  D2():
    deopt 5 [];
  L8():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      r3 = seq_along(s1);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym s>);
      goto L0(r1);
    };
    p1 = prom<V +>{
      r5 = clos inner3002224933;
      return r5;
    };
    r7 = dyn lapply(p, p1);
    check L9() else D3();
  D3():
    deopt 8 [r7];
  L9():
    st paths = r7;
    system_file = ldf `system.file`;
    check L10() else D4();
  D4():
    deopt 11 [];
  L10():
    r8 = dyn system_file();
    check L11() else D5();
  D5():
    deopt 12 [r8];
  L11():
    l = ld paths;
    c = `is.object`(l);
    if c then L12() else L13(r8, l);
  L0(dx1):
    st paths = dx1;
    grep = ldf grep;
    check L19() else D8();
  L12():
    dr = tryDispatchBuiltin.0("[[<-", l, r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(r8, dr);
  L13(r10, l2):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D8():
    deopt 23 [];
  L1(r18, l5, r19, r20):
    ____ = ldf `[[<-` in base;
    r22 = dyn ____(l5, r19, r20);
    goto L0(r22);
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L15():
    s2 = ld s;
    check L17() else D6();
  L16():
    r17 = dyn base1(<sym s>);
    goto L1(r10, l2, r8, r17);
  L19():
    p2 = prom<V +>{
      s4 = ld s;
      s5 = force? s4;
      checkMissing(s5);
      return s5;
    };
    r24 = dyn grep("^package:", p2);
    check L20() else D9();
  D6():
    deopt 16 [r10, l2, r8, s2];
  D9():
    deopt 26 [r24];
  L17():
    s3 = force? s2;
    checkMissing(s3);
    length = ldf length in base;
    r21 = dyn length(s3);
    check L18() else D7();
  L20():
    st m = r24;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  D7():
    deopt 19 [r10, l2, r8, r21];
  L2(r26):
    c1 = `as.logical`(r26);
    if c1 then L25() else L3();
  L18():
    goto L1(r10, l2, r8, r21);
  L21():
    m = ld m;
    check L23() else D10();
  L22():
    r25 = dyn base2(<sym m>);
    goto L2(r25);
  D10():
    deopt 30 [m];
  L3():
    goto L5();
  L5():
    unlist = ldf unlist;
    check L33() else D15();
  L23():
    m1 = force? m;
    checkMissing(m1);
    length1 = ldf length in base;
    r27 = dyn length1(m1);
    check L24() else D11();
  L25():
    as_list = ldf `as.list`;
    check L26() else D12();
  D11():
    deopt 33 [r27];
  D12():
    deopt 35 [];
  D15():
    deopt 47 [];
  L24():
    goto L2(r27);
  L26():
    p3 = prom<V +>{
      s6 = ld s;
      s7 = force? s6;
      checkMissing(s7);
      c2 = `is.object`(s7);
      if c2 then L1() else L2(s7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", s7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(s9):
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      r28 = `-`(<missing>, m3);
      __ = ldf `[` in base;
      r29 = dyn __(s9, r28);
      goto L0(r29);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r31 = dyn as_list(p3);
    check L27() else D13();
  L33():
    p4 = prom<V +>{
      paths = ld paths;
      paths1 = force? paths;
      checkMissing(paths1);
      return paths1;
    };
    r40 = dyn unlist(p4);
    check L34() else D16();
  D13():
    deopt 37 [r31];
  D16():
    deopt 49 [r40];
  L27():
    l6 = ld paths;
    c3 = `is.object`(l6);
    if c3 then L28() else L29(r31, l6);
  L34():
    popenv;
    return r40;
  L4(r35, dx5):
    st paths = dx5;
    goto L5();
  L28():
    dr4 = tryDispatchBuiltin.0("[<-", l6, r31);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L30() else L29(r31, dr4);
  L29(r33, l8):
    m4 = ld m;
    check L31() else D14();
  D14():
    deopt 39 [r33, l8, r31, m4];
  L30():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(r31, dx4);
  L31():
    m5 = force? m4;
    checkMissing(m5);
    r36 = `-`(<missing>, m5);
    ___ = ldf `[<-` in base;
    r37 = dyn ___(l8, r31, r36);
    goto L4(r33, r37);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg i1:*, reg i2:V, reg as_environment:cls, reg r4:V, reg attr:cls, reg r5:V |
    mkenv;
    st i = i;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang as.environment(i)>, "path");
    goto L0(r);
  L1(r3):
    attr = ldf attr in base;
    r5 = dyn attr(r3, "path");
    check L8() else D2();
  L4():
    i1 = ld i;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym i>);
    goto L1(r2);
  D0():
    deopt 4 [i1];
  D2():
    deopt 10 [r5];
  L6():
    i2 = force? i1;
    checkMissing(i2);
    as_environment = ldf `as.environment` in base;
    r4 = dyn as_environment(i2);
    check L7() else D1();
  L8():
    goto L0(r5);
  D1():
    deopt 7 [r4];
  L7():
    goto L1(r4);
  }
}