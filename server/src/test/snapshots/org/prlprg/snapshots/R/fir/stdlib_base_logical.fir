fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg as_logical:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg letters:*, reg letters1:V, reg length:cls, reg r9:V, reg c1:L, reg cat:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg c2:cls, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg charvec:*, reg charvec1:V, reg as_logical1:cls, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg factor:cls, reg charvec2:*, reg charvec3:V, reg p:p(V +), reg r21:V, reg as_logical2:cls, reg r22:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r23:V, reg r24:V, reg factor1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r25:V, reg r26:V, reg c3:cls, reg r27:V, reg p1:p(V +), reg r29:V, reg as_logical3:cls, reg r30:V |
    mkenv;
    r = clos `inner-497502118`;
    st logical = r;
    sym = ldf `as.logical`;
    base = ldf `as.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L9():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L10():
    r1 = dyn base(<lang c(pi, 0.0)>);
    goto L0();
  L1(r4):
    as_logical = ldf `as.logical` in base;
    r6 = dyn as_logical(r4);
    check L14() else D1();
  L2(r8):
    c1 = `as.logical`(r8);
    if c1 then L19() else L3();
  L11():
    c = ldf c in base;
    r5 = dyn c(3.141592653589793, 0.0);
    check L13() else D0();
  L12():
    r3 = dyn base1(<sym pi>, 0.0);
    goto L1(r3);
  L15():
    letters = ld letters;
    check L17() else D2();
  L16():
    r7 = dyn base2(<sym letters>);
    goto L2(r7);
  D0():
    deopt 10 [r5];
  D1():
    deopt 12 [r6];
  D2():
    deopt 15 [letters];
  L3():
    goto L4();
  L4():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L13():
    goto L1(r5);
  L14():
    goto L0();
  L17():
    letters1 = force? letters;
    checkMissing(letters1);
    length = ldf length in base;
    r9 = dyn length(letters1);
    check L18() else D3();
  L19():
    cat = ldf cat;
    check L20() else D4();
  D3():
    deopt 18 [r9];
  D4():
    deopt 20 [];
  L5(r13):
    st charvec = r13;
    sym4 = ldf `as.logical`;
    base4 = ldf `as.logical` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L26() else L27();
  L18():
    goto L2(r9);
  L20():
    r10 = dyn cat("26 is TRUE\n");
    check L21() else D5();
  L23():
    c2 = ldf c in base;
    r14 = dyn c2("FALSE", "F", "False", "false", "fAlse", "0", "TRUE", "T", "True", "true", "tRue", "1");
    check L25() else D6();
  L24():
    r12 = dyn base3("FALSE", "F", "False", "false", "fAlse", "0", "TRUE", "T", "True", "true", "tRue", "1");
    goto L5(r12);
  D5():
    deopt 22 [r10];
  D6():
    deopt 40 [r14];
  L6():
    sym5 = ldf `as.logical`;
    base5 = ldf `as.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L30() else L31();
  L21():
    goto L4();
  L25():
    goto L5(r14);
  L26():
    charvec = ld charvec;
    check L28() else D7();
  L27():
    r15 = dyn base4(<sym charvec>);
    goto L6();
  D7():
    deopt 44 [charvec];
  L7():
    sym6 = ldf `as.logical`;
    base6 = ldf `as.logical` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L35() else L36();
  L28():
    charvec1 = force? charvec;
    checkMissing(charvec1);
    as_logical1 = ldf `as.logical` in base;
    r17 = dyn as_logical1(charvec1);
    check L29() else D8();
  L30():
    factor = ldf factor;
    check L32() else D9();
  L31():
    r18 = dyn base5(<lang factor(charvec)>);
    goto L7();
  D8():
    deopt 47 [r17];
  D9():
    deopt 51 [];
  L8(r24):
    popenv;
    return r24;
  L29():
    goto L6();
  L32():
    p = prom<V +>{
      charvec2 = ld charvec;
      charvec3 = force? charvec2;
      checkMissing(charvec3);
      return charvec3;
    };
    r21 = dyn factor(p);
    check L33() else D10();
  L35():
    factor1 = ldf factor;
    check L37() else D12();
  L36():
    r23 = dyn base6(<lang factor(c(0.0, 1.0))>);
    goto L8(r23);
  D10():
    deopt 53 [r21];
  D12():
    deopt 59 [];
  L33():
    as_logical2 = ldf `as.logical` in base;
    r22 = dyn as_logical2(r21);
    check L34() else D11();
  L37():
    p1 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      c3 = ldf c in base;
      r27 = dyn c3(0.0, 1.0);
      goto L0(r27);
    L2():
      r25 = dyn base7(0.0, 1.0);
      goto L0(r25);
    };
    r29 = dyn factor1(p1);
    check L38() else D13();
  D11():
    deopt 55 [r22];
  D13():
    deopt 61 [r29];
  L34():
    goto L7();
  L38():
    as_logical3 = ldf `as.logical` in base;
    r30 = dyn as_logical3(r29);
    check L39() else D14();
  D14():
    deopt 63 [r30];
  L39():
    goto L8(r30);
  }
}
fun `inner-497502118`(length) {
  (reg length:*) -+> V { var length:*, reg length_isMissing:L, reg length_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg length1:*, reg length2:V, reg vector:cls, reg r2:V |
    mkenv;
    length_isMissing = missing.0(length);
    if length_isMissing then L0(0) else L0(length);
  L0(length_orDefault):
    st length = length_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    length1 = ld length;
    check L4() else D0();
  L3():
    r = dyn base(<lang vector("logical", length)>);
    goto L1(r);
  D0():
    deopt 3 [length1];
  L4():
    length2 = force? length1;
    checkMissing(length2);
    vector = ldf vector in base;
    r2 = dyn vector("logical", length2);
    check L5() else D1();
  D1():
    deopt 6 [r2];
  L5():
    goto L1(r2);
  }
}