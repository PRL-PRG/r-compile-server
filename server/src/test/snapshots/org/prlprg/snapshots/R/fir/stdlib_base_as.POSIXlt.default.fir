fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3562075921;
    st `as.POSIXlt.default` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3562075921(x, tz, optional, `...`) {
  (reg x:*, reg tz:*, reg optional:*, reg ddd:dots) -+> V { var x:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg c1:L, reg x3:*, reg x4:V, reg x5:V, reg _POSIXlt:cls, reg x6:*, reg x7:V, reg p:p(V +), reg tz1:*, reg tz2:V, reg p1:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x8:*, reg x9:V, reg c2:V, reg c3:L, reg as_POSIXlt_character:cls, reg character:cls, reg r13:V, reg p2:p(V +), reg tz3:*, reg tz4:V, reg p3:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg x10:*, reg x11:V, reg c4:L, reg c5:L, reg c7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg c10:L, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg c13:L, reg r24:V, reg x12:*, reg x13:V, reg is_na:cls, reg r25:V, reg all:cls, reg r26:V, reg c14:L, reg c15:V, reg c17:L, reg as_POSIXlt:cls, reg as_POSIXct_default:cls, reg x14:*, reg x15:V, reg p4:p(V +), reg r28:V, reg p5:p(V +), reg tz5:*, reg tz6:V, reg p6:p(V +), reg r31:V, reg optional1:*, reg optional2:V, reg c18:L, reg as_POSIXlt_character1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg x16:*, reg x17:V, reg length:cls, reg r38:V, reg rep_int:cls, reg r39:V, reg p7:p(V +), reg tz7:*, reg tz8:V, reg p8:p(V +), reg r42:V, reg stop:cls, reg gettextf:cls, reg deparse1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg substitute:cls, reg r45:V, reg p9:p(V +), reg r47:V, reg p10:p(V +), reg dQuote:cls, reg r49:V, reg p11:p(V +), reg r51:V, reg p12:p(V +), reg r53:V |
    mkenv;
    st x = x;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L1(FALSE) else L1(optional);
  L1(optional_orDefault):
    st optional = optional_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L2(r1):
    c = `as.logical`(r1);
    if c then L22() else L3();
  L18():
    x1 = ld x;
    check L20() else D0();
  L19():
    r = dyn base(<sym x>, "POSIXlt");
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "POSIXlt", FALSE);
    check L21() else D1();
  L22():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  D1():
    deopt 7 [r2];
  L4(r4):
    c1 = `as.logical`(r4);
    if c1 then L25() else L5();
  L8(r12):
    c3 = `as.logical`(r12);
    if c3 then L35() else L9();
  L21():
    goto L2(r2);
  L23():
    missing = ldf missing in base;
    r5 = dyn missing(<sym tz>);
    goto L4(r5);
  L24():
    r3 = dyn base1(<sym tz>);
    goto L4(r3);
  L32():
    x8 = ld x;
    check L34() else D5();
  L33():
    r11 = dyn base2(<sym x>);
    goto L8(r11);
  D5():
    deopt 22 [x8];
  L5():
    _POSIXlt = ldf `.POSIXlt`;
    check L28() else D3();
  L6(x5):
    popenv;
    return x5;
  L9():
    sym3 = ldf `is.logical`;
    base3 = ldf `is.logical` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L25():
    x3 = ld x;
    check L26() else D2();
  L34():
    x9 = force? x8;
    checkMissing(x9);
    c2 = `==`(x9, NULL);
    goto L8(c2);
  L35():
    as_POSIXlt_character = ldf `as.POSIXlt.character`;
    check L36() else D6();
  D2():
    deopt 11 [x3];
  D3():
    deopt 14 [];
  D6():
    deopt 26 [];
  L11(r20):
    c5 = `as.logical`(r20);
    if c5 then L43() else L12(c5);
  L26():
    x4 = force? x3;
    checkMissing(x4);
    goto L6(x4);
  L28():
    p = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p1 = prom<V +>{
      tz1 = ld tz;
      tz2 = force? tz1;
      checkMissing(tz2);
      return tz2;
    };
    r8 = dyn _POSIXlt(p, p1);
    check L29() else D4();
  L36():
    p2 = prom<V +>{
      character = ldf character;
      r13 = dyn character();
      return r13;
    };
    p3 = prom<V +>{
      tz3 = ld tz;
      tz4 = force? tz3;
      checkMissing(tz4);
      return tz4;
    };
    r16 = dyn as_POSIXlt_character(p2, p3);
    check L37() else D7();
  L40():
    x10 = ld x;
    check L42() else D8();
  L41():
    r19 = dyn base3(<sym x>);
    goto L11(r19);
  D4():
    deopt 17 [r8];
  D7():
    deopt 29 [r16];
  D8():
    deopt 34 [x10];
  L12(c7):
    c17 = `as.logical`(c7);
    if c17 then L52() else L15();
  L29():
    goto L6(r8);
  L37():
    popenv;
    return r16;
  L42():
    x11 = force? x10;
    checkMissing(x11);
    c4 = `is.logical`(x11);
    goto L11(c4);
  L43():
    sym4 = ldf all;
    base4 = ldf all in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L13(c10, r22):
    c14 = `as.logical`(r22);
    c15 = `&&`(c10, c14);
    goto L12(c15);
  L15():
    optional1 = ld optional;
    check L57() else D14();
  L44():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L45():
    r21 = dyn base4(<lang is.na(x)>);
    goto L13(c5, r21);
  L52():
    as_POSIXlt = ldf `as.POSIXlt`;
    check L53() else D12();
  D12():
    deopt 49 [];
  D14():
    deopt 57 [optional1];
  L14(c13, r24):
    all = ldf all in base;
    r26 = dyn all(r24);
    check L50() else D11();
  L46():
    x12 = ld x;
    check L48() else D9();
  L47():
    r23 = dyn base5(<sym x>);
    goto L14(c5, r23);
  L53():
    p5 = prom<V +>{
      as_POSIXct_default = ldf `as.POSIXct.default`;
      p4 = prom<V +>{
        x14 = ld x;
        x15 = force? x14;
        checkMissing(x15);
        return x15;
      };
      r28 = dyn as_POSIXct_default(p4);
      return r28;
    };
    p6 = prom<V +>{
      tz5 = ld tz;
      tz6 = force? tz5;
      checkMissing(tz6);
      return tz6;
    };
    r31 = dyn as_POSIXlt[, tz](p5, p6);
    check L54() else D13();
  L57():
    optional2 = force? optional1;
    checkMissing(optional2);
    c18 = `as.logical`(optional2);
    if c18 then L58() else L17();
  D9():
    deopt 41 [c5, x12];
  D11():
    deopt 46 [c13, r26];
  D13():
    deopt 53 [r31];
  L17():
    stop = ldf stop;
    check L62() else D17();
  L48():
    x13 = force? x12;
    checkMissing(x13);
    is_na = ldf `is.na` in base;
    r25 = dyn is_na(x13);
    check L49() else D10();
  L50():
    goto L13(c13, r26);
  L54():
    popenv;
    return r31;
  L58():
    as_POSIXlt_character1 = ldf `as.POSIXlt.character`;
    check L59() else D15();
  D10():
    deopt 44 [c5, r25];
  D15():
    deopt 60 [];
  D17():
    deopt 66 [];
  L49():
    goto L14(c5, r25);
  L59():
    p7 = prom<V +>{
      sym6 = ldf `rep.int`;
      base6 = ldf `rep.int` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r35):
      return r35;
    L2():
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L3():
      r34 = dyn base6(NA_STR, <lang length(x)>);
      goto L0(r34);
    L1(r37):
      rep_int = ldf `rep.int` in base;
      r39 = dyn rep_int(NA_STR, r37);
      goto L0(r39);
    L4():
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      length = ldf length in base;
      r38 = dyn length(x17);
      goto L1(r38);
    L5():
      r36 = dyn base7(<sym x>);
      goto L1(r36);
    };
    p8 = prom<V +>{
      tz7 = ld tz;
      tz8 = force? tz7;
      checkMissing(tz8);
      return tz8;
    };
    r42 = dyn as_POSIXlt_character1[, tz](p7, p8);
    check L60() else D16();
  L62():
    p12 = prom<V +>{
      gettextf = ldf gettextf;
      p10 = prom<V +>{
        deparse1 = ldf deparse1;
        p9 = prom<V +>{
          sym8 = ldf substitute;
          base8 = ldf substitute in base;
          guard8 = `==`.4(sym8, base8);
          if guard8 then L1() else L2();
        L0(r44):
          return r44;
        L1():
          substitute = ldf substitute in base;
          r45 = dyn substitute(<sym x>);
          goto L0(r45);
        L2():
          r43 = dyn base8(<sym x>);
          goto L0(r43);
        };
        r47 = dyn deparse1(p9);
        return r47;
      };
      p11 = prom<V +>{
        dQuote = ldf dQuote;
        r49 = dyn dQuote("POSIXlt");
        return r49;
      };
      r51 = dyn gettextf("do not know how to convert '%s' to class %s", p10, p11);
      return r51;
    };
    r53 = dyn stop[, domain](p12, NA_LGL);
    check L63() else D18();
  D16():
    deopt 64 [r42];
  D18():
    deopt 70 [r53];
  L60():
    popenv;
    return r42;
  L63():
    popenv;
    return r53;
  }
}