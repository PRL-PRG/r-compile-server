fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2788197585;
    st setDataPart = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2788197585(object, value, check) {
  (reg object:*, reg value:*, reg check:*) -+> V { var object:*, var value:*, var check:*, reg check_isMissing:L, reg check_orDefault:*, reg check1:*, reg check2:V, reg c:L, reg c1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg c5:L, reg r1:V, reg object1:*, reg object2:V, reg typeof:cls, reg r2:V, reg r3:V, reg c6:L, reg c7:V, reg c9:L, reg getClass:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg object3:*, reg object4:V, reg class:cls, reg r6:V, reg p:p(V +), reg r8:V, reg getSlots:cls, reg classDef:*, reg classDef1:V, reg p1:p(V +), reg r10:V, reg _dataSlot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg slots:*, reg slots1:V, reg names:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg dataSlot:*, reg dataSlot1:V, reg length:cls, reg r18:V, reg r19:V, reg c10:L, reg elNamed:cls, reg slots2:*, reg slots3:V, reg p3:p(V +), reg dataSlot2:*, reg dataSlot3:V, reg p4:p(V +), reg r22:V, reg check3:*, reg check4:V, reg c11:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg object5:*, reg object6:V, reg class1:cls, reg r26:V, reg p5:p(V +), reg r28:V, reg p6:p(V +), reg r30:V, reg p7:p(V +), reg r32:V, reg _mergeAttrs:cls, reg value1:*, reg value2:V, reg p8:p(V +), reg object7:*, reg object8:V, reg p9:p(V +), reg r35:V, reg as:cls, reg value3:*, reg value4:V, reg p10:p(V +), reg dataClass:*, reg dataClass1:V, reg p11:p(V +), reg r38:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg object9:*, reg object10:V, reg typeof1:cls, reg r41:V, reg r42:V, reg c12:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg value5:*, reg value6:V, reg c13:V, reg c14:L, reg _pseudoNULL:*, reg _pseudoNULL1:V, reg value7:*, reg value8:V, reg l:*, reg attr__:cls, reg dataSlot4:*, reg dataSlot5:V, reg p12:p(V +), reg r46:V, reg object11:*, reg object12:V, reg _mergeAttrs1:cls, reg value9:*, reg value10:V, reg p13:p(V +), reg object13:*, reg object14:V, reg p14:p(V +), reg r52:V |
    mkenv;
    st object = object;
    st value = value;
    check_isMissing = missing.0(check);
    if check_isMissing then L0(TRUE) else L0(check);
  L0(check_orDefault):
    st check = check_orDefault;
    check1 = ld check;
    check L15() else D0();
  D0():
    deopt 0 [check1];
  L15():
    check2 = force? check1;
    checkMissing(check2);
    c = `as.logical`(check2);
    if c then L1(c) else L16();
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L22() else L3();
  L16():
    sym = ldf typeof;
    base = ldf typeof in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L2(c5, r1):
    r3 = `==`(r1, "S4");
    c6 = `as.logical`(r3);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3():
    goto L14();
  L14():
    _mergeAttrs1 = ldf `.mergeAttrs`;
    check L65() else D28();
  L17():
    object1 = ld object;
    check L19() else D1();
  L18():
    r = dyn base(<sym object>);
    goto L2(c, r);
  L22():
    getClass = ldf getClass;
    check L23() else D3();
  D1():
    deopt 4 [c, object1];
  D3():
    deopt 12 [];
  D28():
    deopt 93 [];
  L19():
    object2 = force? object1;
    checkMissing(object2);
    typeof = ldf typeof in base;
    r2 = dyn typeof(object2);
    check L20() else D2();
  L23():
    p = prom<V +>{
      sym1 = ldf class;
      base1 = ldf class in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      class = ldf class in base;
      r6 = dyn class(object4);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym object>);
      goto L0(r4);
    };
    r8 = dyn getClass(p);
    check L24() else D4();
  L65():
    p13 = prom<V +>{
      value9 = ld value;
      value10 = force? value9;
      checkMissing(value10);
      return value10;
    };
    p14 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      return object14;
    };
    r52 = dyn _mergeAttrs1(p13, p14);
    check L66() else D29();
  D2():
    deopt 7 [c, r2];
  D4():
    deopt 14 [r8];
  D29():
    deopt 96 [r52];
  L20():
    goto L2(c, r2);
  L24():
    st classDef = r8;
    getSlots = ldf getSlots;
    check L25() else D5();
  L66():
    popenv;
    return r52;
  D5():
    deopt 17 [];
  L25():
    p1 = prom<V +>{
      classDef = ld classDef;
      classDef1 = force? classDef;
      checkMissing(classDef1);
      return classDef1;
    };
    r10 = dyn getSlots(p1);
    check L26() else D6();
  D6():
    deopt 19 [r10];
  L26():
    st slots = r10;
    _dataSlot = ldf `.dataSlot`;
    check L27() else D7();
  D7():
    deopt 22 [];
  L27():
    p2 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      slots = ld slots;
      slots1 = force? slots;
      checkMissing(slots1);
      names = ldf names in base;
      r13 = dyn names(slots1);
      goto L0(r13);
    L2():
      r11 = dyn base2(<sym slots>);
      goto L0(r11);
    };
    r15 = dyn _dataSlot(p2);
    check L28() else D8();
  D8():
    deopt 24 [r15];
  L28():
    st dataSlot = r15;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L4(r17):
    r19 = `==`(r17, 1.0);
    c10 = `as.logical`(r19);
    if c10 then L33() else L5();
  L29():
    dataSlot = ld dataSlot;
    check L31() else D9();
  L30():
    r16 = dyn base3(<sym dataSlot>);
    goto L4(r16);
  D9():
    deopt 28 [dataSlot];
  L5():
    check3 = ld check;
    check L37() else D13();
  L6():
    as = ldf as;
    check L45() else D18();
  L31():
    dataSlot1 = force? dataSlot;
    checkMissing(dataSlot1);
    length = ldf length in base;
    r18 = dyn length(dataSlot1);
    check L32() else D10();
  L33():
    elNamed = ldf elNamed;
    check L34() else D11();
  D10():
    deopt 31 [r18];
  D11():
    deopt 35 [];
  D13():
    deopt 40 [check3];
  D18():
    deopt 55 [];
  L32():
    goto L4(r18);
  L34():
    p3 = prom<V +>{
      slots2 = ld slots;
      slots3 = force? slots2;
      checkMissing(slots3);
      return slots3;
    };
    p4 = prom<V +>{
      dataSlot2 = ld dataSlot;
      dataSlot3 = force? dataSlot2;
      checkMissing(dataSlot3);
      return dataSlot3;
    };
    r22 = dyn elNamed(p3, p4);
    check L35() else D12();
  L37():
    check4 = force? check3;
    checkMissing(check4);
    c11 = `as.logical`(check4);
    if c11 then L38() else L7();
  L45():
    p10 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    p11 = prom<V +>{
      dataClass = ld dataClass;
      dataClass1 = force? dataClass;
      checkMissing(dataClass1);
      return dataClass1;
    };
    r38 = dyn as(p10, p11);
    check L46() else D19();
  D12():
    deopt 38 [r22];
  D19():
    deopt 58 [r38];
  L7():
    _mergeAttrs = ldf `.mergeAttrs`;
    check L42() else D16();
  L35():
    st dataClass = r22;
    goto L6();
  L38():
    stop = ldf stop;
    check L39() else D14();
  L46():
    st value = r38;
    sym5 = ldf typeof;
    base5 = ldf typeof in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  D14():
    deopt 43 [];
  D16():
    deopt 49 [];
  L8(r40):
    r42 = `==`(r40, "S4");
    c12 = `as.logical`(r42);
    if c12 then L51() else L9();
  L39():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        dQuote = ldf dQuote;
        p5 = prom<V +>{
          sym4 = ldf class;
          base4 = ldf class in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r25):
          return r25;
        L1():
          object5 = ld object;
          object6 = force? object5;
          checkMissing(object6);
          class1 = ldf class in base;
          r26 = dyn class1(object6);
          goto L0(r26);
        L2():
          r24 = dyn base4(<sym object>);
          goto L0(r24);
        };
        r28 = dyn dQuote(p5);
        return r28;
      };
      r30 = dyn gettextf("class %s does not have a data part (a .Data slot) defined", p6);
      return r30;
    };
    r32 = dyn stop[, domain](p7, NA_LGL);
    check L40() else D15();
  L42():
    p8 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    p9 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    r35 = dyn _mergeAttrs(p8, p9);
    check L43() else D17();
  L47():
    object9 = ld object;
    check L49() else D20();
  L48():
    r39 = dyn base5(<sym object>);
    goto L8(r39);
  D15():
    deopt 47 [r32];
  D17():
    deopt 52 [r35];
  D20():
    deopt 62 [object9];
  L9():
    goto L14();
  L40():
    goto L6();
  L43():
    popenv;
    return r35;
  L49():
    object10 = force? object9;
    checkMissing(object10);
    typeof1 = ldf typeof in base;
    r41 = dyn typeof1(object10);
    check L50() else D21();
  L51():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  D21():
    deopt 65 [r41];
  L10(r44):
    c14 = `as.logical`(r44);
    if c14 then L55() else L11();
  L50():
    goto L8(r41);
  L52():
    value5 = ld value;
    check L54() else D22();
  L53():
    r43 = dyn base6(<sym value>);
    goto L10(r43);
  D22():
    deopt 69 [value5];
  L11():
    goto L12();
  L12():
    value7 = ld value;
    check L58() else D24();
  L54():
    value6 = force? value5;
    checkMissing(value6);
    c13 = `==`(value6, NULL);
    goto L10(c13);
  L55():
    _pseudoNULL = ld `.pseudoNULL`;
    check L56() else D23();
  D23():
    deopt 72 [_pseudoNULL];
  D24():
    deopt 77 [value7];
  L56():
    _pseudoNULL1 = force? _pseudoNULL;
    checkMissing(_pseudoNULL1);
    st value = _pseudoNULL1;
    goto L12();
  L58():
    value8 = force? value7;
    checkMissing(value8);
    l = ld object;
    attr__ = ldf `attr<-`;
    check L59() else D25();
  D25():
    deopt 80 [value8, l, value8];
  L59():
    p12 = prom<V +>{
      dataSlot4 = ld dataSlot;
      dataSlot5 = force? dataSlot4;
      checkMissing(dataSlot5);
      return dataSlot5;
    };
    r46 = dyn attr__(l, NULL, p12, value8);
    check L60() else D26();
  D26():
    deopt 83 [value8, r46];
  L60():
    st object = r46;
    object11 = ld object;
    check L61() else D27();
  D27():
    deopt 85 [object11];
  L61():
    object12 = force? object11;
    checkMissing(object12);
    popenv;
    return object12;
  }
}