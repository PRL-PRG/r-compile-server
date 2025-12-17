fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st getSrcref = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg x5:*, reg x6:V, reg attr:cls, reg r7:V, reg c1:V, reg r8:V, reg c2:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg c7:L, reg r10:V, reg x7:*, reg x8:V, reg is_function:cls, reg r11:V, reg c8:L, reg c11:L, reg c12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg c17:L, reg c18:L, reg r13:V, reg getSrcref:cls, reg body:cls, reg x9:*, reg x10:V, reg p:p(V +), reg r15:V, reg p1:p(V +), reg r17:V, reg c19:V, reg r18:V, reg c20:L, reg c21:V, reg c24:L, reg c25:V, reg c27:L, reg srcref:*, reg srcref1:V, reg __:cls, reg r19:V, reg r20:cls, reg x11:*, reg x12:V, reg p2:p(V +), reg r22:V, reg c28:L, reg getSrcref1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg __1:cls, reg r25:V, reg r26:cls, reg x13:*, reg x14:V, reg p3:p(V +), reg r28:V, reg unclass:cls, reg r29:V, reg p4:p(V +), reg r31:V |
    mkenv;
    st x = x;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    c = `as.logical`(r1);
    if c then L14() else L1();
  L10():
    x1 = ld x;
    check L12() else D0();
  L11():
    r = dyn base(<sym x>, "srcref");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L12():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "srcref", FALSE);
    check L13() else D1();
  L14():
    x3 = ld x;
    check L15() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [x3];
  L2(r4):
    r8 = `!`(r4);
    c2 = `as.logical`(r8);
    if c2 then L4(c2) else L23();
  L13():
    goto L0(r2);
  L15():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L17():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L18():
    r3 = dyn base1(<lang `<-`(srcref, attr(x, "srcref"))>);
    goto L2(r3);
  L3(r6):
    st srcref = r6;
    c1 = `==`(r6, NULL);
    goto L2(c1);
  L4(c3):
    c27 = `as.logical`(c3);
    if c27 then L35() else L8();
  L19():
    x5 = ld x;
    check L21() else D3();
  L20():
    r5 = dyn base2(<sym x>, "srcref");
    goto L3(r5);
  L23():
    sym3 = ldf `is.function`;
    base3 = ldf `is.function` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  D3():
    deopt 13 [x5];
  L5(c7, r10):
    c8 = `as.logical`(r10);
    if c8 then L28() else L6(c7, c8);
  L8():
    __ = ldf `::`;
    check L38() else D10();
  L21():
    x6 = force? x5;
    checkMissing(x6);
    attr = ldf attr in base;
    r7 = dyn attr(x6, "srcref");
    check L22() else D4();
  L24():
    x7 = ld x;
    check L26() else D5();
  L25():
    r9 = dyn base3(<sym x>);
    goto L5(c2, r9);
  L35():
    srcref = ld srcref;
    check L36() else D9();
  D4():
    deopt 17 [r7];
  D5():
    deopt 23 [c2, x7];
  D9():
    deopt 37 [srcref];
  D10():
    deopt 40 [];
  L6(c11, c12):
    c24 = `as.logical`(c12);
    c25 = `||`(c11, c24);
    goto L4(c25);
  L22():
    goto L3(r7);
  L26():
    x8 = force? x7;
    checkMissing(x8);
    is_function = ldf `is.function` in base;
    r11 = dyn is_function(x8);
    check L27() else D6();
  L28():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L36():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    popenv;
    return srcref1;
  L38():
    r19 = dyn __("methods", "is");
    check L39() else D11();
  D6():
    deopt 26 [c2, r11];
  D11():
    deopt 43 [r19];
  L7(c17, c18, r13):
    r18 = `!`(r13);
    c20 = `as.logical`(r18);
    c21 = `&&`(c18, c20);
    goto L6(c17, c21);
  L27():
    goto L5(c2, r11);
  L29():
    getSrcref = ldf getSrcref;
    check L31() else D7();
  L30():
    r12 = dyn base4(<lang `<-`(srcref, getSrcref(body(x)))>);
    goto L7(c7, c8, r12);
  L39():
    checkFun.0(r19);
    r20 = r19 as cls;
    p2 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r22 = dyn r20(p2, "MethodDefinition");
    check L40() else D12();
  D7():
    deopt 29 [c7, c8];
  D12():
    deopt 47 [r22];
  L31():
    p1 = prom<V +>{
      body = ldf body;
      p = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r15 = dyn body(p);
      return r15;
    };
    r17 = dyn getSrcref(p1);
    check L32() else D8();
  L40():
    c28 = `as.logical`(r22);
    if c28 then L41() else L9();
  D8():
    deopt 31 [c7, c8, r17];
  L9():
    invisible.0();
    popenv;
    return NULL;
  L32():
    st srcref = r17;
    c19 = `==`(r17, NULL);
    goto L7(c7, c8, c19);
  L41():
    getSrcref1 = ldf getSrcref;
    check L42() else D13();
  D13():
    deopt 49 [];
  L42():
    p4 = prom<V +>{
      sym5 = ldf unclass;
      base5 = ldf unclass in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      __1 = ldf `::`;
      r25 = dyn __1("methods", "unRematchDefinition");
      checkFun.0(r25);
      r26 = r25 as cls;
      p3 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      r28 = dyn r26(p3);
      unclass = ldf unclass in base;
      r29 = dyn unclass(r28);
      goto L0(r29);
    L2():
      r23 = dyn base5(<lang `::`(methods, unRematchDefinition)(x)>);
      goto L0(r23);
    };
    r31 = dyn getSrcref1(p4);
    check L43() else D14();
  D14():
    deopt 51 [r31];
  L43():
    popenv;
    return r31;
  }
}