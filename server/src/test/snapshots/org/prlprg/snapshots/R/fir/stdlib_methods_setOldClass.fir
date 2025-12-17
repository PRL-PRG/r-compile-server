fun main() {
  () -+> V { reg r:cls, reg sort:cls, reg unlist:cls, reg _OldClassesList:*, reg _OldClassesList1:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg require:cls, reg stats:*, reg stats1:V, reg p2:p(V +), reg r8:V, reg setGeneric:cls, reg r9:cls, reg p3:p(V +), reg r11:V, reg setMethod:cls, reg r12:cls, reg p4:p(V +), reg r14:V, reg data_frame:cls, reg p5:p(V +), reg p6:p(V +), reg r17:V, reg lm:cls, reg __:cls, reg r18:V, reg p7:p(V +), reg myData:*, reg myData1:V, reg p8:p(V +), reg r21:V, reg showClass:cls, reg r22:V, reg setClass:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg c:cls, reg r25:V, reg p9:p(V +), reg r27:V, reg setClass1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg c1:cls, reg r30:V, reg p10:p(V +), reg r32:V, reg new:cls, reg myLm:*, reg myLm1:V, reg p11:p(V +), reg r34:V, reg stopifnot:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg dfResidual:cls, reg myLm2:*, reg myLm3:V, reg p12:p(V +), reg r38:V, reg myLm4:*, reg myLm5:V, reg c2:L, reg myLm7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r39:V, reg identical:cls, reg r40:V, reg p13:p(V +), reg r42:V, reg removeClass:cls, reg r43:V, reg removeClass1:cls, reg r44:V, reg rm:cls, reg myData2:*, reg myData3:V, reg p14:p(V +), reg myLm8:*, reg myLm9:V, reg p15:p(V +), reg r47:V, reg removeGeneric:cls, reg r48:V |
    mkenv;
    r = clos inner764982082;
    st setOldClass = r;
    sort = ldf sort;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p1 = prom<V +>{
      unlist = ldf unlist;
      p = prom<V +>{
        _OldClassesList = ld `.OldClassesList`;
        _OldClassesList1 = force? _OldClassesList;
        checkMissing(_OldClassesList1);
        return _OldClassesList1;
      };
      r2 = dyn unlist(p);
      return r2;
    };
    r4 = dyn sort(p1);
    check L2() else D1();
  D1():
    deopt 6 [r4];
  L2():
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    setGeneric = ldf setGeneric;
    check L7() else D4();
  L3():
    require = ldf require;
    check L5() else D2();
  L4():
    r5 = dyn base(<sym stats>);
    goto L0();
  D2():
    deopt 9 [];
  D4():
    deopt 13 [];
  L5():
    p2 = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r8 = dyn require(p2);
    check L6() else D3();
  L7():
    p3 = prom<V +>{
      r9 = clos inner27157733;
      return r9;
    };
    r11 = dyn setGeneric("dfResidual", p3);
    check L8() else D5();
  D3():
    deopt 11 [r8];
  D5():
    deopt 16 [r11];
  L6():
    goto L0();
  L8():
    setMethod = ldf setMethod;
    check L9() else D6();
  D6():
    deopt 18 [];
  L9():
    p4 = prom<V +>{
      r12 = clos inner27157733;
      return r12;
    };
    r14 = dyn setMethod("dfResidual", "lm", p4);
    check L10() else D7();
  D7():
    deopt 22 [r14];
  L10():
    data_frame = ldf `data.frame`;
    check L11() else D8();
  D8():
    deopt 24 [];
  L11():
    p5 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p6 = prom<V +>{
      return <real 1.0, 1.4142135623730951, 1.7320508075688772, 2.0, 2.23606797749979, 2.449489742783178, 2.6457513110645907, 2.8284271247461903, 3.0, 3.1622776601683795>;
    };
    r17 = dyn data_frame[time, y](p5, p6);
    check L12() else D9();
  D9():
    deopt 29 [r17];
  L12():
    st myData = r17;
    lm = ldf lm;
    check L13() else D10();
  D10():
    deopt 32 [];
  L13():
    p7 = prom<V +>{
      __ = ldf `~` in base;
      r18 = dyn __(<lang cbind(y, `^`(y, 3.0))>, <sym time>);
      return r18;
    };
    p8 = prom<V +>{
      myData = ld myData;
      myData1 = force? myData;
      checkMissing(myData1);
      return myData1;
    };
    r21 = dyn lm(p7, p8);
    check L14() else D11();
  D11():
    deopt 35 [r21];
  L14():
    st myLm = r21;
    showClass = ldf showClass;
    check L15() else D12();
  D12():
    deopt 38 [];
  L15():
    r22 = dyn showClass("data.frame");
    check L16() else D13();
  D13():
    deopt 40 [r22];
  L16():
    setClass = ldf setClass;
    check L17() else D14();
  D14():
    deopt 42 [];
  L17():
    p9 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      c = ldf c in base;
      r25 = dyn c("numeric");
      goto L0(r25);
    L2():
      r23 = dyn base1[eps]("numeric");
      goto L0(r23);
    };
    r27 = dyn setClass[, slots, contains]("xlm", p9, "lm");
    check L18() else D15();
  D15():
    deopt 48 [r27];
  L18():
    setClass1 = ldf setClass;
    check L19() else D16();
  D16():
    deopt 50 [];
  L19():
    p10 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      c1 = ldf c in base;
      r30 = dyn c1("character");
      goto L0(r30);
    L2():
      r28 = dyn base2[header]("character");
      goto L0(r28);
    };
    r32 = dyn setClass1[, slots, contains]("ylm", p10, "xlm");
    check L20() else D17();
  D17():
    deopt 56 [r32];
  L20():
    new = ldf new;
    check L21() else D18();
  D18():
    deopt 58 [];
  L21():
    p11 = prom<V +>{
      myLm = ld myLm;
      myLm1 = force? myLm;
      checkMissing(myLm1);
      return myLm1;
    };
    r34 = dyn new[, , header, eps]("ylm", p11, "Example", 0.0);
    check L22() else D19();
  D19():
    deopt 65 [r34];
  L22():
    st ym1 = r34;
    stopifnot = ldf stopifnot;
    check L23() else D20();
  D20():
    deopt 68 [];
  L23():
    p13 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      dfResidual = ldf dfResidual;
      p12 = prom<V +>{
        myLm2 = ld myLm;
        myLm3 = force? myLm2;
        checkMissing(myLm3);
        return myLm3;
      };
      r38 = dyn dfResidual(p12);
      myLm4 = ld myLm;
      myLm5 = force? myLm4;
      checkMissing(myLm5);
      c2 = `is.object`(myLm5);
      if c2 then L4() else L5(myLm5);
    L2():
      r35 = dyn base3(<lang dfResidual(myLm)>, <lang `$`(myLm, df.residual)>);
      goto L0(r35);
    L3(dx1):
      identical = ldf identical in base;
      r40 = dyn identical(r38, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r40);
    L4():
      dr = tryDispatchBuiltin.1("$", myLm5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(myLm7):
      r39 = `$`(myLm7, <sym df.residual>);
      goto L3(r39);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    r42 = dyn stopifnot(p13);
    check L24() else D21();
  D21():
    deopt 70 [r42];
  L24():
    removeClass = ldf removeClass;
    check L25() else D22();
  D22():
    deopt 72 [];
  L25():
    r43 = dyn removeClass("ylm");
    check L26() else D23();
  D23():
    deopt 74 [r43];
  L26():
    removeClass1 = ldf removeClass;
    check L27() else D24();
  D24():
    deopt 76 [];
  L27():
    r44 = dyn removeClass1("xlm");
    check L28() else D25();
  D25():
    deopt 78 [r44];
  L28():
    rm = ldf rm;
    check L29() else D26();
  D26():
    deopt 80 [];
  L29():
    p14 = prom<V +>{
      myData2 = ld myData;
      myData3 = force? myData2;
      checkMissing(myData3);
      return myData3;
    };
    p15 = prom<V +>{
      myLm8 = ld myLm;
      myLm9 = force? myLm8;
      checkMissing(myLm9);
      return myLm9;
    };
    r47 = dyn rm(p14, p15);
    check L30() else D27();
  D27():
    deopt 83 [r47];
  L30():
    removeGeneric = ldf removeGeneric;
    check L31() else D28();
  D28():
    deopt 85 [];
  L31():
    r48 = dyn removeGeneric("dfResidual");
    check L32() else D29();
  D29():
    deopt 87 [r48];
  L32():
    popenv;
    return r48;
  }
}
fun inner764982082(Classes, prototype, where, test, S4Class) {
  (reg Classes:*, reg prototype:*, reg where:*, reg test:*, reg S4Class:*) -+> V { var Classes:*, var prototype:*, reg prototype_isMissing:L, reg prototype_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var test:*, reg test_isMissing:L, reg test_orDefault:*, var S4Class:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg prototype1:*, reg prototype2:V, reg c:V, reg Classes1:*, reg Classes2:V, reg c1:L, reg Classes4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg getClassDef:cls, reg mainClass:*, reg mainClass1:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg missing:cls, reg r12:V, reg r13:V, reg c2:L, reg test1:*, reg test2:V, reg c3:L, reg stop:cls, reg r14:V, reg is:cls, reg S4Class1:*, reg S4Class2:V, reg p4:p(V +), reg r17:V, reg r18:V, reg c4:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg S4Class3:*, reg S4Class4:V, reg c5:L, reg c6:L, reg S4Class5:*, reg S4Class6:V, reg getClass:cls, reg S4Class7:*, reg S4Class8:V, reg p5:p(V +), reg r22:V, reg _identC:cls, reg clName:*, reg clName1:V, reg p6:p(V +), reg Classes5:*, reg Classes6:V, reg c7:L, reg Classes8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r24:V, reg p7:p(V +), reg r26:V, reg c8:L, reg removeClass:cls, reg clName2:*, reg clName3:V, reg p8:p(V +), reg where3:*, reg where4:V, reg p9:p(V +), reg r29:V, reg r30:V, reg r31:V, reg stop1:cls, reg gettextf:cls, reg dQuote:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg S4Class9:*, reg S4Class10:V, reg class:cls, reg r34:V, reg p10:p(V +), reg r36:V, reg p11:p(V +), reg r38:V, reg p12:p(V +), reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg prototype3:*, reg prototype4:V, reg c9:V, reg r44:V, reg c10:L, reg __2:cls, reg r45:V, reg _mergeAttrs:cls, reg prototype5:*, reg prototype6:V, reg p13:p(V +), reg S4prototype:*, reg S4prototype1:V, reg p14:p(V +), reg r48:V, reg l:*, reg ___:cls, reg r49:V, reg Recall:cls, reg Classes9:*, reg Classes10:V, reg p15:p(V +), reg where5:*, reg where6:V, reg p16:p(V +), reg r53:V, reg _S4OldClass:cls, reg Classes11:*, reg Classes12:V, reg c11:L, reg Classes14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __3:cls, reg r54:V, reg p17:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r56:V, reg r57:V, reg Classes15:*, reg Classes16:V, reg length:cls, reg r58:V, reg r59:V, reg c12:L, reg Classes17:*, reg Classes18:V, reg c13:L, reg Classes20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __4:cls, reg r60:V, reg p18:p(V +), reg S4Class11:*, reg S4Class12:V, reg p19:p(V +), reg where7:*, reg where8:V, reg p20:p(V +), reg prevDef:*, reg prevDef1:V, reg p21:p(V +), reg r65:V, reg test3:*, reg test4:V, reg c14:L, reg _setOldIs:cls, reg Classes21:*, reg Classes22:V, reg p22:p(V +), reg where9:*, reg where10:V, reg p23:p(V +), reg r70:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r73:V, reg r74:V, reg prevDef2:*, reg prevDef3:V, reg c15:V, reg r75:V, reg c16:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r76:V, reg on_exit:cls, reg r78:V, reg removeClass1:cls, reg mainClass2:*, reg mainClass3:V, reg p24:p(V +), reg where11:*, reg where12:V, reg p25:p(V +), reg r81:V, reg character:cls, reg r83:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r84:V, reg r85:V, reg where13:*, reg where14:V, reg c17:L, reg where16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r86:V, reg c18:V, reg c19:L, reg new_env:cls, reg r87:V, reg assign:cls, reg S3table:*, reg S3table1:V, reg p26:p(V +), reg where17:*, reg where18:V, reg p27:p(V +), reg r90:V, reg rev:cls, reg Classes23:*, reg Classes24:V, reg p28:p(V +), reg r93:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c20:L, reg x:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r94:V, reg i7:I, reg r95:V, reg cl:*, reg cl1:V, reg S3Class:*, reg S3Class1:V, reg c21:cls, reg r96:V, reg isClass:cls, reg cl2:*, reg cl3:V, reg p29:p(V +), reg where19:*, reg where20:V, reg p30:p(V +), reg r99:V, reg c22:L, reg getClass1:cls, reg cl4:*, reg cl5:V, reg p31:p(V +), reg where21:*, reg where22:V, reg p32:p(V +), reg r102:V, reg extends:cls, reg def:*, reg def1:V, reg p33:p(V +), reg prevClass:*, reg prevClass1:V, reg p34:p(V +), reg r105:V, reg r106:V, reg c23:L, reg _validDataPartClass:cls, reg cl6:*, reg cl7:V, reg p35:p(V +), reg where23:*, reg where24:V, reg p36:p(V +), reg dataPartClass:*, reg dataPartClass1:V, reg p37:p(V +), reg r110:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r111:V, reg i14:I, reg r112:V, reg cl8:*, reg cl9:V, reg c24:V, reg c25:L, reg stop2:cls, reg gettextf1:cls, reg dQuote1:cls, reg cl10:*, reg cl11:V, reg p38:p(V +), reg r114:V, reg p39:p(V +), reg dQuote2:cls, reg prevClass2:*, reg prevClass3:V, reg p40:p(V +), reg r117:V, reg p41:p(V +), reg r119:V, reg p42:p(V +), reg r121:V, reg i17:I, reg r122:V, reg cl12:*, reg cl13:V, reg i18:I, reg r123:V, reg __5:cls, reg r124:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r125:V, reg i21:I, reg r126:V, reg missing1:cls, reg r127:V, reg c26:L, reg prevP:*, reg prevP1:V, reg i24:I, reg sym12:cls, reg base12:cls, reg guard12:L, reg r128:V, reg i27:I, reg r129:V, reg prevP3:*, reg prevP4:V, reg attr:cls, reg r130:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r131:V, reg i30:I, reg r132:V, reg prevS3Class:*, reg prevS3Class1:V, reg length1:cls, reg r133:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r136:V, reg i33:I, reg r137:V, reg r138:V, reg S3Class2:*, reg S3Class3:V, reg length2:cls, reg r139:V, reg r140:V, reg c27:L, reg prevS3Class2:*, reg prevS3Class3:V, reg i36:I, reg cl14:*, reg cl15:V, reg mainClass4:*, reg mainClass5:V, reg r142:V, reg c28:L, reg i37:I, reg c29:V, reg simpleCase:*, reg simpleCase1:V, reg c31:L, reg c32:V, reg c34:L, reg setClass:cls, reg cl16:*, reg cl17:V, reg p43:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r144:V, reg r145:V, reg prevClass4:*, reg prevClass5:V, reg c35:cls, reg r146:V, reg p44:p(V +), reg where25:*, reg where26:V, reg p45:p(V +), reg r149:V, reg i42:I, reg isClass1:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r151:V, reg r152:V, reg prototype7:*, reg prototype8:V, reg class1:cls, reg r153:V, reg p46:p(V +), reg r155:V, reg c36:L, reg setClass1:cls, reg cl18:*, reg cl19:V, reg p47:p(V +), reg prevClass6:*, reg prevClass7:V, reg p48:p(V +), reg prototype9:*, reg prototype10:V, reg p49:p(V +), reg where27:*, reg where28:V, reg p50:p(V +), reg r160:V, reg _class1:cls, reg prototype11:*, reg prototype12:V, reg p51:p(V +), reg r162:V, reg mainClass6:*, reg mainClass7:V, reg r163:V, reg c37:L, reg stop3:cls, reg gettextf2:cls, reg _class2:cls, reg prototype13:*, reg prototype14:V, reg p52:p(V +), reg r165:V, reg p53:p(V +), reg mainClass8:*, reg mainClass9:V, reg p54:p(V +), reg r168:V, reg p55:p(V +), reg r170:V, reg i47:I, reg setClass2:cls, reg cl20:*, reg cl21:V, reg p56:p(V +), reg prevClass8:*, reg prevClass9:V, reg p57:p(V +), reg where29:*, reg where30:V, reg p58:p(V +), reg r175:V, reg getClassDef1:cls, reg cl22:*, reg cl23:V, reg p59:p(V +), reg where31:*, reg where32:V, reg p60:p(V +), reg r178:V, reg useP:*, reg useP1:V, reg c38:L, reg __6:cls, reg r179:V, reg i50:I, reg prototype15:*, reg prototype16:V, reg S3Class4:*, reg S3Class5:V, reg l2:*, reg attr__:cls, reg r181:V, reg _notS4:cls, reg clp:*, reg clp1:V, reg p61:p(V +), reg r183:V, reg l3:*, reg ___1:cls, reg r184:V, reg assignClassDef:cls, reg cl24:*, reg cl25:V, reg p62:p(V +), reg def2:*, reg def3:V, reg p63:p(V +), reg where33:*, reg where34:V, reg p64:p(V +), reg r188:V, reg assign1:cls, reg cl26:*, reg cl27:V, reg p65:p(V +), reg def4:*, reg def5:V, reg p66:p(V +), reg S3table2:*, reg S3table3:V, reg p67:p(V +), reg r192:V, reg cl28:*, reg cl29:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r193:V, reg r194:V, reg prevDef4:*, reg prevDef5:V, reg c39:V, reg r195:V, reg c40:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r196:V, reg r197:V, reg on_exit1:cls, reg r198:V |
    mkenv;
    st Classes = Classes;
    prototype_isMissing = missing.0(prototype);
    if prototype_isMissing then L0(NULL) else L0(prototype);
  L0(prototype_orDefault):
    st prototype = prototype_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L1() else L2(where);
  L1():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L2(p1);
  L2(where_orDefault):
    st where = where_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L3(FALSE) else L3(test);
  L3(test_orDefault):
    st test = test_orDefault;
    st S4Class = S4Class;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L58() else L59();
  L4(r5):
    st simpleCase = r5;
    Classes1 = ld Classes;
    check L61() else D1();
  L58():
    prototype1 = ld prototype;
    check L60() else D0();
  L59():
    r4 = dyn base(<sym prototype>);
    goto L4(r4);
  D0():
    deopt 1 [prototype1];
  D1():
    deopt 5 [Classes1];
  L60():
    prototype2 = force? prototype1;
    checkMissing(prototype2);
    c = `==`(prototype2, NULL);
    goto L4(c);
  L61():
    Classes2 = force? Classes1;
    checkMissing(Classes2);
    c1 = `is.object`(Classes2);
    if c1 then L62() else L63(Classes2);
  L5(dx1):
    st mainClass = dx1;
    getClassDef = ldf getClassDef;
    check L65() else D2();
  L62():
    dr = tryDispatchBuiltin.1("[[", Classes2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L64() else L63(dr);
  L63(Classes4):
    __ = ldf `[[` in base;
    r6 = dyn __(Classes4, 1);
    goto L5(r6);
  D2():
    deopt 12 [];
  L64():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L65():
    p2 = prom<V +>{
      mainClass = ld mainClass;
      mainClass1 = force? mainClass;
      checkMissing(mainClass1);
      return mainClass1;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r9 = dyn getClassDef[, , inherits](p2, p3, FALSE);
    check L66() else D3();
  D3():
    deopt 17 [r9];
  L66():
    st prevDef = r9;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L67() else L68();
  L6(r11):
    r13 = `!`(r11);
    c2 = `as.logical`(r13);
    if c2 then L69() else L7();
  L67():
    missing = ldf missing in base;
    r12 = dyn missing(<sym S4Class>);
    goto L6(r12);
  L68():
    r10 = dyn base1(<sym S4Class>);
    goto L6(r10);
  L7():
    test3 = ld test;
    check L110() else D28();
  L69():
    test1 = ld test;
    check L70() else D4();
  D4():
    deopt 23 [test1];
  D28():
    deopt 108 [test3];
  L70():
    test2 = force? test1;
    checkMissing(test2);
    c3 = `as.logical`(test2);
    if c3 then L71() else L8();
  L110():
    test4 = force? test3;
    checkMissing(test4);
    c14 = `as.logical`(test4);
    if c14 then L111() else L21();
  L8():
    goto L9();
  L9():
    is = ldf is;
    check L75() else D7();
  L21():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L116() else L117();
  L71():
    stop = ldf stop;
    check L72() else D5();
  L111():
    _setOldIs = ldf `.setOldIs`;
    check L112() else D29();
  D5():
    deopt 26 [];
  D7():
    deopt 32 [];
  D29():
    deopt 111 [];
  L23(r74):
    r75 = `!`(r74);
    c16 = `as.logical`(r75);
    if c16 then L119() else L24();
  L72():
    r14 = dyn stop("not allowed to have test==TRUE and an S4Class definition");
    check L73() else D6();
  L75():
    p4 = prom<V +>{
      S4Class1 = ld S4Class;
      S4Class2 = force? S4Class1;
      checkMissing(S4Class2);
      return S4Class2;
    };
    r17 = dyn is(p4, "classRepresentation");
    check L76() else D8();
  L112():
    p22 = prom<V +>{
      Classes21 = ld Classes;
      Classes22 = force? Classes21;
      checkMissing(Classes22);
      return Classes22;
    };
    p23 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r70 = dyn _setOldIs(p22, p23);
    check L113() else D30();
  L116():
    prevDef2 = ld prevDef;
    check L118() else D31();
  L117():
    r73 = dyn base6(<sym prevDef>);
    goto L23(r73);
  D6():
    deopt 28 [r14];
  D8():
    deopt 35 [r17];
  D30():
    deopt 114 [r70];
  D31():
    deopt 119 [prevDef2];
  L24():
    goto L26();
  L26():
    st prevClass = "oldClass";
    character = ldf character;
    check L125() else D34();
  L73():
    goto L9();
  L76():
    r18 = `!`(r17);
    c4 = `as.logical`(r18);
    if c4 then L77() else L10();
  L113():
    popenv;
    return r70;
  L118():
    prevDef3 = force? prevDef2;
    checkMissing(prevDef3);
    c15 = `==`(prevDef3, NULL);
    goto L23(c15);
  L119():
    sym7 = ldf `on.exit`;
    base7 = ldf `on.exit` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L120() else L121();
  D34():
    deopt 138 [];
  L10():
    goto L16();
  L16():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L95() else L96();
  L25():
    removeClass1 = ldf removeClass;
    check L122() else D32();
  L77():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L78() else L79();
  L120():
    on_exit = ldf `on.exit` in base;
    r78 = dyn on_exit(<lang .restoreClass(prevDef, where)>);
    goto L25();
  L121():
    r76 = dyn base7(<lang .restoreClass(prevDef, where)>);
    goto L25();
  L125():
    r83 = dyn character();
    check L126() else D35();
  D32():
    deopt 127 [];
  D35():
    deopt 139 [r83];
  L11(r20):
    c6 = `as.logical`(r20);
    if c6 then L81() else L12();
  L17(r43):
    r44 = `!`(r43);
    c10 = `as.logical`(r44);
    if c10 then L98() else L18();
  L78():
    S4Class3 = ld S4Class;
    check L80() else D9();
  L79():
    r19 = dyn base2(<sym S4Class>);
    goto L11(r19);
  L95():
    prototype3 = ld prototype;
    check L97() else D19();
  L96():
    r42 = dyn base4(<sym prototype>);
    goto L17(r42);
  L122():
    p24 = prom<V +>{
      mainClass2 = ld mainClass;
      mainClass3 = force? mainClass2;
      checkMissing(mainClass3);
      return mainClass3;
    };
    p25 = prom<V +>{
      where11 = ld where;
      where12 = force? where11;
      checkMissing(where12);
      return where12;
    };
    r81 = dyn removeClass1[, where](p24, p25);
    check L123() else D33();
  L126():
    st S3Class = r83;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L127() else L128();
  D9():
    deopt 38 [S4Class3];
  D19():
    deopt 71 [prototype3];
  D33():
    deopt 131 [r81];
  L12():
    stop1 = ldf stop;
    check L92() else D17();
  L15(r31):
    goto L16();
  L18():
    goto L19();
  L19():
    Recall = ldf Recall;
    check L104() else D24();
  L27(r85):
    c19 = `as.logical`(r85);
    if c19 then L134() else L28();
  L80():
    S4Class4 = force? S4Class3;
    checkMissing(S4Class4);
    c5 = `is.character`(S4Class4);
    goto L11(c5);
  L81():
    S4Class5 = ld S4Class;
    check L82() else D10();
  L97():
    prototype4 = force? prototype3;
    checkMissing(prototype4);
    c9 = `==`(prototype4, NULL);
    goto L17(c9);
  L98():
    __2 = ldf `@` in base;
    r45 = dyn __2(<sym S4Class>, <sym prototype>);
    st S4prototype = r45;
    _mergeAttrs = ldf `.mergeAttrs`;
    check L99() else D20();
  L123():
    goto L26();
  L127():
    where13 = ld where;
    check L129() else D36();
  L128():
    r84 = dyn base8(<lang `<-`(S3table, `$`(where, .S3MethodsClasses))>);
    goto L27(r84);
  D10():
    deopt 41 [S4Class5];
  D17():
    deopt 63 [];
  D20():
    deopt 79 [];
  D24():
    deopt 92 [];
  D36():
    deopt 142 [where13];
  L28():
    goto L29();
  L29():
    st dataPartClass = NULL;
    rev = ldf rev;
    check L140() else D41();
  L82():
    S4Class6 = force? S4Class5;
    checkMissing(S4Class6);
    st clName = S4Class6;
    getClass = ldf getClass;
    check L83() else D11();
  L92():
    p12 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        dQuote = ldf dQuote;
        p10 = prom<V +>{
          sym3 = ldf class;
          base3 = ldf class in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r33):
          return r33;
        L1():
          S4Class9 = ld S4Class;
          S4Class10 = force? S4Class9;
          checkMissing(S4Class10);
          class = ldf class in base;
          r34 = dyn class(S4Class10);
          goto L0(r34);
        L2():
          r32 = dyn base3(<sym S4Class>);
          goto L0(r32);
        };
        r36 = dyn dQuote(p10);
        return r36;
      };
      r38 = dyn gettextf("argument 'S4Class' must be a class definition: got an object of class %s", p11);
      return r38;
    };
    r40 = dyn stop1[, domain](p12, NA_LGL);
    check L93() else D18();
  L99():
    p13 = prom<V +>{
      prototype5 = ld prototype;
      prototype6 = force? prototype5;
      checkMissing(prototype6);
      return prototype6;
    };
    p14 = prom<V +>{
      S4prototype = ld S4prototype;
      S4prototype1 = force? S4prototype;
      checkMissing(S4prototype1);
      return S4prototype1;
    };
    r48 = dyn _mergeAttrs(p13, p14);
    check L100() else D21();
  L104():
    p15 = prom<V +>{
      Classes9 = ld Classes;
      Classes10 = force? Classes9;
      checkMissing(Classes10);
      return Classes10;
    };
    p16 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r53 = dyn Recall[, where](p15, p16);
    check L105() else D25();
  L129():
    where14 = force? where13;
    checkMissing(where14);
    c17 = `is.object`(where14);
    if c17 then L131() else L132(where14);
  L134():
    new_env = ldf `new.env`;
    check L135() else D37();
  D11():
    deopt 45 [];
  D18():
    deopt 67 [r40];
  D21():
    deopt 82 [r48];
  D25():
    deopt 96 [r53];
  D37():
    deopt 148 [];
  D41():
    deopt 164 [];
  L83():
    p5 = prom<V +>{
      S4Class7 = ld S4Class;
      S4Class8 = force? S4Class7;
      checkMissing(S4Class8);
      return S4Class8;
    };
    r22 = dyn getClass(p5);
    check L84() else D12();
  L93():
    goto L15(r40);
  L100():
    l = ld S4Class;
    ___ = ldf `@<-`;
    check L101() else D22();
  L105():
    _S4OldClass = ldf `.S4OldClass`;
    check L106() else D26();
  L130(dx9):
    st S3table = dx9;
    c18 = `==`(dx9, NULL);
    goto L27(c18);
  L131():
    dr8 = tryDispatchBuiltin.1("$", where14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L133() else L132(dr8);
  L132(where16):
    r86 = `$`(where16, <sym .S3MethodsClasses>);
    goto L130(r86);
  L135():
    r87 = dyn new_env();
    check L136() else D38();
  L140():
    p28 = prom<V +>{
      Classes23 = ld Classes;
      Classes24 = force? Classes23;
      checkMissing(Classes24);
      return Classes24;
    };
    r93 = dyn rev(p28);
    check L141() else D42();
  D12():
    deopt 47 [r22];
  D22():
    deopt 84 [r48, l, r48];
  D26():
    deopt 98 [];
  D38():
    deopt 149 [r87];
  D42():
    deopt 166 [r93];
  L84():
    st S4Class = r22;
    _identC = ldf `.identC`;
    check L85() else D13();
  L101():
    r49 = dyn ___(l, NULL, "prototype", r48);
    check L102() else D23();
  L106():
    p17 = prom<V +>{
      Classes11 = ld Classes;
      Classes12 = force? Classes11;
      checkMissing(Classes12);
      c11 = `is.object`(Classes12);
      if c11 then L1() else L2(Classes12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", Classes12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(Classes14):
      __3 = ldf `[[` in base;
      r54 = dyn __3(Classes14, 1);
      goto L0(r54);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p18 = prom<V +>{
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L3() else L4();
    L0(r57):
      r59 = `>`(r57, 1.0);
      c12 = `as.logical`(r59);
      if c12 then L5() else L1();
    L3():
      Classes15 = ld Classes;
      Classes16 = force? Classes15;
      checkMissing(Classes16);
      length = ldf length in base;
      r58 = dyn length(Classes16);
      goto L0(r58);
    L4():
      r56 = dyn base5(<sym Classes>);
      goto L0(r56);
    L1():
      return "oldClass";
    L5():
      Classes17 = ld Classes;
      Classes18 = force? Classes17;
      checkMissing(Classes18);
      c13 = `is.object`(Classes18);
      if c13 then L6() else L7(Classes18);
    L2(dx7):
      return dx7;
    L6():
      dr6 = tryDispatchBuiltin.1("[[", Classes18);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L8() else L7(dr6);
    L7(Classes20):
      __4 = ldf `[[` in base;
      r60 = dyn __4(Classes20, 2);
      goto L2(r60);
    L8():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L2(dx6);
    };
    p19 = prom<V +>{
      S4Class11 = ld S4Class;
      S4Class12 = force? S4Class11;
      checkMissing(S4Class12);
      return S4Class12;
    };
    p20 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    p21 = prom<V +>{
      prevDef = ld prevDef;
      prevDef1 = force? prevDef;
      checkMissing(prevDef1);
      return prevDef1;
    };
    r65 = dyn _S4OldClass(p17, p18, p19, p20, p21);
    check L107() else D27();
  L133():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L130(dx8);
  L136():
    st S3table = r87;
    assign = ldf assign;
    check L137() else D39();
  L141():
    s = toForSeq(r93);
    l1 = length(s);
    i = 0;
    goto L30(i);
  D13():
    deopt 50 [];
  D23():
    deopt 87 [r48, r49];
  D27():
    deopt 104 [r65];
  D39():
    deopt 152 [];
  L30(i1):
    i2 = `+`.1(i1, 1);
    c20 = `<`.1(l1, i2);
    if c20 then L142() else L54();
  L85():
    p6 = prom<V +>{
      clName = ld clName;
      clName1 = force? clName;
      checkMissing(clName1);
      return clName1;
    };
    p7 = prom<V +>{
      Classes5 = ld Classes;
      Classes6 = force? Classes5;
      checkMissing(Classes6);
      c7 = `is.object`(Classes6);
      if c7 then L1() else L2(Classes6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", Classes6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(Classes8):
      __1 = ldf `[[` in base;
      r24 = dyn __1(Classes8, 1);
      goto L0(r24);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r26 = dyn _identC(p6, p7);
    check L86() else D14();
  L102():
    st S4Class = r49;
    goto L19();
  L107():
    popenv;
    return r65;
  L137():
    p26 = prom<V +>{
      S3table = ld S3table;
      S3table1 = force? S3table;
      checkMissing(S3table1);
      return S3table1;
    };
    p27 = prom<V +>{
      where17 = ld where;
      where18 = force? where17;
      checkMissing(where18);
      return where18;
    };
    r90 = dyn assign[, , envir](".S3MethodsClasses", p26, p27);
    check L138() else D40();
  D14():
    deopt 53 [r26];
  D40():
    deopt 157 [r90];
  L54():
    x = `[[`(s, i2, NULL, TRUE);
    st cl = x;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L143() else L144();
  L86():
    c8 = `as.logical`(r26);
    if c8 then L87() else L13();
  L138():
    goto L29();
  L142():
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L230() else L231();
  L13():
    goto L14(NULL);
  L14(r30):
    goto L15(r30);
  L31(i7, r95):
    st S3Class = r95;
    isClass = ldf isClass;
    check L148() else D46();
  L55(r194):
    r195 = `!`(r194);
    c40 = `as.logical`(r195);
    if c40 then L233() else L56();
  L87():
    removeClass = ldf removeClass;
    check L88() else D15();
  L143():
    cl = ld cl;
    check L145() else D43();
  L144():
    r94 = dyn base9(<sym cl>, <sym S3Class>);
    goto L31(i2, r94);
  L230():
    prevDef4 = ld prevDef;
    check L232() else D98();
  L231():
    r193 = dyn base17(<sym prevDef>);
    goto L55(r193);
  D15():
    deopt 55 [];
  D43():
    deopt 169 [i2, cl];
  D46():
    deopt 177 [i7];
  D98():
    deopt 359 [prevDef4];
  L56():
    invisible.0();
    popenv;
    return NULL;
  L88():
    p8 = prom<V +>{
      clName2 = ld clName;
      clName3 = force? clName2;
      checkMissing(clName3);
      return clName3;
    };
    p9 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r29 = dyn removeClass[, where](p8, p9);
    check L89() else D16();
  L145():
    cl1 = force? cl;
    checkMissing(cl1);
    S3Class = ld S3Class;
    check L146() else D44();
  L148():
    p29 = prom<V +>{
      cl2 = ld cl;
      cl3 = force? cl2;
      checkMissing(cl3);
      return cl3;
    };
    p30 = prom<V +>{
      where19 = ld where;
      where20 = force? where19;
      checkMissing(where20);
      return where20;
    };
    r99 = dyn isClass(p29, p30);
    check L149() else D47();
  L232():
    prevDef5 = force? prevDef4;
    checkMissing(prevDef5);
    c39 = `==`(prevDef5, NULL);
    goto L55(c39);
  L233():
    sym18 = ldf `on.exit`;
    base18 = ldf `on.exit` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L234() else L235();
  D16():
    deopt 59 [r29];
  D44():
    deopt 171 [i2, S3Class];
  D47():
    deopt 180 [i7, r99];
  L57(r197):
    popenv;
    return r197;
  L89():
    goto L14(r29);
  L146():
    S3Class1 = force? S3Class;
    checkMissing(S3Class1);
    c21 = ldf c in base;
    r96 = dyn c21(cl1, S3Class1);
    check L147() else D45();
  L149():
    c22 = `as.logical`(r99);
    if c22 then L150() else L32();
  L234():
    on_exit1 = ldf `on.exit` in base;
    r198 = dyn on_exit1();
    goto L57(r198);
  L235():
    r196 = dyn base18();
    goto L57(r196);
  D45():
    deopt 174 [i2, r96];
  L32():
    st useP = TRUE;
    cl14 = ld cl;
    check L188() else D66();
  L45(i36):
    cl28 = ld cl;
    check L229() else D97();
  L147():
    goto L31(i2, r96);
  L150():
    getClass1 = ldf getClass;
    check L151() else D48();
  D48():
    deopt 182 [i7];
  D66():
    deopt 252 [i7, cl14];
  D97():
    deopt 352 [i36, cl28];
  L151():
    p31 = prom<V +>{
      cl4 = ld cl;
      cl5 = force? cl4;
      checkMissing(cl5);
      return cl5;
    };
    p32 = prom<V +>{
      where21 = ld where;
      where22 = force? where21;
      checkMissing(where22);
      return where22;
    };
    r102 = dyn getClass1(p31, p32);
    check L152() else D49();
  L188():
    cl15 = force? cl14;
    checkMissing(cl15);
    mainClass4 = ld mainClass;
    check L189() else D67();
  L229():
    cl29 = force? cl28;
    checkMissing(cl29);
    st prevClass = cl29;
    goto L30(i36);
  D49():
    deopt 185 [i7, r102];
  D67():
    deopt 253 [i7, cl15, mainClass4];
  L152():
    st def = r102;
    extends = ldf extends;
    check L153() else D50();
  L189():
    mainClass5 = force? mainClass4;
    checkMissing(mainClass5);
    r142 = `!=`(cl15, mainClass5);
    c28 = `as.logical`(r142);
    if c28 then L46(i7, c28) else L190();
  D50():
    deopt 188 [i7];
  L46(i37, c29):
    c34 = `as.logical`(c29);
    if c34 then L193() else L47();
  L153():
    p33 = prom<V +>{
      def = ld def;
      def1 = force? def;
      checkMissing(def1);
      return def1;
    };
    p34 = prom<V +>{
      prevClass = ld prevClass;
      prevClass1 = force? prevClass;
      checkMissing(prevClass1);
      return prevClass1;
    };
    r105 = dyn extends(p33, p34);
    check L154() else D51();
  L190():
    simpleCase = ld simpleCase;
    check L191() else D68();
  D51():
    deopt 191 [i7, r105];
  D68():
    deopt 256 [i7, c28, simpleCase];
  L47():
    isClass1 = ldf isClass;
    check L197() else D71();
  L48(i42):
    getClassDef1 = ldf getClassDef;
    check L212() else D82();
  L154():
    r106 = `!`(r105);
    c23 = `as.logical`(r106);
    if c23 then L155() else L33();
  L191():
    simpleCase1 = force? simpleCase;
    checkMissing(simpleCase1);
    c31 = `as.logical`(simpleCase1);
    c32 = `||`(c28, c31);
    goto L46(i7, c32);
  L193():
    setClass = ldf setClass;
    check L194() else D69();
  D69():
    deopt 260 [i37];
  D71():
    deopt 268 [i37];
  D82():
    deopt 307 [i42];
  L33():
    __5 = ldf `@` in base;
    r124 = dyn __5(<sym def>, <sym prototype>);
    st prevP = r124;
    sym11 = ldf missing;
    base11 = ldf missing in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L167() else L168();
  L37(i18, r123):
    goto L45(i18);
  L155():
    _validDataPartClass = ldf `.validDataPartClass`;
    check L156() else D52();
  L194():
    p43 = prom<V +>{
      cl16 = ld cl;
      cl17 = force? cl16;
      checkMissing(cl17);
      return cl17;
    };
    p44 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r145):
      return r145;
    L1():
      prevClass4 = ld prevClass;
      prevClass5 = force? prevClass4;
      checkMissing(prevClass5);
      c35 = ldf c in base;
      r146 = dyn c35(prevClass5, "VIRTUAL");
      goto L0(r146);
    L2():
      r144 = dyn base15(<sym prevClass>, "VIRTUAL");
      goto L0(r144);
    };
    p45 = prom<V +>{
      where25 = ld where;
      where26 = force? where25;
      checkMissing(where26);
      return where26;
    };
    r149 = dyn setClass[, contains, where](p43, p44, p45);
    check L195() else D70();
  L197():
    p46 = prom<V +>{
      sym16 = ldf class;
      base16 = ldf class in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r152):
      return r152;
    L1():
      prototype7 = ld prototype;
      prototype8 = force? prototype7;
      checkMissing(prototype8);
      class1 = ldf class in base;
      r153 = dyn class1(prototype8);
      goto L0(r153);
    L2():
      r151 = dyn base16(<sym prototype>);
      goto L0(r151);
    };
    r155 = dyn isClass1(p46);
    check L198() else D72();
  L212():
    p59 = prom<V +>{
      cl22 = ld cl;
      cl23 = force? cl22;
      checkMissing(cl23);
      return cl23;
    };
    p60 = prom<V +>{
      where31 = ld where;
      where32 = force? where31;
      checkMissing(where32);
      return where32;
    };
    r178 = dyn getClassDef1(p59, p60);
    check L213() else D83();
  D52():
    deopt 194 [i7];
  D70():
    deopt 266 [i37, r149];
  D72():
    deopt 270 [i37, r155];
  D83():
    deopt 310 [i42, r178];
  L38(i21, r126):
    c26 = `as.logical`(r126);
    if c26 then L169() else L39();
  L156():
    p35 = prom<V +>{
      cl6 = ld cl;
      cl7 = force? cl6;
      checkMissing(cl7);
      return cl7;
    };
    p36 = prom<V +>{
      where23 = ld where;
      where24 = force? where23;
      checkMissing(where24);
      return where24;
    };
    p37 = prom<V +>{
      dataPartClass = ld dataPartClass;
      dataPartClass1 = force? dataPartClass;
      checkMissing(dataPartClass1);
      return dataPartClass1;
    };
    r110 = dyn _validDataPartClass(p35, p36, p37);
    check L157() else D53();
  L167():
    missing1 = ldf missing in base;
    r127 = dyn missing1(<sym prototype>);
    goto L38(i7, r127);
  L168():
    r125 = dyn base11(<sym prototype>);
    goto L38(i7, r125);
  L195():
    goto L48(i37);
  L198():
    c36 = `as.logical`(r155);
    if c36 then L199() else L49();
  L213():
    st def = r178;
    useP = ld useP;
    check L214() else D84();
  D53():
    deopt 198 [i7, r110];
  D84():
    deopt 312 [i42, useP];
  L39():
    goto L40(i21);
  L40(i24):
    sym12 = ldf attr;
    base12 = ldf attr in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L172() else L173();
  L49():
    _class1 = ldf `.class1`;
    check L203() else D75();
  L157():
    st cl1 = r110;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L158() else L159();
  L169():
    prevP = ld prevP;
    check L170() else D58();
  L199():
    setClass1 = ldf setClass;
    check L200() else D73();
  L214():
    useP1 = force? useP;
    checkMissing(useP1);
    c38 = `as.logical`(useP1);
    if c38 then L215() else L52();
  D58():
    deopt 219 [i21, prevP];
  D73():
    deopt 272 [i37];
  D75():
    deopt 282 [i37];
  L34(i14, r112):
    c25 = `as.logical`(r112);
    if c25 then L161() else L35();
  L41(i27, r129):
    st prevS3Class = r129;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L176() else L177();
  L52():
    prototype15 = ld prototype;
    check L217() else D85();
  L53(i50):
    S3Class4 = ld S3Class;
    check L218() else D86();
  L158():
    cl8 = ld cl1;
    check L160() else D54();
  L159():
    r111 = dyn base10(<sym cl1>);
    goto L34(i7, r111);
  L170():
    prevP1 = force? prevP;
    checkMissing(prevP1);
    st prototype = prevP1;
    goto L40(i21);
  L172():
    prevP3 = ld prevP;
    check L174() else D59();
  L173():
    r128 = dyn base12(<sym prevP>, ".S3Class");
    goto L41(i24, r128);
  L200():
    p47 = prom<V +>{
      cl18 = ld cl;
      cl19 = force? cl18;
      checkMissing(cl19);
      return cl19;
    };
    p48 = prom<V +>{
      prevClass6 = ld prevClass;
      prevClass7 = force? prevClass6;
      checkMissing(prevClass7);
      return prevClass7;
    };
    p49 = prom<V +>{
      prototype9 = ld prototype;
      prototype10 = force? prototype9;
      checkMissing(prototype10);
      return prototype10;
    };
    p50 = prom<V +>{
      where27 = ld where;
      where28 = force? where27;
      checkMissing(where28);
      return where28;
    };
    r160 = dyn setClass1[, contains, prototype, where](p47, p48, p49, p50);
    check L201() else D74();
  L203():
    p51 = prom<V +>{
      prototype11 = ld prototype;
      prototype12 = force? prototype11;
      checkMissing(prototype12);
      return prototype12;
    };
    r162 = dyn _class1(p51);
    check L204() else D76();
  L215():
    __6 = ldf `@` in base;
    r179 = dyn __6(<sym def>, <sym prototype>);
    st clp = r179;
    goto L53(i42);
  D54():
    deopt 201 [i7, cl8];
  D59():
    deopt 226 [i24, prevP3];
  D74():
    deopt 280 [i37, r160];
  D76():
    deopt 284 [i37, r162];
  D85():
    deopt 317 [i42, prototype15];
  D86():
    deopt 320 [i50, S3Class4];
  L35():
    cl12 = ld cl1;
    check L165() else D57();
  L36(i17, r122):
    goto L37(i17, r122);
  L42(i30, r132):
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L180() else L181();
  L160():
    cl9 = force? cl8;
    checkMissing(cl9);
    c24 = `==`(cl9, NULL);
    goto L34(i7, c24);
  L161():
    stop2 = ldf stop;
    check L162() else D55();
  L174():
    prevP4 = force? prevP3;
    checkMissing(prevP4);
    attr = ldf attr in base;
    r130 = dyn attr(prevP4, ".S3Class");
    check L175() else D60();
  L176():
    prevS3Class = ld prevS3Class;
    check L178() else D61();
  L177():
    r131 = dyn base13(<sym prevS3Class>);
    goto L42(i27, r131);
  L201():
    goto L48(i37);
  L204():
    mainClass6 = ld mainClass;
    check L205() else D77();
  L217():
    prototype16 = force? prototype15;
    checkMissing(prototype16);
    st clp = prototype16;
    goto L53(i42);
  L218():
    S3Class5 = force? S3Class4;
    checkMissing(S3Class5);
    l2 = ld clp;
    attr__ = ldf `attr<-`;
    check L219() else D87();
  D55():
    deopt 205 [i14];
  D57():
    deopt 210 [i14, cl12];
  D60():
    deopt 230 [i24, r130];
  D61():
    deopt 234 [i27, prevS3Class];
  D77():
    deopt 284 [i37, r162, mainClass6];
  D87():
    deopt 323 [i50, S3Class5, l2, S3Class5];
  L43(i33, r137, r138):
    r140 = `>`(r137, r138);
    c27 = `as.logical`(r140);
    if c27 then L184() else L44();
  L162():
    p42 = prom<V +>{
      gettextf1 = ldf gettextf;
      p39 = prom<V +>{
        dQuote1 = ldf dQuote;
        p38 = prom<V +>{
          cl10 = ld cl;
          cl11 = force? cl10;
          checkMissing(cl11);
          return cl11;
        };
        r114 = dyn dQuote1(p38);
        return r114;
      };
      p41 = prom<V +>{
        dQuote2 = ldf dQuote;
        p40 = prom<V +>{
          prevClass2 = ld prevClass;
          prevClass3 = force? prevClass2;
          checkMissing(prevClass3);
          return prevClass3;
        };
        r117 = dyn dQuote2(p40);
        return r117;
      };
      r119 = dyn gettextf1("inconsistent old-style class information for %s; the class is defined but does not extend %s and is not valid as the data part", p39, p41);
      return r119;
    };
    r121 = dyn stop2[, domain](p42, NA_LGL);
    check L163() else D56();
  L165():
    cl13 = force? cl12;
    checkMissing(cl13);
    st dataPartClass = cl13;
    goto L36(i14, cl13);
  L175():
    goto L41(i24, r130);
  L178():
    prevS3Class1 = force? prevS3Class;
    checkMissing(prevS3Class1);
    length1 = ldf length in base;
    r133 = dyn length1(prevS3Class1);
    check L179() else D62();
  L180():
    S3Class2 = ld S3Class;
    check L182() else D63();
  L181():
    r136 = dyn base14(<sym S3Class>);
    goto L43(i30, r132, r136);
  L205():
    mainClass7 = force? mainClass6;
    checkMissing(mainClass7);
    r163 = `!=`(r162, mainClass7);
    c37 = `as.logical`(r163);
    if c37 then L206() else L50();
  L219():
    r181 = dyn attr__(l2, NULL, ".S3Class", S3Class5);
    check L220() else D88();
  D56():
    deopt 209 [i14, r121];
  D62():
    deopt 237 [i27, r133];
  D63():
    deopt 239 [i30, r132, S3Class2];
  D88():
    deopt 326 [i50, S3Class5, r181];
  L44():
    goto L37(i33, NULL);
  L50():
    goto L51(i37);
  L51(i47):
    setClass2 = ldf setClass;
    check L210() else D80();
  L163():
    goto L36(i14, r121);
  L179():
    goto L42(i27, r133);
  L182():
    S3Class3 = force? S3Class2;
    checkMissing(S3Class3);
    length2 = ldf length in base;
    r139 = dyn length2(S3Class3);
    check L183() else D64();
  L184():
    prevS3Class2 = ld prevS3Class;
    check L185() else D65();
  L206():
    stop3 = ldf stop;
    check L207() else D78();
  L220():
    st clp = r181;
    _notS4 = ldf `.notS4`;
    check L221() else D89();
  D64():
    deopt 242 [i30, r132, r139];
  D65():
    deopt 244 [i33, prevS3Class2];
  D78():
    deopt 288 [i37];
  D80():
    deopt 296 [i47];
  D89():
    deopt 329 [i50];
  L183():
    goto L43(i30, r132, r139);
  L185():
    prevS3Class3 = force? prevS3Class2;
    checkMissing(prevS3Class3);
    st S3Class = prevS3Class3;
    goto L37(i33, prevS3Class3);
  L207():
    p55 = prom<V +>{
      gettextf2 = ldf gettextf;
      p53 = prom<V +>{
        _class2 = ldf `.class1`;
        p52 = prom<V +>{
          prototype13 = ld prototype;
          prototype14 = force? prototype13;
          checkMissing(prototype14);
          return prototype14;
        };
        r165 = dyn _class2(p52);
        return r165;
      };
      p54 = prom<V +>{
        mainClass8 = ld mainClass;
        mainClass9 = force? mainClass8;
        checkMissing(mainClass9);
        return mainClass9;
      };
      r168 = dyn gettextf2("the S3 class of the prototype, \"%s\", is undefined; only allowed when this is the S3 class being registered (\"%s\")", p53, p54);
      return r168;
    };
    r170 = dyn stop3[, domain](p55, NA_LGL);
    check L208() else D79();
  L210():
    p56 = prom<V +>{
      cl20 = ld cl;
      cl21 = force? cl20;
      checkMissing(cl21);
      return cl21;
    };
    p57 = prom<V +>{
      prevClass8 = ld prevClass;
      prevClass9 = force? prevClass8;
      checkMissing(prevClass9);
      return prevClass9;
    };
    p58 = prom<V +>{
      where29 = ld where;
      where30 = force? where29;
      checkMissing(where30);
      return where30;
    };
    r175 = dyn setClass2[, contains, where](p56, p57, p58);
    check L211() else D81();
  L221():
    p61 = prom<V +>{
      clp = ld clp;
      clp1 = force? clp;
      checkMissing(clp1);
      return clp1;
    };
    r183 = dyn _notS4(p61);
    check L222() else D90();
  D79():
    deopt 292 [i37, r170];
  D81():
    deopt 302 [i47, r175];
  D90():
    deopt 331 [i50, r183];
  L208():
    goto L51(i37);
  L211():
    st useP = FALSE;
    goto L48(i47);
  L222():
    l3 = ld def;
    ___1 = ldf `@<-`;
    check L223() else D91();
  D91():
    deopt 333 [i50, r183, l3, r183];
  L223():
    r184 = dyn ___1(l3, NULL, "prototype", r183);
    check L224() else D92();
  D92():
    deopt 336 [i50, r183, r184];
  L224():
    st def = r184;
    assignClassDef = ldf assignClassDef;
    check L225() else D93();
  D93():
    deopt 339 [i50];
  L225():
    p62 = prom<V +>{
      cl24 = ld cl;
      cl25 = force? cl24;
      checkMissing(cl25);
      return cl25;
    };
    p63 = prom<V +>{
      def2 = ld def;
      def3 = force? def2;
      checkMissing(def3);
      return def3;
    };
    p64 = prom<V +>{
      where33 = ld where;
      where34 = force? where33;
      checkMissing(where34);
      return where34;
    };
    r188 = dyn assignClassDef[, , where](p62, p63, p64);
    check L226() else D94();
  D94():
    deopt 344 [i50, r188];
  L226():
    assign1 = ldf assign;
    check L227() else D95();
  D95():
    deopt 346 [i50];
  L227():
    p65 = prom<V +>{
      cl26 = ld cl;
      cl27 = force? cl26;
      checkMissing(cl27);
      return cl27;
    };
    p66 = prom<V +>{
      def4 = ld def;
      def5 = force? def4;
      checkMissing(def5);
      return def5;
    };
    p67 = prom<V +>{
      S3table2 = ld S3table;
      S3table3 = force? S3table2;
      checkMissing(S3table3);
      return S3table3;
    };
    r192 = dyn assign1[, , envir](p65, p66, p67);
    check L228() else D96();
  D96():
    deopt 351 [i50, r192];
  L228():
    goto L45(i50);
  }
}
fun inner27157733(model) {
  (reg model:*) -+> V { var model:*, reg stop:cls, reg gettextf:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg model1:*, reg model2:V, reg class:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st model = model;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        sym = ldf class;
        base = ldf class in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        model1 = ld model;
        model2 = force? model1;
        checkMissing(model2);
        class = ldf class in base;
        r2 = dyn class(model2);
        goto L0(r2);
      L2():
        r = dyn base(<sym model>);
        goto L0(r);
      };
      r4 = dyn gettextf("This function only works for fitted model objects, not class %s", p);
      return r4;
    };
    r6 = dyn stop(p1);
    check L1() else D1();
  D1():
    deopt 3 [r6];
  L1():
    popenv;
    return r6;
  }
}