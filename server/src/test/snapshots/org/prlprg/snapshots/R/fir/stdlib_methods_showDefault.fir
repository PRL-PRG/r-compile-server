fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1257059465;
    st showDefault = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1257059465(object, oldMethods) {
  (reg object:*, reg oldMethods:*) -+> V { var object:*, var oldMethods:*, reg oldMethods_isMissing:L, reg oldMethods_orDefault:*, reg getClass:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg class:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg r8:V, reg c:L, reg _Deprecated:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg clDef:*, reg clDef1:V, reg c1:V, reg r13:V, reg c2:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg c7:L, reg r15:V, reg object3:*, reg object4:V, reg isS4:cls, reg r16:V, reg c8:L, reg c9:V, reg c11:L, reg c13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg c16:L, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg c19:L, reg r20:V, reg __:cls, reg r21:V, reg _BasicClasses:*, reg _BasicClasses1:V, reg match:cls, reg r22:V, reg is_na:cls, reg r23:V, reg c20:L, reg c21:V, reg c23:L, reg cat:cls, reg classLabel:cls, reg cl:*, reg cl1:V, reg p1:p(V +), reg r25:V, reg p2:p(V +), reg r27:V, reg slotNames:cls, reg clDef2:*, reg clDef3:V, reg p3:p(V +), reg r29:V, reg _dataSlot:cls, reg slots:*, reg slots1:V, reg p4:p(V +), reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg dataSlot:*, reg dataSlot1:V, reg length:cls, reg r34:V, reg r35:V, reg c24:L, reg show:cls, reg slot:cls, reg object5:*, reg object6:V, reg p5:p(V +), reg dataSlot2:*, reg dataSlot3:V, reg p6:p(V +), reg r38:V, reg p7:p(V +), reg r40:V, reg slots2:*, reg slots3:V, reg c25:L, reg slots5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg slots8:V, reg r42:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg slots11:V, reg r44:V, reg slots12:*, reg slots13:V, reg dataSlot4:*, reg dataSlot5:V, reg match1:cls, reg r45:V, reg is_na1:cls, reg r46:V, reg __1:cls, reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg slots14:*, reg slots15:V, reg length1:cls, reg r50:V, reg r51:V, reg c26:L, reg show1:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg r53:V, reg object7:*, reg object8:V, reg unclass:cls, reg r54:V, reg p8:p(V +), reg r56:V, reg slots16:*, reg slots17:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c27:L, reg x:V, reg what:*, reg what1:V, reg r57:V, reg c28:L, reg cat1:cls, reg deparse:cls, reg what2:*, reg what3:V, reg p9:p(V +), reg r60:V, reg p10:p(V +), reg r62:V, reg print:cls, reg slot1:cls, reg object9:*, reg object10:V, reg p11:p(V +), reg what4:*, reg what5:V, reg p12:p(V +), reg r65:V, reg p13:p(V +), reg r67:V, reg cat2:cls, reg r68:V, reg print1:cls, reg object11:*, reg object12:V, reg p14:p(V +), reg r70:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r71:V, reg r72:V, reg invisible:cls, reg r73:V |
    mkenv;
    st object = object;
    oldMethods_isMissing = missing.0(oldMethods);
    if oldMethods_isMissing then L0(TRUE) else L0(oldMethods);
  L0(oldMethods_orDefault):
    st oldMethods = oldMethods_orDefault;
    getClass = ldf getClass;
    check L25() else D0();
  D0():
    deopt 1 [];
  L25():
    p = prom<V +>{
      sym = ldf class;
      base = ldf class in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      st cl = r1;
      invisible.0();
      return r1;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      class = ldf class in base;
      r2 = dyn class(object2);
      goto L0(r2);
    L2():
      r = dyn base(<sym object>);
      goto L0(r);
    };
    r4 = dyn getClass[, `.Force`](p, TRUE);
    check L26() else D1();
  D1():
    deopt 5 [r4];
  L26():
    st clDef = r4;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L1(r6):
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L29() else L2();
  L27():
    missing = ldf missing in base;
    r7 = dyn missing(<sym oldMethods>);
    goto L1(r7);
  L28():
    r5 = dyn base1(<sym oldMethods>);
    goto L1(r5);
  L2():
    goto L3();
  L3():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L29():
    _Deprecated = ldf `.Deprecated`;
    check L30() else D2();
  D2():
    deopt 12 [];
  L4(r12):
    r13 = `!`(r12);
    c2 = `as.logical`(r13);
    if c2 then L36() else L5(c2);
  L30():
    r9 = dyn _Deprecated[msg]("the 'oldMethods' argument is deprecated, as it has been unused since R 1.7.0");
    check L31() else D3();
  L33():
    clDef = ld clDef;
    check L35() else D4();
  L34():
    r11 = dyn base2(<sym clDef>);
    goto L4(r11);
  D3():
    deopt 15 [r9];
  D4():
    deopt 19 [clDef];
  L5(c4):
    c11 = `as.logical`(c4);
    if c11 then L42() else L7(c11);
  L31():
    goto L3();
  L35():
    clDef1 = force? clDef;
    checkMissing(clDef1);
    c1 = `==`(clDef1, NULL);
    goto L4(c1);
  L36():
    sym3 = ldf isS4;
    base3 = ldf isS4 in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L6(c7, r15):
    c8 = `as.logical`(r15);
    c9 = `&&`(c7, c8);
    goto L5(c9);
  L7(c13):
    c23 = `as.logical`(c13);
    if c23 then L51() else L10();
  L37():
    object3 = ld object;
    check L39() else D5();
  L38():
    r14 = dyn base3(<sym object>);
    goto L6(c2, r14);
  L42():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  D5():
    deopt 25 [c2, object3];
  L8(c16, r18):
    c20 = `as.logical`(r18);
    c21 = `&&`(c16, c20);
    goto L7(c21);
  L10():
    print1 = ldf print;
    check L99() else D37();
  L23():
    sym11 = ldf invisible;
    base11 = ldf invisible in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L101() else L102();
  L39():
    object4 = force? object3;
    checkMissing(object4);
    isS4 = ldf isS4 in base;
    r16 = dyn isS4(object4);
    check L40() else D6();
  L43():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L45() else L46();
  L44():
    r17 = dyn base4(<lang match(`@`(clDef, className), .BasicClasses)>);
    goto L8(c11, r17);
  L51():
    cat = ldf cat;
    check L52() else D10();
  D6():
    deopt 28 [c2, r16];
  D10():
    deopt 46 [];
  D37():
    deopt 137 [];
  L9(c19, r20):
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(r20);
    check L49() else D9();
  L24(r72):
    popenv;
    return r72;
  L40():
    goto L6(c2, r16);
  L45():
    __ = ldf `@` in base;
    r21 = dyn __(<sym clDef>, <sym className>);
    _BasicClasses = ld `.BasicClasses`;
    check L47() else D7();
  L46():
    r19 = dyn base5(<lang `@`(clDef, className)>, <sym .BasicClasses>);
    goto L9(c11, r19);
  L52():
    p2 = prom<V +>{
      classLabel = ldf classLabel;
      p1 = prom<V +>{
        cl = ld cl;
        cl1 = force? cl;
        checkMissing(cl1);
        return cl1;
      };
      r25 = dyn classLabel(p1);
      return r25;
    };
    r27 = dyn cat[, , , sep]("An object of class ", p2, "\n", "");
    check L53() else D11();
  L99():
    p14 = prom<V +>{
      object11 = ld object;
      object12 = force? object11;
      checkMissing(object12);
      return object12;
    };
    r70 = dyn print1[, useS4](p14, FALSE);
    check L100() else D38();
  L101():
    invisible = ldf invisible in base;
    r73 = dyn invisible();
    check L103() else D39();
  L102():
    r71 = dyn base11();
    goto L24(r71);
  D7():
    deopt 36 [c11, _BasicClasses];
  D9():
    deopt 43 [c19, r23];
  D11():
    deopt 52 [r27];
  D38():
    deopt 141 [r70];
  D39():
    deopt 145 [r73];
  L47():
    _BasicClasses1 = force? _BasicClasses;
    checkMissing(_BasicClasses1);
    match = ldf match in base;
    r22 = dyn match(r21, _BasicClasses1, NA_INT, NULL);
    check L48() else D8();
  L49():
    goto L8(c19, r23);
  L53():
    slotNames = ldf slotNames;
    check L54() else D12();
  L100():
    goto L23();
  L103():
    goto L24(r73);
  D8():
    deopt 41 [c11, r22];
  D12():
    deopt 54 [];
  L48():
    goto L9(c11, r22);
  L54():
    p3 = prom<V +>{
      clDef2 = ld clDef;
      clDef3 = force? clDef2;
      checkMissing(clDef3);
      return clDef3;
    };
    r29 = dyn slotNames(p3);
    check L55() else D13();
  D13():
    deopt 56 [r29];
  L55():
    st slots = r29;
    _dataSlot = ldf `.dataSlot`;
    check L56() else D14();
  D14():
    deopt 59 [];
  L56():
    p4 = prom<V +>{
      slots = ld slots;
      slots1 = force? slots;
      checkMissing(slots1);
      return slots1;
    };
    r31 = dyn _dataSlot(p4);
    check L57() else D15();
  D15():
    deopt 61 [r31];
  L57():
    st dataSlot = r31;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  L11(r33):
    r35 = `>`(r33, 0.0);
    c24 = `as.logical`(r35);
    if c24 then L62() else L12();
  L58():
    dataSlot = ld dataSlot;
    check L60() else D16();
  L59():
    r32 = dyn base6(<sym dataSlot>);
    goto L11(r32);
  D16():
    deopt 65 [dataSlot];
  L12():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L78() else L79();
  L16():
    slots16 = ld slots;
    check L86() else D29();
  L60():
    dataSlot1 = force? dataSlot;
    checkMissing(dataSlot1);
    length = ldf length in base;
    r34 = dyn length(dataSlot1);
    check L61() else D17();
  L62():
    show = ldf show;
    check L63() else D18();
  D17():
    deopt 68 [r34];
  D18():
    deopt 72 [];
  D29():
    deopt 107 [slots16];
  L17(r49):
    r51 = `==`(r49, 0);
    c26 = `as.logical`(r51);
    if c26 then L82() else L18();
  L61():
    goto L11(r34);
  L63():
    p7 = prom<V +>{
      slot = ldf slot;
      p5 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        return object6;
      };
      p6 = prom<V +>{
        dataSlot2 = ld dataSlot;
        dataSlot3 = force? dataSlot2;
        checkMissing(dataSlot3);
        return dataSlot3;
      };
      r38 = dyn slot(p5, p6);
      return r38;
    };
    r40 = dyn show(p7);
    check L64() else D19();
  L78():
    slots14 = ld slots;
    check L80() else D25();
  L79():
    r48 = dyn base9(<sym slots>);
    goto L17(r48);
  L86():
    slots17 = force? slots16;
    checkMissing(slots17);
    s = toForSeq(slots17);
    l = length(s);
    i = 0;
    goto L19(i);
  D19():
    deopt 74 [r40];
  D25():
    deopt 95 [slots14];
  L18():
    goto L16();
  L19(i1):
    i2 = `+`.1(i1, 1);
    c27 = `<`.1(l, i2);
    if c27 then L87() else L22();
  L64():
    slots2 = ld slots;
    check L65() else D20();
  L80():
    slots15 = force? slots14;
    checkMissing(slots15);
    length1 = ldf length in base;
    r50 = dyn length1(slots15);
    check L81() else D26();
  L82():
    show1 = ldf show;
    check L83() else D27();
  D20():
    deopt 75 [slots2];
  D26():
    deopt 98 [r50];
  D27():
    deopt 102 [];
  L22():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    what = ld what;
    check L88() else D30();
  L65():
    slots3 = force? slots2;
    checkMissing(slots3);
    c25 = `is.object`(slots3);
    if c25 then L66() else L67(slots3);
  L81():
    goto L17(r50);
  L83():
    p8 = prom<V +>{
      sym10 = ldf unclass;
      base10 = ldf unclass in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      unclass = ldf unclass in base;
      r54 = dyn unclass(object8);
      goto L0(r54);
    L2():
      r52 = dyn base10(<sym object>);
      goto L0(r52);
    };
    r56 = dyn show1(p8);
    check L84() else D28();
  L87():
    goto L23();
  D28():
    deopt 104 [r56];
  D30():
    deopt 109 [i2, what];
  L13(dx1):
    st slots = dx1;
    goto L16();
  L66():
    dr = tryDispatchBuiltin.1("[", slots3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L68() else L67(dr);
  L67(slots5):
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L69() else L70();
  L84():
    goto L16();
  L88():
    what1 = force? what;
    checkMissing(what1);
    r57 = `==`(what1, ".Data");
    c28 = `as.logical`(r57);
    if c28 then L89() else L20();
  L14(slots8, r42):
    __1 = ldf `[` in base;
    r47 = dyn __1(slots8, r42);
    goto L13(r47);
  L20():
    cat1 = ldf cat;
    check L92() else D31();
  L68():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L69():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L71() else L72();
  L70():
    r41 = dyn base7(<lang match(slots, dataSlot)>);
    goto L14(slots5, r41);
  L89():
    goto L19(i2);
  D31():
    deopt 118 [i2];
  L15(slots11, r44):
    is_na1 = ldf `is.na` in base;
    r46 = dyn is_na1(r44);
    check L76() else D24();
  L71():
    slots12 = ld slots;
    check L73() else D21();
  L72():
    r43 = dyn base8(<sym slots>, <sym dataSlot>);
    goto L15(slots5, r43);
  L92():
    p10 = prom<V +>{
      deparse = ldf deparse;
      p9 = prom<V +>{
        what2 = ld what;
        what3 = force? what2;
        checkMissing(what3);
        return what3;
      };
      r60 = dyn deparse(p9);
      return r60;
    };
    r62 = dyn cat1[, , , sep]("Slot ", p10, ":\n", "");
    check L93() else D32();
  D21():
    deopt 81 [slots5, slots12];
  D24():
    deopt 90 [slots11, r46];
  D32():
    deopt 124 [i2, r62];
  L73():
    slots13 = force? slots12;
    checkMissing(slots13);
    dataSlot4 = ld dataSlot;
    check L74() else D22();
  L76():
    goto L14(slots11, r46);
  L93():
    print = ldf print;
    check L94() else D33();
  D22():
    deopt 83 [slots5, dataSlot4];
  D33():
    deopt 126 [i2];
  L74():
    dataSlot5 = force? dataSlot4;
    checkMissing(dataSlot5);
    match1 = ldf match in base;
    r45 = dyn match1(slots13, dataSlot5, NA_INT, NULL);
    check L75() else D23();
  L94():
    p13 = prom<V +>{
      slot1 = ldf slot;
      p11 = prom<V +>{
        object9 = ld object;
        object10 = force? object9;
        checkMissing(object10);
        return object10;
      };
      p12 = prom<V +>{
        what4 = ld what;
        what5 = force? what4;
        checkMissing(what5);
        return what5;
      };
      r65 = dyn slot1(p11, p12);
      return r65;
    };
    r67 = dyn print(p13);
    check L95() else D34();
  D23():
    deopt 88 [slots5, r45];
  D34():
    deopt 128 [i2, r67];
  L75():
    goto L15(slots5, r45);
  L95():
    cat2 = ldf cat;
    check L96() else D35();
  D35():
    deopt 130 [i2];
  L96():
    r68 = dyn cat2("\n");
    check L97() else D36();
  D36():
    deopt 132 [i2, r68];
  L97():
    goto L19(i2);
  }
}