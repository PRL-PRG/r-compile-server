fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1488292473;
    st `.check_vars_numeric` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1488292473(mf) {
  (reg mf:*) -+> V { var mf:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg mf1:*, reg mf2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg mt:*, reg mt1:V, reg attr1:cls, reg r5:V, reg rownames:cls, reg mterms:*, reg mterms1:V, reg p:p(V +), reg r7:V, reg c:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg apply:cls, reg mterms2:*, reg mterms3:V, reg p1:p(V +), reg r11:cls, reg p2:p(V +), reg r13:V, reg __:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg sapply:cls, reg mterms4:*, reg mterms5:V, reg p3:p(V +), reg r18:cls, reg p4:p(V +), reg r20:V, reg any:cls, reg r21:V |
    mkenv;
    st mf = mf;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st mt = r1;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    mf1 = ld mf;
    check L6() else D0();
  L5():
    r = dyn base(<sym mf>, "terms");
    goto L0(r);
  D0():
    deopt 2 [mf1];
  L1(r4):
    st mterms = r4;
    rownames = ldf rownames;
    check L12() else D4();
  L6():
    mf2 = force? mf1;
    checkMissing(mf2);
    attr = ldf attr in base;
    r2 = dyn attr(mf2, "terms");
    check L7() else D1();
  L8():
    mt = ld mt;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym mt>, "factors");
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 10 [mt];
  D4():
    deopt 17 [];
  L7():
    goto L0(r2);
  L10():
    mt1 = force? mt;
    checkMissing(mt1);
    attr1 = ldf attr in base;
    r5 = dyn attr1(mt1, "factors");
    check L11() else D3();
  L12():
    p = prom<V +>{
      mterms = ld mterms;
      mterms1 = force? mterms;
      checkMissing(mterms1);
      return mterms1;
    };
    r7 = dyn rownames(p);
    check L13() else D5();
  D3():
    deopt 14 [r5];
  D5():
    deopt 19 [r7];
  L11():
    goto L1(r5);
  L13():
    c = `is.object`(r7);
    if c then L14() else L15(r7);
  L2(dx1):
    st mterms = dx1;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L14():
    dr = tryDispatchBuiltin.1("[", r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(r9):
    apply = ldf apply;
    check L17() else D6();
  D6():
    deopt 21 [r9];
  L3(r16):
    popenv;
    return r16;
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L17():
    p1 = prom<V +>{
      mterms2 = ld mterms;
      mterms3 = force? mterms2;
      checkMissing(mterms3);
      return mterms3;
    };
    p2 = prom<V +>{
      r11 = clos inner2501545716;
      return r11;
    };
    r13 = dyn apply(p1, 1, p2);
    check L18() else D7();
  L19():
    sapply = ldf sapply;
    check L21() else D8();
  L20():
    r15 = dyn base2(<lang sapply(mterms, function((x=), `||`(is.factor(`[`(mf, , x)), `!`(is.numeric(`[`(mf, , x)))), NULL))>);
    goto L3(r15);
  D7():
    deopt 25 [r9, r13];
  D8():
    deopt 31 [];
  L18():
    __ = ldf `[` in base;
    r14 = dyn __(r9, r13);
    goto L2(r14);
  L21():
    p3 = prom<V +>{
      mterms4 = ld mterms;
      mterms5 = force? mterms4;
      checkMissing(mterms5);
      return mterms5;
    };
    p4 = prom<V +>{
      r18 = clos inner2501545716;
      return r18;
    };
    r20 = dyn sapply(p3, p4);
    check L22() else D9();
  D9():
    deopt 34 [r20];
  L22():
    any = ldf any in base;
    r21 = dyn any(r20);
    check L23() else D10();
  D10():
    deopt 36 [r21];
  L23():
    goto L3(r21);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:V, reg any:cls, reg r3:V |
    mkenv;
    st x = x;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang `>`(x, 0)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    r2 = `>`(x2, 0);
    any = ldf any in base;
    r3 = dyn any(r2);
    check L4() else D1();
  D1():
    deopt 7 [r3];
  L4():
    goto L0(r3);
  }
}