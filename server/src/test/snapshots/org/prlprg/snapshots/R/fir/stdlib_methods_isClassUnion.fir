fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2023598292;
    st isClassUnion = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2023598292(Class) {
  (reg Class:*) -+> V { var Class:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Class1:*, reg Class2:V, reg c:L, reg c1:L, reg getClass:cls, reg Class3:*, reg Class4:V, reg p:p(V +), reg r3:V, reg extends:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg Class5:*, reg Class6:V, reg class:cls, reg r7:V, reg p1:p(V +), reg r9:V |
    mkenv;
    st Class = Class;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L6() else L1();
  L3():
    Class1 = ld Class;
    check L5() else D0();
  L4():
    r = dyn base(<sym Class>);
    goto L0(r);
  D0():
    deopt 1 [Class1];
  L1():
    goto L2();
  L2():
    extends = ldf extends;
    check L10() else D3();
  L5():
    Class2 = force? Class1;
    checkMissing(Class2);
    c = `is.character`(Class2);
    goto L0(c);
  L6():
    getClass = ldf getClass;
    check L7() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 13 [];
  L7():
    p = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    r3 = dyn getClass(p, TRUE);
    check L8() else D2();
  L10():
    p1 = prom<V +>{
      sym1 = ldf class;
      base1 = ldf class in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      Class5 = ld Class;
      Class6 = force? Class5;
      checkMissing(Class6);
      class = ldf class in base;
      r7 = dyn class(Class6);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym Class>);
      goto L0(r5);
    };
    r9 = dyn extends(p1, "ClassUnionRepresentation");
    check L11() else D4();
  D2():
    deopt 8 [r3];
  D4():
    deopt 16 [r9];
  L8():
    st Class = r3;
    goto L2();
  L11():
    popenv;
    return r9;
  }
}