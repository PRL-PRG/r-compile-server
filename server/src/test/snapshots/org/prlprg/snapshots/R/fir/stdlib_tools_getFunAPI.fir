fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st getFunAPI = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg lapply:cls, reg apitypes:*, reg apitypes1:V, reg p1:p(V +), reg getOneFunAPI:*, reg getOneFunAPI1:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg unique:cls, reg val:*, reg val1:V, reg p4:p(V +), reg r10:V, reg by:cls, reg val2:*, reg val3:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg val4:*, reg val5:V, reg c1:L, reg val7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg list:cls, reg r15:V, reg p6:p(V +), reg r17:cls, reg p7:p(V +), reg r19:V, reg do_call1:cls, reg rbind2:*, reg rbind3:V, reg p8:p(V +), reg val8:*, reg val9:V, reg p9:p(V +), reg r22:V, reg l:*, reg c2:L, reg r24:dots, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r27:V, reg l3:*, reg rownames__:cls, reg r28:V, reg val10:*, reg val11:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st apitypes = r1;
    do_call = ldf `do.call`;
    check L4() else D1();
  L1():
    c = ldf c in base;
    r2 = dyn c("api", "eapi", "emb");
    check L3() else D0();
  L2():
    r = dyn base("api", "eapi", "emb");
    goto L0(r);
  D0():
    deopt 6 [r2];
  D1():
    deopt 9 [];
  L3():
    goto L0(r2);
  L4():
    p = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        apitypes = ld apitypes;
        apitypes1 = force? apitypes;
        checkMissing(apitypes1);
        return apitypes1;
      };
      p2 = prom<V +>{
        getOneFunAPI = ld getOneFunAPI;
        getOneFunAPI1 = force? getOneFunAPI;
        checkMissing(getOneFunAPI1);
        return getOneFunAPI1;
      };
      r6 = dyn lapply(p1, p2);
      return r6;
    };
    r8 = dyn do_call(p, p3);
    check L5() else D2();
  D2():
    deopt 12 [r8];
  L5():
    st val = r8;
    unique = ldf unique;
    check L6() else D3();
  D3():
    deopt 15 [];
  L6():
    p4 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      return val1;
    };
    r10 = dyn unique(p4);
    check L7() else D4();
  D4():
    deopt 17 [r10];
  L7():
    st val = r10;
    by = ldf by;
    check L8() else D5();
  D5():
    deopt 20 [];
  L8():
    p5 = prom<V +>{
      val2 = ld val;
      val3 = force? val2;
      checkMissing(val3);
      return val3;
    };
    p6 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      val4 = ld val;
      val5 = force? val4;
      checkMissing(val5);
      c1 = `is.object`(val5);
      if c1 then L4() else L5(val5);
    L2():
      r12 = dyn base1(<lang `$`(val, unmapped)>);
      goto L0(r12);
    L3(dx1):
      list = ldf list in base;
      r15 = dyn list(dx1);
      goto L0(r15);
    L4():
      dr = tryDispatchBuiltin.1("$", val5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(val7):
      r14 = `$`(val7, <sym unmapped>);
      goto L3(r14);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    p7 = prom<V +>{
      r17 = clos inner2501545716;
      return r17;
    };
    r19 = dyn by[, , , simplify](p5, p6, p7, FALSE);
    check L9() else D6();
  D6():
    deopt 26 [r19];
  L9():
    st val = r19;
    do_call1 = ldf `do.call`;
    check L10() else D7();
  D7():
    deopt 29 [];
  L10():
    p8 = prom<V +>{
      rbind2 = ld rbind;
      rbind3 = force? rbind2;
      checkMissing(rbind3);
      return rbind3;
    };
    p9 = prom<V +>{
      val8 = ld val;
      val9 = force? val8;
      checkMissing(val9);
      return val9;
    };
    r22 = dyn do_call1(p8, p9);
    check L11() else D8();
  D8():
    deopt 32 [r22];
  L11():
    st val = r22;
    l = ld val;
    c2 = `is.object`(l);
    if c2 then L13() else L14(NULL, l);
  L12(dx3):
    st val = dx3;
    l3 = ld val;
    rownames__ = ldf `rownames<-`;
    check L16() else D9();
  L13():
    dr2 = tryDispatchBuiltin.0("$<-", l, NULL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(NULL, dr2);
  L14(r24, l2):
    r27 = `$<-`(l2, <sym unmapped>, NULL);
    goto L12(r27);
  D9():
    deopt 42 [NULL, l3, NULL];
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L16():
    r28 = dyn rownames__(l3, NULL, NULL);
    check L17() else D10();
  D10():
    deopt 44 [NULL, r28];
  L17():
    st val = r28;
    val10 = ld val;
    check L18() else D11();
  D11():
    deopt 46 [val10];
  L18():
    val11 = force? val10;
    checkMissing(val11);
    popenv;
    return val11;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg nrow:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg x7:*, reg x8:V |
    mkenv;
    st x = x;
    nrow = ldf nrow;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn nrow(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    r2 = `>`(r1, 1.0);
    c = `as.logical`(r2);
    if c then L4() else L0();
  L0():
    x7 = ld x;
    check L10() else D3();
  L4():
    x3 = ld x;
    check L5() else D2();
  D2():
    deopt 6 [x3];
  D3():
    deopt 12 [x7];
  L5():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L6() else L7();
  L10():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  L1(dx1):
    popenv;
    return dx1;
  L6():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7();
  L7():
    __ = ldf `[` in base;
    r3 = dyn __(x4, 1.0, <missing>);
    goto L1(r3);
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}