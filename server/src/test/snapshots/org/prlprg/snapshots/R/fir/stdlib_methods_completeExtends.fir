fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3883676954;
    st completeExtends = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3883676954(ClassDef, class2, extensionDef, where) {
  (reg ClassDef:*, reg class2:*, reg extensionDef:*, reg where:*) -+> V { var ClassDef:*, var class2:*, var extensionDef:*, var where:*, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg ext:*, reg ext1:V, reg r3:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg _isIndirectExtension:cls, reg ext2:*, reg ext3:V, reg c1:L, reg ext5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __1:cls, reg r4:V, reg p:p(V +), reg r6:V, reg c2:L, reg _uncompleteClassDefinition:cls, reg ClassDef1:*, reg ClassDef2:V, reg p1:p(V +), reg r8:V, reg _walkClassGraph:cls, reg ClassDef3:*, reg ClassDef4:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg ext6:*, reg ext7:V, reg attr:cls, reg r14:V, reg p4:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg exts:*, reg exts1:V, reg length:cls, reg r19:V, reg c3:L, reg _in_:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg exts2:*, reg exts3:V, reg names:cls, reg r22:V, reg p5:p(V +), reg r24:V, reg c4:L, reg c6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg c9:L, reg r26:V, reg __2:cls, reg r27:V, reg length1:cls, reg r28:V, reg r29:V, reg c10:L, reg c11:V, reg c13:L, reg _S3Extends:cls, reg ClassDef5:*, reg ClassDef6:V, reg p6:p(V +), reg exts4:*, reg exts5:V, reg p7:p(V +), reg where3:*, reg where4:V, reg p8:p(V +), reg r33:V, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg missing:cls, reg r38:V, reg r39:V, reg c14:L, reg c16:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg c19:L, reg r41:V, reg __3:cls, reg r42:V, reg length2:cls, reg r43:V, reg c20:L, reg c21:V, reg c23:L, reg _transitiveSubclasses:cls, reg __4:cls, reg r44:V, reg p9:p(V +), reg class3:*, reg class4:V, reg p10:p(V +), reg extensionDef1:*, reg extensionDef2:V, reg p11:p(V +), reg __5:cls, reg r48:V, reg p12:p(V +), reg strictBy:*, reg strictBy1:V, reg p13:p(V +), reg r51:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r52:V, reg r53:V, reg subclasses:*, reg subclasses1:V, reg r54:I, reg s1:V, reg l1:I, reg i12:I, reg i13:I, reg i14:I, reg c24:L, reg x1:V, reg subclasses2:*, reg subclasses3:V, reg c25:L, reg i18:I, reg subclasses5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i20:I, reg dx3:V, reg i21:*, reg i22:V, reg __6:cls, reg r55:V, reg extends:cls, reg __7:cls, reg r56:V, reg p14:p(V +), reg class5:*, reg class6:V, reg p15:p(V +), reg r59:V, reg r60:V, reg c26:L, reg setIs:cls, reg __8:cls, reg r61:V, reg p16:p(V +), reg class7:*, reg class8:V, reg p17:p(V +), reg obji:*, reg obji1:V, reg p18:p(V +), reg where5:*, reg where6:V, reg p19:p(V +), reg r66:V, reg i25:I, reg exts6:*, reg exts7:V |
    mkenv;
    st ClassDef = ClassDef;
    st class2 = class2;
    st extensionDef = extensionDef;
    st where = where;
    __ = ldf `@` in base;
    r = dyn __(<sym ClassDef>, <sym contains>);
    st ext = r;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L0(r2):
    s = toForSeq(r2);
    l = length(s);
    i = 0;
    goto L1(i);
  L24():
    ext = ld ext;
    check L26() else D0();
  L25():
    r1 = dyn base(<sym ext>);
    goto L0(r1);
  D0():
    deopt 4 [ext];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L27() else L5();
  L26():
    ext1 = force? ext;
    checkMissing(ext1);
    r3 = seq_along(ext1);
    goto L0(r3);
  L3():
    _walkClassGraph = ldf `.walkClassGraph`;
    check L35() else D5();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    _isIndirectExtension = ldf `.isIndirectExtension`;
    check L28() else D1();
  L27():
    goto L3();
  D1():
    deopt 8 [i2];
  D5():
    deopt 25 [];
  L28():
    p = prom<V +>{
      ext2 = ld ext;
      ext3 = force? ext2;
      checkMissing(ext3);
      c1 = `is.object`(ext3);
      if c1 then L1() else L2(ext3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", ext3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(ext5):
      i5 = ld i;
      i6 = force? i5;
      __1 = ldf `[[` in base;
      r4 = dyn __1(ext5, i6);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn _isIndirectExtension(p);
    check L29() else D2();
  L35():
    p2 = prom<V +>{
      ClassDef3 = ld ClassDef;
      ClassDef4 = force? ClassDef3;
      checkMissing(ClassDef4);
      return ClassDef4;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p4 = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      ext6 = ld ext;
      ext7 = force? ext6;
      checkMissing(ext7);
      attr = ldf attr in base;
      r14 = dyn attr(ext7, "conflicts");
      goto L0(r14);
    L2():
      r12 = dyn base1(<sym ext>, "conflicts");
      goto L0(r12);
    };
    r16 = dyn _walkClassGraph(p2, "contains", p3, p4);
    check L36() else D6();
  D2():
    deopt 10 [i2, r6];
  D6():
    deopt 30 [r16];
  L29():
    c2 = `as.logical`(r6);
    if c2 then L30() else L2();
  L36():
    st exts = r16;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L2():
    goto L1(i2);
  L6(r18):
    c3 = `as.logical`(r18);
    if c3 then L41() else L7();
  L30():
    _uncompleteClassDefinition = ldf `.uncompleteClassDefinition`;
    check L31() else D3();
  L37():
    exts = ld exts;
    check L39() else D7();
  L38():
    r17 = dyn base2(<sym exts>);
    goto L6(r17);
  D3():
    deopt 12 [i2];
  D7():
    deopt 34 [exts];
  L7():
    goto L12();
  L12():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L31():
    p1 = prom<V +>{
      ClassDef1 = ld ClassDef;
      ClassDef2 = force? ClassDef1;
      checkMissing(ClassDef2);
      return ClassDef2;
    };
    r8 = dyn _uncompleteClassDefinition(p1, "contains");
    check L32() else D4();
  L39():
    exts1 = force? exts;
    checkMissing(exts1);
    length = ldf length in base;
    r19 = dyn length(exts1);
    check L40() else D8();
  L41():
    _in_ = ldf `%in%`;
    check L42() else D9();
  D4():
    deopt 15 [i2, r8];
  D8():
    deopt 37 [r19];
  D9():
    deopt 39 [];
  L13(r37):
    r39 = `!`(r37);
    c14 = `as.logical`(r39);
    if c14 then L56() else L14(c14);
  L32():
    st ClassDef = r8;
    goto L3();
  L40():
    goto L6(r19);
  L42():
    p5 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      exts2 = ld exts;
      exts3 = force? exts2;
      checkMissing(exts3);
      names = ldf names in base;
      r22 = dyn names(exts3);
      goto L0(r22);
    L2():
      r20 = dyn base3(<sym exts>);
      goto L0(r20);
    };
    r24 = dyn _in_("oldClass", p5);
    check L43() else D10();
  L54():
    missing = ldf missing in base;
    r38 = dyn missing(<sym class2>);
    goto L13(r38);
  L55():
    r36 = dyn base5(<sym class2>);
    goto L13(r36);
  D10():
    deopt 42 [r24];
  L14(c16):
    c23 = `as.logical`(c16);
    if c23 then L61() else L16();
  L43():
    c4 = `as.logical`(r24);
    if c4 then L44() else L8(c4);
  L56():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L57() else L58();
  L8(c6):
    c13 = `as.logical`(c6);
    if c13 then L49() else L10();
  L15(c19, r41):
    c20 = `as.logical`(r41);
    c21 = `&&`(c19, c20);
    goto L14(c21);
  L16():
    goto L23();
  L23():
    exts6 = ld exts;
    check L80() else D24();
  L44():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L57():
    __3 = ldf `@` in base;
    r42 = dyn __3(<sym ClassDef>, <sym subclasses>);
    length2 = ldf length in base;
    r43 = dyn length2(r42);
    check L59() else D14();
  L58():
    r40 = dyn base6(<lang `@`(ClassDef, subclasses)>);
    goto L15(c14, r40);
  L61():
    st strictBy = TRUE;
    _transitiveSubclasses = ldf `.transitiveSubclasses`;
    check L62() else D15();
  D14():
    deopt 72 [c14, r43];
  D15():
    deopt 78 [];
  D24():
    deopt 120 [exts6];
  L9(c9, r26):
    r29 = `>`(r26, 1);
    c10 = `as.logical`(r29);
    c11 = `&&`(c9, c10);
    goto L8(c11);
  L10():
    goto L11(NULL);
  L11(r34):
    goto L12();
  L45():
    __2 = ldf `@` in base;
    r27 = dyn __2(<sym ClassDef>, <sym slots>);
    length1 = ldf length in base;
    r28 = dyn length1(r27);
    check L47() else D11();
  L46():
    r25 = dyn base4(<lang `@`(ClassDef, slots)>);
    goto L9(c4, r25);
  L49():
    _S3Extends = ldf `.S3Extends`;
    check L50() else D12();
  L59():
    goto L15(c14, r43);
  L62():
    p9 = prom<V +>{
      __4 = ldf `@` in base;
      r44 = dyn __4(<sym ClassDef>, <sym className>);
      return r44;
    };
    p10 = prom<V +>{
      class3 = ld class2;
      class4 = force? class3;
      checkMissing(class4);
      return class4;
    };
    p11 = prom<V +>{
      extensionDef1 = ld extensionDef;
      extensionDef2 = force? extensionDef1;
      checkMissing(extensionDef2);
      return extensionDef2;
    };
    p12 = prom<V +>{
      __5 = ldf `@` in base;
      r48 = dyn __5(<sym ClassDef>, <sym subclasses>);
      return r48;
    };
    p13 = prom<V +>{
      strictBy = ld strictBy;
      strictBy1 = force? strictBy;
      checkMissing(strictBy1);
      return strictBy1;
    };
    r51 = dyn _transitiveSubclasses(p9, p10, p11, p12, p13);
    check L63() else D16();
  L80():
    exts7 = force? exts6;
    checkMissing(exts7);
    popenv;
    return exts7;
  D11():
    deopt 48 [c4, r28];
  D12():
    deopt 53 [];
  D16():
    deopt 84 [r51];
  L47():
    goto L9(c4, r28);
  L50():
    p6 = prom<V +>{
      ClassDef5 = ld ClassDef;
      ClassDef6 = force? ClassDef5;
      checkMissing(ClassDef6);
      return ClassDef6;
    };
    p7 = prom<V +>{
      exts4 = ld exts;
      exts5 = force? exts4;
      checkMissing(exts5);
      return exts5;
    };
    p8 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r33 = dyn _S3Extends(p6, p7, p8);
    check L51() else D13();
  L63():
    st subclasses = r51;
    sym7 = ldf seq_along;
    base7 = ldf seq_along in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L64() else L65();
  D13():
    deopt 57 [r33];
  L17(r53):
    s1 = toForSeq(r53);
    l1 = length(s1);
    i12 = 0;
    goto L18(i12);
  L51():
    st exts = r33;
    goto L11(r33);
  L64():
    subclasses = ld subclasses;
    check L66() else D17();
  L65():
    r52 = dyn base7(<sym subclasses>);
    goto L17(r52);
  D17():
    deopt 87 [subclasses];
  L18(i13):
    i14 = `+`.1(i13, 1);
    c24 = `<`.1(l1, i14);
    if c24 then L67() else L22();
  L66():
    subclasses1 = force? subclasses;
    checkMissing(subclasses1);
    r54 = seq_along(subclasses1);
    goto L17(r54);
  L22():
    x1 = `[[`(s1, i14, NULL, TRUE);
    st i = x1;
    subclasses2 = ld subclasses;
    check L68() else D18();
  L67():
    goto L23();
  D18():
    deopt 90 [i14, subclasses2];
  L68():
    subclasses3 = force? subclasses2;
    checkMissing(subclasses3);
    c25 = `is.object`(subclasses3);
    if c25 then L69() else L70(i14, subclasses3);
  L19(i20, dx3):
    st obji = dx3;
    extends = ldf extends;
    check L73() else D20();
  L69():
    dr2 = tryDispatchBuiltin.1("[[", subclasses3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L71() else L70(i14, dr2);
  L70(i18, subclasses5):
    i21 = ld i;
    check L72() else D19();
  D19():
    deopt 92 [i18, subclasses5, i21];
  D20():
    deopt 97 [i20];
  L71():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(i14, dx2);
  L72():
    i22 = force? i21;
    __6 = ldf `[[` in base;
    r55 = dyn __6(subclasses5, i22);
    goto L19(i18, r55);
  L73():
    p14 = prom<V +>{
      __7 = ldf `@` in base;
      r56 = dyn __7(<sym obji>, <sym subClass>);
      return r56;
    };
    p15 = prom<V +>{
      class5 = ld class2;
      class6 = force? class5;
      checkMissing(class6);
      return class6;
    };
    r59 = dyn extends(p14, p15);
    check L74() else D21();
  D21():
    deopt 100 [i20, r59];
  L74():
    r60 = `!`(r59);
    c26 = `as.logical`(r60);
    if c26 then L75() else L20();
  L20():
    goto L21(i20);
  L21(i25):
    goto L18(i25);
  L75():
    setIs = ldf setIs;
    check L76() else D22();
  D22():
    deopt 103 [i20];
  L76():
    p16 = prom<V +>{
      __8 = ldf `@` in base;
      r61 = dyn __8(<sym obji>, <sym subClass>);
      return r61;
    };
    p17 = prom<V +>{
      class7 = ld class2;
      class8 = force? class7;
      checkMissing(class8);
      return class8;
    };
    p18 = prom<V +>{
      obji = ld obji;
      obji1 = force? obji;
      checkMissing(obji1);
      return obji1;
    };
    p19 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r66 = dyn setIs[, , extensionObject, doComplete, where](p16, p17, p18, FALSE, p19);
    check L77() else D23();
  D23():
    deopt 112 [i20, r66];
  L77():
    goto L21(i20);
  }
}