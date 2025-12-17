fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2023598292;
    st `.InhSlotNames` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2023598292(Class) {
  (reg Class:*) -+> V { var Class:*, reg getClass:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg names:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg value:*, reg value1:V, reg length:cls, reg r8:V, reg r9:V, reg c:L, reg c2:V, reg _in_:cls, reg Class3:*, reg Class4:V, reg p1:p(V +), reg _BasicClasses:*, reg _BasicClasses1:V, reg p2:p(V +), reg r12:V, reg c3:L, reg c4:L, reg c5:V, reg extends:cls, reg ClassDef:*, reg ClassDef1:V, reg p3:p(V +), reg r14:V, reg c8:L, reg c9:V, reg c12:L, reg c13:V, reg c15:L, reg value2:*, reg value3:V |
    mkenv;
    st Class = Class;
    getClass = ldf getClass;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r1 = dyn getClass(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    st ClassDef = r1;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r3):
    st value = r3;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L8():
    __ = ldf `@` in base;
    r4 = dyn __(<sym ClassDef>, <sym slots>);
    names = ldf names in base;
    r5 = dyn names(r4);
    check L10() else D2();
  L9():
    r2 = dyn base(<lang `@`(ClassDef, slots)>);
    goto L0(r2);
  D2():
    deopt 10 [r5];
  L1(r7):
    r9 = `==`(r7, 0.0);
    c = `as.logical`(r9);
    if c then L15() else L2(c);
  L10():
    goto L0(r5);
  L11():
    value = ld value;
    check L13() else D3();
  L12():
    r6 = dyn base1(<sym value>);
    goto L1(r6);
  D3():
    deopt 14 [value];
  L2(c2):
    c15 = `as.logical`(c2);
    if c15 then L23() else L4();
  L13():
    value1 = force? value;
    checkMissing(value1);
    length = ldf length in base;
    r8 = dyn length(value1);
    check L14() else D4();
  L15():
    _in_ = ldf `%in%`;
    check L16() else D5();
  D4():
    deopt 17 [r8];
  D5():
    deopt 21 [c];
  L4():
    goto L5();
  L5():
    value2 = ld value;
    check L25() else D9();
  L14():
    goto L1(r8);
  L16():
    p1 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p2 = prom<V +>{
      _BasicClasses = ld `.BasicClasses`;
      _BasicClasses1 = force? _BasicClasses;
      checkMissing(_BasicClasses1);
      return _BasicClasses1;
    };
    r12 = dyn _in_(p1, p2);
    check L17() else D6();
  L23():
    st value = ".Data";
    goto L5();
  D6():
    deopt 24 [c, r12];
  D9():
    deopt 37 [value2];
  L17():
    c3 = `as.logical`(r12);
    if c3 then L3(c, c3) else L18();
  L25():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  L3(c4, c5):
    c12 = `as.logical`(c5);
    c13 = `&&`(c4, c12);
    goto L2(c13);
  L18():
    extends = ldf extends;
    check L19() else D7();
  D7():
    deopt 26 [c, c3];
  L19():
    p3 = prom<V +>{
      ClassDef = ld ClassDef;
      ClassDef1 = force? ClassDef;
      checkMissing(ClassDef1);
      return ClassDef1;
    };
    r14 = dyn extends(p3, "vector");
    check L20() else D8();
  D8():
    deopt 29 [c, c3, r14];
  L20():
    c8 = `as.logical`(r14);
    c9 = `||`(c3, c8);
    goto L3(c, c9);
  }
}