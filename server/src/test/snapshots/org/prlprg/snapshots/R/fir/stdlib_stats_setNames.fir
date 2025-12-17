fun main() {
  () -+> V { reg r:cls, reg setNames:cls, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg l:*, reg names__:cls, reg r10:V, reg tmp:*, reg tmp1:V, reg setNames1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), reg r15:V |
    mkenv;
    r = clos inner1252209228;
    st setNames = r;
    setNames = ldf setNames;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      return <int 1, 2, 3>;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c("foo", "bar", "baz");
      goto L0(r4);
    L2():
      r2 = dyn base("foo", "bar", "baz");
      goto L0(r2);
    };
    r6 = dyn setNames(p, p1);
    check L2() else D1();
  D1():
    deopt 7 [r6];
  L2():
    st tmp = <int 1, 2, 3>;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L3() else L4();
  L0(r8):
    l = ld tmp;
    names__ = ldf `names<-`;
    check L6() else D3();
  L3():
    c1 = ldf c in base;
    r9 = dyn c1("foo", "bar", "baz");
    check L5() else D2();
  L4():
    r7 = dyn base1("foo", "bar", "baz");
    goto L0(r7);
  D2():
    deopt 17 [r9];
  D3():
    deopt 19 [r8, l, r8];
  L5():
    goto L0(r9);
  L6():
    r10 = dyn names__(l, NULL, r8);
    check L7() else D4();
  D4():
    deopt 21 [r8, r10];
  L7():
    st tmp = r10;
    tmp = ld tmp;
    check L8() else D5();
  D5():
    deopt 23 [tmp];
  L8():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    setNames1 = ldf setNames;
    check L9() else D6();
  D6():
    deopt 26 [];
  L9():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c2 = ldf c in base;
      r13 = dyn c2("First", "2nd");
      goto L0(r13);
    L2():
      r11 = dyn base2("First", "2nd");
      goto L0(r11);
    };
    r15 = dyn setNames1[nm](p2);
    check L10() else D7();
  D7():
    deopt 29 [r15];
  L10():
    popenv;
    return r15;
  }
}
fun inner1252209228(object, nm) {
  (reg object:*, reg nm:*) -+> V { var object:*, reg object_isMissing:L, reg object_orDefault:*, reg nm1:*, reg nm2:V, reg p:p(V +), var nm:*, reg nm3:*, reg nm4:V, reg l:*, reg names__:cls, reg r1:V, reg object1:*, reg object2:V |
    mkenv;
    object_isMissing = missing.0(object);
    if object_isMissing then L0() else L1(object);
  L0():
    p = prom<V +>{
      nm1 = ld nm;
      nm2 = force? nm1;
      checkMissing(nm2);
      return nm2;
    };
    goto L1(p);
  L1(object_orDefault):
    st object = object_orDefault;
    st nm = nm;
    nm3 = ld nm;
    check L2() else D0();
  D0():
    deopt 0 [nm3];
  L2():
    nm4 = force? nm3;
    checkMissing(nm4);
    l = ld object;
    names__ = ldf `names<-`;
    check L3() else D1();
  D1():
    deopt 3 [nm4, l, nm4];
  L3():
    r1 = dyn names__(l, NULL, nm4);
    check L4() else D2();
  D2():
    deopt 5 [nm4, r1];
  L4():
    st object = r1;
    object1 = ld object;
    check L5() else D3();
  D3():
    deopt 7 [object1];
  L5():
    object2 = force? object1;
    checkMissing(object2);
    popenv;
    return object2;
  }
}