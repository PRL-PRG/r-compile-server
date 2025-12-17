fun main() {
  () -+> V { reg r:cls, reg setClass:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg setClass1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg setClass2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), reg structure:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg list:cls, reg r17:V, reg p3:p(V +), reg numeric:cls, reg r19:V, reg p4:p(V +), reg matrix:cls, reg r21:V, reg p5:p(V +), reg matrix1:cls, reg r23:V, reg p6:p(V +), reg r25:V, reg p7:p(V +), reg r27:V, reg setIs:cls, reg r28:cls, reg p8:p(V +), reg r30:cls, reg p9:p(V +), reg r32:V, reg removeClass:cls, reg r33:V, reg removeClass1:cls, reg r34:V, reg removeClass2:cls, reg r35:V, reg setClass3:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg c3:cls, reg r38:V, reg p10:p(V +), reg r40:V, reg setIs1:cls, reg r41:cls, reg p11:p(V +), reg r43:cls, reg p12:p(V +), reg r45:V, reg set_seed:cls, reg r46:V, reg sample:cls, reg letters:*, reg letters1:V, reg p13:p(V +), reg r48:V, reg new:cls, reg ll:*, reg ll1:V, reg p14:p(V +), reg Sys_time:cls, reg r50:V, reg p15:p(V +), reg r52:V, reg levels:cls, reg as:cls, reg ld:*, reg ld1:V, reg p16:p(V +), reg r54:V, reg p17:p(V +), reg r56:V, reg levels1:cls, reg ld2:*, reg ld3:V, reg p18:p(V +), reg r58:V, reg setClass4:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r59:V, reg r60:V, reg c4:cls, reg r61:V, reg p19:p(V +), reg r63:V, reg new1:cls, reg factor:cls, reg ll2:*, reg ll3:V, reg p20:p(V +), reg r65:V, reg p21:p(V +), reg Sys_time1:cls, reg r67:V, reg p22:p(V +), reg r69:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r70:V, reg r71:V, reg levels2:cls, reg fd:*, reg fd1:V, reg p23:p(V +), reg r73:V, reg levels3:cls, reg as1:cls, reg fd2:*, reg fd3:V, reg p24:p(V +), reg r75:V, reg p25:p(V +), reg r77:V, reg identical:cls, reg r78:V |
    mkenv;
    r = clos inner2432903665;
    st setIs = r;
    setClass = ldf setClass;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("numeric", "numeric");
      goto L0(r3);
    L2():
      r1 = dyn base[x, y]("numeric", "numeric");
      goto L0(r1);
    };
    r5 = dyn setClass[, slots]("track", p);
    check L2() else D1();
  D1():
    deopt 8 [r5];
  L2():
    setClass1 = ldf setClass;
    check L3() else D2();
  D2():
    deopt 10 [];
  L3():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1("numeric");
      goto L0(r8);
    L2():
      r6 = dyn base1[smooth]("numeric");
      goto L0(r6);
    };
    r10 = dyn setClass1[, contains, slots]("trackCurve", "track", p1);
    check L4() else D3();
  D3():
    deopt 16 [r10];
  L4():
    setClass2 = ldf setClass;
    check L5() else D4();
  D4():
    deopt 18 [];
  L5():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c2 = ldf c in base;
      r13 = dyn c2("numeric", "matrix", "matrix");
      goto L0(r13);
    L2():
      r11 = dyn base2[x, y, smooth]("numeric", "matrix", "matrix");
      goto L0(r11);
    };
    p7 = prom<V +>{
      structure = ldf structure;
      p3 = prom<V +>{
        sym3 = ldf list;
        base3 = ldf list in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r16):
        return r16;
      L1():
        list = ldf list in base;
        r17 = dyn list();
        goto L0(r17);
      L2():
        r15 = dyn base3();
        goto L0(r15);
      };
      p4 = prom<V +>{
        numeric = ldf numeric;
        r19 = dyn numeric();
        return r19;
      };
      p5 = prom<V +>{
        matrix = ldf matrix;
        r21 = dyn matrix(0.0, 0.0, 0.0);
        return r21;
      };
      p6 = prom<V +>{
        matrix1 = ldf matrix;
        r23 = dyn matrix1(0.0, 0.0, 0.0);
        return r23;
      };
      r25 = dyn structure[, x, y, smooth](p3, p4, p5, p6);
      return r25;
    };
    r27 = dyn setClass2[, slots, prototype]("trackMultiCurve", p2, p7);
    check L6() else D5();
  D5():
    deopt 24 [r27];
  L6():
    setIs = ldf setIs;
    check L7() else D6();
  D6():
    deopt 26 [];
  L7():
    p8 = prom<V +>{
      r28 = clos inner1912617395;
      return r28;
    };
    p9 = prom<V +>{
      r30 = clos inner4230795206;
      return r30;
    };
    r32 = dyn setIs[, , coerce, replace]("trackCurve", "trackMultiCurve", p8, p9);
    check L8() else D7();
  D7():
    deopt 33 [r32];
  L8():
    removeClass = ldf removeClass;
    check L9() else D8();
  D8():
    deopt 35 [];
  L9():
    r33 = dyn removeClass("trackMultiCurve");
    check L10() else D9();
  D9():
    deopt 37 [r33];
  L10():
    removeClass1 = ldf removeClass;
    check L11() else D10();
  D10():
    deopt 39 [];
  L11():
    r34 = dyn removeClass1("trackCurve");
    check L12() else D11();
  D11():
    deopt 41 [r34];
  L12():
    removeClass2 = ldf removeClass;
    check L13() else D12();
  D12():
    deopt 43 [];
  L13():
    r35 = dyn removeClass2("track");
    check L14() else D13();
  D13():
    deopt 45 [r35];
  L14():
    setClass3 = ldf setClass;
    check L15() else D14();
  D14():
    deopt 47 [];
  L15():
    p10 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c3 = ldf c in base;
      r38 = dyn c3("POSIXt");
      goto L0(r38);
    L2():
      r36 = dyn base4[stamp]("POSIXt");
      goto L0(r36);
    };
    r40 = dyn setClass3[, contains, slots]("stringsDated", "character", p10);
    check L16() else D15();
  D15():
    deopt 53 [r40];
  L16():
    setIs1 = ldf setIs;
    check L17() else D16();
  D16():
    deopt 55 [];
  L17():
    p11 = prom<V +>{
      r41 = clos inner1697196618;
      return r41;
    };
    p12 = prom<V +>{
      r43 = clos inner199710543;
      return r43;
    };
    r45 = dyn setIs1[, , coerce, replace]("stringsDated", "factor", p11, p12);
    check L18() else D17();
  D17():
    deopt 62 [r45];
  L18():
    set_seed = ldf `set.seed`;
    check L19() else D18();
  D18():
    deopt 64 [];
  L19():
    r46 = dyn set_seed(750.0);
    check L20() else D19();
  D19():
    deopt 66 [r46];
  L20():
    sample = ldf sample;
    check L21() else D20();
  D20():
    deopt 68 [];
  L21():
    p13 = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      return letters1;
    };
    r48 = dyn sample[, , replace](p13, 10.0, TRUE);
    check L22() else D21();
  D21():
    deopt 73 [r48];
  L22():
    st ll = r48;
    new = ldf new;
    check L23() else D22();
  D22():
    deopt 76 [];
  L23():
    p14 = prom<V +>{
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      return ll1;
    };
    p15 = prom<V +>{
      Sys_time = ldf `Sys.time`;
      r50 = dyn Sys_time();
      return r50;
    };
    r52 = dyn new[, , stamp]("stringsDated", p14, p15);
    check L24() else D23();
  D23():
    deopt 81 [r52];
  L24():
    st ld = r52;
    levels = ldf levels;
    check L25() else D24();
  D24():
    deopt 84 [];
  L25():
    p17 = prom<V +>{
      as = ldf as;
      p16 = prom<V +>{
        ld = ld ld;
        ld1 = force? ld;
        checkMissing(ld1);
        return ld1;
      };
      r54 = dyn as(p16, "factor");
      return r54;
    };
    r56 = dyn levels(p17);
    check L26() else D25();
  D25():
    deopt 86 [r56];
  L26():
    levels1 = ldf levels;
    check L27() else D26();
  D26():
    deopt 88 [];
  L27():
    p18 = prom<V +>{
      ld2 = ld ld;
      ld3 = force? ld2;
      checkMissing(ld3);
      return ld3;
    };
    r58 = dyn levels1(p18);
    check L28() else D27();
  D27():
    deopt 90 [r58];
  L28():
    setClass4 = ldf setClass;
    check L29() else D28();
  D28():
    deopt 92 [];
  L29():
    p19 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r60):
      return r60;
    L1():
      c4 = ldf c in base;
      r61 = dyn c4("POSIXt");
      goto L0(r61);
    L2():
      r59 = dyn base5[stamp]("POSIXt");
      goto L0(r59);
    };
    r63 = dyn setClass4[, contains, slots]("factorDated", "factor", p19);
    check L30() else D29();
  D29():
    deopt 98 [r63];
  L30():
    new1 = ldf new;
    check L31() else D30();
  D30():
    deopt 100 [];
  L31():
    p21 = prom<V +>{
      factor = ldf factor;
      p20 = prom<V +>{
        ll2 = ld ll;
        ll3 = force? ll2;
        checkMissing(ll3);
        return ll3;
      };
      r65 = dyn factor(p20);
      return r65;
    };
    p22 = prom<V +>{
      Sys_time1 = ldf `Sys.time`;
      r67 = dyn Sys_time1();
      return r67;
    };
    r69 = dyn new1[, , stamp]("factorDated", p21, p22);
    check L32() else D31();
  D31():
    deopt 105 [r69];
  L32():
    st fd = r69;
    sym6 = ldf identical;
    base6 = ldf identical in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L33() else L34();
  L0(r71):
    popenv;
    return r71;
  L33():
    levels2 = ldf levels;
    check L35() else D32();
  L34():
    r70 = dyn base6(<lang levels(fd)>, <lang levels(as(fd, "factor"))>);
    goto L0(r70);
  D32():
    deopt 110 [];
  L35():
    p23 = prom<V +>{
      fd = ld fd;
      fd1 = force? fd;
      checkMissing(fd1);
      return fd1;
    };
    r73 = dyn levels2(p23);
    check L36() else D33();
  D33():
    deopt 112 [r73];
  L36():
    levels3 = ldf levels;
    check L37() else D34();
  D34():
    deopt 114 [];
  L37():
    p25 = prom<V +>{
      as1 = ldf as;
      p24 = prom<V +>{
        fd2 = ld fd;
        fd3 = force? fd2;
        checkMissing(fd3);
        return fd3;
      };
      r75 = dyn as1(p24, "factor");
      return r75;
    };
    r77 = dyn levels3(p25);
    check L38() else D35();
  D35():
    deopt 116 [r77];
  L38():
    identical = ldf identical in base;
    r78 = dyn identical(r73, r77, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L39() else D36();
  D36():
    deopt 125 [r78];
  L39():
    goto L0(r78);
  }
}
fun inner2432903665(class1, class2, test, coerce, replace, by, where, classDef, extensionObject, doComplete) {
  (reg class1:*, reg class2:*, reg test:*, reg coerce:*, reg replace:*, reg by:*, reg where:*, reg classDef:*, reg extensionObject:*, reg doComplete:*) -+> V { var class1:*, var class2:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, var coerce:*, reg coerce_isMissing:L, reg coerce_orDefault:*, var replace:*, reg replace_isMissing:L, reg replace_orDefault:*, var by:*, reg by_isMissing:L, reg by_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), var classDef:*, reg classDef_isMissing:L, reg classDef_orDefault:*, reg getClass:cls, reg class3:*, reg class4:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), var extensionObject:*, reg extensionObject_isMissing:L, reg extensionObject_orDefault:*, var doComplete:*, reg doComplete_isMissing:L, reg doComplete_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg where3:*, reg where4:V, reg as_environment:cls, reg r12:V, reg getClassDef:cls, reg class5:*, reg class6:V, reg p6:p(V +), reg where5:*, reg where6:V, reg p7:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg classDef2:*, reg classDef3:V, reg c:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg class7:*, reg class8:V, reg p8:p(V +), reg r19:V, reg p9:p(V +), reg sQuote:cls, reg getPackageName:cls, reg where7:*, reg where8:V, reg p10:p(V +), reg r22:V, reg p11:p(V +), reg r24:V, reg p12:p(V +), reg r26:V, reg p13:p(V +), reg r28:V, reg classMetaName:cls, reg class9:*, reg class10:V, reg p14:p(V +), reg r31:V, reg exists:cls, reg m1:*, reg m2:V, reg p15:p(V +), reg where9:*, reg where10:V, reg p16:p(V +), reg r34:V, reg c2:L, reg c4:V, reg __:cls, reg r35:V, reg c5:L, reg c6:L, reg c7:V, reg bindingIsLocked:cls, reg m3:*, reg m4:V, reg p17:p(V +), reg where11:*, reg where12:V, reg p18:p(V +), reg r38:V, reg c10:L, reg c11:V, reg r39:V, reg c14:L, reg c15:V, reg local1:*, reg local2:V, reg r40:V, reg c17:L, reg classMetaName1:cls, reg class11:*, reg class12:V, reg p19:p(V +), reg r42:V, reg exists1:cls, reg m5:*, reg m6:V, reg p20:p(V +), reg where13:*, reg where14:V, reg p21:p(V +), reg r45:V, reg c18:L, reg c20:V, reg __1:cls, reg r46:V, reg c21:L, reg c22:L, reg c23:V, reg bindingIsLocked1:cls, reg m7:*, reg m8:V, reg p22:p(V +), reg where15:*, reg where16:V, reg p23:p(V +), reg r49:V, reg c26:L, reg c27:V, reg r50:V, reg c30:L, reg c31:V, reg local3:*, reg local4:V, reg r51:V, reg c33:L, reg stop1:cls, reg gettextf1:cls, reg dQuote1:cls, reg class13:*, reg class14:V, reg p24:p(V +), reg r53:V, reg p25:p(V +), reg dQuote2:cls, reg class15:*, reg class16:V, reg p26:p(V +), reg r56:V, reg p27:p(V +), reg r58:V, reg p28:p(V +), reg r60:V, reg r61:V, reg __2:cls, reg r63:V, reg c34:L, reg c36:V, reg isClassUnion:cls, reg classDef4:*, reg classDef5:V, reg p29:p(V +), reg r65:V, reg r66:V, reg c37:L, reg c38:V, reg c40:L, reg stop2:cls, reg gettextf2:cls, reg dQuote3:cls, reg class17:*, reg class18:V, reg p30:p(V +), reg r68:V, reg p31:p(V +), reg r70:V, reg p32:p(V +), reg r72:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r74:V, reg r75:V, reg possibleExtends:cls, reg class19:*, reg class20:V, reg p33:p(V +), reg class21:*, reg class22:V, reg p34:p(V +), reg classDef6:*, reg classDef7:V, reg p35:p(V +), reg classDef8:*, reg classDef9:V, reg p36:p(V +), reg r80:V, reg identical:cls, reg r81:V, reg r82:V, reg ____:cls, reg extensionObject1:*, reg extensionObject2:V, reg p37:p(V +), reg makeExtends:cls, reg class23:*, reg class24:V, reg p38:p(V +), reg coerce1:*, reg coerce2:V, reg p39:p(V +), reg test1:*, reg test2:V, reg p40:p(V +), reg replace1:*, reg replace2:V, reg p41:p(V +), reg by1:*, reg by2:V, reg p42:p(V +), reg classDef10:*, reg classDef11:V, reg p43:p(V +), reg classDef12:*, reg classDef13:V, reg p44:p(V +), reg getPackageName1:cls, reg where17:*, reg where18:V, reg p45:p(V +), reg r92:V, reg p46:p(V +), reg r94:V, reg p47:p(V +), reg r96:V, reg _validExtends:cls, reg class25:*, reg class26:V, reg p48:p(V +), reg class27:*, reg class28:V, reg p49:p(V +), reg classDef14:*, reg classDef15:V, reg p50:p(V +), reg classDef16:*, reg classDef17:V, reg p51:p(V +), reg __3:cls, reg r101:V, reg p52:p(V +), reg r103:V, reg isTRUE:cls, reg ok:*, reg ok1:V, reg p53:p(V +), reg r105:V, reg r106:V, reg c41:L, reg stop3:cls, reg ok2:*, reg ok3:V, reg p54:p(V +), reg r108:V, reg _findOrCopyClass:cls, reg class29:*, reg class30:V, reg p55:p(V +), reg classDef18:*, reg classDef19:V, reg p56:p(V +), reg where19:*, reg where20:V, reg p57:p(V +), reg r113:V, reg obj:*, reg obj1:V, reg l:*, reg __4:cls, reg subclasses:*, reg subclasses1:V, reg p58:p(V +), reg r115:V, reg c42:L, reg obj3:V, reg l2:*, reg r117:V, reg dr:V, reg dc:L, reg dx:V, reg obj5:V, reg l4:*, reg dx1:V, reg class31:*, reg class32:V, reg ____1:cls, reg r118:V, reg ___:cls, reg r119:V, reg doComplete1:*, reg doComplete2:V, reg c43:L, reg completeSubclasses:cls, reg classDef20:*, reg classDef21:V, reg p59:p(V +), reg class33:*, reg class34:V, reg p60:p(V +), reg obj6:*, reg obj7:V, reg p61:p(V +), reg where21:*, reg where22:V, reg p62:p(V +), reg r124:V, reg l5:*, reg ___1:cls, reg r125:V, reg __5:cls, reg r127:V, reg c44:L, reg c46:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r128:V, reg c49:L, reg r129:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r130:V, reg c52:L, reg r131:V, reg class35:*, reg class36:V, reg _specialVirtual:*, reg _specialVirtual1:V, reg match:cls, reg r132:V, reg is_na:cls, reg r133:V, reg c53:L, reg c54:V, reg c56:L, reg extends:cls, reg classDef22:*, reg classDef23:V, reg p63:p(V +), reg r135:V, reg c57:L, reg l6:*, reg ___2:cls, reg r136:V, reg r137:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r138:V, reg r139:V, reg __6:cls, reg r140:V, reg c58:V, reg c59:L, reg c61:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r141:V, reg c64:L, reg r142:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r143:V, reg c67:L, reg r144:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r145:V, reg c70:L, reg r146:V, reg __7:cls, reg r147:V, reg names:cls, reg r148:V, reg match1:cls, reg r149:V, reg is_na1:cls, reg r150:V, reg c71:L, reg c72:V, reg c74:L, reg __8:cls, reg r151:V, reg c75:L, reg __9:cls, reg r152:V, reg r153:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r154:V, reg C_new_object:*, reg C_new_object1:V, reg classDef24:*, reg classDef25:V, reg vargs:dots, reg r155:V, reg l7:*, reg ___3:cls, reg r156:V, reg assignClassDef:cls, reg class37:*, reg class38:V, reg p64:p(V +), reg classDef26:*, reg classDef27:V, reg p65:p(V +), reg where23:*, reg where24:V, reg p66:p(V +), reg r161:V, reg _removePreviousCoerce:cls, reg class39:*, reg class40:V, reg p67:p(V +), reg class41:*, reg class42:V, reg p68:p(V +), reg where25:*, reg where26:V, reg p69:p(V +), reg prevIs:*, reg prevIs1:V, reg p70:p(V +), reg r166:V, reg _findOrCopyClass1:cls, reg class43:*, reg class44:V, reg p71:p(V +), reg classDef28:*, reg classDef29:V, reg p72:p(V +), reg where27:*, reg where28:V, reg p73:p(V +), reg r170:V, reg obj8:*, reg obj9:V, reg l8:*, reg __10:cls, reg contains:*, reg contains1:V, reg p74:p(V +), reg r172:V, reg _newDirectSuperclass__:cls, reg class45:*, reg class46:V, reg p75:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r174:V, reg r175:V, reg __11:cls, reg r176:V, reg names1:cls, reg r177:V, reg p76:p(V +), reg r179:V, reg ___4:cls, reg r180:V, reg is:cls, reg classDef30:*, reg classDef31:V, reg p77:p(V +), reg r182:V, reg c76:L, reg c77:V, reg is1:cls, reg classDef32:*, reg classDef33:V, reg p78:p(V +), reg r184:V, reg c79:L, reg c80:V, reg c82:L, reg c84:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r185:V, reg c87:L, reg r186:V, reg packageSlot:cls, reg classDef34:*, reg classDef35:V, reg p79:p(V +), reg r188:V, reg packageSlot1:cls, reg classDef36:*, reg classDef37:V, reg p80:p(V +), reg r190:V, reg identical1:cls, reg r191:V, reg r192:V, reg c88:L, reg c89:V, reg doComplete3:*, reg doComplete4:V, reg c91:L, reg completeExtends:cls, reg classDef38:*, reg classDef39:V, reg p81:p(V +), reg class47:*, reg class48:V, reg p82:p(V +), reg obj10:*, reg obj11:V, reg p83:p(V +), reg where29:*, reg where30:V, reg p84:p(V +), reg r197:V, reg l9:*, reg ___5:cls, reg r198:V, reg onlyRecacheSubclasses:*, reg onlyRecacheSubclasses1:V, reg r199:V, reg c92:L, reg _checkSubclasses:cls, reg class49:*, reg class50:V, reg p85:p(V +), reg classDef40:*, reg classDef41:V, reg p86:p(V +), reg class51:*, reg class52:V, reg p87:p(V +), reg classDef42:*, reg classDef43:V, reg p88:p(V +), reg where31:*, reg where32:V, reg p89:p(V +), reg r205:V, reg r206:V, reg assignClassDef1:cls, reg class53:*, reg class54:V, reg p90:p(V +), reg classDef44:*, reg classDef45:V, reg p91:p(V +), reg where33:*, reg where34:V, reg p92:p(V +), reg onlyRecacheSubclasses2:*, reg onlyRecacheSubclasses3:V, reg p93:p(V +), reg r212:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r213:V, reg r214:V, reg classDef46:*, reg classDef47:V, reg invisible:cls, reg r215:V |
    mkenv;
    st class1 = class1;
    st class2 = class2;
    test_isMissing = missing.0(test);
    if test_isMissing then L0(NULL) else L0(test);
  L0(test_orDefault):
    st test = test_orDefault;
    coerce_isMissing = missing.0(coerce);
    if coerce_isMissing then L1(NULL) else L1(coerce);
  L1(coerce_orDefault):
    st coerce = coerce_orDefault;
    replace_isMissing = missing.0(replace);
    if replace_isMissing then L2(NULL) else L2(replace);
  L2(replace_orDefault):
    st replace = replace_orDefault;
    by_isMissing = missing.0(by);
    if by_isMissing then L3() else L4(by);
  L3():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L4(p);
  L4(by_orDefault):
    st by = by_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L5() else L6(where);
  L5():
    p2 = prom<V +>{
      topenv = ldf topenv;
      p1 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r2 = dyn parent_frame();
        return r2;
      };
      r4 = dyn topenv(p1);
      return r4;
    };
    goto L6(p2);
  L6(where_orDefault):
    st where = where_orDefault;
    classDef_isMissing = missing.0(classDef);
    if classDef_isMissing then L7() else L8(classDef);
  L7():
    p5 = prom<V +>{
      getClass = ldf getClass;
      p3 = prom<V +>{
        class3 = ld class1;
        class4 = force? class3;
        checkMissing(class4);
        return class4;
      };
      p4 = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r8 = dyn getClass[, , where](p3, TRUE, p4);
      return r8;
    };
    goto L8(p5);
  L8(classDef_orDefault):
    st classDef = classDef_orDefault;
    extensionObject_isMissing = missing.0(extensionObject);
    if extensionObject_isMissing then L9(NULL) else L9(extensionObject);
  L9(extensionObject_orDefault):
    st extensionObject = extensionObject_orDefault;
    doComplete_isMissing = missing.0(doComplete);
    if doComplete_isMissing then L10(TRUE) else L10(doComplete);
  L10(doComplete_orDefault):
    st doComplete = doComplete_orDefault;
    sym = ldf `as.environment`;
    base = ldf `as.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L55() else L56();
  L11(r11):
    st where = r11;
    getClassDef = ldf getClassDef;
    check L59() else D2();
  L55():
    where3 = ld where;
    check L57() else D0();
  L56():
    r10 = dyn base(<sym where>);
    goto L11(r10);
  D0():
    deopt 2 [where3];
  D2():
    deopt 8 [];
  L57():
    where4 = force? where3;
    checkMissing(where4);
    as_environment = ldf `as.environment` in base;
    r12 = dyn as_environment(where4);
    check L58() else D1();
  L59():
    p6 = prom<V +>{
      class5 = ld class2;
      class6 = force? class5;
      checkMissing(class6);
      return class6;
    };
    p7 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r15 = dyn getClassDef(p6, p7);
    check L60() else D3();
  D1():
    deopt 5 [r12];
  D3():
    deopt 11 [r15];
  L58():
    goto L11(r12);
  L60():
    st classDef2 = r15;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L61() else L62();
  L12(r17):
    c1 = `as.logical`(r17);
    if c1 then L64() else L13();
  L61():
    classDef2 = ld classDef2;
    check L63() else D4();
  L62():
    r16 = dyn base1(<sym classDef2>);
    goto L12(r16);
  D4():
    deopt 14 [classDef2];
  L13():
    goto L14();
  L14():
    classMetaName = ldf classMetaName;
    check L68() else D7();
  L63():
    classDef3 = force? classDef2;
    checkMissing(classDef3);
    c = `==`(classDef3, NULL);
    goto L12(c);
  L64():
    stop = ldf stop;
    check L65() else D5();
  D5():
    deopt 18 [];
  D7():
    deopt 26 [];
  L65():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p9 = prom<V +>{
        dQuote = ldf dQuote;
        p8 = prom<V +>{
          class7 = ld class2;
          class8 = force? class7;
          checkMissing(class8);
          return class8;
        };
        r19 = dyn dQuote(p8);
        return r19;
      };
      p12 = prom<V +>{
        sQuote = ldf sQuote;
        p11 = prom<V +>{
          getPackageName = ldf getPackageName;
          p10 = prom<V +>{
            where7 = ld where;
            where8 = force? where7;
            checkMissing(where8);
            return where8;
          };
          r22 = dyn getPackageName(p10);
          return r22;
        };
        r24 = dyn sQuote(p11);
        return r24;
      };
      r26 = dyn gettextf("class %s has no visible definition from package or environment %s", p9, p12);
      return r26;
    };
    r28 = dyn stop[, domain](p13, NA_LGL);
    check L66() else D6();
  L68():
    p14 = prom<V +>{
      class9 = ld class1;
      class10 = force? class9;
      checkMissing(class10);
      return class10;
    };
    r31 = dyn classMetaName(p14);
    check L69() else D8();
  D6():
    deopt 22 [r28];
  D8():
    deopt 28 [r31];
  L66():
    goto L14();
  L69():
    st m1 = r31;
    exists = ldf exists;
    check L70() else D9();
  D9():
    deopt 31 [];
  L70():
    p15 = prom<V +>{
      m1 = ld m1;
      m2 = force? m1;
      checkMissing(m2);
      return m2;
    };
    p16 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r34 = dyn exists[, , inherits](p15, p16, FALSE);
    check L71() else D10();
  D10():
    deopt 36 [r34];
  L71():
    c2 = `as.logical`(r34);
    if c2 then L72() else L15(c2);
  L15(c4):
    st local1 = c4;
    local1 = ld local1;
    check L78() else D13();
  L72():
    __ = ldf `@` in base;
    r35 = dyn __(<sym classDef>, <sym sealed>);
    c5 = `as.logical`(r35);
    if c5 then L16(c2, c5) else L73();
  D13():
    deopt 48 [local1];
  L16(c6, c7):
    r39 = `!`(c7);
    c14 = `as.logical`(r39);
    c15 = `&&`(c6, c14);
    goto L15(c15);
  L73():
    bindingIsLocked = ldf bindingIsLocked;
    check L74() else D11();
  L78():
    local2 = force? local1;
    checkMissing(local2);
    r40 = `!`(local2);
    c17 = `as.logical`(r40);
    if c17 then L79() else L17();
  D11():
    deopt 40 [c2, c5];
  L17():
    goto L22();
  L22():
    __2 = ldf `@` in base;
    r63 = dyn __2(<sym classDef>, <sym sealed>);
    c34 = `as.logical`(r63);
    if c34 then L96() else L23(c34);
  L74():
    p17 = prom<V +>{
      m3 = ld m1;
      m4 = force? m3;
      checkMissing(m4);
      return m4;
    };
    p18 = prom<V +>{
      where11 = ld where;
      where12 = force? where11;
      checkMissing(where12);
      return where12;
    };
    r38 = dyn bindingIsLocked(p17, p18);
    check L75() else D12();
  L79():
    classMetaName1 = ldf classMetaName;
    check L80() else D14();
  D12():
    deopt 43 [c2, c5, r38];
  D14():
    deopt 52 [];
  L23(c36):
    c40 = `as.logical`(c36);
    if c40 then L100() else L24();
  L75():
    c10 = `as.logical`(r38);
    c11 = `||`(c5, c10);
    goto L16(c2, c11);
  L80():
    p19 = prom<V +>{
      class11 = ld class2;
      class12 = force? class11;
      checkMissing(class12);
      return class12;
    };
    r42 = dyn classMetaName1(p19);
    check L81() else D15();
  L96():
    isClassUnion = ldf isClassUnion;
    check L97() else D23();
  D15():
    deopt 54 [r42];
  D23():
    deopt 90 [c34];
  L24():
    goto L25();
  L25():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L104() else L105();
  L81():
    st m2 = r42;
    exists1 = ldf exists;
    check L82() else D16();
  L97():
    p29 = prom<V +>{
      classDef4 = ld classDef2;
      classDef5 = force? classDef4;
      checkMissing(classDef5);
      return classDef5;
    };
    r65 = dyn isClassUnion(p29);
    check L98() else D24();
  L100():
    stop2 = ldf stop;
    check L101() else D25();
  D16():
    deopt 57 [];
  D24():
    deopt 92 [c34, r65];
  D25():
    deopt 96 [];
  L26(r75):
    r82 = `!`(r75);
    st prevIs = r82;
    ____ = ldf `%||%`;
    check L109() else D30();
  L82():
    p20 = prom<V +>{
      m5 = ld m2;
      m6 = force? m5;
      checkMissing(m6);
      return m6;
    };
    p21 = prom<V +>{
      where13 = ld where;
      where14 = force? where13;
      checkMissing(where14);
      return where14;
    };
    r45 = dyn exists1[, , inherits](p20, p21, FALSE);
    check L83() else D17();
  L98():
    r66 = `!`(r65);
    c37 = `as.logical`(r66);
    c38 = `&&`(c34, c37);
    goto L23(c38);
  L101():
    p32 = prom<V +>{
      gettextf2 = ldf gettextf;
      p31 = prom<V +>{
        dQuote3 = ldf dQuote;
        p30 = prom<V +>{
          class17 = ld class1;
          class18 = force? class17;
          checkMissing(class18);
          return class18;
        };
        r68 = dyn dQuote3(p30);
        return r68;
      };
      r70 = dyn gettextf2("class %s is sealed; new superclasses can not be defined, except by 'setClassUnion'", p31);
      return r70;
    };
    r72 = dyn stop2[, domain](p32, NA_LGL);
    check L102() else D26();
  L104():
    possibleExtends = ldf possibleExtends;
    check L106() else D27();
  L105():
    r74 = dyn base2(<lang possibleExtends(class1, class2, classDef, classDef2)>, FALSE);
    goto L26(r74);
  D17():
    deopt 62 [r45];
  D26():
    deopt 100 [r72];
  D27():
    deopt 106 [];
  D30():
    deopt 125 [];
  L83():
    c18 = `as.logical`(r45);
    if c18 then L84() else L18(c18);
  L102():
    goto L25();
  L106():
    p33 = prom<V +>{
      class19 = ld class1;
      class20 = force? class19;
      checkMissing(class20);
      return class20;
    };
    p34 = prom<V +>{
      class21 = ld class2;
      class22 = force? class21;
      checkMissing(class22);
      return class22;
    };
    p35 = prom<V +>{
      classDef6 = ld classDef;
      classDef7 = force? classDef6;
      checkMissing(classDef7);
      return classDef7;
    };
    p36 = prom<V +>{
      classDef8 = ld classDef2;
      classDef9 = force? classDef8;
      checkMissing(classDef9);
      return classDef9;
    };
    r80 = dyn possibleExtends(p33, p34, p35, p36);
    check L107() else D28();
  L109():
    p37 = prom<V +>{
      extensionObject1 = ld extensionObject;
      extensionObject2 = force? extensionObject1;
      checkMissing(extensionObject2);
      return extensionObject2;
    };
    p47 = prom<V +>{
      makeExtends = ldf makeExtends;
      p38 = prom<V +>{
        class23 = ld class1;
        class24 = force? class23;
        checkMissing(class24);
        return class24;
      };
      p39 = prom<V +>{
        coerce1 = ld coerce;
        coerce2 = force? coerce1;
        checkMissing(coerce2);
        return coerce2;
      };
      p40 = prom<V +>{
        test1 = ld test;
        test2 = force? test1;
        checkMissing(test2);
        return test2;
      };
      p41 = prom<V +>{
        replace1 = ld replace;
        replace2 = force? replace1;
        checkMissing(replace2);
        return replace2;
      };
      p42 = prom<V +>{
        by1 = ld by;
        by2 = force? by1;
        checkMissing(by2);
        return by2;
      };
      p43 = prom<V +>{
        classDef10 = ld classDef;
        classDef11 = force? classDef10;
        checkMissing(classDef11);
        return classDef11;
      };
      p44 = prom<V +>{
        classDef12 = ld classDef2;
        classDef13 = force? classDef12;
        checkMissing(classDef13);
        return classDef13;
      };
      p46 = prom<V +>{
        getPackageName1 = ldf getPackageName;
        p45 = prom<V +>{
          where17 = ld where;
          where18 = force? where17;
          checkMissing(where18);
          return where18;
        };
        r92 = dyn getPackageName1(p45);
        return r92;
      };
      r94 = dyn makeExtends[, , , , , classDef1, classDef2, package](p38, p39, p40, p41, p42, p43, p44, p46);
      return r94;
    };
    r96 = dyn ____(p37, p47);
    check L110() else D31();
  D28():
    deopt 111 [r80];
  D31():
    deopt 128 [r96];
  L18(c20):
    st local2 = c20;
    local3 = ld local2;
    check L90() else D20();
  L84():
    __1 = ldf `@` in base;
    r46 = dyn __1(<sym classDef2>, <sym sealed>);
    c21 = `as.logical`(r46);
    if c21 then L19(c18, c21) else L85();
  L107():
    identical = ldf identical in base;
    r81 = dyn identical(r80, FALSE, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L108() else D29();
  L110():
    st obj = r96;
    _validExtends = ldf `.validExtends`;
    check L111() else D32();
  D20():
    deopt 74 [local3];
  D29():
    deopt 121 [r81];
  D32():
    deopt 131 [];
  L19(c22, c23):
    r50 = `!`(c23);
    c30 = `as.logical`(r50);
    c31 = `&&`(c22, c30);
    goto L18(c31);
  L85():
    bindingIsLocked1 = ldf bindingIsLocked;
    check L86() else D18();
  L90():
    local4 = force? local3;
    checkMissing(local4);
    r51 = `!`(local4);
    c33 = `as.logical`(r51);
    if c33 then L91() else L20();
  L108():
    goto L26(r81);
  L111():
    p48 = prom<V +>{
      class25 = ld class1;
      class26 = force? class25;
      checkMissing(class26);
      return class26;
    };
    p49 = prom<V +>{
      class27 = ld class2;
      class28 = force? class27;
      checkMissing(class28);
      return class28;
    };
    p50 = prom<V +>{
      classDef14 = ld classDef;
      classDef15 = force? classDef14;
      checkMissing(classDef15);
      return classDef15;
    };
    p51 = prom<V +>{
      classDef16 = ld classDef2;
      classDef17 = force? classDef16;
      checkMissing(classDef17);
      return classDef17;
    };
    p52 = prom<V +>{
      __3 = ldf `@` in base;
      r101 = dyn __3(<sym obj>, <sym simple>);
      return r101;
    };
    r103 = dyn _validExtends(p48, p49, p50, p51, p52);
    check L112() else D33();
  D18():
    deopt 66 [c18, c21];
  D33():
    deopt 137 [r103];
  L20():
    goto L21(NULL);
  L21(r61):
    goto L22();
  L86():
    p22 = prom<V +>{
      m7 = ld m2;
      m8 = force? m7;
      checkMissing(m8);
      return m8;
    };
    p23 = prom<V +>{
      where15 = ld where;
      where16 = force? where15;
      checkMissing(where16);
      return where16;
    };
    r49 = dyn bindingIsLocked1(p22, p23);
    check L87() else D19();
  L91():
    stop1 = ldf stop;
    check L92() else D21();
  L112():
    st ok = r103;
    isTRUE = ldf isTRUE;
    check L113() else D34();
  D19():
    deopt 69 [c18, c21, r49];
  D21():
    deopt 78 [];
  D34():
    deopt 140 [];
  L87():
    c26 = `as.logical`(r49);
    c27 = `||`(c21, c26);
    goto L19(c18, c27);
  L92():
    p28 = prom<V +>{
      gettextf1 = ldf gettextf;
      p25 = prom<V +>{
        dQuote1 = ldf dQuote;
        p24 = prom<V +>{
          class13 = ld class1;
          class14 = force? class13;
          checkMissing(class14);
          return class14;
        };
        r53 = dyn dQuote1(p24);
        return r53;
      };
      p27 = prom<V +>{
        dQuote2 = ldf dQuote;
        p26 = prom<V +>{
          class15 = ld class2;
          class16 = force? class15;
          checkMissing(class16);
          return class16;
        };
        r56 = dyn dQuote2(p26);
        return r56;
      };
      r58 = dyn gettextf1("cannot create a 'setIs' relation when neither of the classes (%s and %s) is local and modifiable in this package", p25, p27);
      return r58;
    };
    r60 = dyn stop1[, domain](p28, NA_LGL);
    check L93() else D22();
  L113():
    p53 = prom<V +>{
      ok = ld ok;
      ok1 = force? ok;
      checkMissing(ok1);
      return ok1;
    };
    r105 = dyn isTRUE(p53);
    check L114() else D35();
  D22():
    deopt 82 [r60];
  D35():
    deopt 142 [r105];
  L93():
    goto L21(r60);
  L114():
    r106 = `!`(r105);
    c41 = `as.logical`(r106);
    if c41 then L115() else L27();
  L27():
    goto L28();
  L28():
    _findOrCopyClass = ldf `.findOrCopyClass`;
    check L119() else D38();
  L115():
    stop3 = ldf stop;
    check L116() else D36();
  D36():
    deopt 145 [];
  D38():
    deopt 151 [];
  L116():
    p54 = prom<V +>{
      ok2 = ld ok;
      ok3 = force? ok2;
      checkMissing(ok3);
      return ok3;
    };
    r108 = dyn stop3(p54);
    check L117() else D37();
  L119():
    p55 = prom<V +>{
      class29 = ld class2;
      class30 = force? class29;
      checkMissing(class30);
      return class30;
    };
    p56 = prom<V +>{
      classDef18 = ld classDef2;
      classDef19 = force? classDef18;
      checkMissing(classDef19);
      return classDef19;
    };
    p57 = prom<V +>{
      where19 = ld where;
      where20 = force? where19;
      checkMissing(where20);
      return where20;
    };
    r113 = dyn _findOrCopyClass(p55, p56, p57, "subclass");
    check L120() else D39();
  D37():
    deopt 147 [r108];
  D39():
    deopt 156 [r113];
  L117():
    goto L28();
  L120():
    st where2 = r113;
    obj = ld obj;
    check L121() else D40();
  D40():
    deopt 158 [obj];
  L121():
    obj1 = force? obj;
    checkMissing(obj1);
    l = ld classDef2;
    __4 = ldf `@`;
    check L122() else D41();
  D41():
    deopt 161 [obj1, l, obj1];
  L122():
    p58 = prom<V +>{
      subclasses = ld subclasses;
      subclasses1 = force? subclasses;
      checkMissing(subclasses1);
      return subclasses1;
    };
    r115 = dyn __4(obj1, NULL, p58);
    check L123() else D42();
  D42():
    deopt 164 [obj1, l, obj1, r115];
  L123():
    c42 = `is.object`(r115);
    if c42 then L124() else L125(obj1, l, r115);
  L29(obj5, l4, dx1):
    ___ = ldf `@<-`;
    check L128() else D44();
  L124():
    dr = tryDispatchBuiltin.0("[[<-", r115, obj1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L126() else L125(obj1, l, dr);
  L125(obj3, l2, r117):
    class31 = ld class1;
    check L127() else D43();
  D43():
    deopt 166 [obj3, l2, r117, obj1, class31];
  D44():
    deopt 169 [obj5, l4, dx1];
  L126():
    dx = getTryDispatchBuiltinValue(dr);
    goto L29(obj1, l, dx);
  L127():
    class32 = force? class31;
    ____1 = ldf `[[<-` in base;
    r118 = dyn ____1(r117, obj1, class32);
    goto L29(obj3, l2, r118);
  L128():
    r119 = dyn ___(l4, NULL, "subclasses", dx1);
    check L129() else D45();
  D45():
    deopt 172 [obj5, r119];
  L129():
    st classDef2 = r119;
    doComplete1 = ld doComplete;
    check L130() else D46();
  D46():
    deopt 174 [doComplete1];
  L130():
    doComplete2 = force? doComplete1;
    checkMissing(doComplete2);
    c43 = `as.logical`(doComplete2);
    if c43 then L131() else L30();
  L30():
    goto L31();
  L31():
    __5 = ldf `@` in base;
    r127 = dyn __5(<sym classDef2>, <sym virtual>);
    c44 = `as.logical`(r127);
    if c44 then L137() else L32(c44);
  L131():
    completeSubclasses = ldf completeSubclasses;
    check L132() else D47();
  D47():
    deopt 177 [];
  L32(c46):
    c56 = `as.logical`(c46);
    if c56 then L147() else L35();
  L132():
    p59 = prom<V +>{
      classDef20 = ld classDef2;
      classDef21 = force? classDef20;
      checkMissing(classDef21);
      return classDef21;
    };
    p60 = prom<V +>{
      class33 = ld class1;
      class34 = force? class33;
      checkMissing(class34);
      return class34;
    };
    p61 = prom<V +>{
      obj6 = ld obj;
      obj7 = force? obj6;
      checkMissing(obj7);
      return obj7;
    };
    p62 = prom<V +>{
      where21 = ld where;
      where22 = force? where21;
      checkMissing(where22);
      return where22;
    };
    r124 = dyn completeSubclasses(p59, p60, p61, p62);
    check L133() else D48();
  L137():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L138() else L139();
  D48():
    deopt 182 [r124];
  L33(c49, r129):
    c53 = `as.logical`(r129);
    c54 = `&&`(c49, c53);
    goto L32(c54);
  L35():
    goto L46();
  L46():
    assignClassDef = ldf assignClassDef;
    check L178() else D66();
  L133():
    l5 = ld classDef2;
    ___1 = ldf `@<-`;
    check L134() else D49();
  L138():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L140() else L141();
  L139():
    r128 = dyn base3(<lang match(class2, .specialVirtual)>);
    goto L33(c44, r128);
  L147():
    extends = ldf extends;
    check L148() else D55();
  D49():
    deopt 184 [r124, l5, r124];
  D55():
    deopt 209 [];
  D66():
    deopt 263 [];
  L34(c52, r131):
    is_na = ldf `is.na` in base;
    r133 = dyn is_na(r131);
    check L145() else D54();
  L134():
    r125 = dyn ___1(l5, NULL, "subclasses", r124);
    check L135() else D50();
  L140():
    class35 = ld class2;
    check L142() else D51();
  L141():
    r130 = dyn base4(<sym class2>, <sym .specialVirtual>);
    goto L34(c44, r130);
  L148():
    p63 = prom<V +>{
      classDef22 = ld classDef;
      classDef23 = force? classDef22;
      checkMissing(classDef23);
      return classDef23;
    };
    r135 = dyn extends(p63, "NULL");
    check L149() else D56();
  L178():
    p64 = prom<V +>{
      class37 = ld class2;
      class38 = force? class37;
      checkMissing(class38);
      return class38;
    };
    p65 = prom<V +>{
      classDef26 = ld classDef2;
      classDef27 = force? classDef26;
      checkMissing(classDef27);
      return classDef27;
    };
    p66 = prom<V +>{
      where23 = ld where2;
      where24 = force? where23;
      checkMissing(where24);
      return where24;
    };
    r161 = dyn assignClassDef(p64, p65, p66, TRUE);
    check L179() else D67();
  D50():
    deopt 187 [r124, r125];
  D51():
    deopt 197 [c44, class35];
  D54():
    deopt 206 [c52, r133];
  D56():
    deopt 212 [r135];
  D67():
    deopt 268 [r161];
  L135():
    st classDef2 = r125;
    goto L31();
  L142():
    class36 = force? class35;
    checkMissing(class36);
    _specialVirtual = ld `.specialVirtual`;
    check L143() else D52();
  L145():
    goto L33(c52, r133);
  L149():
    c57 = `as.logical`(r135);
    if c57 then L150() else L36();
  L179():
    _removePreviousCoerce = ldf `.removePreviousCoerce`;
    check L180() else D68();
  D52():
    deopt 199 [c44, _specialVirtual];
  D68():
    deopt 270 [];
  L36():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L154() else L155();
  L37(r137):
    goto L46();
  L143():
    _specialVirtual1 = force? _specialVirtual;
    checkMissing(_specialVirtual1);
    match = ldf match in base;
    r132 = dyn match(class36, _specialVirtual1, NA_INT, NULL);
    check L144() else D53();
  L150():
    l6 = ld classDef2;
    ___2 = ldf `@<-`;
    check L151() else D57();
  L180():
    p67 = prom<V +>{
      class39 = ld class1;
      class40 = force? class39;
      checkMissing(class40);
      return class40;
    };
    p68 = prom<V +>{
      class41 = ld class2;
      class42 = force? class41;
      checkMissing(class42);
      return class42;
    };
    p69 = prom<V +>{
      where25 = ld where;
      where26 = force? where25;
      checkMissing(where26);
      return where26;
    };
    p70 = prom<V +>{
      prevIs = ld prevIs;
      prevIs1 = force? prevIs;
      checkMissing(prevIs1);
      return prevIs1;
    };
    r166 = dyn _removePreviousCoerce(p67, p68, p69, p70);
    check L181() else D69();
  D53():
    deopt 204 [c44, r132];
  D57():
    deopt 216 [NULL, l6, NULL];
  D69():
    deopt 275 [r166];
  L38(r139):
    c59 = `as.logical`(r139);
    if c59 then L156() else L39(c59);
  L144():
    goto L34(c44, r132);
  L151():
    r136 = dyn ___2(l6, NULL, "prototype", NULL);
    check L152() else D58();
  L154():
    __6 = ldf `@` in base;
    r140 = dyn __6(<sym classDef2>, <sym prototype>);
    c58 = `==`(r140, NULL);
    goto L38(c58);
  L155():
    r138 = dyn base5(<lang `@`(classDef2, prototype)>);
    goto L38(r138);
  L181():
    _findOrCopyClass1 = ldf `.findOrCopyClass`;
    check L182() else D70();
  D58():
    deopt 219 [NULL, r136];
  D70():
    deopt 277 [];
  L39(c61):
    c74 = `as.logical`(c61);
    if c74 then L167() else L43();
  L152():
    st classDef2 = r136;
    goto L37(NULL);
  L156():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L157() else L158();
  L182():
    p71 = prom<V +>{
      class43 = ld class1;
      class44 = force? class43;
      checkMissing(class44);
      return class44;
    };
    p72 = prom<V +>{
      classDef28 = ld classDef;
      classDef29 = force? classDef28;
      checkMissing(classDef29);
      return classDef29;
    };
    p73 = prom<V +>{
      where27 = ld where;
      where28 = force? where27;
      checkMissing(where28);
      return where28;
    };
    r170 = dyn _findOrCopyClass1(p71, p72, p73, "superClass");
    check L183() else D71();
  D71():
    deopt 282 [r170];
  L40(c64, r142):
    c71 = `as.logical`(r142);
    c72 = `&&`(c64, c71);
    goto L39(c72);
  L43():
    goto L37(NULL);
  L157():
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L159() else L160();
  L158():
    r141 = dyn base6(<lang match("NULL", names(`@`(classDef2, subclasses)))>);
    goto L40(c59, r141);
  L167():
    __8 = ldf `@` in base;
    r151 = dyn __8(<sym classDef>, <sym virtual>);
    c75 = `as.logical`(r151);
    if c75 then L168() else L44();
  L183():
    st where1 = r170;
    obj8 = ld obj;
    check L184() else D72();
  D72():
    deopt 284 [obj8];
  L41(c67, r144):
    is_na1 = ldf `is.na` in base;
    r150 = dyn is_na1(r144);
    check L165() else D61();
  L44():
    sym9 = ldf `.Call`;
    base9 = ldf `.Call` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L170() else L171();
  L45(r153):
    l7 = ld classDef2;
    ___3 = ldf `@<-`;
    check L174() else D64();
  L159():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L161() else L162();
  L160():
    r143 = dyn base7("NULL", <lang names(`@`(classDef2, subclasses))>);
    goto L41(c59, r143);
  L168():
    __9 = ldf `@` in base;
    r152 = dyn __9(<sym classDef>, <sym prototype>);
    goto L45(r152);
  L184():
    obj9 = force? obj8;
    checkMissing(obj9);
    l8 = ld classDef;
    __10 = ldf `@`;
    check L185() else D73();
  D61():
    deopt 241 [c67, r150];
  D64():
    deopt 253 [r153, l7, r153];
  D73():
    deopt 287 [obj9, l8, obj9];
  L42(c70, r146):
    match1 = ldf match in base;
    r149 = dyn match1("NULL", r146, NA_INT, NULL);
    check L164() else D60();
  L161():
    __7 = ldf `@` in base;
    r147 = dyn __7(<sym classDef2>, <sym subclasses>);
    names = ldf names in base;
    r148 = dyn names(r147);
    check L163() else D59();
  L162():
    r145 = dyn base8(<lang `@`(classDef2, subclasses)>);
    goto L42(c59, r145);
  L165():
    goto L40(c67, r150);
  L170():
    C_new_object = ld C_new_object;
    check L172() else D62();
  L171():
    r154 = dyn base9(<sym C_new_object>, <sym classDef>);
    goto L45(r154);
  L174():
    r156 = dyn ___3(l7, NULL, "prototype", r153);
    check L175() else D65();
  L185():
    p74 = prom<V +>{
      contains = ld contains;
      contains1 = force? contains;
      checkMissing(contains1);
      return contains1;
    };
    r172 = dyn __10(obj9, NULL, p74);
    check L186() else D74();
  D59():
    deopt 235 [c59, r148];
  D60():
    deopt 239 [c70, r149];
  D62():
    deopt 248 [C_new_object];
  D65():
    deopt 256 [r153, r156];
  D74():
    deopt 290 [obj9, l8, obj9, r172];
  L163():
    goto L42(c59, r148);
  L164():
    goto L41(c70, r149);
  L172():
    C_new_object1 = force? C_new_object;
    checkMissing(C_new_object1);
    classDef24 = ld classDef;
    check L173() else D63();
  L175():
    st classDef2 = r156;
    goto L37(r153);
  L186():
    _newDirectSuperclass__ = ldf `.newDirectSuperclass<-`;
    check L187() else D75();
  D63():
    deopt 249 [C_new_object1, classDef24];
  D75():
    deopt 292 [obj9, l8, r172, obj9];
  L173():
    classDef25 = force? classDef24;
    checkMissing(classDef25);
    vargs = dots[classDef25];
    r155 = `.Call`(C_new_object1, vargs, <missing>);
    goto L45(r155);
  L187():
    p75 = prom<V +>{
      class45 = ld class2;
      class46 = force? class45;
      checkMissing(class46);
      return class46;
    };
    p76 = prom<V +>{
      sym10 = ldf names;
      base10 = ldf names in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r175):
      return r175;
    L1():
      __11 = ldf `@` in base;
      r176 = dyn __11(<sym classDef2>, <sym contains>);
      names1 = ldf names in base;
      r177 = dyn names1(r176);
      goto L0(r177);
    L2():
      r174 = dyn base10(<lang `@`(classDef2, contains)>);
      goto L0(r174);
    };
    r179 = dyn _newDirectSuperclass__(r172, NULL, p75, p76, obj9);
    check L188() else D76();
  D76():
    deopt 296 [obj9, l8, r179];
  L188():
    ___4 = ldf `@<-`;
    check L189() else D77();
  D77():
    deopt 297 [obj9, l8, r179];
  L189():
    r180 = dyn ___4(l8, NULL, "contains", r179);
    check L190() else D78();
  D78():
    deopt 300 [obj9, r180];
  L190():
    st classDef = r180;
    is = ldf is;
    check L191() else D79();
  D79():
    deopt 303 [];
  L191():
    p77 = prom<V +>{
      classDef30 = ld classDef;
      classDef31 = force? classDef30;
      checkMissing(classDef31);
      return classDef31;
    };
    r182 = dyn is(p77, "ClassUnionRepresentation");
    check L192() else D80();
  D80():
    deopt 306 [r182];
  L192():
    c76 = `as.logical`(r182);
    if c76 then L47(c76) else L193();
  L47(c77):
    c82 = `as.logical`(c77);
    if c82 then L197() else L48(c82);
  L193():
    is1 = ldf is;
    check L194() else D81();
  D81():
    deopt 308 [c76];
  L48(c84):
    st onlyRecacheSubclasses = c84;
    doComplete3 = ld doComplete;
    check L206() else D88();
  L194():
    p78 = prom<V +>{
      classDef32 = ld classDef2;
      classDef33 = force? classDef32;
      checkMissing(classDef33);
      return classDef33;
    };
    r184 = dyn is1(p78, "ClassUnionRepresentation");
    check L195() else D82();
  L197():
    sym11 = ldf identical;
    base11 = ldf identical in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L198() else L199();
  D82():
    deopt 311 [c76, r184];
  D88():
    deopt 335 [doComplete3];
  L49(c87, r186):
    r192 = `!`(r186);
    c88 = `as.logical`(r192);
    c89 = `&&`(c87, c88);
    goto L48(c89);
  L195():
    c79 = `as.logical`(r184);
    c80 = `||`(c76, c79);
    goto L47(c80);
  L198():
    packageSlot = ldf packageSlot;
    check L200() else D83();
  L199():
    r185 = dyn base11(<lang packageSlot(classDef)>, <lang packageSlot(classDef2)>);
    goto L49(c82, r185);
  L206():
    doComplete4 = force? doComplete3;
    checkMissing(doComplete4);
    c91 = `as.logical`(doComplete4);
    if c91 then L207() else L50();
  D83():
    deopt 316 [c82];
  L50():
    goto L53();
  L53():
    assignClassDef1 = ldf assignClassDef;
    check L218() else D96();
  L200():
    p79 = prom<V +>{
      classDef34 = ld classDef;
      classDef35 = force? classDef34;
      checkMissing(classDef35);
      return classDef35;
    };
    r188 = dyn packageSlot(p79);
    check L201() else D84();
  L207():
    completeExtends = ldf completeExtends;
    check L208() else D89();
  D84():
    deopt 318 [c82, r188];
  D89():
    deopt 338 [];
  D96():
    deopt 367 [];
  L201():
    packageSlot1 = ldf packageSlot;
    check L202() else D85();
  L208():
    p81 = prom<V +>{
      classDef38 = ld classDef;
      classDef39 = force? classDef38;
      checkMissing(classDef39);
      return classDef39;
    };
    p82 = prom<V +>{
      class47 = ld class2;
      class48 = force? class47;
      checkMissing(class48);
      return class48;
    };
    p83 = prom<V +>{
      obj10 = ld obj;
      obj11 = force? obj10;
      checkMissing(obj11);
      return obj11;
    };
    p84 = prom<V +>{
      where29 = ld where;
      where30 = force? where29;
      checkMissing(where30);
      return where30;
    };
    r197 = dyn completeExtends[, , , where](p81, p82, p83, p84);
    check L209() else D90();
  L218():
    p90 = prom<V +>{
      class53 = ld class1;
      class54 = force? class53;
      checkMissing(class54);
      return class54;
    };
    p91 = prom<V +>{
      classDef44 = ld classDef;
      classDef45 = force? classDef44;
      checkMissing(classDef45);
      return classDef45;
    };
    p92 = prom<V +>{
      where33 = ld where1;
      where34 = force? where33;
      checkMissing(where34);
      return where34;
    };
    p93 = prom<V +>{
      onlyRecacheSubclasses2 = ld onlyRecacheSubclasses;
      onlyRecacheSubclasses3 = force? onlyRecacheSubclasses2;
      checkMissing(onlyRecacheSubclasses3);
      return onlyRecacheSubclasses3;
    };
    r212 = dyn assignClassDef1[, , , , doSubclasses](p90, p91, p92, TRUE, p93);
    check L219() else D97();
  D85():
    deopt 320 [c82];
  D90():
    deopt 344 [r197];
  D97():
    deopt 374 [r212];
  L202():
    p80 = prom<V +>{
      classDef36 = ld classDef2;
      classDef37 = force? classDef36;
      checkMissing(classDef37);
      return classDef37;
    };
    r190 = dyn packageSlot1(p80);
    check L203() else D86();
  L209():
    l9 = ld classDef;
    ___5 = ldf `@<-`;
    check L210() else D91();
  L219():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L220() else L221();
  D86():
    deopt 322 [c82, r190];
  D91():
    deopt 346 [r197, l9, r197];
  L54(r214):
    popenv;
    return r214;
  L203():
    identical1 = ldf identical in base;
    r191 = dyn identical1(r188, r190, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L204() else D87();
  L210():
    r198 = dyn ___5(l9, NULL, "contains", r197);
    check L211() else D92();
  L220():
    classDef46 = ld classDef;
    check L222() else D98();
  L221():
    r213 = dyn base12(<sym classDef>);
    goto L54(r213);
  D87():
    deopt 331 [c82, r191];
  D92():
    deopt 349 [r197, r198];
  D98():
    deopt 377 [classDef46];
  L204():
    goto L49(c82, r191);
  L211():
    st classDef = r198;
    onlyRecacheSubclasses = ld onlyRecacheSubclasses;
    check L212() else D93();
  L222():
    classDef47 = force? classDef46;
    checkMissing(classDef47);
    invisible = ldf invisible in base;
    r215 = dyn invisible(classDef47);
    check L223() else D99();
  D93():
    deopt 351 [onlyRecacheSubclasses];
  D99():
    deopt 380 [r215];
  L212():
    onlyRecacheSubclasses1 = force? onlyRecacheSubclasses;
    checkMissing(onlyRecacheSubclasses1);
    r199 = `!`(onlyRecacheSubclasses1);
    c92 = `as.logical`(r199);
    if c92 then L213() else L51();
  L223():
    goto L54(r215);
  L51():
    goto L52(NULL);
  L52(r206):
    goto L53();
  L213():
    _checkSubclasses = ldf `.checkSubclasses`;
    check L214() else D94();
  D94():
    deopt 355 [];
  L214():
    p85 = prom<V +>{
      class49 = ld class1;
      class50 = force? class49;
      checkMissing(class50);
      return class50;
    };
    p86 = prom<V +>{
      classDef40 = ld classDef;
      classDef41 = force? classDef40;
      checkMissing(classDef41);
      return classDef41;
    };
    p87 = prom<V +>{
      class51 = ld class2;
      class52 = force? class51;
      checkMissing(class52);
      return class52;
    };
    p88 = prom<V +>{
      classDef42 = ld classDef2;
      classDef43 = force? classDef42;
      checkMissing(classDef43);
      return classDef43;
    };
    p89 = prom<V +>{
      where31 = ld where;
      where32 = force? where31;
      checkMissing(where32);
      return where32;
    };
    r205 = dyn _checkSubclasses(p85, p86, p87, p88, p89);
    check L215() else D95();
  D95():
    deopt 361 [r205];
  L215():
    goto L52(r205);
  }
}
fun inner1912617395(obj) {
  (reg obj:*) -+> V { var obj:*, reg new:cls, reg __:cls, reg r:V, reg p:p(V +), reg as_matrix:cls, reg __1:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg as_matrix1:cls, reg __2:cls, reg r6:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V |
    mkenv;
    st obj = obj;
    new = ldf new;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym obj>, <sym x>);
      return r;
    };
    p2 = prom<V +>{
      as_matrix = ldf `as.matrix`;
      p1 = prom<V +>{
        __1 = ldf `@` in base;
        r2 = dyn __1(<sym obj>, <sym y>);
        return r2;
      };
      r4 = dyn as_matrix(p1);
      return r4;
    };
    p4 = prom<V +>{
      as_matrix1 = ldf `as.matrix`;
      p3 = prom<V +>{
        __2 = ldf `@` in base;
        r6 = dyn __2(<sym obj>, <sym smooth>);
        return r6;
      };
      r8 = dyn as_matrix1(p3);
      return r8;
    };
    r10 = dyn new[, x, y, smooth]("trackMultiCurve", p, p2, p4);
    check L1() else D1();
  D1():
    deopt 9 [r10];
  L1():
    popenv;
    return r10;
  }
}
fun inner4230795206(obj, value) {
  (reg obj:*, reg value:*) -+> V { var obj:*, var value:*, reg as_matrix:cls, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg l:*, reg ___:cls, reg r3:V, reg __1:cls, reg r4:V, reg l1:*, reg ___1:cls, reg r5:V, reg as_matrix1:cls, reg __2:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg l2:*, reg ___2:cls, reg r9:V, reg obj1:*, reg obj2:V |
    mkenv;
    st obj = obj;
    st value = value;
    as_matrix = ldf `as.matrix`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym value>, <sym y>);
      return r;
    };
    r2 = dyn as_matrix(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    l = ld obj;
    ___ = ldf `@<-`;
    check L2() else D2();
  D2():
    deopt 5 [r2, l, r2];
  L2():
    r3 = dyn ___(l, NULL, "y", r2);
    check L3() else D3();
  D3():
    deopt 8 [r2, r3];
  L3():
    st obj = r3;
    __1 = ldf `@` in base;
    r4 = dyn __1(<sym value>, <sym x>);
    l1 = ld obj;
    ___1 = ldf `@<-`;
    check L4() else D4();
  D4():
    deopt 13 [r4, l1, r4];
  L4():
    r5 = dyn ___1(l1, NULL, "x", r4);
    check L5() else D5();
  D5():
    deopt 16 [r4, r5];
  L5():
    st obj = r5;
    as_matrix1 = ldf `as.matrix`;
    check L6() else D6();
  D6():
    deopt 19 [];
  L6():
    p1 = prom<V +>{
      __2 = ldf `@` in base;
      r6 = dyn __2(<sym value>, <sym smooth>);
      return r6;
    };
    r8 = dyn as_matrix1(p1);
    check L7() else D7();
  D7():
    deopt 21 [r8];
  L7():
    l2 = ld obj;
    ___2 = ldf `@<-`;
    check L8() else D8();
  D8():
    deopt 23 [r8, l2, r8];
  L8():
    r9 = dyn ___2(l2, NULL, "smooth", r8);
    check L9() else D9();
  D9():
    deopt 26 [r8, r9];
  L9():
    st obj = r9;
    obj1 = ld obj;
    check L10() else D10();
  D10():
    deopt 28 [obj1];
  L10():
    obj2 = force? obj1;
    checkMissing(obj2);
    popenv;
    return obj2;
  }
}
fun inner1697196618(from) {
  (reg from:*) -+> V { var from:*, reg factor:cls, reg __:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st from = from;
    factor = ldf factor;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym from>, <sym .Data>);
      return r;
    };
    r2 = dyn factor(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner199710543(from, value) {
  (reg from:*, reg value:*) -+> V { var from:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg value1:*, reg value2:V, reg as_character:cls, reg r2:V, reg l:*, reg ___:cls, reg r3:V, reg from1:*, reg from2:V |
    mkenv;
    st from = from;
    st value = value;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    l = ld from;
    ___ = ldf `@<-`;
    check L5() else D2();
  L1():
    value1 = ld value;
    check L3() else D0();
  L2():
    r = dyn base(<sym value>);
    goto L0(r);
  D0():
    deopt 2 [value1];
  D2():
    deopt 7 [r1, l, r1];
  L3():
    value2 = force? value1;
    checkMissing(value2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(value2);
    check L4() else D1();
  L5():
    r3 = dyn ___(l, NULL, ".Data", r1);
    check L6() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r1, r3];
  L4():
    goto L0(r2);
  L6():
    st from = r3;
    from1 = ld from;
    check L7() else D4();
  D4():
    deopt 12 [from1];
  L7():
    from2 = force? from1;
    checkMissing(from2);
    popenv;
    return from2;
  }
}