fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg c1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x4:*, reg x5:V, reg c2:L, reg x7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg c3:V, reg hasName:cls, reg x8:*, reg x9:V, reg p:p(V +), reg r13:V, reg hasName1:cls, reg x10:*, reg x11:V, reg p1:p(V +), reg r15:V |
    mkenv;
    r = clos inner2650636851;
    st hasName = r;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r2):
    st x = r2;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L3():
    list = ldf list in base;
    r3 = dyn list(1.0, 2.0);
    check L5() else D0();
  L4():
    r1 = dyn base[abc, def](1.0, 2.0);
    goto L0(r1);
  D0():
    deopt 10 [r3];
  L1(r5):
    `!`(r5);
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L5():
    goto L0(r3);
  L6():
    x = ld x;
    check L8() else D1();
  L7():
    r4 = dyn base1(<lang `$`(x, abc)>);
    goto L1(r4);
  D1():
    deopt 13 [x];
  L2(r9):
    `!`(r9);
    hasName = ldf hasName;
    check L20() else D3();
  L8():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L10() else L11(x1);
  L13():
    x4 = ld x;
    check L15() else D2();
  L14():
    r8 = dyn base2(<lang `$`(x, a)>);
    goto L2(r8);
  D2():
    deopt 19 [x4];
  D3():
    deopt 25 [];
  L9(dx1):
    c1 = `==`(dx1, NULL);
    goto L1(c1);
  L10():
    dr = tryDispatchBuiltin.1("$", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(x3):
    r6 = `$`(x3, <sym abc>);
    goto L9(r6);
  L15():
    x5 = force? x4;
    checkMissing(x5);
    c2 = `is.object`(x5);
    if c2 then L17() else L18(x5);
  L20():
    p = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    r13 = dyn hasName(p, "abc");
    check L21() else D4();
  D4():
    deopt 28 [r13];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L16(dx3):
    c3 = `==`(dx3, NULL);
    goto L2(c3);
  L17():
    dr2 = tryDispatchBuiltin.1("$", x5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18(dr2);
  L18(x7):
    r10 = `$`(x7, <sym a>);
    goto L16(r10);
  L21():
    hasName1 = ldf hasName;
    check L22() else D5();
  D5():
    deopt 30 [];
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(dx2);
  L22():
    p1 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r15 = dyn hasName1(p1, "a");
    check L23() else D6();
  D6():
    deopt 33 [r15];
  L23():
    popenv;
    return r15;
  }
}
fun inner2650636851(x, name) {
  (reg x:*, reg name:*) -+> V { var x:*, var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg name1:*, reg name2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg names:cls, reg r4:V, reg match:cls, reg r5:V, reg r6:V |
    mkenv;
    st x = x;
    st name = name;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    r6 = `>`(r1, 0);
    popenv;
    return r6;
  L2():
    name1 = ld name;
    check L4() else D0();
  L3():
    r = dyn base[, , nomatch](<sym name>, <lang names(x)>, 0);
    goto L0(r);
  D0():
    deopt 2 [name1];
  L4():
    name2 = force? name1;
    checkMissing(name2);
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L1(r3):
    match = ldf match in base;
    r5 = dyn match(name2, r3, 0, NULL);
    check L9() else D3();
  L5():
    x1 = ld x;
    check L7() else D1();
  L6():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  D1():
    deopt 6 [x1];
  D3():
    deopt 13 [r5];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r4 = dyn names(x2);
    check L8() else D2();
  L9():
    goto L0(r5);
  D2():
    deopt 9 [r4];
  L8():
    goto L1(r4);
  }
}