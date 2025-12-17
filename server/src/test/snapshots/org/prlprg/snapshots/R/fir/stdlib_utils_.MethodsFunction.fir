fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2209214580;
    st `.MethodsFunction` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2209214580(s3, s4, byclass) {
  (reg s3:*, reg s4:*, reg byclass:*) -+> V { var s3:*, var s4:*, var byclass:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg s5:*, reg s6:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg s7:*, reg s8:V, reg attr1:cls, reg r5:V, reg rbind:cls, reg info3:*, reg info4:V, reg p:p(V +), reg info5:*, reg info6:V, reg p1:p(V +), reg r8:V, reg duplicated:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg rownames:cls, reg info7:*, reg info8:V, reg p2:p(V +), reg r12:V, reg rownames1:cls, reg info9:*, reg info10:V, reg p3:p(V +), reg r14:V, reg c:cls, reg r15:V, reg p4:p(V +), reg r17:V, reg info11:*, reg info12:V, reg c1:L, reg info14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dups:*, reg dups1:V, reg r18:V, reg __:cls, reg r19:V, reg info15:*, reg info16:V, reg c2:L, reg info18:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg order:cls, reg rownames2:cls, reg info19:*, reg info20:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg r23:V, reg __1:cls, reg r24:V, reg structure:cls, reg rownames3:cls, reg info21:*, reg info22:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg info23:*, reg info24:V, reg p9:p(V +), reg byclass1:*, reg byclass2:V, reg p10:p(V +), reg r30:V |
    mkenv;
    st s3 = s3;
    st s4 = s4;
    st byclass = byclass;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st info3 = r1;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    s5 = ld s3;
    check L6() else D0();
  L5():
    r = dyn base(<sym s3>, "info");
    goto L0(r);
  D0():
    deopt 2 [s5];
  L1(r4):
    st info4 = r4;
    rbind = ldf rbind;
    check L12() else D4();
  L6():
    s6 = force? s5;
    checkMissing(s6);
    attr = ldf attr in base;
    r2 = dyn attr(s6, "info");
    check L7() else D1();
  L8():
    s7 = ld s4;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym s4>, "info");
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 10 [s7];
  D4():
    deopt 17 [];
  L7():
    goto L0(r2);
  L10():
    s8 = force? s7;
    checkMissing(s8);
    attr1 = ldf attr in base;
    r5 = dyn attr1(s8, "info");
    check L11() else D3();
  L12():
    p = prom<V +>{
      info3 = ld info3;
      info4 = force? info3;
      checkMissing(info4);
      return info4;
    };
    p1 = prom<V +>{
      info5 = ld info4;
      info6 = force? info5;
      checkMissing(info6);
      return info6;
    };
    r8 = dyn rbind(p, p1);
    check L13() else D5();
  D3():
    deopt 14 [r5];
  D5():
    deopt 20 [r8];
  L11():
    goto L1(r5);
  L13():
    st info = r8;
    duplicated = ldf duplicated;
    check L14() else D6();
  D6():
    deopt 23 [];
  L14():
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      rownames = ldf rownames;
      p2 = prom<V +>{
        info7 = ld info3;
        info8 = force? info7;
        checkMissing(info8);
        return info8;
      };
      r12 = dyn rownames(p2);
      rownames1 = ldf rownames;
      p3 = prom<V +>{
        info9 = ld info4;
        info10 = force? info9;
        checkMissing(info10);
        return info10;
      };
      r14 = dyn rownames1(p3);
      c = ldf c in base;
      r15 = dyn c(r12, r14);
      goto L0(r15);
    L2():
      r9 = dyn base2(<lang rownames(info3)>, <lang rownames(info4)>);
      goto L0(r9);
    };
    r17 = dyn duplicated(p4);
    check L15() else D7();
  D7():
    deopt 25 [r17];
  L15():
    st dups = r17;
    info11 = ld info;
    check L16() else D8();
  D8():
    deopt 27 [info11];
  L16():
    info12 = force? info11;
    checkMissing(info12);
    c1 = `is.object`(info12);
    if c1 then L17() else L18(info12);
  L2(dx1):
    st info = dx1;
    info15 = ld info;
    check L21() else D10();
  L17():
    dr = tryDispatchBuiltin.1("[", info12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(info14):
    dups = ld dups;
    check L20() else D9();
  D9():
    deopt 29 [info14, dups];
  D10():
    deopt 38 [info15];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L20():
    dups1 = force? dups;
    checkMissing(dups1);
    r18 = `!`(dups1);
    __ = ldf `[` in base;
    r19 = dyn __(info12, r18, <missing>, FALSE);
    goto L2(r19);
  L21():
    info16 = force? info15;
    checkMissing(info16);
    c2 = `is.object`(info16);
    if c2 then L22() else L23(info16);
  L3(dx3):
    st info = dx3;
    structure = ldf structure;
    check L27() else D13();
  L22():
    dr2 = tryDispatchBuiltin.1("[", info16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(dr2);
  L23(info18):
    order = ldf order;
    check L25() else D11();
  D11():
    deopt 41 [info18];
  D13():
    deopt 51 [];
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L25():
    p6 = prom<V +>{
      rownames2 = ldf rownames;
      p5 = prom<V +>{
        info19 = ld info;
        info20 = force? info19;
        checkMissing(info20);
        return info20;
      };
      r21 = dyn rownames2(p5);
      return r21;
    };
    r23 = dyn order(p6);
    check L26() else D12();
  L27():
    p8 = prom<V +>{
      rownames3 = ldf rownames;
      p7 = prom<V +>{
        info21 = ld info;
        info22 = force? info21;
        checkMissing(info22);
        return info22;
      };
      r26 = dyn rownames3(p7);
      return r26;
    };
    p9 = prom<V +>{
      info23 = ld info;
      info24 = force? info23;
      checkMissing(info24);
      return info24;
    };
    p10 = prom<V +>{
      byclass1 = ld byclass;
      byclass2 = force? byclass1;
      checkMissing(byclass2);
      return byclass2;
    };
    r30 = dyn structure[, info, byclass, class](p8, p9, p10, "MethodsFunction");
    check L28() else D14();
  D12():
    deopt 43 [info18, r23];
  D14():
    deopt 59 [r30];
  L26():
    __1 = ldf `[` in base;
    r24 = dyn __1(info16, r23, <missing>, FALSE);
    goto L3(r24);
  L28():
    popenv;
    return r30;
  }
}