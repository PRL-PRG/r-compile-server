fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3851774875;
    st completeSubclasses = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3851774875(classDef, class2, extensionDef, where, classDef2) {
  (reg classDef:*, reg class2:*, reg extensionDef:*, reg where:*, reg classDef2:*) -+> V { var classDef:*, var class2:*, var extensionDef:*, var where:*, var classDef2:*, reg classDef2_isMissing:L, reg classDef2_orDefault:*, reg getClassDef:cls, reg class3:*, reg class4:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg __:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg ext:*, reg ext1:V, reg r7:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg _isIndirectExtension:cls, reg ext2:*, reg ext3:V, reg c1:L, reg ext5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __1:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg c2:L, reg _uncompleteClassDefinition:cls, reg classDef3:*, reg classDef4:V, reg p4:p(V +), reg r12:V, reg _walkClassGraph:cls, reg classDef5:*, reg classDef6:V, reg p5:p(V +), reg where3:*, reg where4:V, reg p6:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg missing:cls, reg r19:V, reg r20:V, reg c3:L, reg c5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg c8:L, reg r22:V, reg __2:cls, reg r23:V, reg length:cls, reg r24:V, reg c9:L, reg c10:V, reg c12:L, reg _transitiveExtends:cls, reg class5:*, reg class6:V, reg p7:p(V +), reg __3:cls, reg r26:V, reg p8:p(V +), reg extensionDef1:*, reg extensionDef2:V, reg p9:p(V +), reg __4:cls, reg r29:V, reg p10:p(V +), reg strictBy:*, reg strictBy1:V, reg p11:p(V +), reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg contains:*, reg contains1:V, reg r35:I, reg s1:V, reg l1:I, reg i12:I, reg i13:I, reg i14:I, reg c13:L, reg x1:V, reg contains2:*, reg contains3:V, reg c14:L, reg i18:I, reg contains5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i20:I, reg dx3:V, reg i21:*, reg i22:V, reg __5:cls, reg r36:V, reg __6:cls, reg r37:V, reg getClassDef1:cls, reg cli:*, reg cli1:V, reg p12:p(V +), reg r39:V, reg __7:cls, reg r40:V, reg c15:L, reg i24:I, reg r42:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i26:I, reg dx5:V, reg class7:*, reg class8:V, reg __8:cls, reg r43:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg i29:I, reg r45:V, reg subcl:*, reg subcl1:V, reg c16:V, reg c17:L, reg extends:cls, reg classDef7:*, reg classDef8:V, reg p13:p(V +), reg cliDef:*, reg cliDef1:V, reg p14:p(V +), reg r48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg i34:I, reg r50:V, reg exti:*, reg exti1:V, reg identical:cls, reg r51:V, reg c18:L, reg i35:I, reg c19:V, reg is:cls, reg exti2:*, reg exti3:V, reg p15:p(V +), reg r53:V, reg c21:L, reg i38:I, reg c24:L, reg c25:V, reg __9:cls, reg r54:V, reg r55:V, reg c26:L, reg c27:V, reg c30:L, reg i41:I, reg c33:L, reg c34:V, reg __10:cls, reg r56:V, reg __11:cls, reg r57:V, reg r58:V, reg c35:L, reg c36:V, reg c39:L, reg c40:V, reg c42:L, reg setIs:cls, reg class9:*, reg class10:V, reg p16:p(V +), reg cli2:*, reg cli3:V, reg p17:p(V +), reg obji:*, reg obji1:V, reg p18:p(V +), reg where5:*, reg where6:V, reg p19:p(V +), reg r63:V, reg i46:I, reg r64:V, reg i47:I, reg subclasses:*, reg subclasses1:V |
    mkenv;
    st classDef = classDef;
    st class2 = class2;
    st extensionDef = extensionDef;
    st where = where;
    classDef2_isMissing = missing.0(classDef2);
    if classDef2_isMissing then L0() else L1(classDef2);
  L0():
    p2 = prom<V +>{
      getClassDef = ldf getClassDef;
      p = prom<V +>{
        class3 = ld class2;
        class4 = force? class3;
        checkMissing(class4);
        return class4;
      };
      p1 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r2 = dyn getClassDef(p, p1);
      return r2;
    };
    goto L1(p2);
  L1(classDef2_orDefault):
    st classDef2 = classDef2_orDefault;
    __ = ldf `@` in base;
    r4 = dyn __(<sym classDef>, <sym subclasses>);
    st ext = r4;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L2(r6):
    s = toForSeq(r6);
    l = length(s);
    i = 0;
    goto L3(i);
  L27():
    ext = ld ext;
    check L29() else D0();
  L28():
    r5 = dyn base(<sym ext>);
    goto L2(r5);
  D0():
    deopt 4 [ext];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L30() else L7();
  L29():
    ext1 = force? ext;
    checkMissing(ext1);
    r7 = seq_along(ext1);
    goto L2(r7);
  L5():
    _walkClassGraph = ldf `.walkClassGraph`;
    check L38() else D5();
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    _isIndirectExtension = ldf `.isIndirectExtension`;
    check L31() else D1();
  L30():
    goto L5();
  D1():
    deopt 8 [i2];
  D5():
    deopt 25 [];
  L31():
    p3 = prom<V +>{
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
      r8 = dyn __1(ext5, i6);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn _isIndirectExtension(p3);
    check L32() else D2();
  L38():
    p5 = prom<V +>{
      classDef5 = ld classDef;
      classDef6 = force? classDef5;
      checkMissing(classDef6);
      return classDef6;
    };
    p6 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r16 = dyn _walkClassGraph(p5, "subclasses", p6);
    check L39() else D6();
  D2():
    deopt 10 [i2, r10];
  D6():
    deopt 29 [r16];
  L32():
    c2 = `as.logical`(r10);
    if c2 then L33() else L4();
  L39():
    st subclasses = r16;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L4():
    goto L3(i2);
  L8(r18):
    r20 = `!`(r18);
    c3 = `as.logical`(r20);
    if c3 then L42() else L9(c3);
  L33():
    _uncompleteClassDefinition = ldf `.uncompleteClassDefinition`;
    check L34() else D3();
  L40():
    missing = ldf missing in base;
    r19 = dyn missing(<sym class2>);
    goto L8(r19);
  L41():
    r17 = dyn base1(<sym class2>);
    goto L8(r17);
  D3():
    deopt 12 [i2];
  L9(c5):
    c12 = `as.logical`(c5);
    if c12 then L47() else L11();
  L34():
    p4 = prom<V +>{
      classDef3 = ld classDef;
      classDef4 = force? classDef3;
      checkMissing(classDef4);
      return classDef4;
    };
    r12 = dyn _uncompleteClassDefinition(p4, "subclasses");
    check L35() else D4();
  L42():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  D4():
    deopt 15 [i2, r12];
  L10(c8, r22):
    c9 = `as.logical`(r22);
    c10 = `&&`(c8, c9);
    goto L9(c10);
  L11():
    goto L26();
  L26():
    subclasses = ld subclasses;
    check L89() else D25();
  L35():
    st classDef = r12;
    goto L5();
  L43():
    __2 = ldf `@` in base;
    r23 = dyn __2(<sym classDef>, <sym contains>);
    length = ldf length in base;
    r24 = dyn length(r23);
    check L45() else D7();
  L44():
    r21 = dyn base2(<lang `@`(classDef, contains)>);
    goto L10(c3, r21);
  L47():
    st strictBy = TRUE;
    _transitiveExtends = ldf `.transitiveExtends`;
    check L48() else D8();
  D7():
    deopt 40 [c3, r24];
  D8():
    deopt 46 [];
  D25():
    deopt 140 [subclasses];
  L45():
    goto L10(c3, r24);
  L48():
    p7 = prom<V +>{
      class5 = ld class2;
      class6 = force? class5;
      checkMissing(class6);
      return class6;
    };
    p8 = prom<V +>{
      __3 = ldf `@` in base;
      r26 = dyn __3(<sym classDef>, <sym className>);
      return r26;
    };
    p9 = prom<V +>{
      extensionDef1 = ld extensionDef;
      extensionDef2 = force? extensionDef1;
      checkMissing(extensionDef2);
      return extensionDef2;
    };
    p10 = prom<V +>{
      __4 = ldf `@` in base;
      r29 = dyn __4(<sym classDef>, <sym contains>);
      return r29;
    };
    p11 = prom<V +>{
      strictBy = ld strictBy;
      strictBy1 = force? strictBy;
      checkMissing(strictBy1);
      return strictBy1;
    };
    r32 = dyn _transitiveExtends(p7, p8, p9, p10, p11);
    check L49() else D9();
  L89():
    subclasses1 = force? subclasses;
    checkMissing(subclasses1);
    popenv;
    return subclasses1;
  D9():
    deopt 52 [r32];
  L49():
    st contains = r32;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L12(r34):
    s1 = toForSeq(r34);
    l1 = length(s1);
    i12 = 0;
    goto L13(i12);
  L50():
    contains = ld contains;
    check L52() else D10();
  L51():
    r33 = dyn base3(<sym contains>);
    goto L12(r33);
  D10():
    deopt 55 [contains];
  L13(i13):
    i14 = `+`.1(i13, 1);
    c13 = `<`.1(l1, i14);
    if c13 then L53() else L25();
  L52():
    contains1 = force? contains;
    checkMissing(contains1);
    r35 = seq_along(contains1);
    goto L12(r35);
  L25():
    x1 = `[[`(s1, i14, NULL, TRUE);
    st i = x1;
    contains2 = ld contains;
    check L54() else D11();
  L53():
    goto L26();
  D11():
    deopt 58 [i14, contains2];
  L54():
    contains3 = force? contains2;
    checkMissing(contains3);
    c14 = `is.object`(contains3);
    if c14 then L55() else L56(i14, contains3);
  L14(i20, dx3):
    st obji = dx3;
    __6 = ldf `@` in base;
    r37 = dyn __6(<lang `[[`(contains, i)>, <sym superClass>);
    st cli = r37;
    getClassDef1 = ldf getClassDef;
    check L59() else D13();
  L55():
    dr2 = tryDispatchBuiltin.1("[[", contains3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L57() else L56(i14, dr2);
  L56(i18, contains5):
    i21 = ld i;
    check L58() else D12();
  D12():
    deopt 60 [i18, contains5, i21];
  D13():
    deopt 68 [i20];
  L57():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(i14, dx2);
  L58():
    i22 = force? i21;
    __5 = ldf `[[` in base;
    r36 = dyn __5(contains5, i22);
    goto L14(i18, r36);
  L59():
    p12 = prom<V +>{
      cli = ld cli;
      cli1 = force? cli;
      checkMissing(cli1);
      return cli1;
    };
    r39 = dyn getClassDef1(p12);
    check L60() else D14();
  D14():
    deopt 70 [i20, r39];
  L60():
    st cliDef = r39;
    __7 = ldf `@` in base;
    r40 = dyn __7(<sym cliDef>, <sym subclasses>);
    c15 = `is.object`(r40);
    if c15 then L61() else L62(i20, r40);
  L15(i26, dx5):
    st subcl = dx5;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  L61():
    dr4 = tryDispatchBuiltin.1("[[", r40);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(i20, dr4);
  L62(i24, r42):
    class7 = ld class2;
    check L64() else D15();
  D15():
    deopt 74 [i24, r42, class7];
  L16(i29, r45):
    c17 = `as.logical`(r45);
    if c17 then L68() else L17();
  L63():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(i20, dx4);
  L64():
    class8 = force? class7;
    __8 = ldf `[[` in base;
    r43 = dyn __8(r42, class8);
    goto L15(i24, r43);
  L65():
    subcl = ld subcl;
    check L67() else D16();
  L66():
    r44 = dyn base4(<sym subcl>);
    goto L16(i26, r44);
  D16():
    deopt 79 [i26, subcl];
  L17():
    goto L24(i29);
  L24(i47):
    goto L13(i47);
  L67():
    subcl1 = force? subcl;
    checkMissing(subcl1);
    c16 = `==`(subcl1, NULL);
    goto L16(i26, c16);
  L68():
    extends = ldf extends;
    check L69() else D17();
  D17():
    deopt 83 [i29];
  L69():
    p13 = prom<V +>{
      classDef7 = ld classDef2;
      classDef8 = force? classDef7;
      checkMissing(classDef8);
      return classDef8;
    };
    p14 = prom<V +>{
      cliDef = ld cliDef;
      cliDef1 = force? cliDef;
      checkMissing(cliDef1);
      return cliDef1;
    };
    r48 = dyn extends[, , fullInfo](p13, p14, TRUE);
    check L70() else D18();
  D18():
    deopt 88 [i29, r48];
  L70():
    st exti = r48;
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L18(i34, r50):
    c18 = `as.logical`(r50);
    if c18 then L19(i34, c18) else L75();
  L71():
    exti = ld exti;
    check L73() else D19();
  L72():
    r49 = dyn base5(<sym exti>, FALSE);
    goto L18(i29, r49);
  D19():
    deopt 92 [i29, exti];
  L19(i35, c19):
    c42 = `as.logical`(c19);
    if c42 then L83() else L22();
  L73():
    exti1 = force? exti;
    checkMissing(exti1);
    identical = ldf identical in base;
    r51 = dyn identical(exti1, FALSE, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L74() else D20();
  L75():
    is = ldf is;
    check L76() else D21();
  D20():
    deopt 103 [i29, r51];
  D21():
    deopt 105 [i34, c18];
  L22():
    goto L23(i35, NULL);
  L23(i46, r64):
    goto L24(i46);
  L74():
    goto L18(i29, r51);
  L76():
    p15 = prom<V +>{
      exti2 = ld exti;
      exti3 = force? exti2;
      checkMissing(exti3);
      return exti3;
    };
    r53 = dyn is(p15, "SClassExtension");
    check L77() else D22();
  L83():
    setIs = ldf setIs;
    check L84() else D23();
  D22():
    deopt 108 [i34, c18, r53];
  D23():
    deopt 121 [i35];
  L77():
    c21 = `as.logical`(r53);
    if c21 then L78() else L20(i34, c18, c21);
  L84():
    p16 = prom<V +>{
      class9 = ld class2;
      class10 = force? class9;
      checkMissing(class10);
      return class10;
    };
    p17 = prom<V +>{
      cli2 = ld cli;
      cli3 = force? cli2;
      checkMissing(cli3);
      return cli3;
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
    r63 = dyn setIs[, , extensionObject, doComplete, where](p16, p17, p18, FALSE, p19);
    check L85() else D24();
  D24():
    deopt 130 [i35, r63];
  L20(i38, c24, c25):
    c30 = `as.logical`(c25);
    if c30 then L80() else L21(i38, c24, c30);
  L78():
    __9 = ldf `@` in base;
    r54 = dyn __9(<sym exti>, <sym distance>);
    r55 = `>`(r54, 1);
    c26 = `as.logical`(r55);
    c27 = `&&`(c21, c26);
    goto L20(i34, c18, c27);
  L85():
    goto L23(i35, r63);
  L21(i41, c33, c34):
    c39 = `as.logical`(c34);
    c40 = `||`(c33, c39);
    goto L19(i41, c40);
  L80():
    __10 = ldf `@` in base;
    r56 = dyn __10(<sym classDef>, <sym className>);
    __11 = ldf `@` in base;
    r57 = dyn __11(<sym exti>, <sym by>);
    r58 = `==`(r56, r57);
    c35 = `as.logical`(r58);
    c36 = `&&`(c30, c35);
    goto L21(i38, c24, c36);
  }
}