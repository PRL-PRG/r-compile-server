fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner525648730;
    st `S3Class<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner525648730(object, value) {
  (reg object:*, reg value:*) -+> V { var object:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg isS4:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg object3:*, reg object4:V, reg attr:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg current:*, reg current1:V, reg c1:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r10:V, reg r11:V, reg value1:*, reg value2:V, reg _BasicClasses:*, reg _BasicClasses1:V, reg match:cls, reg r12:V, reg is_na:cls, reg r13:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r14:V, reg r15:V, reg object5:*, reg object6:V, reg class:cls, reg r16:V, reg p:p(V +), reg r18:V, reg p1:p(V +), reg r20:V, reg p2:p(V +), reg r22:V, reg value3:*, reg value4:V, reg l:*, reg mode__:cls, reg r24:V, reg value5:V, reg value6:*, reg value7:V, reg l1:*, reg slot__:cls, reg r25:V, reg value9:*, reg value10:V, reg l2:*, reg class__:cls, reg r26:V, reg object7:*, reg object8:V |
    mkenv;
    st object = object;
    st value = value;
    sym = ldf isS4;
    base = ldf isS4 in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    c = `as.logical`(r1);
    if c then L15() else L1();
  L11():
    object1 = ld object;
    check L13() else D0();
  L12():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1():
    value9 = ld value;
    check L44() else D17();
  L10():
    object7 = ld object;
    check L47() else D20();
  L13():
    object2 = force? object1;
    checkMissing(object2);
    isS4 = ldf isS4 in base;
    r2 = dyn isS4(object2);
    check L14() else D1();
  L15():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D1():
    deopt 5 [r2];
  D17():
    deopt 55 [value9];
  D20():
    deopt 62 [object7];
  L2(r4):
    st current = r4;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L14():
    goto L0(r2);
  L16():
    object3 = ld object;
    check L18() else D2();
  L17():
    r3 = dyn base1(<sym object>, ".S3Class");
    goto L2(r3);
  L44():
    value10 = force? value9;
    checkMissing(value10);
    l2 = ld object;
    class__ = ldf `class<-`;
    check L45() else D18();
  L47():
    object8 = force? object7;
    checkMissing(object8);
    popenv;
    return object8;
  D2():
    deopt 8 [object3];
  D18():
    deopt 58 [value10, l2, value10];
  L3(r7):
    c2 = `as.logical`(r7);
    if c2 then L23() else L4();
  L18():
    object4 = force? object3;
    checkMissing(object4);
    attr = ldf attr in base;
    r5 = dyn attr(object4, ".S3Class");
    check L19() else D3();
  L20():
    current = ld current;
    check L22() else D4();
  L21():
    r6 = dyn base2(<sym current>);
    goto L3(r6);
  L45():
    r26 = dyn class__(l2, NULL, value10);
    check L46() else D19();
  D3():
    deopt 12 [r5];
  D4():
    deopt 15 [current];
  D19():
    deopt 60 [value10, r26];
  L4():
    value6 = ld value;
    check L40() else D14();
  L9(value5):
    goto L10();
  L19():
    goto L2(r5);
  L22():
    current1 = force? current;
    checkMissing(current1);
    c1 = `==`(current1, NULL);
    goto L3(c1);
  L23():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L46():
    st object = r26;
    goto L10();
  D14():
    deopt 47 [value6];
  L5(r9):
    c3 = `as.logical`(r9);
    if c3 then L32() else L7();
  L24():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L26() else L27();
  L25():
    r8 = dyn base3(<lang match(value, .BasicClasses)>);
    goto L5(r8);
  L40():
    value7 = force? value6;
    checkMissing(value7);
    l1 = ld object;
    slot__ = ldf `slot<-`;
    check L41() else D15();
  D15():
    deopt 50 [value7, l1, value7];
  L6(r11):
    is_na = ldf `is.na` in base;
    r13 = dyn is_na(r11);
    check L31() else D8();
  L7():
    goto L8();
  L8():
    value3 = ld value;
    check L36() else D11();
  L26():
    value1 = ld value;
    check L28() else D5();
  L27():
    r10 = dyn base4(<sym value>, <sym .BasicClasses>);
    goto L6(r10);
  L32():
    stop = ldf stop;
    check L33() else D9();
  L41():
    r25 = dyn slot__(l1, NULL, ".S3Class", value7);
    check L42() else D16();
  D5():
    deopt 22 [value1];
  D8():
    deopt 31 [r13];
  D9():
    deopt 33 [];
  D11():
    deopt 40 [value3];
  D16():
    deopt 53 [value7, r25];
  L28():
    value2 = force? value1;
    checkMissing(value2);
    _BasicClasses = ld `.BasicClasses`;
    check L29() else D6();
  L31():
    goto L5(r13);
  L33():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        dQuote = ldf dQuote;
        p = prom<V +>{
          sym5 = ldf class;
          base5 = ldf class in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L1() else L2();
        L0(r15):
          return r15;
        L1():
          object5 = ld object;
          object6 = force? object5;
          checkMissing(object6);
          class = ldf class in base;
          r16 = dyn class(object6);
          goto L0(r16);
        L2():
          r14 = dyn base5(<sym object>);
          goto L0(r14);
        };
        r18 = dyn dQuote(p);
        return r18;
      };
      r20 = dyn gettextf("'S3Class' can only assign to S4 objects that extend \"oldClass\"; not true of class %s", p1);
      return r20;
    };
    r22 = dyn stop[, domain](p2, NA_LGL);
    check L34() else D10();
  L36():
    value4 = force? value3;
    checkMissing(value4);
    l = ld object;
    mode__ = ldf `mode<-`;
    check L37() else D12();
  L42():
    st object = r25;
    goto L9(value7);
  D6():
    deopt 24 [_BasicClasses];
  D10():
    deopt 37 [r22];
  D12():
    deopt 43 [value4, l, value4];
  L29():
    _BasicClasses1 = force? _BasicClasses;
    checkMissing(_BasicClasses1);
    match = ldf match in base;
    r12 = dyn match(value2, _BasicClasses1, NA_INT, NULL);
    check L30() else D7();
  L34():
    goto L8();
  L37():
    r24 = dyn mode__(l, NULL, value4);
    check L38() else D13();
  D7():
    deopt 29 [r12];
  D13():
    deopt 45 [value4, r24];
  L30():
    goto L6(r12);
  L38():
    st object = r24;
    goto L9(value4);
  }
}