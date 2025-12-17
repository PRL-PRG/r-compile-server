fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3964604956;
    st str2logical = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3964604956(x, `na.ok`) {
  (reg x:*, reg na_ok:*) -+> V { var x:*, var `na.ok`:*, reg na_ok_isMissing:L, reg na_ok_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg as_character:cls, reg r5:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg length:cls, reg r9:V, reg r10:V, reg p:p(V +), reg r12:V, reg na_ok1:*, reg na_ok2:V, reg c2:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg c7:L, reg r14:V, reg x7:*, reg x8:V, reg is_na:cls, reg r15:V, reg c8:L, reg c9:L, reg c10:V, reg x9:*, reg x10:V, reg r16:V, reg c13:L, reg c14:V, reg c17:L, reg c18:V, reg c20:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg x11:*, reg x12:V, reg as_logical:cls, reg r23:V, reg is_na1:cls, reg r24:V, reg r25:V, reg c21:L, reg v:*, reg v1:V, reg tolower:cls, reg x13:*, reg x14:V, reg p1:p(V +), reg r29:V, reg _in_:cls, reg v2:*, reg v3:V, reg p2:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg c22:cls, reg r33:V, reg p3:p(V +), reg r35:V, reg c23:L, reg _in_1:cls, reg v4:*, reg v5:V, reg p4:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg c24:cls, reg r39:V, reg p5:p(V +), reg r41:V, reg c25:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg x15:*, reg x16:V, reg p6:p(V +), reg r43:V, reg p7:p(V +), reg r45:V, reg p8:p(V +), reg r47:V |
    mkenv;
    st x = x;
    na_ok_isMissing = missing.0(na_ok);
    if na_ok_isMissing then L0(TRUE) else L0(na_ok);
  L0(na_ok_orDefault):
    st `na.ok` = na_ok_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L1(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L19() else L2();
  L16():
    x1 = ld x;
    check L18() else D0();
  L17():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 1 [x1];
  L2():
    goto L4();
  L4():
    stopifnot = ldf stopifnot;
    check L25() else D3();
  L18():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L1(c);
  L19():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  D3():
    deopt 15 [];
  L3(r4):
    st x = r4;
    goto L4();
  L20():
    x3 = ld x;
    check L22() else D1();
  L21():
    r3 = dyn base1(<sym x>);
    goto L3(r3);
  L25():
    p = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      r10 = `==`(r8, 1);
      return r10;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      length = ldf length in base;
      r9 = dyn length(x6);
      goto L0(r9);
    L2():
      r7 = dyn base2(<sym x>);
      goto L0(r7);
    };
    r12 = dyn stopifnot(p);
    check L26() else D4();
  D1():
    deopt 7 [x3];
  D4():
    deopt 17 [r12];
  L22():
    x4 = force? x3;
    checkMissing(x4);
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(x4);
    check L23() else D2();
  L26():
    na_ok1 = ld `na.ok`;
    check L27() else D5();
  D2():
    deopt 10 [r5];
  D5():
    deopt 18 [na_ok1];
  L23():
    goto L3(r5);
  L27():
    na_ok2 = force? na_ok1;
    checkMissing(na_ok2);
    c2 = `as.logical`(na_ok2);
    if c2 then L28() else L5(c2);
  L5(c4):
    c20 = `as.logical`(c4);
    if c20 then L37() else L8();
  L28():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L6(c7, r14):
    c8 = `as.logical`(r14);
    if c8 then L7(c7, c8) else L33();
  L8():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L29():
    x7 = ld x;
    check L31() else D6();
  L30():
    r13 = dyn base3(<sym x>);
    goto L6(c2, r13);
  L37():
    popenv;
    return NA_LGL;
  D6():
    deopt 22 [c2, x7];
  L7(c9, c10):
    c17 = `as.logical`(c10);
    c18 = `&&`(c9, c17);
    goto L5(c18);
  L10(r20):
    r25 = `!`(r20);
    c21 = `as.logical`(r25);
    if c21 then L47() else L12();
  L31():
    x8 = force? x7;
    checkMissing(x8);
    is_na = ldf `is.na` in base;
    r15 = dyn is_na(x8);
    check L32() else D7();
  L33():
    x9 = ld x;
    check L34() else D8();
  L40():
    sym5 = ldf `as.logical`;
    base5 = ldf `as.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  L41():
    r19 = dyn base4(<lang `<-`(v, as.logical(x))>);
    goto L10(r19);
  D7():
    deopt 25 [c2, r15];
  D8():
    deopt 26 [c7, c8, x9];
  L11(r22):
    st v = r22;
    is_na1 = ldf `is.na` in base;
    r24 = dyn is_na1(r22);
    check L46() else D11();
  L12():
    tolower = ldf tolower;
    check L51() else D13();
  L32():
    goto L6(c2, r15);
  L34():
    x10 = force? x9;
    checkMissing(x10);
    r16 = `==`(x10, "NA");
    c13 = `as.logical`(r16);
    c14 = `||`(c8, c13);
    goto L7(c7, c14);
  L42():
    x11 = ld x;
    check L44() else D9();
  L43():
    r21 = dyn base5(<sym x>);
    goto L11(r21);
  L47():
    v = ld v;
    check L48() else D12();
  D9():
    deopt 41 [x11];
  D11():
    deopt 47 [r24];
  D12():
    deopt 49 [v];
  D13():
    deopt 55 [];
  L44():
    x12 = force? x11;
    checkMissing(x12);
    as_logical = ldf `as.logical` in base;
    r23 = dyn as_logical(x12);
    check L45() else D10();
  L46():
    goto L10(r24);
  L48():
    v1 = force? v;
    checkMissing(v1);
    popenv;
    return v1;
  L51():
    p1 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r29 = dyn tolower(p1);
    check L52() else D14();
  D10():
    deopt 44 [r23];
  D14():
    deopt 57 [r29];
  L45():
    goto L11(r23);
  L52():
    st v = r29;
    _in_ = ldf `%in%`;
    check L53() else D15();
  D15():
    deopt 60 [];
  L53():
    p2 = prom<V +>{
      v2 = ld v;
      v3 = force? v2;
      checkMissing(v3);
      return v3;
    };
    p3 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      c22 = ldf c in base;
      r33 = dyn c22("1", "yes");
      goto L0(r33);
    L2():
      r31 = dyn base6("1", "yes");
      goto L0(r31);
    };
    r35 = dyn _in_(p2, p3);
    check L54() else D16();
  D16():
    deopt 63 [r35];
  L54():
    c23 = `as.logical`(r35);
    if c23 then L55() else L14();
  L14():
    _in_1 = ldf `%in%`;
    check L57() else D17();
  L55():
    popenv;
    return TRUE;
  D17():
    deopt 67 [];
  L57():
    p4 = prom<V +>{
      v4 = ld v;
      v5 = force? v4;
      checkMissing(v5);
      return v5;
    };
    p5 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      c24 = ldf c in base;
      r39 = dyn c24("0", "no");
      goto L0(r39);
    L2():
      r37 = dyn base7("0", "no");
      goto L0(r37);
    };
    r41 = dyn _in_1(p4, p5);
    check L58() else D18();
  D18():
    deopt 70 [r41];
  L58():
    c25 = `as.logical`(r41);
    if c25 then L59() else L15();
  L15():
    warning = ldf warning;
    check L61() else D19();
  L59():
    popenv;
    return FALSE;
  D19():
    deopt 74 [];
  L61():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          x15 = ld x;
          x16 = force? x15;
          checkMissing(x16);
          return x16;
        };
        r43 = dyn sQuote(p6);
        return r43;
      };
      r45 = dyn gettextf("cannot coerce %s to TRUE or FALSE", p7);
      return r45;
    };
    r47 = dyn warning[, domain](p8, NA_LGL);
    check L62() else D20();
  D20():
    deopt 78 [r47];
  L62():
    popenv;
    return NA_LGL;
  }
}