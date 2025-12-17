fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1523694160;
    st initRefFields = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1523694160(`.Object`, classDef, selfEnv, args) {
  (reg _Object:*, reg classDef:*, reg selfEnv:*, reg args:*) -+> V { var `.Object`:*, var classDef:*, var selfEnv:*, var args:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg args1:*, reg args2:V, reg length:cls, reg r2:V, reg c:L, reg allNames:cls, reg args3:*, reg args4:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg snames:*, reg snames1:V, reg nzchar:cls, reg r7:V, reg args5:*, reg args6:V, reg c1:L, reg args8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg which:*, reg which1:V, reg __:cls, reg r8:V, reg args9:*, reg args10:V, reg c2:L, reg args12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg which2:*, reg which3:V, reg r9:V, reg __1:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg elements:*, reg elements1:V, reg names:cls, reg r13:V, reg supers:*, reg supers1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg is:cls, reg super:*, reg super1:V, reg p1:p(V +), reg r15:V, reg r16:V, reg c4:L, reg warning:cls, reg gettextf:cls, reg dQuote:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg super2:*, reg super3:V, reg class:cls, reg r19:V, reg p2:p(V +), reg r21:V, reg p3:p(V +), reg r23:V, reg p4:p(V +), reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg i11:I, reg r28:V, reg __2:cls, reg r29:V, reg names1:cls, reg r30:V, reg fields:*, reg fields1:V, reg c5:L, reg i13:I, reg fields3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i15:I, reg dx5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg i18:I, reg fields6:V, reg r32:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg i21:I, reg fields9:V, reg r34:V, reg fields10:*, reg fields11:V, reg elNames:*, reg elNames1:V, reg match:cls, reg r35:V, reg is_na:cls, reg r36:V, reg __3:cls, reg r37:V, reg fields12:*, reg fields13:V, reg s1:V, reg l1:I, reg i22:I, reg i23:I, reg i24:I, reg i25:I, reg c6:L, reg x1:V, reg super4:*, reg super5:V, reg c7:L, reg i32:I, reg i33:I, reg super7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i36:I, reg i37:I, reg dx7:V, reg r38:V, reg dx8:cls, reg field:*, reg field1:V, reg p5:p(V +), reg r40:V, reg l2:*, reg c8:L, reg i40:I, reg i41:I, reg r42:V, reg l4:*, reg dr8:V, reg dc4:L, reg dx9:V, reg i44:I, reg i45:I, reg dx10:V, reg field2:*, reg field3:V, reg ____:cls, reg r45:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg i48:I, reg r47:V, reg elements2:*, reg elements3:V, reg names2:cls, reg r48:V, reg elNames2:*, reg elNames3:V, reg s2:V, reg l5:I, reg i49:I, reg i50:I, reg i51:I, reg c9:L, reg x2:V, reg envRefSetField:cls, reg _Object1:*, reg _Object2:V, reg p6:p(V +), reg field4:*, reg field5:V, reg p7:p(V +), reg classDef1:*, reg classDef2:V, reg p8:p(V +), reg selfEnv1:*, reg selfEnv2:V, reg p9:p(V +), reg elements4:*, reg elements5:V, reg c10:L, reg elements7:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg field6:*, reg field7:V, reg __4:cls, reg r53:V, reg p10:p(V +), reg r55:V, reg _Object3:*, reg _Object4:V |
    mkenv;
    st `.Object` = _Object;
    st classDef = classDef;
    st selfEnv = selfEnv;
    st args = args;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r1):
    c = `as.logical`(r1);
    if c then L25() else L1();
  L21():
    args1 = ld args;
    check L23() else D0();
  L22():
    r = dyn base(<sym args>);
    goto L0(r);
  D0():
    deopt 2 [args1];
  L1():
    goto L20();
  L20():
    _Object3 = ld `.Object`;
    check L91() else D32();
  L23():
    args2 = force? args1;
    checkMissing(args2);
    length = ldf length in base;
    r2 = dyn length(args2);
    check L24() else D1();
  L25():
    allNames = ldf allNames;
    check L26() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D32():
    deopt 122 [_Object3];
  L24():
    goto L0(r2);
  L26():
    p = prom<V +>{
      args3 = ld args;
      args4 = force? args3;
      checkMissing(args4);
      return args4;
    };
    r4 = dyn allNames(p);
    check L27() else D3();
  L91():
    _Object4 = force? _Object3;
    checkMissing(_Object4);
    popenv;
    return _Object4;
  D3():
    deopt 9 [r4];
  L27():
    st snames = r4;
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L2(r6):
    st which = r6;
    args5 = ld args;
    check L32() else D6();
  L28():
    snames = ld snames;
    check L30() else D4();
  L29():
    r5 = dyn base1(<sym snames>);
    goto L2(r5);
  D4():
    deopt 13 [snames];
  D6():
    deopt 18 [args5];
  L30():
    snames1 = force? snames;
    checkMissing(snames1);
    nzchar = ldf nzchar in base;
    r7 = dyn nzchar(snames1);
    check L31() else D5();
  L32():
    args6 = force? args5;
    checkMissing(args6);
    c1 = `is.object`(args6);
    if c1 then L33() else L34(args6);
  D5():
    deopt 16 [r7];
  L3(dx1):
    st elements = dx1;
    args9 = ld args;
    check L37() else D8();
  L31():
    goto L2(r7);
  L33():
    dr = tryDispatchBuiltin.1("[", args6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(args8):
    which = ld which;
    check L36() else D7();
  D7():
    deopt 20 [args8, which];
  D8():
    deopt 24 [args9];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L36():
    which1 = force? which;
    __ = ldf `[` in base;
    r8 = dyn __(args8, which1);
    goto L3(r8);
  L37():
    args10 = force? args9;
    checkMissing(args10);
    c2 = `is.object`(args10);
    if c2 then L38() else L39(args10);
  L4(dx3):
    st supers = dx3;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L38():
    dr2 = tryDispatchBuiltin.1("[", args10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(dr2);
  L39(args12):
    which2 = ld which;
    check L41() else D9();
  D9():
    deopt 26 [args12, which2];
  L5(r12):
    st elNames = r12;
    supers = ld supers;
    check L46() else D12();
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L41():
    which3 = force? which2;
    checkMissing(which3);
    r9 = `!`(which3);
    __1 = ldf `[` in base;
    r10 = dyn __1(args12, r9);
    goto L4(r10);
  L42():
    elements = ld elements;
    check L44() else D10();
  L43():
    r11 = dyn base2(<sym elements>);
    goto L5(r11);
  D10():
    deopt 33 [elements];
  D12():
    deopt 38 [supers];
  L44():
    elements1 = force? elements;
    checkMissing(elements1);
    names = ldf names in base;
    r13 = dyn names(elements1);
    check L45() else D11();
  L46():
    supers1 = force? supers;
    checkMissing(supers1);
    s = toForSeq(supers1);
    l = length(s);
    i = 0;
    goto L6(i);
  D11():
    deopt 36 [r13];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L47() else L17();
  L45():
    goto L5(r13);
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st super = x;
    is = ldf is;
    check L48() else D13();
  L47():
    elNames2 = ld elNames;
    check L86() else D29();
  D13():
    deopt 41 [i2];
  D29():
    deopt 107 [elNames2];
  L48():
    p1 = prom<V +>{
      super = ld super;
      super1 = force? super;
      checkMissing(super1);
      return super1;
    };
    r15 = dyn is(p1, "refClass");
    check L49() else D14();
  L86():
    elNames3 = force? elNames2;
    checkMissing(elNames3);
    s2 = toForSeq(elNames3);
    l5 = length(s2);
    i49 = 0;
    goto L18(i49);
  D14():
    deopt 44 [i2, r15];
  L18(i50):
    i51 = `+`.1(i50, 1);
    c9 = `<`.1(l5, i51);
    if c9 then L87() else L19();
  L49():
    r16 = `!`(r15);
    c4 = `as.logical`(r16);
    if c4 then L50() else L7();
  L7():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L19():
    x2 = `[[`(s2, i51, NULL, TRUE);
    st field = x2;
    envRefSetField = ldf envRefSetField;
    check L88() else D30();
  L50():
    warning = ldf warning;
    check L51() else D15();
  L87():
    goto L20();
  D15():
    deopt 47 [i2];
  D30():
    deopt 110 [i51];
  L9(i11, r28):
    st fields = r28;
    fields = ld fields;
    check L58() else D18();
  L51():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        dQuote = ldf dQuote;
        p2 = prom<V +>{
          sym3 = ldf class;
          base3 = ldf class in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r18):
          return r18;
        L1():
          super2 = ld super;
          super3 = force? super2;
          checkMissing(super3);
          class = ldf class in base;
          r19 = dyn class(super3);
          goto L0(r19);
        L2():
          r17 = dyn base3(<sym super>);
          goto L0(r17);
        };
        r21 = dyn dQuote(p2);
        return r21;
      };
      r23 = dyn gettextf("unnamed arguments to $new() must be objects from a reference class; got an object of class %s", p3);
      return r23;
    };
    r25 = dyn warning[, domain](p4, NA_LGL);
    check L52() else D16();
  L55():
    __2 = ldf `@` in base;
    r29 = dyn __2(<lang `$`(super, .refClassDef)>, <sym fieldClasses>);
    names1 = ldf names in base;
    r30 = dyn names1(r29);
    check L57() else D17();
  L56():
    r27 = dyn base4(<lang `@`(`$`(super, .refClassDef), fieldClasses)>);
    goto L9(i2, r27);
  L88():
    p6 = prom<V +>{
      _Object1 = ld `.Object`;
      _Object2 = force? _Object1;
      checkMissing(_Object2);
      return _Object2;
    };
    p7 = prom<V +>{
      field4 = ld field;
      field5 = force? field4;
      checkMissing(field5);
      return field5;
    };
    p8 = prom<V +>{
      classDef1 = ld classDef;
      classDef2 = force? classDef1;
      checkMissing(classDef2);
      return classDef2;
    };
    p9 = prom<V +>{
      selfEnv1 = ld selfEnv;
      selfEnv2 = force? selfEnv1;
      checkMissing(selfEnv2);
      return selfEnv2;
    };
    p10 = prom<V +>{
      elements4 = ld elements;
      elements5 = force? elements4;
      checkMissing(elements5);
      c10 = `is.object`(elements5);
      if c10 then L1() else L2(elements5);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", elements5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(elements7):
      field6 = ld field;
      field7 = force? field6;
      __4 = ldf `[[` in base;
      r53 = dyn __4(elements7, field7);
      goto L0(r53);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    r55 = dyn envRefSetField(p6, p7, p8, p9, p10);
    check L89() else D31();
  D16():
    deopt 51 [i2, r25];
  D17():
    deopt 61 [i2, r30];
  D18():
    deopt 63 [i11, fields];
  D31():
    deopt 116 [i51, r55];
  L52():
    goto L6(i2);
  L57():
    goto L9(i2, r30);
  L58():
    fields1 = force? fields;
    checkMissing(fields1);
    c5 = `is.object`(fields1);
    if c5 then L59() else L60(i11, fields1);
  L89():
    goto L18(i51);
  L10(i15, dx5):
    st fields = dx5;
    fields12 = ld fields;
    check L70() else D23();
  L59():
    dr4 = tryDispatchBuiltin.1("[", fields1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L61() else L60(i11, dr4);
  L60(i13, fields3):
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  D23():
    deopt 81 [i15, fields12];
  L11(i18, fields6, r32):
    __3 = ldf `[` in base;
    r37 = dyn __3(fields6, r32);
    goto L10(i18, r37);
  L61():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(i11, dx4);
  L62():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L64() else L65();
  L63():
    r31 = dyn base5(<lang match(fields, elNames)>);
    goto L11(i13, fields3, r31);
  L70():
    fields13 = force? fields12;
    checkMissing(fields13);
    s1 = toForSeq(fields13);
    l1 = length(s1);
    i22 = 0;
    goto L13(i15, i22);
  L12(i21, fields9, r34):
    is_na = ldf `is.na` in base;
    r36 = dyn is_na(r34);
    check L69() else D22();
  L13(i23, i24):
    i25 = `+`.1(i24, 1);
    c6 = `<`.1(l1, i25);
    if c6 then L71() else L15();
  L64():
    fields10 = ld fields;
    check L66() else D19();
  L65():
    r33 = dyn base6(<sym fields>, <sym elNames>);
    goto L12(i13, fields3, r33);
  D19():
    deopt 69 [i13, fields3, fields10];
  D22():
    deopt 78 [i21, fields9, r36];
  L15():
    x1 = `[[`(s1, i25, NULL, TRUE);
    st field = x1;
    super4 = ld super;
    check L72() else D24();
  L66():
    fields11 = force? fields10;
    checkMissing(fields11);
    elNames = ld elNames;
    check L67() else D20();
  L69():
    goto L11(i21, fields9, r36);
  L71():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L82() else L83();
  D20():
    deopt 71 [i13, fields3, elNames];
  D24():
    deopt 83 [i23, i25, super4];
  L16(i48, r47):
    st elNames = r47;
    goto L6(i48);
  L67():
    elNames1 = force? elNames;
    checkMissing(elNames1);
    match = ldf match in base;
    r35 = dyn match(fields11, elNames1, NA_INT, NULL);
    check L68() else D21();
  L72():
    super5 = force? super4;
    checkMissing(super5);
    c7 = `is.object`(super5);
    if c7 then L74() else L75(i23, i25, super5);
  L82():
    elements2 = ld elements;
    check L84() else D27();
  L83():
    r46 = dyn base7(<sym elements>);
    goto L16(i23, r46);
  D21():
    deopt 76 [i13, fields3, r35];
  D27():
    deopt 99 [i23, elements2];
  L68():
    goto L12(i13, fields3, r35);
  L73(i36, i37, dx7):
    checkFun.0(dx7);
    dx8 = dx7 as cls;
    p5 = prom<V +>{
      field = ld field;
      field1 = force? field;
      checkMissing(field1);
      return field1;
    };
    r40 = dyn dx8(p5);
    check L77() else D25();
  L74():
    dr6 = tryDispatchBuiltin.1("$", super5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L76() else L75(i23, i25, dr6);
  L75(i32, i33, super7):
    r38 = `$`(super7, <sym field>);
    goto L73(i32, i33, r38);
  L84():
    elements3 = force? elements2;
    checkMissing(elements3);
    names2 = ldf names in base;
    r48 = dyn names2(elements3);
    check L85() else D28();
  D25():
    deopt 88 [i36, i37, r40];
  D28():
    deopt 102 [i23, r48];
  L76():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L73(i23, i25, dx6);
  L77():
    l2 = ld elements;
    c8 = `is.object`(l2);
    if c8 then L78() else L79(i36, i37, r40, l2);
  L85():
    goto L16(i23, r48);
  L14(i44, i45, dx10):
    st elements = dx10;
    goto L13(i44, i45);
  L78():
    dr8 = tryDispatchBuiltin.0("[[<-", l2, r40);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L80() else L79(i36, i37, r40, dr8);
  L79(i40, i41, r42, l4):
    field2 = ld field;
    check L81() else D26();
  D26():
    deopt 90 [i40, i41, r42, l4, r40, field2];
  L80():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L14(i36, i37, dx9);
  L81():
    field3 = force? field2;
    ____ = ldf `[[<-` in base;
    r45 = dyn ____(l4, r40, field3);
    goto L14(i40, i41, r45);
  }
}