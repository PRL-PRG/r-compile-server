fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1857244696;
    st `.mergeAttrs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1857244696(value, object, explicit) {
  (reg value:*, reg object:*, reg explicit:*) -+> V { var value:*, var object:*, var explicit:*, reg explicit_isMissing:L, reg explicit_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg attributes:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg explicit1:*, reg explicit2:V, reg length:cls, reg r5:V, reg c:L, reg explicit3:*, reg explicit4:V, reg l:*, reg c1:L, reg explicit6:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg explicit8:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg explicit13:V, reg l5:*, reg explicit14:V, reg r7:V, reg explicit15:*, reg explicit16:V, reg names:cls, reg r8:V, reg ___:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg value1:*, reg value2:V, reg attributes1:cls, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg supplied:*, reg supplied1:V, reg c2:L, reg supplied3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg length1:cls, reg r16:V, reg c3:L, reg c5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg c8:L, reg r18:V, reg valueAttrs:*, reg valueAttrs1:V, reg c9:L, reg c11:L, reg valueAttrs3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c13:L, reg dx5:V, reg r19:V, reg length2:cls, reg r20:V, reg r21:V, reg c14:L, reg c15:V, reg c17:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg value3:*, reg value4:V, reg length3:cls, reg r24:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg r29:V, reg object3:*, reg object4:V, reg length4:cls, reg r30:V, reg r31:V, reg c18:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg r33:V, reg value5:*, reg value6:V, reg length5:cls, reg r34:V, reg l6:*, reg c19:L, reg r37:V, reg l9:*, reg r38:V, reg l10:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r41:V, reg l12:*, reg r42:V, reg dx7:V, reg r43:V, reg length__:cls, reg r44:V, reg c20:L, reg r46:V, reg l14:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r48:V, reg dx9:V, reg r49:V, reg r50:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg valueAttrs4:*, reg valueAttrs5:V, reg length6:cls, reg r54:V, reg c21:L, reg l15:*, reg c22:L, reg r56:dots, reg l17:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r59:V, reg valueAttrs6:*, reg valueAttrs7:V, reg l18:*, reg c23:L, reg valueAttrs9:V, reg l20:*, reg dr12:V, reg dc6:L, reg dx12:V, reg valueAttrs11:V, reg dx13:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r60:V, reg valueAttrs16:V, reg l23:*, reg valueAttrs17:V, reg r61:V, reg valueAttrs18:*, reg valueAttrs19:V, reg names1:cls, reg r62:V, reg ___1:cls, reg r63:V, reg supplied4:*, reg supplied5:V, reg l24:*, reg attributes__:cls, reg r64:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r65:V, reg r66:V, reg object5:*, reg object6:V, reg isS4:cls, reg r67:V, reg c24:L, reg _asS4:cls, reg value7:*, reg value8:V, reg p:p(V +), reg r69:V, reg value9:*, reg value10:V |
    mkenv;
    st value = value;
    st object = object;
    explicit_isMissing = missing.0(explicit);
    if explicit_isMissing then L0(NULL) else L0(explicit);
  L0(explicit_orDefault):
    st explicit = explicit_orDefault;
    sym = ldf attributes;
    base = ldf attributes in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L1(r1):
    st supplied = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L25():
    object1 = ld object;
    check L27() else D0();
  L26():
    r = dyn base(<sym object>);
    goto L1(r);
  D0():
    deopt 2 [object1];
  L2(r4):
    c = `as.logical`(r4);
    if c then L33() else L3();
  L27():
    object2 = force? object1;
    checkMissing(object2);
    attributes = ldf attributes in base;
    r2 = dyn attributes(object2);
    check L28() else D1();
  L29():
    explicit1 = ld explicit;
    check L31() else D2();
  L30():
    r3 = dyn base1(<sym explicit>);
    goto L2(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [explicit1];
  L3():
    goto L6();
  L6():
    sym3 = ldf attributes;
    base3 = ldf attributes in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L28():
    goto L1(r2);
  L31():
    explicit2 = force? explicit1;
    checkMissing(explicit2);
    length = ldf length in base;
    r5 = dyn length(explicit2);
    check L32() else D3();
  L33():
    explicit3 = ld explicit;
    check L34() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 13 [explicit3];
  L7(r11):
    st valueAttrs = r11;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L32():
    goto L2(r5);
  L34():
    explicit4 = force? explicit3;
    checkMissing(explicit4);
    l = ld supplied;
    c1 = `is.object`(l);
    if c1 then L35() else L36(explicit4, l);
  L43():
    value1 = ld value;
    check L45() else D7();
  L44():
    r10 = dyn base3(<sym value>);
    goto L7(r10);
  D7():
    deopt 28 [value1];
  L4(explicit8, dx1):
    st supplied = dx1;
    goto L6();
  L8(r14):
    c3 = `as.logical`(r14);
    if c3 then L55() else L9(c3);
  L35():
    dr = tryDispatchBuiltin.0("[<-", l, explicit4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(explicit4, dr);
  L36(explicit6, l2):
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L45():
    value2 = force? value1;
    checkMissing(value2);
    attributes1 = ldf attributes in base;
    r12 = dyn attributes1(value2);
    check L46() else D8();
  L47():
    supplied = ld supplied;
    check L49() else D9();
  L48():
    r13 = dyn base4(<lang `$`(supplied, names)>);
    goto L8(r13);
  D8():
    deopt 31 [r12];
  D9():
    deopt 35 [supplied];
  L5(explicit13, l5, explicit14, r7):
    ___ = ldf `[<-` in base;
    r9 = dyn ___(l5, explicit14, r7);
    goto L4(explicit13, r9);
  L9(c5):
    c17 = `as.logical`(c5);
    if c17 then L65() else L11();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(explicit4, dx);
  L38():
    explicit15 = ld explicit;
    check L40() else D5();
  L39():
    r6 = dyn base2(<sym explicit>);
    goto L5(explicit6, l2, explicit4, r6);
  L46():
    goto L7(r12);
  L49():
    supplied1 = force? supplied;
    checkMissing(supplied1);
    c2 = `is.object`(supplied1);
    if c2 then L51() else L52(supplied1);
  L55():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  D5():
    deopt 18 [explicit6, l2, explicit4, explicit15];
  L10(c8, r18):
    r21 = `==`(r18, 0);
    c14 = `as.logical`(r21);
    c15 = `&&`(c8, c14);
    goto L9(c15);
  L11():
    goto L17();
  L17():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L91() else L92();
  L40():
    explicit16 = force? explicit15;
    checkMissing(explicit16);
    names = ldf names in base;
    r8 = dyn names(explicit16);
    check L41() else D6();
  L50(dx3):
    length1 = ldf length in base;
    r16 = dyn length1(dx3);
    check L54() else D10();
  L51():
    dr2 = tryDispatchBuiltin.1("$", supplied1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(dr2);
  L52(supplied3):
    r15 = `$`(supplied3, <sym names>);
    goto L50(r15);
  L56():
    valueAttrs = ld valueAttrs;
    check L58() else D11();
  L57():
    r17 = dyn base5(<lang `$`(valueAttrs, names)>);
    goto L10(c3, r17);
  L65():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  D6():
    deopt 21 [explicit6, l2, explicit4, r8];
  D10():
    deopt 39 [r16];
  D11():
    deopt 42 [c3, valueAttrs];
  L12(r23):
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L70() else L71();
  L18(r53):
    c21 = `as.logical`(r53);
    if c21 then L95() else L19();
  L41():
    goto L5(explicit6, l2, explicit4, r8);
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L50(dx2);
  L54():
    goto L8(r16);
  L58():
    valueAttrs1 = force? valueAttrs;
    checkMissing(valueAttrs1);
    c9 = `is.object`(valueAttrs1);
    if c9 then L60() else L61(c3, valueAttrs1);
  L66():
    value3 = ld value;
    check L68() else D13();
  L67():
    r22 = dyn base6(<sym value>);
    goto L12(r22);
  L91():
    valueAttrs4 = ld valueAttrs;
    check L93() else D21();
  L92():
    r52 = dyn base9(<sym valueAttrs>);
    goto L18(r52);
  D13():
    deopt 52 [value3];
  D21():
    deopt 83 [valueAttrs4];
  L13(r28, r29):
    r31 = `!=`(r28, r29);
    c18 = `as.logical`(r31);
    if c18 then L74() else L14();
  L19():
    goto L22();
  L22():
    supplied4 = ld supplied;
    check L109() else D26();
  L59(c13, dx5):
    length2 = ldf length in base;
    r20 = dyn length2(dx5);
    check L63() else D12();
  L60():
    dr4 = tryDispatchBuiltin.1("$", valueAttrs1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(c3, dr4);
  L61(c11, valueAttrs3):
    r19 = `$`(valueAttrs3, <sym names>);
    goto L59(c11, r19);
  L68():
    value4 = force? value3;
    checkMissing(value4);
    length3 = ldf length in base;
    r24 = dyn length3(value4);
    check L69() else D14();
  L70():
    object3 = ld object;
    check L72() else D15();
  L71():
    r27 = dyn base7(<sym object>);
    goto L13(r23, r27);
  L93():
    valueAttrs5 = force? valueAttrs4;
    checkMissing(valueAttrs5);
    length6 = ldf length in base;
    r54 = dyn length6(valueAttrs5);
    check L94() else D22();
  L95():
    l15 = ld valueAttrs;
    c22 = `is.object`(l15);
    if c22 then L97() else L98(NULL, l15);
  D12():
    deopt 46 [c13, r20];
  D14():
    deopt 55 [r24];
  D15():
    deopt 57 [r23, object3];
  D22():
    deopt 86 [r54];
  D26():
    deopt 105 [supplied4];
  L14():
    goto L16(NULL);
  L16(r50):
    goto L17();
  L62():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L59(c3, dx4);
  L63():
    goto L10(c13, r20);
  L69():
    goto L12(r24);
  L72():
    object4 = force? object3;
    checkMissing(object4);
    length4 = ldf length in base;
    r30 = dyn length4(object4);
    check L73() else D16();
  L74():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L75() else L76();
  L94():
    goto L18(r54);
  L96(dx11):
    st valueAttrs = dx11;
    valueAttrs6 = ld valueAttrs;
    check L100() else D23();
  L97():
    dr10 = tryDispatchBuiltin.0("$<-", l15, NULL);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L99() else L98(NULL, dr10);
  L98(r56, l17):
    r59 = `$<-`(l17, <sym class>, NULL);
    goto L96(r59);
  L109():
    supplied5 = force? supplied4;
    checkMissing(supplied5);
    l24 = ld value;
    attributes__ = ldf `attributes<-`;
    check L110() else D27();
  D16():
    deopt 60 [r23, r30];
  D23():
    deopt 92 [valueAttrs6];
  D27():
    deopt 108 [supplied5, l24, supplied5];
  L15(r33):
    l6 = ld supplied;
    c19 = `is.object`(l6);
    if c19 then L80() else L81(r33, l6, r33, l6);
  L73():
    goto L13(r23, r30);
  L75():
    value5 = ld value;
    check L77() else D17();
  L76():
    r32 = dyn base8(<sym value>);
    goto L15(r32);
  L99():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L96(dx10);
  L100():
    valueAttrs7 = force? valueAttrs6;
    checkMissing(valueAttrs7);
    l18 = ld supplied;
    c23 = `is.object`(l18);
    if c23 then L101() else L102(valueAttrs7, l18);
  L110():
    r64 = dyn attributes__(l24, NULL, supplied5);
    check L111() else D28();
  D17():
    deopt 64 [value5];
  D28():
    deopt 110 [supplied5, r64];
  L20(valueAttrs11, dx13):
    st supplied = dx13;
    goto L22();
  L77():
    value6 = force? value5;
    checkMissing(value6);
    length5 = ldf length in base;
    r34 = dyn length5(value6);
    check L78() else D18();
  L79(r41, l12, r42, dx7):
    length__ = ldf `length<-`;
    check L83() else D19();
  L80():
    dr6 = tryDispatchBuiltin.1("$", l6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(r33, l6, r33, dr6);
  L81(r37, l9, r38, l10):
    r43 = `$`(l10, <sym names>);
    goto L79(r37, l9, r38, r43);
  L101():
    dr12 = tryDispatchBuiltin.0("[<-", l18, valueAttrs7);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L103() else L102(valueAttrs7, dr12);
  L102(valueAttrs9, l20):
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L104() else L105();
  L111():
    st value = r64;
    sym11 = ldf isS4;
    base11 = ldf isS4 in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L112() else L113();
  D18():
    deopt 67 [r34];
  D19():
    deopt 72 [r41, l12, dx7, r42];
  L21(valueAttrs16, l23, valueAttrs17, r61):
    ___1 = ldf `[<-` in base;
    r63 = dyn ___1(l23, valueAttrs17, r61);
    goto L20(valueAttrs16, r63);
  L23(r66):
    c24 = `as.logical`(r66);
    if c24 then L116() else L24();
  L78():
    goto L15(r34);
  L82():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L79(r33, l6, r33, dx6);
  L83():
    r44 = dyn length__(dx7, NULL, r42);
    check L84() else D20();
  L103():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L20(valueAttrs7, dx12);
  L104():
    valueAttrs18 = ld valueAttrs;
    check L106() else D24();
  L105():
    r60 = dyn base10(<sym valueAttrs>);
    goto L21(valueAttrs9, l20, valueAttrs7, r60);
  L112():
    object5 = ld object;
    check L114() else D29();
  L113():
    r65 = dyn base11(<sym object>);
    goto L23(r65);
  D20():
    deopt 74 [r41, l12, r44];
  D24():
    deopt 97 [valueAttrs9, l20, valueAttrs7, valueAttrs18];
  D29():
    deopt 114 [object5];
  L24():
    value9 = ld value;
    check L120() else D33();
  L84():
    c20 = `is.object`(l12);
    if c20 then L86() else L87(r41, l12);
  L106():
    valueAttrs19 = force? valueAttrs18;
    checkMissing(valueAttrs19);
    names1 = ldf names in base;
    r62 = dyn names1(valueAttrs19);
    check L107() else D25();
  L114():
    object6 = force? object5;
    checkMissing(object6);
    isS4 = ldf isS4 in base;
    r67 = dyn isS4(object6);
    check L115() else D30();
  L116():
    _asS4 = ldf `.asS4`;
    check L117() else D31();
  D25():
    deopt 100 [valueAttrs9, l20, valueAttrs7, r62];
  D30():
    deopt 117 [r67];
  D31():
    deopt 119 [];
  D33():
    deopt 122 [value9];
  L85(r48, dx9):
    st supplied = dx9;
    goto L16(r48);
  L86():
    dr8 = tryDispatchBuiltin.0("$<-", l12, r44);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L88() else L87(r41, dr8);
  L87(r46, l14):
    r49 = `$<-`(l14, <sym names>, r44);
    goto L85(r46, r49);
  L107():
    goto L21(valueAttrs9, l20, valueAttrs7, r62);
  L115():
    goto L23(r67);
  L117():
    p = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    r69 = dyn _asS4(p);
    check L118() else D32();
  L120():
    value10 = force? value9;
    checkMissing(value10);
    popenv;
    return value10;
  D32():
    deopt 121 [r69];
  L88():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L85(r41, dx8);
  L118():
    popenv;
    return r69;
  }
}