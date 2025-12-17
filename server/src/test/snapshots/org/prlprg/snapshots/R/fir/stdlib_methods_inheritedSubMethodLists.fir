fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2881083477;
    st inheritedSubMethodLists = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2881083477(object, thisClass, mlist, ev) {
  (reg object:*, reg thisClass:*, reg mlist:*, reg ev:*) -+> V { var object:*, var thisClass:*, var mlist:*, var ev:*, reg _MlistDefunct:cls, reg r:V, reg slot:cls, reg mlist1:*, reg mlist2:V, reg p:p(V +), reg r2:V, reg methods:*, reg methods1:V, reg c:L, reg methods3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg methods4:*, reg methods5:V, reg names:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg list:cls, reg r9:V, reg _identC:cls, reg thisClass1:*, reg thisClass2:V, reg p1:p(V +), reg r11:V, reg c1:L, reg getClassDef:cls, reg thisClass3:*, reg thisClass4:V, reg p2:p(V +), reg ev1:*, reg ev2:V, reg p3:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg classDef:*, reg classDef1:V, reg c2:V, reg r18:V, reg c3:L, reg c5:V, reg __1:cls, reg r19:V, reg r20:V, reg c6:L, reg c7:V, reg useSuperClasses:*, reg useSuperClasses1:V, reg c9:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg __2:cls, reg r23:V, reg names1:cls, reg r24:V, reg superClasses:*, reg superClasses1:V, reg c10:L, reg superClasses3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg superClasses6:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg superClasses9:V, reg r28:V, reg superClasses10:*, reg superClasses11:V, reg classes:*, reg classes1:V, reg match:cls, reg r29:V, reg is_na:cls, reg r30:V, reg r31:V, reg __3:cls, reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg classes2:*, reg classes3:V, reg r35:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c11:L, reg x:V, reg classes4:*, reg classes5:V, reg c12:L, reg i6:I, reg classes7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i8:I, reg dx5:V, reg which:*, reg which1:V, reg __4:cls, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg i11:I, reg r38:V, reg object1:*, reg object2:V, reg c13:V, reg c14:L, reg i12:I, reg c15:V, reg is:cls, reg object3:*, reg object4:V, reg p4:p(V +), reg tryClass:*, reg tryClass1:V, reg p5:p(V +), reg r41:V, reg c17:L, reg c18:V, reg c20:L, reg methods6:*, reg methods7:V, reg c21:L, reg i18:I, reg methods9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i20:I, reg dx7:V, reg tryClass2:*, reg tryClass3:V, reg __5:cls, reg r42:V, reg l1:*, reg c22:L, reg i22:I, reg dx9:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx11:V, reg i24:I, reg dx12:V, reg dx13:V, reg tryClass4:*, reg tryClass5:V, reg ____:cls, reg r43:V, reg i25:I, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg classes8:*, reg classes9:V, reg r46:I, reg s1:V, reg l4:I, reg i26:I, reg i27:I, reg i28:I, reg c23:L, reg x1:V, reg classes10:*, reg classes11:V, reg c24:L, reg i32:I, reg classes13:V, reg dr10:V, reg dc5:L, reg dx15:V, reg i34:I, reg dx16:V, reg which2:*, reg which3:V, reg __6:cls, reg r47:V, reg getClassDef1:cls, reg tryClass6:*, reg tryClass7:V, reg p6:p(V +), reg ev3:*, reg ev4:V, reg p7:p(V +), reg r50:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r51:V, reg i37:I, reg r52:V, reg tryClassDef:*, reg tryClassDef1:V, reg c25:V, reg r53:V, reg c26:L, reg i39:I, reg c28:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg i42:I, reg c31:L, reg r55:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg i45:I, reg c34:L, reg r57:V, reg thisClass5:*, reg thisClass6:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r58:V, reg i48:I, reg c37:L, reg r59:V, reg __7:cls, reg r60:V, reg names2:cls, reg r61:V, reg match1:cls, reg r62:V, reg is_na1:cls, reg r63:V, reg r64:V, reg c38:L, reg c39:V, reg c41:L, reg methods10:*, reg methods11:V, reg c42:L, reg i53:I, reg methods13:V, reg dr12:V, reg dc6:L, reg dx17:V, reg i55:I, reg dx18:V, reg which4:*, reg which5:V, reg __8:cls, reg r65:V, reg l5:*, reg c43:L, reg i57:I, reg dx20:V, reg l7:*, reg dr14:V, reg dc7:L, reg dx22:V, reg i59:I, reg dx23:V, reg dx24:V, reg tryClass8:*, reg tryClass9:V, reg ____1:cls, reg r66:V, reg i60:I, reg sym13:cls, reg base13:cls, reg guard13:L, reg r67:V, reg r68:V, reg defaultMethod:*, reg defaultMethod1:V, reg c44:V, reg r69:V, reg c45:L, reg defaultMethod2:*, reg defaultMethod3:V, reg l8:*, reg c46:L, reg defaultMethod5:V, reg l10:*, reg dr16:V, reg dc8:L, reg dx26:V, reg defaultMethod7:V, reg dx27:V, reg ____2:cls, reg r70:V, reg value:*, reg value1:V |
    mkenv;
    st object = object;
    st thisClass = thisClass;
    st mlist = mlist;
    st ev = ev;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L39() else D0();
  D0():
    deopt 1 [];
  L39():
    r = dyn _MlistDefunct("inheritedSubMethodLists()");
    check L40() else D1();
  D1():
    deopt 3 [r];
  L40():
    slot = ldf slot;
    check L41() else D2();
  D2():
    deopt 5 [];
  L41():
    p = prom<V +>{
      mlist1 = ld mlist;
      mlist2 = force? mlist1;
      checkMissing(mlist2);
      return mlist2;
    };
    r2 = dyn slot(p, "methods");
    check L42() else D3();
  D3():
    deopt 8 [r2];
  L42():
    st methods = r2;
    methods = ld methods;
    check L43() else D4();
  D4():
    deopt 10 [methods];
  L43():
    methods1 = force? methods;
    checkMissing(methods1);
    c = `is.object`(methods1);
    if c then L44() else L45(methods1);
  L0(dx1):
    st defaultMethod = dx1;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L47() else L48();
  L44():
    dr = tryDispatchBuiltin.1("[[", methods1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(methods3):
    __ = ldf `[[` in base;
    r3 = dyn __(methods3, "ANY");
    goto L0(r3);
  L1(r5):
    st classes = r5;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L47():
    methods4 = ld methods;
    check L49() else D5();
  L48():
    r4 = dyn base(<sym methods>);
    goto L1(r4);
  D5():
    deopt 18 [methods4];
  L2(r8):
    st value = r8;
    _identC = ldf `.identC`;
    check L54() else D8();
  L49():
    methods5 = force? methods4;
    checkMissing(methods5);
    names = ldf names in base;
    r6 = dyn names(methods5);
    check L50() else D6();
  L51():
    list = ldf list in base;
    r9 = dyn list();
    check L53() else D7();
  L52():
    r7 = dyn base1();
    goto L2(r7);
  D6():
    deopt 21 [r6];
  D7():
    deopt 26 [r9];
  D8():
    deopt 29 [];
  L50():
    goto L1(r6);
  L53():
    goto L2(r9);
  L54():
    p1 = prom<V +>{
      thisClass1 = ld thisClass;
      thisClass2 = force? thisClass1;
      checkMissing(thisClass2);
      return thisClass2;
    };
    r11 = dyn _identC(p1, "missing");
    check L55() else D9();
  D9():
    deopt 32 [r11];
  L55():
    c1 = `as.logical`(r11);
    if c1 then L56() else L3();
  L3():
    getClassDef = ldf getClassDef;
    check L58() else D10();
  L4():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L147() else L148();
  L56():
    goto L4();
  D10():
    deopt 36 [];
  L35(r68):
    r69 = `!`(r68);
    c45 = `as.logical`(r69);
    if c45 then L150() else L36();
  L58():
    p2 = prom<V +>{
      thisClass3 = ld thisClass;
      thisClass4 = force? thisClass3;
      checkMissing(thisClass4);
      return thisClass4;
    };
    p3 = prom<V +>{
      ev1 = ld ev;
      ev2 = force? ev1;
      checkMissing(ev2);
      return ev2;
    };
    r15 = dyn getClassDef(p2, p3);
    check L59() else D11();
  L147():
    defaultMethod = ld defaultMethod;
    check L149() else D42();
  L148():
    r67 = dyn base13(<sym defaultMethod>);
    goto L35(r67);
  D11():
    deopt 39 [r15];
  D42():
    deopt 171 [defaultMethod];
  L36():
    goto L38();
  L38():
    value = ld value;
    check L156() else D44();
  L59():
    st classDef = r15;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L60() else L61();
  L149():
    defaultMethod1 = force? defaultMethod;
    checkMissing(defaultMethod1);
    c44 = `==`(defaultMethod1, NULL);
    goto L35(c44);
  L150():
    defaultMethod2 = ld defaultMethod;
    check L151() else D43();
  D43():
    deopt 175 [defaultMethod2];
  D44():
    deopt 184 [value];
  L5(r17):
    r18 = `!`(r17);
    c3 = `as.logical`(r18);
    if c3 then L63() else L6(c3);
  L60():
    classDef = ld classDef;
    check L62() else D12();
  L61():
    r16 = dyn base2(<sym classDef>);
    goto L5(r16);
  L151():
    defaultMethod3 = force? defaultMethod2;
    checkMissing(defaultMethod3);
    l8 = ld value;
    c46 = `is.object`(l8);
    if c46 then L152() else L153(defaultMethod3, l8);
  L156():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D12():
    deopt 42 [classDef];
  L6(c5):
    st useSuperClasses = c5;
    useSuperClasses = ld useSuperClasses;
    check L65() else D13();
  L37(defaultMethod7, dx27):
    st value = dx27;
    goto L38();
  L62():
    classDef1 = force? classDef;
    checkMissing(classDef1);
    c2 = `==`(classDef1, NULL);
    goto L5(c2);
  L63():
    __1 = ldf `@` in base;
    r19 = dyn __1(<sym classDef>, <sym sealed>);
    r20 = `!`(r19);
    c6 = `as.logical`(r20);
    c7 = `&&`(c3, c6);
    goto L6(c7);
  L152():
    dr16 = tryDispatchBuiltin.0("[[<-", l8, defaultMethod3);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L154() else L153(defaultMethod3, dr16);
  L153(defaultMethod5, l10):
    ____2 = ldf `[[<-` in base;
    r70 = dyn ____2(l10, defaultMethod3, "ANY");
    goto L37(defaultMethod5, r70);
  D13():
    deopt 51 [useSuperClasses];
  L65():
    useSuperClasses1 = force? useSuperClasses;
    checkMissing(useSuperClasses1);
    c9 = `as.logical`(useSuperClasses1);
    if c9 then L66() else L7();
  L154():
    dx26 = getTryDispatchBuiltinValue(dr16);
    goto L37(defaultMethod3, dx26);
  L7():
    sym8 = ldf seq_along;
    base8 = ldf seq_along in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L110() else L111();
  L66():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L67() else L68();
  L8(r22):
    st superClasses = r22;
    superClasses = ld superClasses;
    check L70() else D15();
  L22(r45):
    s1 = toForSeq(r45);
    l4 = length(s1);
    i26 = 0;
    goto L23(i26);
  L67():
    __2 = ldf `@` in base;
    r23 = dyn __2(<sym classDef>, <sym contains>);
    names1 = ldf names in base;
    r24 = dyn names1(r23);
    check L69() else D14();
  L68():
    r21 = dyn base3(<lang `@`(classDef, contains)>);
    goto L8(r21);
  L110():
    classes8 = ld classes;
    check L112() else D29();
  L111():
    r44 = dyn base8(<sym classes>);
    goto L22(r44);
  D14():
    deopt 58 [r24];
  D15():
    deopt 60 [superClasses];
  D29():
    deopt 115 [classes8];
  L23(i27):
    i28 = `+`.1(i27, 1);
    c23 = `<`.1(l4, i28);
    if c23 then L113() else L34();
  L69():
    goto L8(r24);
  L70():
    superClasses1 = force? superClasses;
    checkMissing(superClasses1);
    c10 = `is.object`(superClasses1);
    if c10 then L71() else L72(superClasses1);
  L112():
    classes9 = force? classes8;
    checkMissing(classes9);
    r46 = seq_along(classes9);
    goto L22(r46);
  L9(dx3):
    st classes = dx3;
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L82() else L83();
  L34():
    x1 = `[[`(s1, i28, NULL, TRUE);
    st which = x1;
    classes10 = ld classes;
    check L114() else D30();
  L71():
    dr2 = tryDispatchBuiltin.1("[", superClasses1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L73() else L72(dr2);
  L72(superClasses3):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  L113():
    goto L4();
  D30():
    deopt 118 [i28, classes10];
  L10(superClasses6, r26):
    r31 = `!`(r26);
    __3 = ldf `[` in base;
    r32 = dyn __3(superClasses6, r31);
    goto L9(r32);
  L12(r34):
    s = toForSeq(r34);
    l = length(s);
    i = 0;
    goto L13(i);
  L73():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L74():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L75():
    r25 = dyn base4(<lang match(superClasses, classes)>);
    goto L10(superClasses3, r25);
  L82():
    classes2 = ld classes;
    check L84() else D20();
  L83():
    r33 = dyn base6(<sym classes>);
    goto L12(r33);
  L114():
    classes11 = force? classes10;
    checkMissing(classes11);
    c24 = `is.object`(classes11);
    if c24 then L115() else L116(i28, classes11);
  D20():
    deopt 80 [classes2];
  L11(superClasses9, r28):
    is_na = ldf `is.na` in base;
    r30 = dyn is_na(r28);
    check L81() else D19();
  L13(i1):
    i2 = `+`.1(i1, 1);
    c11 = `<`.1(l, i2);
    if c11 then L85() else L21();
  L24(i34, dx16):
    st tryClass = dx16;
    getClassDef1 = ldf getClassDef;
    check L119() else D32();
  L76():
    superClasses10 = ld superClasses;
    check L78() else D16();
  L77():
    r27 = dyn base5(<sym superClasses>, <sym classes>);
    goto L11(superClasses3, r27);
  L84():
    classes3 = force? classes2;
    checkMissing(classes3);
    r35 = seq_along(classes3);
    goto L12(r35);
  L115():
    dr10 = tryDispatchBuiltin.1("[[", classes11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L117() else L116(i28, dr10);
  L116(i32, classes13):
    which2 = ld which;
    check L118() else D31();
  D16():
    deopt 66 [superClasses3, superClasses10];
  D19():
    deopt 75 [superClasses9, r30];
  D31():
    deopt 120 [i32, classes13, which2];
  D32():
    deopt 125 [i34];
  L21():
    x = `[[`(s, i2, NULL, TRUE);
    st which = x;
    classes4 = ld classes;
    check L86() else D21();
  L78():
    superClasses11 = force? superClasses10;
    checkMissing(superClasses11);
    classes = ld classes;
    check L79() else D17();
  L81():
    goto L10(superClasses9, r30);
  L85():
    goto L4();
  L117():
    dx15 = getTryDispatchBuiltinValue(dr10);
    goto L24(i28, dx15);
  L118():
    which3 = force? which2;
    __6 = ldf `[[` in base;
    r47 = dyn __6(classes13, which3);
    goto L24(i32, r47);
  L119():
    p6 = prom<V +>{
      tryClass6 = ld tryClass;
      tryClass7 = force? tryClass6;
      checkMissing(tryClass7);
      return tryClass7;
    };
    p7 = prom<V +>{
      ev3 = ld ev;
      ev4 = force? ev3;
      checkMissing(ev4);
      return ev4;
    };
    r50 = dyn getClassDef1(p6, p7);
    check L120() else D33();
  D17():
    deopt 68 [superClasses3, classes];
  D21():
    deopt 83 [i2, classes4];
  D33():
    deopt 128 [i34, r50];
  L79():
    classes1 = force? classes;
    checkMissing(classes1);
    match = ldf match in base;
    r29 = dyn match(superClasses11, classes1, NA_INT, NULL);
    check L80() else D18();
  L86():
    classes5 = force? classes4;
    checkMissing(classes5);
    c12 = `is.object`(classes5);
    if c12 then L87() else L88(i2, classes5);
  L120():
    st tryClassDef = r50;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L121() else L122();
  D18():
    deopt 73 [superClasses3, r29];
  L14(i8, dx5):
    st tryClass = dx5;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L91() else L92();
  L25(i37, r52):
    r53 = `!`(r52);
    c26 = `as.logical`(r53);
    if c26 then L124() else L26(i37, c26);
  L80():
    goto L11(superClasses3, r29);
  L87():
    dr4 = tryDispatchBuiltin.1("[[", classes5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L89() else L88(i2, dr4);
  L88(i6, classes7):
    which = ld which;
    check L90() else D22();
  L121():
    tryClassDef = ld tryClassDef;
    check L123() else D34();
  L122():
    r51 = dyn base9(<sym tryClassDef>);
    goto L25(i34, r51);
  D22():
    deopt 85 [i6, classes7, which];
  D34():
    deopt 131 [i34, tryClassDef];
  L15(i11, r38):
    c14 = `as.logical`(r38);
    if c14 then L16(i11, c14) else L94();
  L26(i39, c28):
    c41 = `as.logical`(c28);
    if c41 then L136() else L30();
  L89():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(i2, dx4);
  L90():
    which1 = force? which;
    __4 = ldf `[[` in base;
    r36 = dyn __4(classes7, which1);
    goto L14(i6, r36);
  L91():
    object1 = ld object;
    check L93() else D23();
  L92():
    r37 = dyn base7(<sym object>);
    goto L15(i8, r37);
  L123():
    tryClassDef1 = force? tryClassDef;
    checkMissing(tryClassDef1);
    c25 = `==`(tryClassDef1, NULL);
    goto L25(i34, c25);
  L124():
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L125() else L126();
  D23():
    deopt 90 [i8, object1];
  L16(i12, c15):
    c20 = `as.logical`(c15);
    if c20 then L98() else L17();
  L27(i42, c31, r55):
    r64 = `!`(r55);
    c38 = `as.logical`(r64);
    c39 = `&&`(c31, c38);
    goto L26(i42, c39);
  L30():
    goto L33(i39);
  L33(i60):
    goto L23(i60);
  L93():
    object2 = force? object1;
    checkMissing(object2);
    c13 = `==`(object2, NULL);
    goto L15(i8, c13);
  L94():
    is = ldf is;
    check L95() else D24();
  L125():
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L127() else L128();
  L126():
    r54 = dyn base10(<lang match(thisClass, names(`@`(tryClassDef, subclasses)))>);
    goto L27(i37, c26, r54);
  L136():
    methods10 = ld methods;
    check L137() else D39();
  D24():
    deopt 94 [i11, c14];
  D39():
    deopt 155 [i39, methods10];
  L17():
    goto L20(i12);
  L20(i25):
    goto L13(i25);
  L28(i45, c34, r57):
    is_na1 = ldf `is.na` in base;
    r63 = dyn is_na1(r57);
    check L134() else D38();
  L95():
    p4 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    p5 = prom<V +>{
      tryClass = ld tryClass;
      tryClass1 = force? tryClass;
      checkMissing(tryClass1);
      return tryClass1;
    };
    r41 = dyn is(p4, p5);
    check L96() else D25();
  L98():
    methods6 = ld methods;
    check L99() else D26();
  L127():
    thisClass5 = ld thisClass;
    check L129() else D35();
  L128():
    r56 = dyn base11(<sym thisClass>, <lang names(`@`(tryClassDef, subclasses))>);
    goto L28(i37, c26, r56);
  L137():
    methods11 = force? methods10;
    checkMissing(methods11);
    c42 = `is.object`(methods11);
    if c42 then L138() else L139(i39, methods11);
  D25():
    deopt 97 [i11, c14, r41];
  D26():
    deopt 99 [i12, methods6];
  D35():
    deopt 139 [i37, c26, thisClass5];
  D38():
    deopt 152 [i45, c34, r63];
  L31(i55, dx18):
    l5 = ld value;
    c43 = `is.object`(l5);
    if c43 then L142() else L143(i55, dx18, l5);
  L96():
    c17 = `as.logical`(r41);
    c18 = `||`(c14, c17);
    goto L16(i11, c18);
  L99():
    methods7 = force? methods6;
    checkMissing(methods7);
    c21 = `is.object`(methods7);
    if c21 then L100() else L101(i12, methods7);
  L129():
    thisClass6 = force? thisClass5;
    checkMissing(thisClass6);
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L130() else L131();
  L134():
    goto L27(i45, c34, r63);
  L138():
    dr12 = tryDispatchBuiltin.1("[[", methods11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L140() else L139(i39, dr12);
  L139(i53, methods13):
    which4 = ld which;
    check L141() else D40();
  D40():
    deopt 157 [i53, methods13, which4];
  L18(i20, dx7):
    l1 = ld value;
    c22 = `is.object`(l1);
    if c22 then L104() else L105(i20, dx7, l1);
  L29(i48, c37, r59):
    match1 = ldf match in base;
    r62 = dyn match1(thisClass6, r59, NA_INT, NULL);
    check L133() else D37();
  L32(i59, dx23, dx24):
    st value = dx24;
    goto L33(i59);
  L100():
    dr6 = tryDispatchBuiltin.1("[[", methods7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L102() else L101(i12, dr6);
  L101(i18, methods9):
    tryClass2 = ld tryClass;
    check L103() else D27();
  L130():
    __7 = ldf `@` in base;
    r60 = dyn __7(<sym tryClassDef>, <sym subclasses>);
    names2 = ldf names in base;
    r61 = dyn names2(r60);
    check L132() else D36();
  L131():
    r58 = dyn base12(<lang `@`(tryClassDef, subclasses)>);
    goto L29(i37, c26, r58);
  L140():
    dx17 = getTryDispatchBuiltinValue(dr12);
    goto L31(i39, dx17);
  L141():
    which5 = force? which4;
    __8 = ldf `[[` in base;
    r65 = dyn __8(methods13, which5);
    goto L31(i53, r65);
  L142():
    dr14 = tryDispatchBuiltin.0("[[<-", l5, dx18);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L144() else L143(i55, dx18, dr14);
  L143(i57, dx20, l7):
    tryClass8 = ld tryClass;
    check L145() else D41();
  D27():
    deopt 101 [i18, methods9, tryClass2];
  D36():
    deopt 146 [i37, c26, r61];
  D37():
    deopt 150 [i48, c37, r62];
  D41():
    deopt 161 [i57, dx20, l7, dx18, tryClass8];
  L19(i24, dx12, dx13):
    st value = dx13;
    goto L20(i24);
  L102():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L18(i12, dx6);
  L103():
    tryClass3 = force? tryClass2;
    __5 = ldf `[[` in base;
    r42 = dyn __5(methods9, tryClass3);
    goto L18(i18, r42);
  L104():
    dr8 = tryDispatchBuiltin.0("[[<-", l1, dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L106() else L105(i20, dx7, dr8);
  L105(i22, dx9, l3):
    tryClass4 = ld tryClass;
    check L107() else D28();
  L132():
    goto L29(i37, c26, r61);
  L133():
    goto L28(i48, c37, r62);
  L144():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L32(i55, dx18, dx22);
  L145():
    tryClass9 = force? tryClass8;
    ____1 = ldf `[[<-` in base;
    r66 = dyn ____1(l7, dx18, tryClass9);
    goto L32(i57, dx20, r66);
  D28():
    deopt 105 [i22, dx9, l3, dx7, tryClass4];
  L106():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L19(i20, dx7, dx11);
  L107():
    tryClass5 = force? tryClass4;
    ____ = ldf `[[<-` in base;
    r43 = dyn ____(l3, dx7, tryClass5);
    goto L19(i22, dx9, r43);
  }
}