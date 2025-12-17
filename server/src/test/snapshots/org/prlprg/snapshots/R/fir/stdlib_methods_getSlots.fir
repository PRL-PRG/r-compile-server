fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st getSlots = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg isClassDef:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg x3:*, reg x4:V, reg x5:V, reg getClass:cls, reg x6:*, reg x7:V, reg p1:p(V +), reg r3:V, reg __:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg props:*, reg props1:V, reg as_character:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg props2:*, reg props3:V, reg names:cls, reg r10:V, reg l:*, reg names__:cls, reg r11:V, reg value:*, reg value1:V |
    mkenv;
    st x = x;
    isClassDef = ldf isClassDef;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn isClassDef(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    c = `as.logical`(r1);
    if c then L6() else L0();
  L0():
    getClass = ldf getClass;
    check L9() else D3();
  L1(x5):
    st classDef = x5;
    __ = ldf `@` in base;
    r4 = dyn __(<sym classDef>, <sym slots>);
    st props = r4;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L6():
    x3 = ld x;
    check L7() else D2();
  D2():
    deopt 4 [x3];
  D3():
    deopt 7 [];
  L2(r6):
    st value = r6;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L7():
    x4 = force? x3;
    checkMissing(x4);
    goto L1(x4);
  L9():
    p1 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r3 = dyn getClass(p1);
    check L10() else D4();
  L11():
    props = ld props;
    check L13() else D5();
  L12():
    r5 = dyn base(<sym props>);
    goto L2(r5);
  D4():
    deopt 9 [r3];
  D5():
    deopt 16 [props];
  L3(r9):
    l = ld value;
    names__ = ldf `names<-`;
    check L19() else D9();
  L10():
    goto L1(r3);
  L13():
    props1 = force? props;
    checkMissing(props1);
    as_character = ldf `as.character` in base;
    r7 = dyn as_character(props1);
    check L14() else D6();
  L15():
    props2 = ld props;
    check L17() else D7();
  L16():
    r8 = dyn base1(<sym props>);
    goto L3(r8);
  D6():
    deopt 19 [r7];
  D7():
    deopt 23 [props2];
  D9():
    deopt 28 [r9, l, r9];
  L14():
    goto L2(r7);
  L17():
    props3 = force? props2;
    checkMissing(props3);
    names = ldf names in base;
    r10 = dyn names(props3);
    check L18() else D8();
  L19():
    r11 = dyn names__(l, NULL, r9);
    check L20() else D10();
  D8():
    deopt 26 [r10];
  D10():
    deopt 30 [r9, r11];
  L18():
    goto L3(r10);
  L20():
    st value = r11;
    value = ld value;
    check L21() else D11();
  D11():
    deopt 32 [value];
  L21():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  }
}