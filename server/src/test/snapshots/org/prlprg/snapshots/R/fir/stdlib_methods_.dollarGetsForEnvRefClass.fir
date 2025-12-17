fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner247789382;
    st `.dollarGetsForEnvRefClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner247789382(x, name, value) {
  (reg x:*, reg name:*, reg value:*) -+> V { var x:*, var name:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg what:*, reg what1:V, reg c:L, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg what2:*, reg what3:V, reg as_character:cls, reg r7:V, reg name1:*, reg name2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg x1:*, reg x2:V, reg as_environment:cls, reg r11:V, reg envRefSetField:cls, reg x3:*, reg x4:V, reg p:p(V +), reg what4:*, reg what5:V, reg p1:p(V +), reg refObjectClass:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg selfEnv:*, reg selfEnv1:V, reg p4:p(V +), reg value1:*, reg value2:V, reg p5:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg x7:*, reg x8:V, reg invisible:cls, reg r22:V |
    mkenv;
    st x = x;
    st name = name;
    st value = value;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st what = r1;
    sym1 = ldf `is.symbol`;
    base1 = ldf `is.symbol` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L7():
    substitute = ldf substitute in base;
    r2 = dyn substitute(<sym name>);
    goto L0(r2);
  L8():
    r = dyn base(<sym name>);
    goto L0(r);
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L12() else L2();
  L9():
    what = ld what;
    check L11() else D0();
  L10():
    r3 = dyn base1(<sym what>);
    goto L1(r3);
  D0():
    deopt 5 [what];
  L2():
    name1 = ld name;
    check L18() else D3();
  L4():
    sym3 = ldf `as.environment`;
    base3 = ldf `as.environment` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L11():
    what1 = force? what;
    checkMissing(what1);
    c = `is.symbol`(what1);
    goto L1(c);
  L12():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  D3():
    deopt 15 [name1];
  L3(r6):
    st what = r6;
    goto L4();
  L5(r10):
    st selfEnv = r10;
    envRefSetField = ldf envRefSetField;
    check L23() else D6();
  L13():
    what2 = ld what;
    check L15() else D1();
  L14():
    r5 = dyn base2(<sym what>);
    goto L3(r5);
  L18():
    name2 = force? name1;
    checkMissing(name2);
    st what = name2;
    goto L4();
  L19():
    x1 = ld x;
    check L21() else D4();
  L20():
    r9 = dyn base3(<sym x>);
    goto L5(r9);
  D1():
    deopt 10 [what2];
  D4():
    deopt 20 [x1];
  D6():
    deopt 26 [];
  L15():
    what3 = force? what2;
    checkMissing(what3);
    as_character = ldf `as.character` in base;
    r7 = dyn as_character(what3);
    check L16() else D2();
  L21():
    x2 = force? x1;
    checkMissing(x2);
    as_environment = ldf `as.environment` in base;
    r11 = dyn as_environment(x2);
    check L22() else D5();
  L23():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      what4 = ld what;
      what5 = force? what4;
      checkMissing(what5);
      return what5;
    };
    p3 = prom<V +>{
      refObjectClass = ldf refObjectClass;
      p2 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r15 = dyn refObjectClass(p2);
      return r15;
    };
    p4 = prom<V +>{
      selfEnv = ld selfEnv;
      selfEnv1 = force? selfEnv;
      checkMissing(selfEnv1);
      return selfEnv1;
    };
    p5 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r19 = dyn envRefSetField(p, p1, p3, p4, p5);
    check L24() else D7();
  D2():
    deopt 13 [r7];
  D5():
    deopt 23 [r11];
  D7():
    deopt 32 [r19];
  L16():
    goto L3(r7);
  L22():
    goto L5(r11);
  L24():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L25() else L26();
  L6(r21):
    popenv;
    return r21;
  L25():
    x7 = ld x;
    check L27() else D8();
  L26():
    r20 = dyn base4(<sym x>);
    goto L6(r20);
  D8():
    deopt 35 [x7];
  L27():
    x8 = force? x7;
    checkMissing(x8);
    invisible = ldf invisible in base;
    r22 = dyn invisible(x8);
    check L28() else D9();
  D9():
    deopt 38 [r22];
  L28():
    goto L6(r22);
  }
}