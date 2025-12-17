fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2227460651;
    st `.Rd_find_nodes` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2227460651(x, predicate) {
  (reg x:*, reg predicate:*) -+> V { var x:*, var predicate:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg r3:cls, reg lapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg recurse:*, reg recurse1:V, reg p1:p(V +), reg r6:V, reg nodes:*, reg nodes1:V |
    mkenv;
    st x = x;
    st predicate = predicate;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st nodes = r1;
    r3 = clos inner3708401697;
    st recurse = r3;
    lapply = ldf lapply;
    check L4() else D1();
  L1():
    list = ldf list in base;
    r2 = dyn list();
    check L3() else D0();
  L2():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 9 [];
  L3():
    goto L0(r2);
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r6 = dyn lapply(p, p1);
    check L5() else D2();
  D2():
    deopt 12 [r6];
  L5():
    nodes = ld nodes;
    check L6() else D3();
  D3():
    deopt 13 [nodes];
  L6():
    nodes1 = force? nodes;
    checkMissing(nodes1);
    popenv;
    return nodes1;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg predicate:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg nodes:*, reg nodes1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg e3:*, reg e4:V, reg list:cls, reg r6:V, reg c1:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg e5:*, reg e6:V, reg is_list:cls, reg r11:V, reg c2:L, reg lapply:cls, reg e7:*, reg e8:V, reg p1:p(V +), reg recurse:*, reg recurse1:V, reg p2:p(V +), reg r14:V |
    mkenv;
    st e = e;
    predicate = ldf predicate;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r1 = dyn predicate(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    c = `as.logical`(r1);
    if c then L8() else L0();
  L0():
    goto L3();
  L3():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L8():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r3):
    sst nodes = r3;
    goto L3();
  L4(r10):
    c2 = `as.logical`(r10);
    if c2 then L22() else L5();
  L9():
    nodes = ld nodes;
    check L11() else D2();
  L10():
    r2 = dyn base(<sym nodes>, <lang list(e)>);
    goto L1(r2);
  L18():
    e5 = ld e;
    check L20() else D6();
  L19():
    r9 = dyn base2(<sym e>);
    goto L4(r9);
  D2():
    deopt 6 [nodes];
  D6():
    deopt 21 [e5];
  L5():
    invisible.0();
    popenv;
    return NULL;
  L11():
    nodes1 = force? nodes;
    checkMissing(nodes1);
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L20():
    e6 = force? e5;
    checkMissing(e6);
    is_list = ldf `is.list` in base;
    r11 = dyn is_list(e6);
    check L21() else D7();
  L22():
    lapply = ldf lapply;
    check L23() else D8();
  D7():
    deopt 24 [r11];
  D8():
    deopt 26 [];
  L2(r5):
    c1 = ldf c in base;
    r7 = dyn c1(nodes1, r5);
    check L16() else D5();
  L12():
    e3 = ld e;
    check L14() else D3();
  L13():
    r4 = dyn base1(<sym e>);
    goto L2(r4);
  L21():
    goto L4(r11);
  L23():
    p1 = prom<V +>{
      e7 = ld e;
      e8 = force? e7;
      checkMissing(e8);
      return e8;
    };
    p2 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r14 = dyn lapply(p1, p2);
    check L24() else D9();
  D3():
    deopt 10 [e3];
  D5():
    deopt 15 [r7];
  D9():
    deopt 29 [r14];
  L14():
    e4 = force? e3;
    checkMissing(e4);
    list = ldf list in base;
    r6 = dyn list(e4);
    check L15() else D4();
  L16():
    goto L1(r7);
  L24():
    popenv;
    return r14;
  D4():
    deopt 13 [r6];
  L15():
    goto L2(r6);
  }
}