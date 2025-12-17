fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2227460651;
    st `.Rd_drop_nodes` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2227460651(x, predicate) {
  (reg x:*, reg predicate:*) -+> V { var x:*, var predicate:*, reg r:cls, reg recurse:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r2:V |
    mkenv;
    st x = x;
    st predicate = predicate;
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
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_list:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg e3:*, reg e4:V, reg attributes:cls, reg r5:V, reg lapply:cls, reg e5:*, reg e6:V, reg c1:L, reg e8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg e9:*, reg e10:V, reg p:p(V +), reg predicate:*, reg predicate1:V, reg p1:p(V +), reg r8:V, reg r9:V, reg __:cls, reg r10:V, reg p2:p(V +), reg recurse:*, reg recurse1:V, reg p3:p(V +), reg r13:V, reg a:*, reg a1:V, reg l:*, reg attributes__:cls, reg r14:V, reg e11:*, reg e12:V |
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
    e11 = ld e;
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
    deopt 28 [e11];
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
    e12 = force? e11;
    checkMissing(e12);
    popenv;
    return e12;
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
    p2 = prom<V +>{
      e5 = ld e;
      e6 = force? e5;
      checkMissing(e6);
      c1 = `is.object`(e6);
      if c1 then L1() else L2(e6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", e6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e8):
      vapply = ldf vapply;
      p = prom<V +>{
        e9 = ld e;
        e10 = force? e9;
        checkMissing(e10);
        return e10;
      };
      p1 = prom<V +>{
        predicate = ld predicate;
        predicate1 = force? predicate;
        checkMissing(predicate1);
        return predicate1;
      };
      r8 = dyn vapply(p, p1, NA_LGL);
      r9 = `!`(r8);
      __ = ldf `[` in base;
      r10 = dyn __(e8, r9);
      goto L0(r10);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r13 = dyn lapply(p2, p3);
    check L14() else D5();
  D3():
    deopt 11 [r5];
  D5():
    deopt 17 [r13];
  L12():
    goto L2(r5);
  L14():
    st e = r13;
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
    r14 = dyn attributes__(l, NULL, a1);
    check L17() else D8();
  D8():
    deopt 24 [a1, r14];
  L17():
    st e = r14;
    goto L3();
  }
}