fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1236783023;
    st `.bad_DESCRIPTION_URL_field_parts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg s1:*, reg s2:V, reg is_na:cls, reg r2:V, reg c:L, reg character:cls, reg r3:V, reg _get_urls_from_DESCRIPTION_URL_field:cls, reg s3:*, reg s4:V, reg p:p(V +), reg r7:V, reg strsplit:cls, reg s5:*, reg s6:V, reg p1:p(V +), reg r9:V, reg c1:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg y:*, reg y1:V, reg length:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg r20:V, reg z:*, reg z1:V, reg length1:cls, reg r21:V, reg r22:V, reg c2:L, reg character1:cls, reg r23:V, reg _w_o_:cls, reg z2:*, reg z3:V, reg p2:p(V +), reg y2:*, reg y3:V, reg p3:p(V +), reg r26:V, reg z4:*, reg z5:V, reg c3:L, reg z7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg grepl:cls, reg z8:*, reg z9:V, reg p4:p(V +), reg r28:V, reg r29:V, reg __1:cls, reg r30:V |
    mkenv;
    st s = s;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    c = `as.logical`(r1);
    if c then L12() else L1();
  L8():
    s1 = ld s;
    check L10() else D0();
  L9():
    r = dyn base(<sym s>);
    goto L0(r);
  D0():
    deopt 2 [s1];
  L1():
    _get_urls_from_DESCRIPTION_URL_field = ldf `.get_urls_from_DESCRIPTION_URL_field`;
    check L17() else D4();
  L10():
    s2 = force? s1;
    checkMissing(s2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(s2);
    check L11() else D1();
  L12():
    character = ldf character;
    check L13() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 13 [];
  L11():
    goto L0(r2);
  L13():
    r3 = dyn character();
    check L14() else D3();
  L17():
    p = prom<V +>{
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      return s4;
    };
    r7 = dyn _get_urls_from_DESCRIPTION_URL_field(p);
    check L18() else D5();
  D3():
    deopt 8 [r3];
  D5():
    deopt 15 [r7];
  L14():
    popenv;
    return r3;
  L18():
    st y = r7;
    strsplit = ldf strsplit;
    check L19() else D6();
  D6():
    deopt 18 [];
  L19():
    p1 = prom<V +>{
      s5 = ld s;
      s6 = force? s5;
      checkMissing(s6);
      return s6;
    };
    r9 = dyn strsplit(p1, "[[:space:]]*(\\([^)]*\\))?([,[:space:]]+|$)");
    check L20() else D7();
  D7():
    deopt 21 [r9];
  L20():
    c1 = `is.object`(r9);
    if c1 then L21() else L22(r9);
  L3(dx1):
    st z = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L21():
    dr = tryDispatchBuiltin.1("[[", r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(r11):
    __ = ldf `[[` in base;
    r12 = dyn __(r11, 1);
    goto L3(r12);
  L4(r14):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L24():
    y = ld y;
    check L26() else D8();
  L25():
    r13 = dyn base1(<sym y>);
    goto L4(r13);
  D8():
    deopt 28 [y];
  L5(r19, r20):
    r22 = `==`(r19, r20);
    c2 = `as.logical`(r22);
    if c2 then L32() else L6();
  L26():
    y1 = force? y;
    checkMissing(y1);
    length = ldf length in base;
    r15 = dyn length(y1);
    check L27() else D9();
  L28():
    z = ld z;
    check L30() else D10();
  L29():
    r18 = dyn base2(<sym z>);
    goto L5(r14, r18);
  D9():
    deopt 31 [r15];
  D10():
    deopt 33 [r14, z];
  L6():
    _w_o_ = ldf `%w/o%`;
    check L36() else D14();
  L27():
    goto L4(r15);
  L30():
    z1 = force? z;
    checkMissing(z1);
    length1 = ldf length in base;
    r21 = dyn length1(z1);
    check L31() else D11();
  L32():
    character1 = ldf character;
    check L33() else D12();
  D11():
    deopt 36 [r14, r21];
  D12():
    deopt 39 [];
  D14():
    deopt 42 [];
  L31():
    goto L5(r14, r21);
  L33():
    r23 = dyn character1();
    check L34() else D13();
  L36():
    p2 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    p3 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r26 = dyn _w_o_(p2, p3);
    check L37() else D15();
  D13():
    deopt 40 [r23];
  D15():
    deopt 45 [r26];
  L34():
    popenv;
    return r23;
  L37():
    st z = r26;
    z4 = ld z;
    check L38() else D16();
  D16():
    deopt 47 [z4];
  L38():
    z5 = force? z4;
    checkMissing(z5);
    c3 = `is.object`(z5);
    if c3 then L39() else L40(z5);
  L7(dx3):
    popenv;
    return dx3;
  L39():
    dr2 = tryDispatchBuiltin.1("[", z5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(dr2);
  L40(z7):
    grepl = ldf grepl;
    check L42() else D17();
  D17():
    deopt 50 [z7];
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L42():
    p4 = prom<V +>{
      z8 = ld z;
      z9 = force? z8;
      checkMissing(z9);
      return z9;
    };
    r28 = dyn grepl("^<?(svn://|doi:)", p4);
    check L43() else D18();
  D18():
    deopt 53 [z7, r28];
  L43():
    r29 = `!`(r28);
    __1 = ldf `[` in base;
    r30 = dyn __1(z7, r29);
    goto L7(r30);
  }
}