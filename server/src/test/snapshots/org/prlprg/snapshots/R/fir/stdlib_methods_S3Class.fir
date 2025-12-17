fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st S3Class = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg value:*, reg value1:V, reg c:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg object3:*, reg object4:V, reg isS4:cls, reg r7:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r10:V, reg r11:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r12:V, reg r13:V, reg __:cls, reg r14:V, reg names:cls, reg r15:V, reg match:cls, reg r16:V, reg is_na:cls, reg r17:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg r18:V, reg p:p(V +), reg dQuote1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r20:V, reg r21:V, reg object5:*, reg object6:V, reg class:cls, reg r22:V, reg p1:p(V +), reg r24:V, reg p2:p(V +), reg r26:V, reg p3:p(V +), reg r28:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg getDataPart:cls, reg object7:*, reg object8:V, reg p4:p(V +), reg r33:V, reg class1:cls, reg r34:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg object9:*, reg object10:V, reg class2:cls, reg r37:V, reg value2:*, reg value3:V |
    mkenv;
    st object = object;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    st value = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L12():
    object1 = ld object;
    check L14() else D0();
  L13():
    r = dyn base(<sym object>, ".S3Class");
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L19() else L2();
  L14():
    object2 = force? object1;
    checkMissing(object2);
    attr = ldf attr in base;
    r2 = dyn attr(object2, ".S3Class");
    check L15() else D1();
  L16():
    value = ld value;
    check L18() else D2();
  L17():
    r3 = dyn base1(<sym value>);
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [value];
  L2():
    value2 = ld value;
    check L49() else D15();
  L15():
    goto L0(r2);
  L18():
    value1 = force? value;
    checkMissing(value1);
    c = `==`(value1, NULL);
    goto L1(c);
  L19():
    sym2 = ldf isS4;
    base2 = ldf isS4 in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  D15():
    deopt 57 [value2];
  L3(r6):
    c2 = `as.logical`(r6);
    if c2 then L24() else L4();
  L20():
    object3 = ld object;
    check L22() else D3();
  L21():
    r5 = dyn base2(<sym object>);
    goto L3(r5);
  L49():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  D3():
    deopt 14 [object3];
  L4():
    sym8 = ldf class;
    base8 = ldf class in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L44() else L45();
  L22():
    object4 = force? object3;
    checkMissing(object4);
    isS4 = ldf isS4 in base;
    r7 = dyn isS4(object4);
    check L23() else D4();
  L24():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  D4():
    deopt 17 [r7];
  L5(r9):
    c3 = `as.logical`(r9);
    if c3 then L34() else L8();
  L11(r36):
    popenv;
    return r36;
  L23():
    goto L3(r7);
  L25():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L27() else L28();
  L26():
    r8 = dyn base3(<lang match(".Data", names(`@`(getClass(class(object)), slots)))>);
    goto L5(r8);
  L44():
    object9 = ld object;
    check L46() else D13();
  L45():
    r35 = dyn base8(<sym object>);
    goto L11(r35);
  D13():
    deopt 53 [object9];
  L6(r11):
    is_na = ldf `is.na` in base;
    r17 = dyn is_na(r11);
    check L33() else D7();
  L8():
    goto L9();
  L9():
    sym7 = ldf class;
    base7 = ldf class in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L38() else L39();
  L27():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L29() else L30();
  L28():
    r10 = dyn base4(".Data", <lang names(`@`(getClass(class(object)), slots))>);
    goto L6(r10);
  L34():
    stop = ldf stop;
    check L35() else D8();
  L46():
    object10 = force? object9;
    checkMissing(object10);
    class2 = ldf class in base;
    r37 = dyn class2(object10);
    check L47() else D14();
  D7():
    deopt 34 [r17];
  D8():
    deopt 36 [];
  D14():
    deopt 56 [r37];
  L7(r13):
    match = ldf match in base;
    r16 = dyn match(".Data", r13, NA_INT, NULL);
    check L32() else D6();
  L10(r31):
    popenv;
    return r31;
  L29():
    __ = ldf `@` in base;
    r14 = dyn __(<lang getClass(class(object))>, <sym slots>);
    names = ldf names in base;
    r15 = dyn names(r14);
    check L31() else D5();
  L30():
    r12 = dyn base5(<lang `@`(getClass(class(object)), slots)>);
    goto L7(r12);
  L33():
    goto L5(r17);
  L35():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        dQuote = ldf dQuote;
        r18 = dyn dQuote("oldClass");
        return r18;
      };
      p2 = prom<V +>{
        dQuote1 = ldf dQuote;
        p1 = prom<V +>{
          sym6 = ldf class;
          base6 = ldf class in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L1() else L2();
        L0(r21):
          return r21;
        L1():
          object5 = ld object;
          object6 = force? object5;
          checkMissing(object6);
          class = ldf class in base;
          r22 = dyn class(object6);
          goto L0(r22);
        L2():
          r20 = dyn base6(<sym object>);
          goto L0(r20);
        };
        r24 = dyn dQuote1(p1);
        return r24;
      };
      r26 = dyn gettextf("'S3Class' only defined for extensions of %s or classes with a data part:  not true of class %s", p, p2);
      return r26;
    };
    r28 = dyn stop[, domain](p3, NA_LGL);
    check L36() else D9();
  L38():
    getDataPart = ldf getDataPart;
    check L40() else D10();
  L39():
    r30 = dyn base7(<lang getDataPart(object)>);
    goto L10(r30);
  L47():
    goto L11(r37);
  D5():
    deopt 28 [r15];
  D6():
    deopt 32 [r16];
  D9():
    deopt 40 [r28];
  D10():
    deopt 46 [];
  L31():
    goto L7(r15);
  L32():
    goto L6(r16);
  L36():
    goto L9();
  L40():
    p4 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    r33 = dyn getDataPart(p4);
    check L41() else D11();
  D11():
    deopt 48 [r33];
  L41():
    class1 = ldf class in base;
    r34 = dyn class1(r33);
    check L42() else D12();
  D12():
    deopt 50 [r34];
  L42():
    goto L10(r34);
  }
}