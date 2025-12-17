fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2650636851;
    st `$.person` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2650636851(x, name) {
  (reg x:*, reg name:*) -+> V { var x:*, var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg match_arg:cls, reg name1:*, reg name2:V, reg p:p(V +), reg person_field_names:*, reg person_field_names1:V, reg p1:p(V +), reg r8:V, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg unclass:cls, reg r11:V, reg p2:p(V +), reg __:*, reg __1:V, reg p3:p(V +), reg name3:*, reg name4:V, reg p4:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg y:*, reg y1:V, reg length1:cls, reg r18:V, reg r19:V, reg c1:L, reg y2:*, reg y3:V, reg c2:L, reg y5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __2:cls, reg r20:V, reg y6:*, reg y7:V |
    mkenv;
    st x = x;
    st name = name;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L11() else L1();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    match_arg = ldf `match.arg`;
    check L14() else D2();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L10() else D1();
  L11():
    popenv;
    return NULL;
  D1():
    deopt 5 [r2];
  D2():
    deopt 13 [];
  L10():
    goto L0(r2);
  L14():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      person_field_names = ld person_field_names;
      person_field_names1 = force? person_field_names;
      checkMissing(person_field_names1);
      return person_field_names1;
    };
    r8 = dyn match_arg(p, p1);
    check L15() else D3();
  D3():
    deopt 16 [r8];
  L15():
    st name = r8;
    lapply = ldf lapply;
    check L16() else D4();
  D4():
    deopt 19 [];
  L16():
    p2 = prom<V +>{
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      unclass = ldf unclass in base;
      r11 = dyn unclass(x4);
      goto L0(r11);
    L2():
      r9 = dyn base1(<sym x>);
      goto L0(r9);
    };
    p3 = prom<V +>{
      __ = ld `[[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    p4 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    r15 = dyn lapply(p2, p3, p4);
    check L17() else D5();
  D5():
    deopt 23 [r15];
  L17():
    st y = r15;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L3(r17):
    r19 = `==`(r17, 1);
    c1 = `as.logical`(r19);
    if c1 then L22() else L4();
  L18():
    y = ld y;
    check L20() else D6();
  L19():
    r16 = dyn base2(<sym y>);
    goto L3(r16);
  D6():
    deopt 27 [y];
  L4():
    goto L6();
  L6():
    y6 = ld y;
    check L28() else D9();
  L20():
    y1 = force? y;
    checkMissing(y1);
    length1 = ldf length in base;
    r18 = dyn length1(y1);
    check L21() else D7();
  L22():
    y2 = ld y;
    check L23() else D8();
  D7():
    deopt 30 [r18];
  D8():
    deopt 33 [y2];
  D9():
    deopt 41 [y6];
  L21():
    goto L3(r18);
  L23():
    y3 = force? y2;
    checkMissing(y3);
    c2 = `is.object`(y3);
    if c2 then L24() else L25(y3);
  L28():
    y7 = force? y6;
    checkMissing(y7);
    popenv;
    return y7;
  L5(dx1):
    st y = dx1;
    goto L6();
  L24():
    dr = tryDispatchBuiltin.1("[[", y3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(y5):
    __2 = ldf `[[` in base;
    r20 = dyn __2(y5, 1);
    goto L5(r20);
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  }
}