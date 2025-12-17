fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3570465397;
    st `print.listof` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3570465397(x, nl, `...`) {
  (reg x:*, reg nl:*, reg ddd:dots) -+> V { var x:*, var nl:*, reg nl_isMissing:L, reg nl_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg length:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg nn:*, reg nn1:V, reg length1:cls, reg r8:V, reg ll:*, reg ll1:V, reg r9:V, reg c:L, reg paste:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg ll2:*, reg ll3:V, reg seq_int:cls, reg r12:V, reg p:p(V +), reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg ll4:*, reg ll5:V, reg r18:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x5:V, reg cat:cls, reg nn2:*, reg nn3:V, reg c2:L, reg nn5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r19:V, reg p1:p(V +), reg nl1:*, reg nl2:V, reg c3:L, reg p2:p(V +), reg r22:V, reg print:cls, reg x6:*, reg x7:V, reg c4:L, reg x9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i7:*, reg i8:V, reg __1:cls, reg r23:V, reg p3:p(V +), reg ddd1:dots?, reg r25:V, reg nl3:*, reg nl4:V, reg c5:L, reg cat1:cls, reg r26:V, reg i11:I, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg x10:*, reg x11:V, reg invisible:cls, reg r30:V |
    mkenv;
    st x = x;
    nl_isMissing = missing.0(nl);
    if nl_isMissing then L0(TRUE) else L0(nl);
  L0(nl_orDefault):
    st nl = nl_orDefault;
    st `...` = ddd;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r1):
    st nn = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L12():
    x1 = ld x;
    check L14() else D0();
  L13():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2(r4):
    st ll = r4;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L14():
    x2 = force? x1;
    checkMissing(x2);
    names = ldf names in base;
    r2 = dyn names(x2);
    check L15() else D1();
  L16():
    x3 = ld x;
    check L18() else D2();
  L17():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [x3];
  L3(r7):
    ll = ld ll;
    check L24() else D6();
  L15():
    goto L1(r2);
  L18():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r5 = dyn length(x4);
    check L19() else D3();
  L20():
    nn = ld nn;
    check L22() else D4();
  L21():
    r6 = dyn base2(<sym nn>);
    goto L3(r6);
  D3():
    deopt 12 [r5];
  D4():
    deopt 16 [nn];
  D6():
    deopt 19 [r7, ll];
  L19():
    goto L2(r5);
  L22():
    nn1 = force? nn;
    checkMissing(nn1);
    length1 = ldf length in base;
    r8 = dyn length1(nn1);
    check L23() else D5();
  L24():
    ll1 = force? ll;
    checkMissing(ll1);
    r9 = `!=`(r7, ll1);
    c = `as.logical`(r9);
    if c then L25() else L4();
  D5():
    deopt 19 [r8];
  L4():
    goto L5();
  L5():
    sym4 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L23():
    goto L3(r8);
  L25():
    paste = ldf paste;
    check L26() else D7();
  D7():
    deopt 23 [];
  L6(r17):
    s = toForSeq(r17);
    l = length(s);
    i = 0;
    goto L7(i);
  L26():
    p = prom<V +>{
      sym3 = ldf `seq.int`;
      base3 = ldf `seq.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      ll2 = ld ll;
      ll3 = force? ll2;
      checkMissing(ll3);
      seq_int = ldf `seq.int` in base;
      r12 = dyn seq_int(ll3);
      goto L0(r12);
    L2():
      r10 = dyn base3(<sym ll>);
      goto L0(r10);
    };
    r14 = dyn paste("Component", p);
    check L27() else D8();
  L29():
    ll4 = ld ll;
    check L31() else D9();
  L30():
    r16 = dyn base4(<sym ll>);
    goto L6(r16);
  D8():
    deopt 26 [r14];
  D9():
    deopt 31 [ll4];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L32() else L10();
  L27():
    st nn = r14;
    goto L5();
  L31():
    ll5 = force? ll4;
    checkMissing(ll5);
    r18 = seq_len(ll5);
    goto L6(r18);
  L10():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    cat = ldf cat;
    check L33() else D10();
  L32():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L42() else L43();
  D10():
    deopt 35 [i2];
  L11(r29):
    popenv;
    return r29;
  L33():
    p1 = prom<V +>{
      nn2 = ld nn;
      nn3 = force? nn2;
      checkMissing(nn3);
      c2 = `is.object`(nn3);
      if c2 then L1() else L2(nn3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", nn3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(nn5):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r19 = dyn __(nn5, i6);
      goto L0(r19);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      nl1 = ld nl;
      nl2 = force? nl1;
      checkMissing(nl2);
      c3 = `as.logical`(nl2);
      if c3 then L1() else L0();
    L0():
      return ": ";
    L1():
      return ":\n";
    };
    r22 = dyn cat(p1, p2);
    check L34() else D11();
  L42():
    x10 = ld x;
    check L44() else D17();
  L43():
    r28 = dyn base5(<sym x>);
    goto L11(r28);
  D11():
    deopt 38 [i2, r22];
  D17():
    deopt 57 [x10];
  L34():
    print = ldf print;
    check L35() else D12();
  L44():
    x11 = force? x10;
    checkMissing(x11);
    invisible = ldf invisible in base;
    r30 = dyn invisible(x11);
    check L45() else D18();
  D12():
    deopt 40 [i2];
  D18():
    deopt 60 [r30];
  L35():
    p3 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      c4 = `is.object`(x7);
      if c4 then L1() else L2(x7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", x7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x9):
      i7 = ld i;
      i8 = force? i7;
      __1 = ldf `[[` in base;
      r23 = dyn __1(x9, i8);
      goto L0(r23);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    ddd1 = ld `...`;
    r25 = dyn print[, `...`](p3, ddd1);
    check L36() else D13();
  L45():
    goto L11(r30);
  D13():
    deopt 43 [i2, r25];
  L36():
    nl3 = ld nl;
    check L37() else D14();
  D14():
    deopt 44 [i2, nl3];
  L37():
    nl4 = force? nl3;
    checkMissing(nl4);
    c5 = `as.logical`(nl4);
    if c5 then L38() else L8();
  L8():
    goto L9(i2);
  L9(i11):
    goto L7(i11);
  L38():
    cat1 = ldf cat;
    check L39() else D15();
  D15():
    deopt 47 [i2];
  L39():
    r26 = dyn cat1("\n");
    check L40() else D16();
  D16():
    deopt 49 [i2, r26];
  L40():
    goto L9(i2);
  }
}