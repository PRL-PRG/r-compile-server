fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.ORCID_iD_is_valid` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg r:cls, reg vapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg one:*, reg one1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    r = clos inner1236783023;
    st one = r;
    vapply = ldf vapply;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      one = ld one;
      one1 = force? one;
      checkMissing(one1);
      return one1;
    };
    r3 = dyn vapply(p, p1, NA_LGL);
    check L1() else D1();
  D1():
    deopt 8 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg grepl:cls, reg _ORCID_iD_variants_regexp:*, reg _ORCID_iD_variants_regexp1:V, reg p:p(V +), reg s1:*, reg s2:V, reg p1:p(V +), reg r2:V, reg r3:V, reg c:L, reg _ORCID_iD_canonicalize:cls, reg s3:*, reg s4:V, reg p2:p(V +), reg r7:V, reg strsplit:cls, reg gsub:cls, reg s5:*, reg s6:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg c1:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg s7:*, reg s8:V, reg c2:L, reg s10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r17:V, reg as_numeric:cls, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg x:*, reg x1:V, reg r21:V, reg r22:V, reg r23:V, reg sum:cls, reg r24:V, reg t:*, reg t1:V, reg __2:cls, reg r25:V, reg rem:*, reg rem1:V, reg r26:V, reg __3:cls, reg r27:V, reg res:*, reg res1:V, reg r28:V, reg c3:L, reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg res2:*, reg res3:V, reg as_character:cls, reg r31:V, reg z:*, reg z1:V, reg s11:*, reg s12:V, reg c4:L, reg z3:V, reg s14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg z5:V, reg dx5:V, reg __4:cls, reg r32:V, reg r33:V |
    mkenv;
    st s = s;
    grepl = ldf grepl;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      _ORCID_iD_variants_regexp = ld `.ORCID_iD_variants_regexp`;
      _ORCID_iD_variants_regexp1 = force? _ORCID_iD_variants_regexp;
      checkMissing(_ORCID_iD_variants_regexp1);
      return _ORCID_iD_variants_regexp1;
    };
    p1 = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r2 = dyn grepl(p, p1);
    check L10() else D1();
  D1():
    deopt 4 [r2];
  L10():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L11() else L0();
  L0():
    _ORCID_iD_canonicalize = ldf `.ORCID_iD_canonicalize`;
    check L14() else D2();
  L11():
    popenv;
    return FALSE;
  D2():
    deopt 12 [];
  L14():
    p2 = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      return s4;
    };
    r7 = dyn _ORCID_iD_canonicalize(p2);
    check L15() else D3();
  D3():
    deopt 14 [r7];
  L15():
    st s = r7;
    strsplit = ldf strsplit;
    check L16() else D4();
  D4():
    deopt 17 [];
  L16():
    p4 = prom<V +>{
      gsub = ldf gsub;
      p3 = prom<V +>{
        s5 = ld s;
        s6 = force? s5;
        checkMissing(s6);
        return s6;
      };
      r9 = dyn gsub[, , , fixed]("-", "", p3, TRUE);
      return r9;
    };
    r11 = dyn strsplit(p4, "");
    check L17() else D5();
  D5():
    deopt 20 [r11];
  L17():
    c1 = `is.object`(r11);
    if c1 then L18() else L19(r11);
  L2(dx1):
    st s = dx1;
    sym = ldf `as.numeric`;
    base = ldf `as.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L18():
    dr = tryDispatchBuiltin.1("[[", r11);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(r13):
    __ = ldf `[[` in base;
    r14 = dyn __(r13, 1);
    goto L2(r14);
  L3(r16):
    st x = r16;
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L21():
    s7 = ld s;
    check L23() else D6();
  L22():
    r15 = dyn base(<lang `[`(s, `-`(16))>);
    goto L3(r15);
  D6():
    deopt 27 [s7];
  L5(r20):
    st t = r20;
    t = ld t;
    check L32() else D10();
  L23():
    s8 = force? s7;
    checkMissing(s8);
    c2 = `is.object`(s8);
    if c2 then L24() else L25(s8);
  L28():
    x = ld x;
    check L30() else D8();
  L29():
    r19 = dyn base1(<lang `*`(x, `^`(2.0, `(`(`:`(15, 1))))>);
    goto L5(r19);
  D8():
    deopt 37 [x];
  D10():
    deopt 49 [t];
  L4(dx3):
    as_numeric = ldf `as.numeric` in base;
    r18 = dyn as_numeric(dx3);
    check L27() else D7();
  L24():
    dr2 = tryDispatchBuiltin.1("[", s8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(s10):
    __1 = ldf `[` in base;
    r17 = dyn __1(s10, -16);
    goto L4(r17);
  L30():
    x1 = force? x;
    checkMissing(x1);
    r21 = `:`(15, 1);
    r22 = `^`(2.0, r21);
    r23 = `*`(x1, r22);
    sum = ldf sum in base;
    r24 = dyn sum(r23);
    check L31() else D9();
  L32():
    t1 = force? t;
    checkMissing(t1);
    __2 = ldf `%%` in base;
    r25 = dyn __2(t1, 11.0);
    check L33() else D11();
  D7():
    deopt 33 [r18];
  D9():
    deopt 46 [r24];
  D11():
    deopt 53 [r25];
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L27():
    goto L3(r18);
  L31():
    goto L5(r24);
  L33():
    st rem = r25;
    rem = ld rem;
    check L34() else D12();
  D12():
    deopt 57 [12.0, rem];
  L34():
    rem1 = force? rem;
    checkMissing(rem1);
    r26 = `-`(12.0, rem1);
    __3 = ldf `%%` in base;
    r27 = dyn __3(r26, 11.0);
    check L35() else D13();
  D13():
    deopt 62 [r27];
  L35():
    st res = r27;
    res = ld res;
    check L36() else D14();
  D14():
    deopt 64 [res];
  L36():
    res1 = force? res;
    checkMissing(res1);
    r28 = `==`(res1, 10.0);
    c3 = `as.logical`(r28);
    if c3 then L37() else L6();
  L6():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L7(r29):
    st z = r29;
    z = ld z;
    check L43() else D17();
  L37():
    goto L7("X");
  D17():
    deopt 77 [z];
  L39():
    res2 = ld res;
    check L41() else D15();
  L40():
    r30 = dyn base2(<sym res>);
    goto L7(r30);
  L43():
    z1 = force? z;
    checkMissing(z1);
    s11 = ld s;
    check L44() else D18();
  D15():
    deopt 72 [res2];
  D18():
    deopt 78 [z1, s11];
  L41():
    res3 = force? res2;
    checkMissing(res3);
    as_character = ldf `as.character` in base;
    r31 = dyn as_character(res3);
    check L42() else D16();
  L44():
    s12 = force? s11;
    checkMissing(s12);
    c4 = `is.object`(s12);
    if c4 then L45() else L46(z1, s12);
  D16():
    deopt 75 [r31];
  L8(z5, dx5):
    r33 = `==`(z5, dx5);
    popenv;
    return r33;
  L42():
    goto L7(r31);
  L45():
    dr4 = tryDispatchBuiltin.1("[", s12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L47() else L46(z1, dr4);
  L46(z3, s14):
    __4 = ldf `[` in base;
    r32 = dyn __4(s14, 16);
    goto L8(z3, r32);
  L47():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(z1, dx4);
  }
}