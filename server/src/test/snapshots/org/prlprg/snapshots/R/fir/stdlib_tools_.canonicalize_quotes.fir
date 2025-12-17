fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4259292012;
    st `.canonicalize_quotes` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4259292012(txt) {
  (reg txt:*) -+> V { var txt:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg txt1:*, reg txt2:V, reg as_character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg txt3:*, reg txt4:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg txt5:*, reg txt6:V, reg Encoding:cls, reg txt7:*, reg txt8:V, reg p:p(V +), reg r10:V, reg gsub:cls, reg txt9:*, reg txt10:V, reg p1:p(V +), reg r12:V, reg gsub1:cls, reg txt11:*, reg txt12:V, reg p2:p(V +), reg r14:V, reg enc:*, reg enc1:V, reg l:*, reg Encoding__:cls, reg r15:V, reg txt13:*, reg txt14:V |
    mkenv;
    st txt = txt;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st txt = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    txt1 = ld txt;
    check L6() else D0();
  L5():
    r = dyn base(<sym txt>);
    goto L0(r);
  D0():
    deopt 2 [txt1];
  L1(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L12() else L2();
  L6():
    txt2 = force? txt1;
    checkMissing(txt2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(txt2);
    check L7() else D1();
  L8():
    txt3 = ld txt;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym txt>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [txt3];
  L2():
    Encoding = ldf Encoding;
    check L16() else D5();
  L7():
    goto L0(r2);
  L10():
    txt4 = force? txt3;
    checkMissing(txt4);
    length = ldf length in base;
    r5 = dyn length(txt4);
    check L11() else D3();
  L12():
    txt5 = ld txt;
    check L13() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 14 [txt5];
  D5():
    deopt 20 [];
  L11():
    goto L1(r5);
  L13():
    txt6 = force? txt5;
    checkMissing(txt6);
    popenv;
    return txt6;
  L16():
    p = prom<V +>{
      txt7 = ld txt;
      txt8 = force? txt7;
      checkMissing(txt8);
      return txt8;
    };
    r10 = dyn Encoding(p);
    check L17() else D6();
  D6():
    deopt 22 [r10];
  L17():
    st enc = r10;
    gsub = ldf gsub;
    check L18() else D7();
  D7():
    deopt 25 [];
  L18():
    p1 = prom<V +>{
      txt9 = ld txt;
      txt10 = force? txt9;
      checkMissing(txt10);
      return txt10;
    };
    r12 = dyn gsub[, , , perl, useBytes]("(\u2018|\u2019)", "'", p1, TRUE, TRUE);
    check L19() else D8();
  D8():
    deopt 33 [r12];
  L19():
    st txt = r12;
    gsub1 = ldf gsub;
    check L20() else D9();
  D9():
    deopt 36 [];
  L20():
    p2 = prom<V +>{
      txt11 = ld txt;
      txt12 = force? txt11;
      checkMissing(txt12);
      return txt12;
    };
    r14 = dyn gsub1[, , , perl, useBytes]("(\u201c|\u201d)", "\"", p2, TRUE, TRUE);
    check L21() else D10();
  D10():
    deopt 44 [r14];
  L21():
    st txt = r14;
    enc = ld enc;
    check L22() else D11();
  D11():
    deopt 46 [enc];
  L22():
    enc1 = force? enc;
    checkMissing(enc1);
    l = ld txt;
    Encoding__ = ldf `Encoding<-`;
    check L23() else D12();
  D12():
    deopt 49 [enc1, l, enc1];
  L23():
    r15 = dyn Encoding__(l, NULL, enc1);
    check L24() else D13();
  D13():
    deopt 51 [enc1, r15];
  L24():
    st txt = r15;
    txt13 = ld txt;
    check L25() else D14();
  D14():
    deopt 53 [txt13];
  L25():
    txt14 = force? txt13;
    checkMissing(txt14);
    popenv;
    return txt14;
  }
}