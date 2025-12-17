fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1889037180;
    st `S3Part<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1889037180(object, strictS3, needClass, value) {
  (reg object:*, reg strictS3:*, reg needClass:*, reg value:*) -+> V { var object:*, var strictS3:*, reg strictS3_isMissing:L, reg strictS3_orDefault:*, var needClass:*, reg needClass_isMissing:L, reg needClass_orDefault:*, reg _S3Class:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var value:*, reg _S3Class1:cls, reg value1:*, reg value2:V, reg p2:p(V +), reg r4:V, reg getClassDef:cls, reg S3Class:*, reg S3Class1:V, reg c:L, reg S3Class3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg def:*, reg def1:V, reg c1:V, reg c2:L, reg c3:V, reg extends:cls, reg def2:*, reg def3:V, reg p4:p(V +), reg needClass1:*, reg needClass2:V, reg c5:L, reg needClass4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg p5:p(V +), reg r13:V, reg r14:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg needClass5:*, reg needClass6:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg dQuote1:cls, reg S3Class4:*, reg S3Class5:V, reg c10:L, reg S3Class7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r18:V, reg p8:p(V +), reg r20:V, reg p9:p(V +), reg r22:V, reg p10:p(V +), reg r24:V, reg slotNames:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg r27:V, reg object3:*, reg object4:V, reg class:cls, reg r28:V, reg p11:p(V +), reg r30:V, reg strictS4:*, reg strictS5:V, reg r31:V, reg c11:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg r33:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg value3:*, reg value4:V, reg attributes:cls, reg r36:V, reg names:cls, reg r37:V, reg slots:*, reg slots1:V, reg c12:L, reg slots3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg slots6:V, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg slots9:V, reg r41:V, reg slots10:*, reg slots11:V, reg fromValue:*, reg fromValue1:V, reg match:cls, reg r42:V, reg is_na:cls, reg r43:V, reg __3:cls, reg r44:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg slots12:*, reg slots13:V, reg c13:cls, reg r47:V, reg slots14:*, reg slots15:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c14:L, reg x:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg i7:I, reg r49:V, reg object5:*, reg object6:V, reg slot:*, reg slot1:V, reg attr:cls, reg r50:V, reg l1:*, reg attr__:cls, reg slot2:*, reg slot3:V, reg p12:p(V +), reg r52:V, reg extends1:cls, reg def4:*, reg def5:V, reg p13:p(V +), reg r54:V, reg c15:L, reg S3Class8:*, reg S3Class9:V, reg l2:*, reg attr__1:cls, reg r55:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg r57:V, reg object7:*, reg object8:V, reg isS4:cls, reg r58:V, reg c16:L, reg _asS4:cls, reg value5:*, reg value6:V, reg p14:p(V +), reg r60:V, reg value7:*, reg value8:V |
    mkenv;
    st object = object;
    strictS3_isMissing = missing.0(strictS3);
    if strictS3_isMissing then L0(FALSE) else L0(strictS3);
  L0(strictS3_orDefault):
    st strictS3 = strictS3_orDefault;
    needClass_isMissing = missing.0(needClass);
    if needClass_isMissing then L1() else L2(needClass);
  L1():
    p1 = prom<V +>{
      _S3Class = ldf `.S3Class`;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      r1 = dyn _S3Class(p);
      return r1;
    };
    goto L2(p1);
  L2(needClass_orDefault):
    st needClass = needClass_orDefault;
    st value = value;
    _S3Class1 = ldf `.S3Class`;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p2 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r4 = dyn _S3Class1(p2);
    check L24() else D1();
  D1():
    deopt 3 [r4];
  L24():
    st S3Class = r4;
    getClassDef = ldf getClassDef;
    check L25() else D2();
  D2():
    deopt 6 [];
  L25():
    p3 = prom<V +>{
      S3Class = ld S3Class;
      S3Class1 = force? S3Class;
      checkMissing(S3Class1);
      c = `is.object`(S3Class1);
      if c then L1() else L2(S3Class1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", S3Class1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(S3Class3):
      __ = ldf `[[` in base;
      r5 = dyn __(S3Class3, 1);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn getClassDef(p3);
    check L26() else D3();
  D3():
    deopt 8 [r7];
  L26():
    st def = r7;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L3(r9):
    c2 = `as.logical`(r9);
    if c2 then L4(c2) else L30();
  L27():
    def = ld def;
    check L29() else D4();
  L28():
    r8 = dyn base(<sym def>);
    goto L3(r8);
  D4():
    deopt 11 [def];
  L4(c3):
    c9 = `as.logical`(c3);
    if c9 then L34() else L5();
  L29():
    def1 = force? def;
    checkMissing(def1);
    c1 = `==`(def1, NULL);
    goto L3(c1);
  L30():
    extends = ldf extends;
    check L31() else D5();
  D5():
    deopt 15 [c2];
  L5():
    goto L6();
  L6():
    slotNames = ldf slotNames;
    check L38() else D9();
  L31():
    p4 = prom<V +>{
      def2 = ld def;
      def3 = force? def2;
      checkMissing(def3);
      return def3;
    };
    p5 = prom<V +>{
      needClass1 = ld needClass;
      needClass2 = force? needClass1;
      checkMissing(needClass2);
      c5 = `is.object`(needClass2);
      if c5 then L1() else L2(needClass2);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", needClass2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(needClass4):
      __1 = ldf `[[` in base;
      r11 = dyn __1(needClass4, 1);
      goto L0(r11);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r13 = dyn extends(p4, p5);
    check L32() else D6();
  L34():
    stop = ldf stop;
    check L35() else D7();
  D6():
    deopt 18 [c2, r13];
  D7():
    deopt 22 [];
  D9():
    deopt 30 [];
  L32():
    r14 = `!`(r13);
    c6 = `as.logical`(r14);
    c7 = `||`(c2, c6);
    goto L4(c7);
  L35():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        dQuote = ldf dQuote;
        p6 = prom<V +>{
          needClass5 = ld needClass;
          needClass6 = force? needClass5;
          checkMissing(needClass6);
          return needClass6;
        };
        r16 = dyn dQuote(p6);
        return r16;
      };
      p9 = prom<V +>{
        dQuote1 = ldf dQuote;
        p8 = prom<V +>{
          S3Class4 = ld S3Class;
          S3Class5 = force? S3Class4;
          checkMissing(S3Class5);
          c10 = `is.object`(S3Class5);
          if c10 then L1() else L2(S3Class5);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[[", S3Class5);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(S3Class7):
          __2 = ldf `[[` in base;
          r18 = dyn __2(S3Class7, 1);
          goto L0(r18);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r20 = dyn dQuote1(p8);
        return r20;
      };
      r22 = dyn gettextf("replacement value must extend class %s, got %s", p7, p9);
      return r22;
    };
    r24 = dyn stop[, domain](p10, NA_LGL);
    check L36() else D8();
  L38():
    p11 = prom<V +>{
      sym1 = ldf class;
      base1 = ldf class in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      class = ldf class in base;
      r28 = dyn class(object4);
      goto L0(r28);
    L2():
      r26 = dyn base1(<sym object>);
      goto L0(r26);
    };
    r30 = dyn slotNames(p11);
    check L39() else D10();
  D8():
    deopt 26 [r24];
  D10():
    deopt 32 [r30];
  L36():
    goto L6();
  L39():
    st slots = r30;
    strictS4 = ld strictS3;
    check L40() else D11();
  D11():
    deopt 34 [strictS4];
  L40():
    strictS5 = force? strictS4;
    checkMissing(strictS5);
    r31 = `!`(strictS5);
    c11 = `as.logical`(r31);
    if c11 then L41() else L7();
  L7():
    goto L13();
  L13():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  L41():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L8(r33):
    st fromValue = r33;
    slots = ld slots;
    check L49() else D15();
  L14(r46):
    st slots = r46;
    slots14 = ld slots;
    check L66() else D22();
  L42():
    sym3 = ldf attributes;
    base3 = ldf attributes in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L43():
    r32 = dyn base2(<lang attributes(value)>);
    goto L8(r32);
  L62():
    slots12 = ld slots;
    check L64() else D20();
  L63():
    r45 = dyn base6("class", <sym slots>);
    goto L14(r45);
  D15():
    deopt 48 [slots];
  D20():
    deopt 71 [slots12];
  D22():
    deopt 76 [slots14];
  L9(r35):
    names = ldf names in base;
    r37 = dyn names(r35);
    check L48() else D14();
  L44():
    value3 = ld value;
    check L46() else D12();
  L45():
    r34 = dyn base3(<sym value>);
    goto L9(r34);
  L49():
    slots1 = force? slots;
    checkMissing(slots1);
    c12 = `is.object`(slots1);
    if c12 then L50() else L51(slots1);
  L64():
    slots13 = force? slots12;
    checkMissing(slots13);
    c13 = ldf c in base;
    r47 = dyn c13("class", slots13);
    check L65() else D21();
  L66():
    slots15 = force? slots14;
    checkMissing(slots15);
    s = toForSeq(slots15);
    l = length(s);
    i = 0;
    goto L15(i);
  D12():
    deopt 41 [value3];
  D14():
    deopt 46 [r37];
  D21():
    deopt 74 [r47];
  L10(dx7):
    st slots = dx7;
    goto L13();
  L15(i1):
    i2 = `+`.1(i1, 1);
    c14 = `<`.1(l, i2);
    if c14 then L67() else L17();
  L46():
    value4 = force? value3;
    checkMissing(value4);
    attributes = ldf attributes in base;
    r36 = dyn attributes(value4);
    check L47() else D13();
  L48():
    goto L8(r37);
  L50():
    dr6 = tryDispatchBuiltin.1("[", slots1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L52() else L51(dr6);
  L51(slots3):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L65():
    goto L14(r47);
  D13():
    deopt 44 [r36];
  L11(slots6, r39):
    __3 = ldf `[` in base;
    r44 = dyn __3(slots6, r39);
    goto L10(r44);
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st slot = x;
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L47():
    goto L9(r36);
  L52():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx6);
  L53():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L54():
    r38 = dyn base4(<lang match(slots, fromValue)>);
    goto L11(slots3, r38);
  L67():
    extends1 = ldf extends;
    check L75() else D28();
  D28():
    deopt 96 [];
  L12(slots9, r41):
    is_na = ldf `is.na` in base;
    r43 = dyn is_na(r41);
    check L60() else D19();
  L16(i7, r49):
    l1 = ld value;
    attr__ = ldf `attr<-`;
    check L73() else D26();
  L55():
    slots10 = ld slots;
    check L57() else D16();
  L56():
    r40 = dyn base5(<sym slots>, <sym fromValue>);
    goto L12(slots3, r40);
  L68():
    object5 = ld object;
    check L70() else D23();
  L69():
    r48 = dyn base7(<sym object>, <sym slot>);
    goto L16(i2, r48);
  L75():
    p13 = prom<V +>{
      def4 = ld def;
      def5 = force? def4;
      checkMissing(def5);
      return def5;
    };
    r54 = dyn extends1(p13, "oldClass");
    check L76() else D29();
  D16():
    deopt 54 [slots3, slots10];
  D19():
    deopt 63 [slots9, r43];
  D23():
    deopt 80 [i2, object5];
  D26():
    deopt 87 [i7, r49, l1, r49];
  D29():
    deopt 99 [r54];
  L57():
    slots11 = force? slots10;
    checkMissing(slots11);
    fromValue = ld fromValue;
    check L58() else D17();
  L60():
    goto L11(slots9, r43);
  L70():
    object6 = force? object5;
    checkMissing(object6);
    slot = ld slot;
    check L71() else D24();
  L73():
    p12 = prom<V +>{
      slot2 = ld slot;
      slot3 = force? slot2;
      checkMissing(slot3);
      return slot3;
    };
    r52 = dyn attr__(l1, NULL, p12, r49);
    check L74() else D27();
  L76():
    c15 = `as.logical`(r54);
    if c15 then L77() else L18();
  D17():
    deopt 56 [slots3, fromValue];
  D24():
    deopt 82 [i2, slot];
  D27():
    deopt 90 [i7, r49, r52];
  L18():
    goto L19();
  L19():
    sym8 = ldf isS4;
    base8 = ldf isS4 in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L82() else L83();
  L58():
    fromValue1 = force? fromValue;
    checkMissing(fromValue1);
    match = ldf match in base;
    r42 = dyn match(slots11, fromValue1, NA_INT, NULL);
    check L59() else D18();
  L71():
    slot1 = force? slot;
    checkMissing(slot1);
    attr = ldf attr in base;
    r50 = dyn attr(object6, slot1);
    check L72() else D25();
  L74():
    st value = r52;
    goto L15(i7);
  L77():
    S3Class8 = ld S3Class;
    check L78() else D30();
  D18():
    deopt 61 [slots3, r42];
  D25():
    deopt 85 [i2, r50];
  D30():
    deopt 100 [S3Class8];
  L20(r57):
    c16 = `as.logical`(r57);
    if c16 then L86() else L21();
  L59():
    goto L12(slots3, r42);
  L72():
    goto L16(i2, r50);
  L78():
    S3Class9 = force? S3Class8;
    checkMissing(S3Class9);
    l2 = ld value;
    attr__1 = ldf `attr<-`;
    check L79() else D31();
  L82():
    object7 = ld object;
    check L84() else D33();
  L83():
    r56 = dyn base8(<sym object>);
    goto L20(r56);
  D31():
    deopt 103 [S3Class9, l2, S3Class9];
  D33():
    deopt 112 [object7];
  L21():
    goto L22();
  L22():
    value7 = ld value;
    check L90() else D37();
  L79():
    r55 = dyn attr__1(l2, NULL, ".S3Class", S3Class9);
    check L80() else D32();
  L84():
    object8 = force? object7;
    checkMissing(object8);
    isS4 = ldf isS4 in base;
    r58 = dyn isS4(object8);
    check L85() else D34();
  L86():
    _asS4 = ldf `.asS4`;
    check L87() else D35();
  D32():
    deopt 106 [S3Class9, r55];
  D34():
    deopt 115 [r58];
  D35():
    deopt 117 [];
  D37():
    deopt 123 [value7];
  L80():
    st value = r55;
    goto L19();
  L85():
    goto L20(r58);
  L87():
    p14 = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      return value6;
    };
    r60 = dyn _asS4(p14);
    check L88() else D36();
  L90():
    value8 = force? value7;
    checkMissing(value8);
    popenv;
    return value8;
  D36():
    deopt 119 [r60];
  L88():
    st value = r60;
    goto L22();
  }
}