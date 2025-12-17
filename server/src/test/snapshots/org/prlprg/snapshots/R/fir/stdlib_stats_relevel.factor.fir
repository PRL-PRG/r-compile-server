fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner238421359;
    st `relevel.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner238421359(x, ref, `...`) {
  (reg x:*, reg ref:*, reg ddd:dots) -+> V { var x:*, var ref:*, var `...`:dots?, reg levels:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg ref1:*, reg ref2:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg ref3:*, reg ref4:V, reg c1:L, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg ref5:*, reg ref6:V, reg lev:*, reg lev1:V, reg match:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg ref7:*, reg ref8:V, reg is_na:cls, reg r16:V, reg c3:L, reg stop1:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg lev2:*, reg lev3:V, reg length1:cls, reg r21:V, reg ref9:*, reg ref10:V, reg r22:V, reg c4:L, reg c5:V, reg ref11:*, reg ref12:V, reg nlev:*, reg nlev1:V, reg r23:V, reg c7:L, reg c8:V, reg c10:L, reg stop2:cls, reg gettextf:cls, reg ref13:*, reg ref14:V, reg p1:p(V +), reg nlev2:*, reg nlev3:V, reg p2:p(V +), reg r26:V, reg p3:p(V +), reg r28:V, reg factor:cls, reg x3:*, reg x4:V, reg p4:p(V +), reg lev4:*, reg lev5:V, reg c11:L, reg lev7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg lev10:V, reg r32:V, reg ref15:*, reg ref16:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg lev13:V, reg r34:V, reg lev14:*, reg lev15:V, reg r35:I, reg c12:L, reg lev17:V, reg r37:V, reg dr2:V, reg dc1:L, reg dx2:V, reg lev19:V, reg dx3:V, reg ref17:*, reg ref18:V, reg r38:V, reg __:cls, reg r39:V, reg c13:cls, reg r40:V, reg __1:cls, reg r41:V, reg p5:p(V +), reg r43:V |
    mkenv;
    st x = x;
    st ref = ref;
    st `...` = ddd;
    levels = ldf levels;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn levels(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    st lev = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r3):
    r5 = `!=`(r3, 1);
    c = `as.logical`(r5);
    if c then L20() else L1();
  L16():
    ref1 = ld ref;
    check L18() else D2();
  L17():
    r2 = dyn base(<sym ref>);
    goto L0(r2);
  D2():
    deopt 7 [ref1];
  L1():
    goto L2();
  L2():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L18():
    ref2 = force? ref1;
    checkMissing(ref2);
    length = ldf length in base;
    r4 = dyn length(ref2);
    check L19() else D3();
  L20():
    stop = ldf stop;
    check L21() else D4();
  D3():
    deopt 10 [r4];
  D4():
    deopt 14 [];
  L3(r9):
    c2 = `as.logical`(r9);
    if c2 then L27() else L4();
  L19():
    goto L0(r4);
  L21():
    r6 = dyn stop("'ref' must be of length one");
    check L22() else D5();
  L24():
    ref3 = ld ref;
    check L26() else D6();
  L25():
    r8 = dyn base1(<sym ref>);
    goto L3(r8);
  D5():
    deopt 16 [r6];
  D6():
    deopt 20 [ref3];
  L4():
    goto L6();
  L6():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L22():
    goto L2();
  L26():
    ref4 = force? ref3;
    checkMissing(ref4);
    c1 = `is.character`(ref4);
    goto L3(c1);
  L27():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L5(r11):
    st ref = r11;
    goto L6();
  L7(r15):
    c3 = `as.logical`(r15);
    if c3 then L38() else L8();
  L28():
    ref5 = ld ref;
    check L30() else D7();
  L29():
    r10 = dyn base2(<sym ref>, <sym lev>);
    goto L5(r10);
  L34():
    ref7 = ld ref;
    check L36() else D10();
  L35():
    r14 = dyn base3(<sym ref>);
    goto L7(r14);
  D7():
    deopt 25 [ref5];
  D10():
    deopt 38 [ref7];
  L8():
    goto L9();
  L9():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L30():
    ref6 = force? ref5;
    checkMissing(ref6);
    lev = ld lev;
    check L31() else D8();
  L36():
    ref8 = force? ref7;
    checkMissing(ref8);
    is_na = ldf `is.na` in base;
    r16 = dyn is_na(ref8);
    check L37() else D11();
  L38():
    stop1 = ldf stop;
    check L39() else D12();
  D8():
    deopt 27 [lev];
  D11():
    deopt 41 [r16];
  D12():
    deopt 43 [];
  L10(r20):
    st nlev = r20;
    ref9 = ld ref;
    check L46() else D16();
  L31():
    lev1 = force? lev;
    checkMissing(lev1);
    match = ldf match in base;
    r12 = dyn match(ref6, lev1, NA_INT, NULL);
    check L32() else D9();
  L37():
    goto L7(r16);
  L39():
    r17 = dyn stop1("'ref' must be an existing level");
    check L40() else D13();
  L42():
    lev2 = ld lev;
    check L44() else D14();
  L43():
    r19 = dyn base4(<sym lev>);
    goto L10(r19);
  D9():
    deopt 32 [r12];
  D13():
    deopt 45 [r17];
  D14():
    deopt 50 [lev2];
  D16():
    deopt 55 [ref9];
  L32():
    goto L5(r12);
  L40():
    goto L9();
  L44():
    lev3 = force? lev2;
    checkMissing(lev3);
    length1 = ldf length in base;
    r21 = dyn length1(lev3);
    check L45() else D15();
  L46():
    ref10 = force? ref9;
    checkMissing(ref10);
    r22 = `<`(ref10, 1.0);
    c4 = `as.logical`(r22);
    if c4 then L11(c4) else L47();
  D15():
    deopt 53 [r21];
  L11(c5):
    c10 = `as.logical`(c5);
    if c10 then L51() else L12();
  L45():
    goto L10(r21);
  L47():
    ref11 = ld ref;
    check L48() else D17();
  D17():
    deopt 59 [c4, ref11];
  L12():
    goto L13();
  L13():
    factor = ldf factor;
    check L55() else D21();
  L48():
    ref12 = force? ref11;
    checkMissing(ref12);
    nlev = ld nlev;
    check L49() else D18();
  L51():
    stop2 = ldf stop;
    check L52() else D19();
  D18():
    deopt 60 [c4, ref12, nlev];
  D19():
    deopt 65 [];
  D21():
    deopt 73 [];
  L49():
    nlev1 = force? nlev;
    checkMissing(nlev1);
    r23 = `>`(ref12, nlev1);
    c7 = `as.logical`(r23);
    c8 = `||`(c4, c7);
    goto L11(c8);
  L52():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        ref13 = ld ref;
        ref14 = force? ref13;
        checkMissing(ref14);
        return ref14;
      };
      p2 = prom<V +>{
        nlev2 = ld nlev;
        nlev3 = force? nlev2;
        checkMissing(nlev3);
        return nlev3;
      };
      r26 = dyn gettextf("ref = %d must be in 1L:%d", p1, p2);
      return r26;
    };
    r28 = dyn stop2[, domain](p3, NA_LGL);
    check L53() else D20();
  L55():
    p4 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p5 = prom<V +>{
      lev4 = ld lev;
      lev5 = force? lev4;
      checkMissing(lev5);
      c11 = `is.object`(lev5);
      if c11 then L4() else L5(lev5);
    L0(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[", lev5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(lev7):
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L7() else L8();
    L1(lev10, r32):
      __1 = ldf `[` in base;
      r41 = dyn __1(lev10, r32);
      goto L0(r41);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L7():
      ref15 = ld ref;
      ref16 = force? ref15;
      checkMissing(ref16);
      sym6 = ldf seq_along;
      base6 = ldf seq_along in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L9() else L10();
    L8():
      r31 = dyn base5(<sym ref>, <lang `[`(seq_along(lev), `-`(ref))>);
      goto L1(lev7, r31);
    L2(lev13, r34):
      c12 = `is.object`(r34);
      if c12 then L11() else L12(lev13, r34);
    L9():
      lev14 = ld lev;
      lev15 = force? lev14;
      checkMissing(lev15);
      r35 = seq_along(lev15);
      goto L2(lev7, r35);
    L10():
      r33 = dyn base6(<sym lev>);
      goto L2(lev7, r33);
    L3(lev19, dx3):
      c13 = ldf c in base;
      r40 = dyn c13(ref16, dx3);
      goto L1(lev19, r40);
    L11():
      dr2 = tryDispatchBuiltin.1("[", r34);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L13() else L12(lev13, dr2);
    L12(lev17, r37):
      ref17 = ld ref;
      ref18 = force? ref17;
      checkMissing(ref18);
      r38 = `-`(<missing>, ref18);
      __ = ldf `[` in base;
      r39 = dyn __(r37, r38);
      goto L3(lev17, r39);
    L13():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(lev13, dx2);
    };
    r43 = dyn factor[, levels, exclude](p4, p5, NULL);
    check L56() else D22();
  D20():
    deopt 69 [r28];
  D22():
    deopt 79 [r43];
  L53():
    goto L13();
  L56():
    popenv;
    return r43;
  }
}