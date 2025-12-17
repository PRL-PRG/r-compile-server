fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3772184498;
    st printPropertiesList = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3772184498(x, propertiesAreCalled) {
  (reg x:*, reg propertiesAreCalled:*) -+> V { var x:*, var propertiesAreCalled:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg length1:cls, reg r5:V, reg cat:cls, reg propertiesAreCalled1:*, reg propertiesAreCalled2:V, reg p:p(V +), reg r7:V, reg format:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg x5:*, reg x6:V, reg names:cls, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg x7:*, reg x8:V, reg as_character:cls, reg r15:V, reg c1:cls, reg r16:V, reg p1:p(V +), reg r18:V, reg matrix:cls, reg text:*, reg text1:V, reg p2:p(V +), reg n:*, reg n1:V, reg p3:p(V +), reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg r25:V, reg c2:cls, reg r26:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg n2:*, reg n3:V, reg rep_int:cls, reg r29:V, reg list:cls, reg r30:V, reg l:*, reg dimnames__:cls, reg r31:V, reg print:cls, reg text2:*, reg text3:V, reg p4:p(V +), reg r33:V |
    mkenv;
    st x = x;
    st propertiesAreCalled = propertiesAreCalled;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c = `as.logical`(r1);
    if c then L10() else L1();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L8():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L9() else D1();
  L10():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D1():
    deopt 5 [r2];
  L2(r4):
    st n = r4;
    cat = ldf cat;
    check L15() else D4();
  L9():
    goto L0(r2);
  L11():
    x3 = ld x;
    check L13() else D2();
  L12():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  D2():
    deopt 8 [x3];
  D4():
    deopt 14 [];
  L13():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r5 = dyn length1(x4);
    check L14() else D3();
  L15():
    p = prom<V +>{
      propertiesAreCalled1 = ld propertiesAreCalled;
      propertiesAreCalled2 = force? propertiesAreCalled1;
      checkMissing(propertiesAreCalled2);
      return propertiesAreCalled2;
    };
    r7 = dyn cat[, , , sep]("\n", p, ":\n", "");
    check L16() else D5();
  D3():
    deopt 11 [r5];
  D5():
    deopt 20 [r7];
  L14():
    goto L2(r5);
  L16():
    format = ldf format;
    check L17() else D6();
  D6():
    deopt 22 [];
  L17():
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r9):
      return r9;
    L3():
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L4():
      r8 = dyn base2(<lang names(x)>, <lang as.character(x)>);
      goto L0(r8);
    L1(r11):
      sym4 = ldf `as.character`;
      base4 = ldf `as.character` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L7() else L8();
    L5():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      names = ldf names in base;
      r12 = dyn names(x6);
      goto L1(r12);
    L6():
      r10 = dyn base3(<sym x>);
      goto L1(r10);
    L2(r14):
      c1 = ldf c in base;
      r16 = dyn c1(r11, r14);
      goto L0(r16);
    L7():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      as_character = ldf `as.character` in base;
      r15 = dyn as_character(x8);
      goto L2(r15);
    L8():
      r13 = dyn base4(<sym x>);
      goto L2(r13);
    };
    r18 = dyn format[, justify](p1, "right");
    check L18() else D7();
  D7():
    deopt 26 [r18];
  L18():
    st text = r18;
    matrix = ldf matrix;
    check L19() else D8();
  D8():
    deopt 29 [];
  L19():
    p2 = prom<V +>{
      text = ld text;
      text1 = force? text;
      checkMissing(text1);
      return text1;
    };
    p3 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r21 = dyn matrix[, nrow, ncol, byrow](p2, 2, p3, TRUE);
    check L20() else D9();
  D9():
    deopt 37 [r21];
  L20():
    st text = r21;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L21() else L22();
  L3(r23):
    l = ld text;
    dimnames__ = ldf `dimnames<-`;
    check L31() else D14();
  L21():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L23() else L24();
  L22():
    r22 = dyn base5(<lang c("Name:", "Class:")>, <lang rep.int("", n)>);
    goto L3(r22);
  D14():
    deopt 57 [r23, l, r23];
  L4(r25):
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L26() else L27();
  L23():
    c2 = ldf c in base;
    r26 = dyn c2("Name:", "Class:");
    check L25() else D10();
  L24():
    r24 = dyn base6("Name:", "Class:");
    goto L4(r24);
  L31():
    r31 = dyn dimnames__(l, NULL, r23);
    check L32() else D15();
  D10():
    deopt 46 [r26];
  D15():
    deopt 59 [r23, r31];
  L5(r28):
    list = ldf list in base;
    r30 = dyn list(r25, r28);
    check L30() else D13();
  L25():
    goto L4(r26);
  L26():
    n2 = ld n;
    check L28() else D11();
  L27():
    r27 = dyn base7("", <sym n>);
    goto L5(r27);
  L32():
    st text = r31;
    print = ldf print;
    check L33() else D16();
  D11():
    deopt 50 [n2];
  D13():
    deopt 55 [r30];
  D16():
    deopt 62 [];
  L28():
    n3 = force? n2;
    checkMissing(n3);
    rep_int = ldf `rep.int` in base;
    r29 = dyn rep_int("", n3);
    check L29() else D12();
  L30():
    goto L3(r30);
  L33():
    p4 = prom<V +>{
      text2 = ld text;
      text3 = force? text2;
      checkMissing(text3);
      return text3;
    };
    r33 = dyn print[, quote](p4, FALSE);
    check L34() else D17();
  D12():
    deopt 53 [r29];
  D17():
    deopt 66 [r33];
  L29():
    goto L5(r29);
  L34():
    popenv;
    return r33;
  }
}