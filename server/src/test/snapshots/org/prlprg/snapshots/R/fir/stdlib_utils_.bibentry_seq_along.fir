fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1830776227;
    st `.bibentry_seq_along` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1830776227(x, i) {
  (reg x:*, reg i:*) -+> V { var x:*, var i:*, reg i_isMissing:L, reg i_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg r6:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c5:L, reg r8:V, reg i1:*, reg i2:V, reg c6:L, reg c7:L, reg c8:V, reg c10:L, reg _bibentry_names_or_keys:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r10:V, reg l:*, reg names__:cls, reg r11:V, reg s:*, reg s1:V |
    mkenv;
    st x = x;
    i_isMissing = missing.0(i);
    if i_isMissing then L0(NULL) else L0(i);
  L0(i_orDefault):
    st i = i_orDefault;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    st s = r1;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 1 [x1];
  L2(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L12() else L3(c);
  L9():
    x2 = force? x1;
    checkMissing(x2);
    r2 = seq_along(x2);
    goto L1(r2);
  L10():
    missing = ldf missing in base;
    r5 = dyn missing(<sym i>);
    goto L2(r5);
  L11():
    r3 = dyn base1(<sym i>);
    goto L2(r3);
  L3(c2):
    c10 = `as.logical`(c2);
    if c10 then L17() else L5();
  L12():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L4(c5, r8):
    c7 = `as.logical`(r8);
    c8 = `&&`(c5, c7);
    goto L3(c8);
  L5():
    goto L6();
  L6():
    s = ld s;
    check L23() else D6();
  L13():
    i1 = ld i;
    check L15() else D1();
  L14():
    r7 = dyn base2(<sym i>);
    goto L4(c, r7);
  L17():
    _bibentry_names_or_keys = ldf `.bibentry_names_or_keys`;
    check L18() else D2();
  D1():
    deopt 10 [c, i1];
  D2():
    deopt 15 [];
  D6():
    deopt 25 [s];
  L15():
    i2 = force? i1;
    checkMissing(i2);
    c6 = `is.character`(i2);
    goto L4(c, c6);
  L18():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r10 = dyn _bibentry_names_or_keys(p);
    check L19() else D3();
  L23():
    s1 = force? s;
    checkMissing(s1);
    popenv;
    return s1;
  D3():
    deopt 17 [r10];
  L19():
    l = ld s;
    names__ = ldf `names<-`;
    check L20() else D4();
  D4():
    deopt 19 [r10, l, r10];
  L20():
    r11 = dyn names__(l, NULL, r10);
    check L21() else D5();
  D5():
    deopt 21 [r10, r11];
  L21():
    st s = r11;
    goto L6();
  }
}