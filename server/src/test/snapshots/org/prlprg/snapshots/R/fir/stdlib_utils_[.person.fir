fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3886051477;
    st `[.person` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3886051477(x, i, j) {
  (reg x:*, reg i:*, reg j:*) -+> V { var x:*, var i:*, var j:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg lengths:cls, reg y:*, reg y1:V, reg p:p(V +), reg r9:V, reg r10:V, reg all:cls, reg r11:V, reg r12:V, reg c1:L, reg warning:cls, reg gettext:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg y2:*, reg y3:V, reg c2:L, reg y5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ok:*, reg ok1:V, reg __1:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg missing:cls, reg r19:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg x3:*, reg x4:V, reg class:cls, reg r22:V, reg l:*, reg class__:cls, reg r23:V, reg match_arg:cls, reg j1:*, reg j2:V, reg p2:p(V +), reg person_field_names:*, reg person_field_names1:V, reg p3:p(V +), reg r27:V, reg lapply:cls, reg y6:*, reg y7:V, reg p4:p(V +), reg __2:*, reg __3:V, reg p5:p(V +), reg j3:*, reg j4:V, reg p6:p(V +), reg r31:V, reg y8:*, reg y9:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    c = `is.object`(r1);
    if c then L14() else L15(r1);
  L10():
    x1 = ld x;
    check L12() else D0();
  L11():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(dx1):
    st y = dx1;
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L12():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r2 = dyn unclass(x2);
    check L13() else D1();
  L14():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(r4):
    i1 = ld i;
    check L17() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 6 [r4, i1];
  L2(r7):
    r12 = `!`(r7);
    c1 = `as.logical`(r12);
    if c1 then L23() else L3();
  L13():
    goto L0(r2);
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L17():
    i2 = force? i1;
    __ = ldf `[` in base;
    r5 = dyn __(r4, i2);
    goto L1(r5);
  L18():
    lengths = ldf lengths;
    check L20() else D3();
  L19():
    r6 = dyn base1(<lang `<-`(ok, `>`(lengths(y), 0))>);
    goto L2(r6);
  D3():
    deopt 13 [];
  L3():
    goto L5();
  L5():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L20():
    p = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r9 = dyn lengths(p);
    check L21() else D4();
  L23():
    warning = ldf warning;
    check L24() else D6();
  D4():
    deopt 15 [r9];
  D6():
    deopt 23 [];
  L6(r18):
    c3 = `as.logical`(r18);
    if c3 then L34() else L7();
  L21():
    r10 = `>`(r9, 0);
    st ok = r10;
    all = ldf all in base;
    r11 = dyn all(r10);
    check L22() else D5();
  L24():
    p1 = prom<V +>{
      gettext = ldf gettext;
      r13 = dyn gettext("subscript out of bounds");
      return r13;
    };
    r15 = dyn warning[, domain](p1, NA_LGL);
    check L25() else D7();
  L32():
    missing = ldf missing in base;
    r19 = dyn missing(<sym j>);
    goto L6(r19);
  L33():
    r17 = dyn base2(<sym j>);
    goto L6(r17);
  D5():
    deopt 20 [r11];
  D7():
    deopt 27 [r15];
  L7():
    match_arg = ldf `match.arg`;
    check L42() else D14();
  L9():
    y8 = ld y;
    check L46() else D18();
  L22():
    goto L2(r11);
  L25():
    y2 = ld y;
    check L26() else D8();
  L34():
    sym3 = ldf class;
    base3 = ldf class in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  D8():
    deopt 28 [y2];
  D14():
    deopt 51 [];
  D18():
    deopt 63 [y8];
  L8(r21):
    l = ld y;
    class__ = ldf `class<-`;
    check L39() else D12();
  L26():
    y3 = force? y2;
    checkMissing(y3);
    c2 = `is.object`(y3);
    if c2 then L27() else L28(y3);
  L35():
    x3 = ld x;
    check L37() else D10();
  L36():
    r20 = dyn base3(<sym x>);
    goto L8(r20);
  L42():
    p2 = prom<V +>{
      j1 = ld j;
      j2 = force? j1;
      checkMissing(j2);
      return j2;
    };
    p3 = prom<V +>{
      person_field_names = ld person_field_names;
      person_field_names1 = force? person_field_names;
      checkMissing(person_field_names1);
      return person_field_names1;
    };
    r27 = dyn match_arg(p2, p3);
    check L43() else D15();
  L46():
    y9 = force? y8;
    checkMissing(y9);
    popenv;
    return y9;
  D10():
    deopt 41 [x3];
  D12():
    deopt 46 [r21, l, r21];
  D15():
    deopt 54 [r27];
  L4(dx3):
    st y = dx3;
    goto L5();
  L27():
    dr2 = tryDispatchBuiltin.1("[", y3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(dr2);
  L28(y5):
    ok = ld ok;
    check L30() else D9();
  L37():
    x4 = force? x3;
    checkMissing(x4);
    class = ldf class in base;
    r22 = dyn class(x4);
    check L38() else D11();
  L39():
    r23 = dyn class__(l, NULL, r21);
    check L40() else D13();
  L43():
    st j = r27;
    lapply = ldf lapply;
    check L44() else D16();
  D9():
    deopt 30 [y5, ok];
  D11():
    deopt 44 [r22];
  D13():
    deopt 48 [r21, r23];
  D16():
    deopt 57 [];
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L30():
    ok1 = force? ok;
    __1 = ldf `[` in base;
    r16 = dyn __1(y5, ok1);
    goto L4(r16);
  L38():
    goto L8(r22);
  L40():
    st y = r23;
    goto L9();
  L44():
    p4 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p5 = prom<V +>{
      __2 = ld `[[`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    p6 = prom<V +>{
      j3 = ld j;
      j4 = force? j3;
      checkMissing(j4);
      return j4;
    };
    r31 = dyn lapply(p4, p5, p6);
    check L45() else D17();
  D17():
    deopt 61 [r31];
  L45():
    st y = r31;
    goto L9();
  }
}