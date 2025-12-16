fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.Date.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x5:*, reg x6:V, reg c1:V, reg c2:L, reg _Date:cls, reg numeric:cls, reg r5:V, reg p:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x7:*, reg x8:V, reg c3:L, reg c4:L, reg c6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg c9:L, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg c12:L, reg r13:V, reg x9:*, reg x10:V, reg is_na:cls, reg r14:V, reg all:cls, reg r15:V, reg c13:L, reg c14:V, reg c16:L, reg _Date1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg r17:V, reg x11:*, reg x12:V, reg as_numeric:cls, reg r18:V, reg p1:p(V +), reg r20:V, reg stop:cls, reg gettextf:cls, reg deparse1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r21:V, reg r22:V, reg substitute:cls, reg r23:V, reg p2:p(V +), reg r25:V, reg p3:p(V +), reg dQuote:cls, reg r27:V, reg p4:p(V +), reg r29:V, reg p5:p(V +), reg r31:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    c = `as.logical`(r1);
    if c then L13() else L1();
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r = dyn base(<sym x>, "Date");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "Date", FALSE);
    check L12() else D1();
  L13():
    x3 = ld x;
    check L14() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [x3];
  L2(r4):
    c2 = `as.logical`(r4);
    if c2 then L19() else L3();
  L12():
    goto L0(r2);
  L14():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L16():
    x5 = ld x;
    check L18() else D3();
  L17():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  D3():
    deopt 11 [x5];
  L3():
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L18():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `==`(x6, NULL);
    goto L2(c1);
  L19():
    _Date = ldf `.Date`;
    check L20() else D4();
  D4():
    deopt 15 [];
  L4(r9):
    c4 = `as.logical`(r9);
    if c4 then L26() else L5(c4);
  L20():
    p = prom<V +>{
      numeric = ldf numeric;
      r5 = dyn numeric();
      return r5;
    };
    r7 = dyn _Date(p);
    check L21() else D5();
  L23():
    x7 = ld x;
    check L25() else D6();
  L24():
    r8 = dyn base2(<sym x>);
    goto L4(r8);
  D5():
    deopt 17 [r7];
  D6():
    deopt 19 [x7];
  L5(c6):
    c16 = `as.logical`(c6);
    if c16 then L35() else L8();
  L21():
    popenv;
    return r7;
  L25():
    x8 = force? x7;
    checkMissing(x8);
    c3 = `is.logical`(x8);
    goto L4(c3);
  L26():
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L6(c9, r11):
    c13 = `as.logical`(r11);
    c14 = `&&`(c9, c13);
    goto L5(c14);
  L8():
    stop = ldf stop;
    check L39() else D12();
  L27():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L28():
    r10 = dyn base3(<lang is.na(x)>);
    goto L6(c4, r10);
  L35():
    _Date1 = ldf `.Date`;
    check L36() else D10();
  D10():
    deopt 34 [];
  D12():
    deopt 38 [];
  L7(c12, r13):
    all = ldf all in base;
    r15 = dyn all(r13);
    check L33() else D9();
  L29():
    x9 = ld x;
    check L31() else D7();
  L30():
    r12 = dyn base4(<sym x>);
    goto L7(c4, r12);
  L36():
    p1 = prom<V +>{
      sym5 = ldf `as.numeric`;
      base5 = ldf `as.numeric` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      as_numeric = ldf `as.numeric` in base;
      r18 = dyn as_numeric(x12);
      goto L0(r18);
    L2():
      r16 = dyn base5(<sym x>);
      goto L0(r16);
    };
    r20 = dyn _Date1(p1);
    check L37() else D11();
  L39():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        deparse1 = ldf deparse1;
        p2 = prom<V +>{
          sym6 = ldf substitute;
          base6 = ldf substitute in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L1() else L2();
        L0(r22):
          return r22;
        L1():
          substitute = ldf substitute in base;
          r23 = dyn substitute(<sym x>);
          goto L0(r23);
        L2():
          r21 = dyn base6(<sym x>);
          goto L0(r21);
        };
        r25 = dyn deparse1(p2);
        return r25;
      };
      p4 = prom<V +>{
        dQuote = ldf dQuote;
        r27 = dyn dQuote("Date");
        return r27;
      };
      r29 = dyn gettextf("do not know how to convert '%s' to class %s", p3, p4);
      return r29;
    };
    r31 = dyn stop[, domain](p5, NA_LGL);
    check L40() else D13();
  D7():
    deopt 26 [c4, x9];
  D9():
    deopt 31 [c12, r15];
  D11():
    deopt 36 [r20];
  D13():
    deopt 42 [r31];
  L31():
    x10 = force? x9;
    checkMissing(x10);
    is_na = ldf `is.na` in base;
    r14 = dyn is_na(x10);
    check L32() else D8();
  L33():
    goto L6(c12, r15);
  L37():
    popenv;
    return r20;
  L40():
    popenv;
    return r31;
  D8():
    deopt 29 [c4, r14];
  L32():
    goto L7(c4, r14);
  }
}