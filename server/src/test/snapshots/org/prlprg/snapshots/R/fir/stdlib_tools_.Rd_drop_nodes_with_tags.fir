fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1508225857;
    st `.Rd_drop_nodes_with_tags` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1508225857(x, tags) {
  (reg x:*, reg tags:*) -+> V { var x:*, var tags:*, reg r:cls, reg recurse:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r2:V |
    mkenv;
    st x = x;
    st tags = tags;
    r = clos inner3708401697;
    st recurse = r;
    recurse = ldf recurse;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn recurse(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_list:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg e3:*, reg e4:V, reg attributes:cls, reg r5:V, reg lapply:cls, reg e5:*, reg e6:V, reg c1:L, reg e8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg e11:V, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg e14:V, reg r9:V, reg RdTags:cls, reg e15:*, reg e16:V, reg p:p(V +), reg r11:V, reg tags:*, reg tags1:V, reg match:cls, reg r12:V, reg is_na:cls, reg r13:V, reg __:cls, reg r14:V, reg p1:p(V +), reg recurse:*, reg recurse1:V, reg p2:p(V +), reg r17:V, reg a:*, reg a1:V, reg l:*, reg attributes__:cls, reg r18:V, reg e17:*, reg e18:V |
    mkenv;
    st e = e;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L8() else L1();
  L4():
    e1 = ld e;
    check L6() else D0();
  L5():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1():
    goto L3();
  L3():
    e17 = ld e;
    check L19() else D9();
  L6():
    e2 = force? e1;
    checkMissing(e2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(e2);
    check L7() else D1();
  L8():
    sym1 = ldf attributes;
    base1 = ldf attributes in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D1():
    deopt 5 [r2];
  D9():
    deopt 28 [e17];
  L2(r4):
    st a = r4;
    lapply = ldf lapply;
    check L13() else D4();
  L7():
    goto L0(r2);
  L9():
    e3 = ld e;
    check L11() else D2();
  L10():
    r3 = dyn base1(<sym e>);
    goto L2(r3);
  L19():
    e18 = force? e17;
    checkMissing(e18);
    popenv;
    return e18;
  D2():
    deopt 8 [e3];
  D4():
    deopt 14 [];
  L11():
    e4 = force? e3;
    checkMissing(e4);
    attributes = ldf attributes in base;
    r5 = dyn attributes(e4);
    check L12() else D3();
  L13():
    p1 = prom<V +>{
      e5 = ld e;
      e6 = force? e5;
      checkMissing(e6);
      c1 = `is.object`(e6);
      if c1 then L3() else L4(e6);
    L0(dx1):
      return dx1;
    L3():
      dr = tryDispatchBuiltin.1("[", e6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L5() else L4(dr);
    L4(e8):
      sym2 = ldf `is.na`;
      base2 = ldf `is.na` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L6() else L7();
    L1(e11, r7):
      __ = ldf `[` in base;
      r14 = dyn __(e11, r7);
      goto L0(r14);
    L5():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L6():
      sym3 = ldf match;
      base3 = ldf match in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L8() else L9();
    L7():
      r6 = dyn base2(<lang match(RdTags(e), tags)>);
      goto L1(e8, r6);
    L2(e14, r9):
      is_na = ldf `is.na` in base;
      r13 = dyn is_na(r9);
      goto L1(e14, r13);
    L8():
      RdTags = ldf RdTags;
      p = prom<V +>{
        e15 = ld e;
        e16 = force? e15;
        checkMissing(e16);
        return e16;
      };
      r11 = dyn RdTags(p);
      tags = ld tags;
      tags1 = force? tags;
      checkMissing(tags1);
      match = ldf match in base;
      r12 = dyn match(r11, tags1, NA_INT, NULL);
      goto L2(e8, r12);
    L9():
      r8 = dyn base3(<lang RdTags(e)>, <sym tags>);
      goto L2(e8, r8);
    };
    p2 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r17 = dyn lapply(p1, p2);
    check L14() else D5();
  D3():
    deopt 11 [r5];
  D5():
    deopt 17 [r17];
  L12():
    goto L2(r5);
  L14():
    st e = r17;
    a = ld a;
    check L15() else D6();
  D6():
    deopt 19 [a];
  L15():
    a1 = force? a;
    checkMissing(a1);
    l = ld e;
    attributes__ = ldf `attributes<-`;
    check L16() else D7();
  D7():
    deopt 22 [a1, l, a1];
  L16():
    r18 = dyn attributes__(l, NULL, a1);
    check L17() else D8();
  D8():
    deopt 24 [a1, r18];
  L17():
    st e = r18;
    goto L3();
  }
}