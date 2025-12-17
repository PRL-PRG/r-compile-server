fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2650636851;
    st `$.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2650636851(x, name) {
  (reg x:*, reg name:*) -+> V { var x:*, var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg _in_:cls, reg name1:*, reg name2:V, reg p:p(V +), reg bibentry_attribute_names:*, reg bibentry_attribute_names1:V, reg p1:p(V +), reg r8:V, reg c1:L, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg unclass:cls, reg r11:V, reg p2:p(V +), reg attr:*, reg attr1:V, reg p3:p(V +), reg name3:*, reg name4:V, reg p4:p(V +), reg r15:V, reg r16:V, reg lapply1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg x5:*, reg x6:V, reg unclass1:cls, reg r19:V, reg p5:p(V +), reg __:*, reg __1:V, reg p6:p(V +), reg tolower:cls, reg name5:*, reg name6:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg y:*, reg y1:V, reg length1:cls, reg r28:V, reg r29:V, reg c2:L, reg y2:*, reg y3:V, reg c3:L, reg y5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __2:cls, reg r30:V, reg y6:*, reg y7:V |
    mkenv;
    st x = x;
    st name = name;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L13() else L1();
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    _in_ = ldf `%in%`;
    check L16() else D2();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L12() else D1();
  L13():
    popenv;
    return NULL;
  D1():
    deopt 5 [r2];
  D2():
    deopt 13 [];
  L12():
    goto L0(r2);
  L16():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      bibentry_attribute_names = ld bibentry_attribute_names;
      bibentry_attribute_names1 = force? bibentry_attribute_names;
      checkMissing(bibentry_attribute_names1);
      return bibentry_attribute_names1;
    };
    r8 = dyn _in_(p, p1);
    check L17() else D3();
  D3():
    deopt 16 [r8];
  L17():
    c1 = `as.logical`(r8);
    if c1 then L18() else L3();
  L3():
    lapply1 = ldf lapply;
    check L22() else D6();
  L4(r16):
    st y = r16;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L18():
    lapply = ldf lapply;
    check L19() else D4();
  D4():
    deopt 18 [];
  D6():
    deopt 24 [];
  L5(r27):
    r29 = `==`(r27, 1);
    c2 = `as.logical`(r29);
    if c2 then L28() else L6();
  L19():
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
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    p4 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    r15 = dyn lapply(p2, p3, p4);
    check L20() else D5();
  L22():
    p5 = prom<V +>{
      sym2 = ldf unclass;
      base2 = ldf unclass in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      unclass1 = ldf unclass in base;
      r19 = dyn unclass1(x6);
      goto L0(r19);
    L2():
      r17 = dyn base2(<sym x>);
      goto L0(r17);
    };
    p6 = prom<V +>{
      __ = ld `[[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    p8 = prom<V +>{
      tolower = ldf tolower;
      p7 = prom<V +>{
        name5 = ld name;
        name6 = force? name5;
        checkMissing(name6);
        return name6;
      };
      r23 = dyn tolower(p7);
      return r23;
    };
    r25 = dyn lapply1(p5, p6, p8);
    check L23() else D7();
  L24():
    y = ld y;
    check L26() else D8();
  L25():
    r26 = dyn base3(<sym y>);
    goto L5(r26);
  D5():
    deopt 22 [r15];
  D7():
    deopt 28 [r25];
  D8():
    deopt 32 [y];
  L6():
    goto L8();
  L8():
    y6 = ld y;
    check L34() else D11();
  L20():
    goto L4(r15);
  L23():
    goto L4(r25);
  L26():
    y1 = force? y;
    checkMissing(y1);
    length1 = ldf length in base;
    r28 = dyn length1(y1);
    check L27() else D9();
  L28():
    y2 = ld y;
    check L29() else D10();
  D9():
    deopt 35 [r28];
  D10():
    deopt 38 [y2];
  D11():
    deopt 46 [y6];
  L27():
    goto L5(r28);
  L29():
    y3 = force? y2;
    checkMissing(y3);
    c3 = `is.object`(y3);
    if c3 then L30() else L31(y3);
  L34():
    y7 = force? y6;
    checkMissing(y7);
    popenv;
    return y7;
  L7(dx1):
    st y = dx1;
    goto L8();
  L30():
    dr = tryDispatchBuiltin.1("[[", y3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(y5):
    __2 = ldf `[[` in base;
    r30 = dyn __2(y5, 1);
    goto L7(r30);
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  }
}