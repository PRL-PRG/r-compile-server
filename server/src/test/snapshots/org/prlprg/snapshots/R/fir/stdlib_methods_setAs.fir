fun main() {
  () -+> V { reg r:cls, reg setClass:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg setClass1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg setAs:cls, reg r11:cls, reg p2:p(V +), reg r13:V, reg new:cls, reg r14:V, reg p3:p(V +), reg r16:V, reg r17:V, reg p4:p(V +), reg r19:V, reg as:cls, reg t1:*, reg t2:V, reg p5:p(V +), reg r21:V, reg setClass2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg c2:cls, reg r24:V, reg p6:p(V +), reg r26:V, reg setClass3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg c3:cls, reg r29:V, reg p7:p(V +), reg r31:V, reg setClass4:cls, reg r32:V, reg setIs:cls, reg r33:V, reg setIs1:cls, reg r34:V, reg setAs1:cls, reg r35:cls, reg p8:p(V +), reg r37:V, reg new1:cls, reg r38:V, reg new2:cls, reg r39:V, reg setAs2:cls, reg r40:cls, reg p9:p(V +), reg r42:V, reg as1:cls, reg CB:*, reg CB1:V, reg p10:p(V +), reg r44:V, reg try:cls, reg setAs3:cls, reg r45:cls, reg p11:p(V +), reg r47:V, reg p12:p(V +), reg r49:V |
    mkenv;
    r = clos inner2709779537;
    st setAs = r;
    setClass = ldf setClass;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
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
    check L1() else D1();
  D1():
    deopt 8 [r5];
  L1():
    setClass1 = ldf setClass;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
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
    check L3() else D3();
  D3():
    deopt 16 [r10];
  L3():
    setAs = ldf setAs;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p2 = prom<V +>{
      r11 = clos inner1697196618;
      return r11;
    };
    r13 = dyn setAs("track", "numeric", p2);
    check L5() else D5();
  D5():
    deopt 22 [r13];
  L5():
    new = ldf new;
    check L6() else D6();
  D6():
    deopt 24 [];
  L6():
    p3 = prom<V +>{
      r14 = `:`(1.0, 20.0);
      return r14;
    };
    p4 = prom<V +>{
      r16 = `:`(1.0, 20.0);
      r17 = `^`(r16, 2.0);
      return r17;
    };
    r19 = dyn new[, x, y]("track", p3, p4);
    check L7() else D7();
  D7():
    deopt 30 [r19];
  L7():
    st t1 = r19;
    as = ldf as;
    check L8() else D8();
  D8():
    deopt 33 [];
  L8():
    p5 = prom<V +>{
      t1 = ld t1;
      t2 = force? t1;
      checkMissing(t2);
      return t2;
    };
    r21 = dyn as(p5, "numeric");
    check L9() else D9();
  D9():
    deopt 36 [r21];
  L9():
    setClass2 = ldf setClass;
    check L10() else D10();
  D10():
    deopt 38 [];
  L10():
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c2 = ldf c in base;
      r24 = dyn c2("character", "numeric");
      goto L0(r24);
    L2():
      r22 = dyn base2[a, id]("character", "numeric");
      goto L0(r22);
    };
    r26 = dyn setClass2[, slots]("ca", p6);
    check L11() else D11();
  D11():
    deopt 42 [r26];
  L11():
    setClass3 = ldf setClass;
    check L12() else D12();
  D12():
    deopt 44 [];
  L12():
    p7 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c3 = ldf c in base;
      r29 = dyn c3("character", "numeric");
      goto L0(r29);
    L2():
      r27 = dyn base3[b, id]("character", "numeric");
      goto L0(r27);
    };
    r31 = dyn setClass3[, slots]("cb", p7);
    check L13() else D13();
  D13():
    deopt 48 [r31];
  L13():
    setClass4 = ldf setClass;
    check L14() else D14();
  D14():
    deopt 50 [];
  L14():
    r32 = dyn setClass4("id");
    check L15() else D15();
  D15():
    deopt 52 [r32];
  L15():
    setIs = ldf setIs;
    check L16() else D16();
  D16():
    deopt 54 [];
  L16():
    r33 = dyn setIs("ca", "id");
    check L17() else D17();
  D17():
    deopt 57 [r33];
  L17():
    setIs1 = ldf setIs;
    check L18() else D18();
  D18():
    deopt 59 [];
  L18():
    r34 = dyn setIs1("cb", "id");
    check L19() else D19();
  D19():
    deopt 62 [r34];
  L19():
    setAs1 = ldf setAs;
    check L20() else D20();
  D20():
    deopt 64 [];
  L20():
    p8 = prom<V +>{
      r35 = clos inner1697196618;
      return r35;
    };
    r37 = dyn setAs1("id", "numeric", p8);
    check L21() else D21();
  D21():
    deopt 68 [r37];
  L21():
    new1 = ldf new;
    check L22() else D22();
  D22():
    deopt 70 [];
  L22():
    r38 = dyn new1[, a, id]("ca", "A", 1.0);
    check L23() else D23();
  D23():
    deopt 76 [r38];
  L23():
    st CA = r38;
    new2 = ldf new;
    check L24() else D24();
  D24():
    deopt 79 [];
  L24():
    r39 = dyn new2[, b, id]("cb", "B", 2.0);
    check L25() else D25();
  D25():
    deopt 85 [r39];
  L25():
    st CB = r39;
    setAs2 = ldf setAs;
    check L26() else D26();
  D26():
    deopt 88 [];
  L26():
    p9 = prom<V +>{
      r40 = clos inner838351097;
      return r40;
    };
    r42 = dyn setAs2("cb", "ca", p9);
    check L27() else D27();
  D27():
    deopt 92 [r42];
  L27():
    as1 = ldf as;
    check L28() else D28();
  D28():
    deopt 94 [];
  L28():
    p10 = prom<V +>{
      CB = ld CB;
      CB1 = force? CB;
      checkMissing(CB1);
      return CB1;
    };
    r44 = dyn as1(p10, "numeric");
    check L29() else D29();
  D29():
    deopt 97 [r44];
  L29():
    try = ldf try;
    check L30() else D30();
  D30():
    deopt 99 [];
  L30():
    p12 = prom<V +>{
      setAs3 = ldf setAs;
      p11 = prom<V +>{
        r45 = clos inner1507669653;
        return r45;
      };
      r47 = dyn setAs3("track", "numeric", p11);
      return r47;
    };
    r49 = dyn try(p12);
    check L31() else D31();
  D31():
    deopt 101 [r49];
  L31():
    popenv;
    return r49;
  }
}
fun inner2709779537(from, to, def, replace, where) {
  (reg from:*, reg to:*, reg def:*, reg replace:*, reg where:*) -+> V { var from:*, var to:*, var def:*, var replace:*, reg replace_isMissing:L, reg replace_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg getClassDef:cls, reg from1:*, reg from2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r6:V, reg getClassDef1:cls, reg to1:*, reg to2:V, reg p4:p(V +), reg where3:*, reg where4:V, reg p5:p(V +), reg r9:V, reg possibleExtends:cls, reg from3:*, reg from4:V, reg p6:p(V +), reg to3:*, reg to4:V, reg p7:p(V +), reg fromDef:*, reg fromDef1:V, reg p8:p(V +), reg toDef:*, reg toDef1:V, reg p9:p(V +), reg r14:V, reg is:cls, reg extds:*, reg extds1:V, reg p10:p(V +), reg r16:V, reg c:L, reg __:cls, reg r17:V, reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg replace1:*, reg replace2:V, reg c1:V, reg c2:L, reg __1:cls, reg r20:V, reg setIs:cls, reg from5:*, reg from6:V, reg p11:p(V +), reg to5:*, reg to6:V, reg p12:p(V +), reg test:*, reg test1:V, reg p13:p(V +), reg def1:*, reg def2:V, reg p14:p(V +), reg replace3:*, reg replace4:V, reg p15:p(V +), reg where5:*, reg where6:V, reg p16:p(V +), reg r28:V, reg isTRUE:cls, reg extds2:*, reg extds3:V, reg p17:p(V +), reg r31:V, reg c3:L, reg _identC:cls, reg from7:*, reg from8:V, reg p18:p(V +), reg to7:*, reg to8:V, reg p19:p(V +), reg r34:V, reg c4:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg _class1:cls, reg from9:*, reg from10:V, reg p20:p(V +), reg r36:V, reg p21:p(V +), reg r38:V, reg p22:p(V +), reg r40:V, reg p23:p(V +), reg r42:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r44:V, reg r45:V, reg toDef2:*, reg toDef3:V, reg c5:V, reg c6:L, reg stop1:cls, reg gettextf1:cls, reg dQuote1:cls, reg to9:*, reg to10:V, reg p24:p(V +), reg r47:V, reg p25:p(V +), reg r49:V, reg p26:p(V +), reg r51:V, reg isClassUnion:cls, reg toDef4:*, reg toDef5:V, reg p27:p(V +), reg r54:V, reg c7:L, reg stop2:cls, reg gettextf2:cls, reg dQuote2:cls, reg to11:*, reg to12:V, reg p28:p(V +), reg r56:V, reg p29:p(V +), reg r58:V, reg p30:p(V +), reg r60:V, reg setIs1:cls, reg from11:*, reg from12:V, reg p31:p(V +), reg to13:*, reg to14:V, reg p32:p(V +), reg def3:*, reg def4:V, reg p33:p(V +), reg replace5:*, reg replace6:V, reg p34:p(V +), reg where7:*, reg where8:V, reg p35:p(V +), reg r67:V, reg formalArgs:cls, reg def5:*, reg def6:V, reg p36:p(V +), reg r69:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r70:V, reg r71:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r72:V, reg r73:V, reg args:*, reg args1:V, reg match:cls, reg r74:V, reg is_na:cls, reg r75:V, reg r76:V, reg c8:L, reg args2:*, reg args3:V, reg c9:L, reg args5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r77:V, reg args8:V, reg r78:V, reg args9:*, reg args10:V, reg match1:cls, reg r79:V, reg r80:V, reg __2:cls, reg r81:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r82:V, reg r83:V, reg args11:*, reg args12:V, reg length:cls, reg r84:V, reg r85:V, reg c10:L, reg substituteFunctionArgs:cls, reg def7:*, reg def8:V, reg p37:p(V +), reg r87:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r89:V, reg r90:V, reg args13:*, reg args14:V, reg length1:cls, reg r91:V, reg r92:V, reg c11:L, reg c12:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r93:V, reg c16:L, reg r94:V, reg args15:*, reg args16:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r95:V, reg c19:L, reg r96:V, reg c20:cls, reg r97:V, reg identical:cls, reg r98:V, reg r99:V, reg c21:L, reg c22:V, reg c24:L, reg stop3:cls, reg gettextf3:cls, reg paste:cls, reg formalArgs1:cls, reg def9:*, reg def10:V, reg p38:p(V +), reg r101:V, reg p39:p(V +), reg r103:V, reg p40:p(V +), reg r105:V, reg p41:p(V +), reg r107:V, reg as_list:cls, reg __3:cls, reg r108:V, reg p42:p(V +), reg r110:V, reg to15:*, reg to16:V, reg l:*, reg c25:L, reg to18:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r111:V, reg as_function:cls, reg method:*, reg method1:V, reg p43:p(V +), reg r113:V, reg body:cls, reg def11:*, reg def12:V, reg p44:p(V +), reg r115:V, reg l3:*, reg body__:cls, reg environment:cls, reg def13:*, reg def14:V, reg p45:p(V +), reg r117:V, reg p46:p(V +), reg r119:V, reg setMethod:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r120:V, reg r121:V, reg from13:*, reg from14:V, reg to21:*, reg to22:V, reg c26:cls, reg r122:V, reg p47:p(V +), reg method2:*, reg method3:V, reg p48:p(V +), reg where9:*, reg where10:V, reg p49:p(V +), reg r126:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r127:V, reg r128:V, reg replace7:*, reg replace8:V, reg c27:V, reg r129:V, reg c28:L, reg formalArgs2:cls, reg replace9:*, reg replace10:V, reg p50:p(V +), reg r131:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r132:V, reg r133:V, reg args17:*, reg args18:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r134:V, reg r135:V, reg c29:cls, reg r136:V, reg identical1:cls, reg r137:V, reg c30:L, reg replace11:*, reg replace12:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r138:V, reg r139:V, reg args19:*, reg args20:V, reg length2:cls, reg r140:V, reg r141:V, reg c31:L, reg stop4:cls, reg gettextf4:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r142:V, reg r143:V, reg args21:*, reg args22:V, reg length3:cls, reg r144:V, reg p51:p(V +), reg r146:V, reg p52:p(V +), reg r148:V, reg body1:cls, reg replace14:*, reg replace15:V, reg p53:p(V +), reg r151:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r152:V, reg r153:V, reg args23:*, reg args24:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r154:V, reg r155:V, reg c32:cls, reg r156:V, reg identical2:cls, reg r157:V, reg r158:V, reg c33:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r159:V, reg r160:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r161:V, reg r162:V, reg quote:cls, reg r163:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r164:V, reg r165:V, reg quote1:cls, reg r166:V, reg list:cls, reg r167:V, reg args25:*, reg args26:V, reg l4:*, reg names__:cls, reg r168:V, reg substituteDirect:cls, reg replace16:*, reg replace17:V, reg p54:p(V +), reg ll:*, reg ll1:V, reg p55:p(V +), reg r171:V, reg warning:cls, reg gettextf5:cls, reg paste1:cls, reg deparse:cls, reg replace18:*, reg replace19:V, reg p56:p(V +), reg r173:V, reg p57:p(V +), reg r175:V, reg p58:p(V +), reg r177:V, reg p59:p(V +), reg r179:V, reg eval:cls, reg r181:cls, reg p60:p(V +), reg r183:V, reg replace20:*, reg replace21:V, reg l5:*, reg body__1:cls, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p61:p(V +), reg r185:V, reg setMethod1:cls, reg sym20:cls, reg base20:cls, reg guard20:L, reg r186:V, reg r187:V, reg from15:*, reg from16:V, reg to23:*, reg to24:V, reg c34:cls, reg r188:V, reg p62:p(V +), reg method4:*, reg method5:V, reg p63:p(V +), reg where11:*, reg where12:V, reg p64:p(V +), reg r192:V |
    mkenv;
    st from = from;
    st to = to;
    st def = def;
    replace_isMissing = missing.0(replace);
    if replace_isMissing then L0(NULL) else L0(replace);
  L0(replace_orDefault):
    st replace = replace_orDefault;
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
    getClassDef = ldf getClassDef;
    check L46() else D0();
  D0():
    deopt 1 [];
  L46():
    p2 = prom<V +>{
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      return from2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r6 = dyn getClassDef(p2, p3);
    check L47() else D1();
  D1():
    deopt 4 [r6];
  L47():
    st fromDef = r6;
    getClassDef1 = ldf getClassDef;
    check L48() else D2();
  D2():
    deopt 7 [];
  L48():
    p4 = prom<V +>{
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      return to2;
    };
    p5 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r9 = dyn getClassDef1(p4, p5);
    check L49() else D3();
  D3():
    deopt 10 [r9];
  L49():
    st toDef = r9;
    possibleExtends = ldf possibleExtends;
    check L50() else D4();
  D4():
    deopt 13 [];
  L50():
    p6 = prom<V +>{
      from3 = ld from;
      from4 = force? from3;
      checkMissing(from4);
      return from4;
    };
    p7 = prom<V +>{
      to3 = ld to;
      to4 = force? to3;
      checkMissing(to4);
      return to4;
    };
    p8 = prom<V +>{
      fromDef = ld fromDef;
      fromDef1 = force? fromDef;
      checkMissing(fromDef1);
      return fromDef1;
    };
    p9 = prom<V +>{
      toDef = ld toDef;
      toDef1 = force? toDef;
      checkMissing(toDef1);
      return toDef1;
    };
    r14 = dyn possibleExtends(p6, p7, p8, p9);
    check L51() else D5();
  D5():
    deopt 18 [r14];
  L51():
    st extds = r14;
    is = ldf is;
    check L52() else D6();
  D6():
    deopt 21 [];
  L52():
    p10 = prom<V +>{
      extds = ld extds;
      extds1 = force? extds;
      checkMissing(extds1);
      return extds1;
    };
    r16 = dyn is(p10, "SClassExtension");
    check L53() else D7();
  D7():
    deopt 24 [r16];
  L53():
    c = `as.logical`(r16);
    if c then L54() else L3();
  L3():
    isTRUE = ldf isTRUE;
    check L63() else D11();
  L7():
    formalArgs = ldf formalArgs;
    check L88() else D26();
  L54():
    __ = ldf `@` in base;
    r17 = dyn __(<sym extds>, <sym test>);
    st test = r17;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L55() else L56();
  D11():
    deopt 54 [];
  D26():
    deopt 108 [];
  L4(r19):
    c2 = `as.logical`(r19);
    if c2 then L58() else L5();
  L55():
    replace1 = ld replace;
    check L57() else D8();
  L56():
    r18 = dyn base(<sym replace>);
    goto L4(r18);
  L63():
    p17 = prom<V +>{
      extds2 = ld extds;
      extds3 = force? extds2;
      checkMissing(extds3);
      return extds3;
    };
    r31 = dyn isTRUE(p17);
    check L64() else D12();
  L88():
    p36 = prom<V +>{
      def5 = ld def;
      def6 = force? def5;
      checkMissing(def6);
      return def6;
    };
    r69 = dyn formalArgs(p36);
    check L89() else D27();
  D8():
    deopt 29 [replace1];
  D12():
    deopt 56 [r31];
  D27():
    deopt 110 [r69];
  L5():
    goto L6();
  L6():
    st test = NULL;
    setIs = ldf setIs;
    check L60() else D9();
  L57():
    replace2 = force? replace1;
    checkMissing(replace2);
    c1 = `==`(replace2, NULL);
    goto L4(c1);
  L58():
    __1 = ldf `@` in base;
    r20 = dyn __1(<sym extds>, <sym replace>);
    st replace = r20;
    goto L6();
  L64():
    c3 = `as.logical`(r31);
    if c3 then L65() else L8();
  L89():
    st args = r69;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L90() else L91();
  D9():
    deopt 41 [];
  L8():
    goto L7();
  L16(r71):
    r76 = `!`(r71);
    c8 = `as.logical`(r76);
    if c8 then L97() else L18();
  L60():
    p11 = prom<V +>{
      from5 = ld from;
      from6 = force? from5;
      checkMissing(from6);
      return from6;
    };
    p12 = prom<V +>{
      to5 = ld to;
      to6 = force? to5;
      checkMissing(to6);
      return to6;
    };
    p13 = prom<V +>{
      test = ld test;
      test1 = force? test;
      checkMissing(test1);
      return test1;
    };
    p14 = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    p15 = prom<V +>{
      replace3 = ld replace;
      replace4 = force? replace3;
      checkMissing(replace4);
      return replace4;
    };
    p16 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r28 = dyn setIs[, , test, coerce, replace, where](p11, p12, p13, p14, p15, p16);
    check L61() else D10();
  L65():
    _identC = ldf `.identC`;
    check L66() else D13();
  L90():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L92() else L93();
  L91():
    r70 = dyn base2(<lang match("strict", args)>);
    goto L16(r70);
  D10():
    deopt 52 [r28];
  D13():
    deopt 58 [];
  L17(r73):
    is_na = ldf `is.na` in base;
    r75 = dyn is_na(r73);
    check L96() else D30();
  L18():
    goto L21();
  L21():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L107() else L108();
  L61():
    goto L7();
  L66():
    p18 = prom<V +>{
      from7 = ld from;
      from8 = force? from7;
      checkMissing(from8);
      return from8;
    };
    p19 = prom<V +>{
      to7 = ld to;
      to8 = force? to7;
      checkMissing(to8);
      return to8;
    };
    r34 = dyn _identC(p18, p19);
    check L67() else D14();
  L92():
    args = ld args;
    check L94() else D28();
  L93():
    r72 = dyn base3("strict", <sym args>);
    goto L17(r72);
  L97():
    args2 = ld args;
    check L98() else D31();
  D14():
    deopt 61 [r34];
  D28():
    deopt 117 [args];
  D30():
    deopt 124 [r75];
  D31():
    deopt 126 [args2];
  L22(r83):
    r85 = `==`(r83, 1.0);
    c10 = `as.logical`(r85);
    if c10 then L111() else L23();
  L67():
    c4 = `as.logical`(r34);
    if c4 then L68() else L9();
  L94():
    args1 = force? args;
    checkMissing(args1);
    match = ldf match in base;
    r74 = dyn match("strict", args1, NA_INT, NULL);
    check L95() else D29();
  L96():
    goto L16(r75);
  L98():
    args3 = force? args2;
    checkMissing(args3);
    c9 = `is.object`(args3);
    if c9 then L99() else L100(args3);
  L107():
    args11 = ld args;
    check L109() else D34();
  L108():
    r82 = dyn base5(<sym args>);
    goto L22(r82);
  D29():
    deopt 122 [r74];
  D34():
    deopt 144 [args11];
  L9():
    goto L10();
  L10():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L72() else L73();
  L19(dx1):
    st args = dx1;
    goto L21();
  L23():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L115() else L116();
  L24():
    as_list = ldf `as.list`;
    check L132() else D45();
  L68():
    stop = ldf stop;
    check L69() else D15();
  L95():
    goto L17(r74);
  L99():
    dr = tryDispatchBuiltin.1("[", args3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L101() else L100(dr);
  L100(args5):
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L102() else L103();
  L109():
    args12 = force? args11;
    checkMissing(args12);
    length = ldf length in base;
    r84 = dyn length(args12);
    check L110() else D35();
  L111():
    substituteFunctionArgs = ldf substituteFunctionArgs;
    check L112() else D36();
  D15():
    deopt 63 [];
  D35():
    deopt 147 [r84];
  D36():
    deopt 151 [];
  D45():
    deopt 196 [];
  L11(r45):
    c6 = `as.logical`(r45);
    if c6 then L75() else L12();
  L20(args8, r78):
    r80 = `-`(<missing>, r78);
    __2 = ldf `[` in base;
    r81 = dyn __2(args8, r80);
    goto L19(r81);
  L25(r90):
    r92 = `!=`(r90, 2.0);
    c11 = `as.logical`(r92);
    if c11 then L26(c11) else L119();
  L69():
    p23 = prom<V +>{
      gettextf = ldf gettextf;
      p22 = prom<V +>{
        dQuote = ldf dQuote;
        p21 = prom<V +>{
          _class1 = ldf `.class1`;
          p20 = prom<V +>{
            from9 = ld from;
            from10 = force? from9;
            checkMissing(from10);
            return from10;
          };
          r36 = dyn _class1(p20);
          return r36;
        };
        r38 = dyn dQuote(p21);
        return r38;
      };
      r40 = dyn gettextf("trying to set an 'as' relation from %s to itself", p22);
      return r40;
    };
    r42 = dyn stop[, domain](p23, NA_LGL);
    check L70() else D16();
  L72():
    toDef2 = ld toDef;
    check L74() else D17();
  L73():
    r44 = dyn base1(<sym toDef>);
    goto L11(r44);
  L101():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L102():
    args9 = ld args;
    check L104() else D32();
  L103():
    r77 = dyn base4("strict", <sym args>);
    goto L20(args5, r77);
  L110():
    goto L22(r84);
  L112():
    p37 = prom<V +>{
      def7 = ld def;
      def8 = force? def7;
      checkMissing(def8);
      return def8;
    };
    r87 = dyn substituteFunctionArgs[, , functionName](p37, "from", "coerce");
    check L113() else D37();
  L115():
    args13 = ld args;
    check L117() else D38();
  L116():
    r89 = dyn base6(<sym args>);
    goto L25(r89);
  L132():
    p42 = prom<V +>{
      __3 = ldf `@` in base;
      r108 = dyn __3(<sym coerce>, <sym .Data>);
      return r108;
    };
    r110 = dyn as_list(p42);
    check L133() else D46();
  D16():
    deopt 67 [r42];
  D17():
    deopt 71 [toDef2];
  D32():
    deopt 131 [args5, args9];
  D37():
    deopt 156 [r87];
  D38():
    deopt 160 [args13];
  D46():
    deopt 198 [r110];
  L12():
    goto L13();
  L13():
    isClassUnion = ldf isClassUnion;
    check L79() else D20();
  L26(c12):
    c24 = `as.logical`(c12);
    if c24 then L128() else L29();
  L70():
    goto L10();
  L74():
    toDef3 = force? toDef2;
    checkMissing(toDef3);
    c5 = `==`(toDef3, NULL);
    goto L11(c5);
  L75():
    stop1 = ldf stop;
    check L76() else D18();
  L104():
    args10 = force? args9;
    checkMissing(args10);
    match1 = ldf match in base;
    r79 = dyn match1("strict", args10, NA_INT, NULL);
    check L105() else D33();
  L113():
    st def = r87;
    goto L24();
  L117():
    args14 = force? args13;
    checkMissing(args14);
    length1 = ldf length in base;
    r91 = dyn length1(args14);
    check L118() else D39();
  L119():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L120() else L121();
  L133():
    st method = r110;
    to15 = ld to;
    check L134() else D47();
  D18():
    deopt 75 [];
  D20():
    deopt 83 [];
  D33():
    deopt 136 [args5, r79];
  D39():
    deopt 163 [r91];
  D47():
    deopt 200 [to15];
  L27(c16, r94):
    r99 = `!`(r94);
    c21 = `as.logical`(r99);
    c22 = `||`(c16, c21);
    goto L26(c22);
  L29():
    goto L24();
  L76():
    p26 = prom<V +>{
      gettextf1 = ldf gettextf;
      p25 = prom<V +>{
        dQuote1 = ldf dQuote;
        p24 = prom<V +>{
          to9 = ld to;
          to10 = force? to9;
          checkMissing(to10);
          return to10;
        };
        r47 = dyn dQuote1(p24);
        return r47;
      };
      r49 = dyn gettextf1("class %s is not defined in this environment", p25);
      return r49;
    };
    r51 = dyn stop1[, domain](p26, NA_LGL);
    check L77() else D19();
  L79():
    p27 = prom<V +>{
      toDef4 = ld toDef;
      toDef5 = force? toDef4;
      checkMissing(toDef5);
      return toDef5;
    };
    r54 = dyn isClassUnion(p27);
    check L80() else D21();
  L105():
    goto L20(args5, r79);
  L118():
    goto L25(r91);
  L120():
    args15 = ld args;
    check L122() else D40();
  L121():
    r93 = dyn base7(<sym args>, <lang c("from", "to")>);
    goto L27(c11, r93);
  L128():
    stop3 = ldf stop;
    check L129() else D43();
  L134():
    to16 = force? to15;
    checkMissing(to16);
    l = ld method;
    c25 = `is.object`(l);
    if c25 then L136() else L137(to16, l);
  D19():
    deopt 79 [r51];
  D21():
    deopt 85 [r54];
  D40():
    deopt 168 [c11, args15];
  D43():
    deopt 188 [];
  L77():
    goto L13();
  L80():
    c7 = `as.logical`(r54);
    if c7 then L81() else L14();
  L122():
    args16 = force? args15;
    checkMissing(args16);
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L123() else L124();
  L129():
    p41 = prom<V +>{
      gettextf3 = ldf gettextf;
      p40 = prom<V +>{
        paste = ldf paste;
        p39 = prom<V +>{
          formalArgs1 = ldf formalArgs;
          p38 = prom<V +>{
            def9 = ld def;
            def10 = force? def9;
            checkMissing(def10);
            return def10;
          };
          r101 = dyn formalArgs1(p38);
          return r101;
        };
        r103 = dyn paste[, collapse](p39, ", ");
        return r103;
      };
      r105 = dyn gettextf3("'as' method should have one argument, or match the arguments of coerce(): got  (%s)", p40);
      return r105;
    };
    r107 = dyn stop3[, domain](p41, NA_LGL);
    check L130() else D44();
  L135(dx4):
    st method = dx4;
    as_function = ldf `as.function`;
    check L139() else D48();
  L136():
    dr2 = tryDispatchBuiltin.0("$<-", l, to16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L138() else L137(to16, dr2);
  L137(to18, l2):
    r111 = `$<-`(l2, <sym to>, to16);
    goto L135(r111);
  D44():
    deopt 192 [r107];
  D48():
    deopt 206 [];
  L14():
    goto L15();
  L15():
    setIs1 = ldf setIs;
    check L85() else D24();
  L28(c19, r96):
    identical = ldf identical in base;
    r98 = dyn identical(args16, r96, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L126() else D42();
  L81():
    stop2 = ldf stop;
    check L82() else D22();
  L123():
    c20 = ldf c in base;
    r97 = dyn c20("from", "to");
    check L125() else D41();
  L124():
    r95 = dyn base8("from", "to");
    goto L28(c11, r95);
  L130():
    goto L24();
  L138():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L135(dx3);
  L139():
    p43 = prom<V +>{
      method = ld method;
      method1 = force? method;
      checkMissing(method1);
      return method1;
    };
    r113 = dyn as_function(p43);
    check L140() else D49();
  D22():
    deopt 87 [];
  D24():
    deopt 95 [];
  D41():
    deopt 175 [c11, r97];
  D42():
    deopt 184 [c19, r98];
  D49():
    deopt 208 [r113];
  L82():
    p30 = prom<V +>{
      gettextf2 = ldf gettextf;
      p29 = prom<V +>{
        dQuote2 = ldf dQuote;
        p28 = prom<V +>{
          to11 = ld to;
          to12 = force? to11;
          checkMissing(to12);
          return to12;
        };
        r56 = dyn dQuote2(p28);
        return r56;
      };
      r58 = dyn gettextf2("class %s is a class union: 'coerce' relations to a class union are not meaningful", p29);
      return r58;
    };
    r60 = dyn stop2[, domain](p30, NA_LGL);
    check L83() else D23();
  L85():
    p31 = prom<V +>{
      from11 = ld from;
      from12 = force? from11;
      checkMissing(from12);
      return from12;
    };
    p32 = prom<V +>{
      to13 = ld to;
      to14 = force? to13;
      checkMissing(to14);
      return to14;
    };
    p33 = prom<V +>{
      def3 = ld def;
      def4 = force? def3;
      checkMissing(def4);
      return def4;
    };
    p34 = prom<V +>{
      replace5 = ld replace;
      replace6 = force? replace5;
      checkMissing(replace6);
      return replace6;
    };
    p35 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r67 = dyn setIs1[, , coerce, replace, where](p31, p32, p33, p34, p35);
    check L86() else D25();
  L125():
    goto L28(c11, r97);
  L126():
    goto L27(c19, r98);
  L140():
    st method = r113;
    body = ldf body;
    check L141() else D50();
  D23():
    deopt 91 [r60];
  D25():
    deopt 104 [r67];
  D50():
    deopt 211 [];
  L83():
    goto L15();
  L86():
    goto L7();
  L141():
    p44 = prom<V +>{
      def11 = ld def;
      def12 = force? def11;
      checkMissing(def12);
      return def12;
    };
    r115 = dyn body(p44);
    check L142() else D51();
  D51():
    deopt 213 [r115];
  L142():
    l3 = ld method;
    body__ = ldf `body<-`;
    check L143() else D52();
  D52():
    deopt 215 [r115, l3, r115];
  L143():
    p46 = prom<V +>{
      environment = ldf environment;
      p45 = prom<V +>{
        def13 = ld def;
        def14 = force? def13;
        checkMissing(def14);
        return def14;
      };
      r117 = dyn environment(p45);
      return r117;
    };
    r119 = dyn body__[, , envir, ](l3, NULL, p46, r115);
    check L144() else D53();
  D53():
    deopt 219 [r115, r119];
  L144():
    st method = r119;
    setMethod = ldf setMethod;
    check L145() else D54();
  D54():
    deopt 222 [];
  L145():
    p47 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r121):
      return r121;
    L1():
      from13 = ld from;
      from14 = force? from13;
      checkMissing(from14);
      to21 = ld to;
      to22 = force? to21;
      checkMissing(to22);
      c26 = ldf c in base;
      r122 = dyn c26(from14, to22);
      goto L0(r122);
    L2():
      r120 = dyn base9(<sym from>, <sym to>);
      goto L0(r120);
    };
    p48 = prom<V +>{
      method2 = ld method;
      method3 = force? method2;
      checkMissing(method3);
      return method3;
    };
    p49 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r126 = dyn setMethod[, , , where]("coerce", p47, p48, p49);
    check L146() else D55();
  D55():
    deopt 228 [r126];
  L146():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L147() else L148();
  L30(r128):
    r129 = `!`(r128);
    c28 = `as.logical`(r129);
    if c28 then L150() else L31();
  L147():
    replace7 = ld replace;
    check L149() else D56();
  L148():
    r127 = dyn base10(<sym replace>);
    goto L30(r127);
  D56():
    deopt 230 [replace7];
  L31():
    invisible.0();
    popenv;
    return NULL;
  L149():
    replace8 = force? replace7;
    checkMissing(replace8);
    c27 = `==`(replace8, NULL);
    goto L30(c27);
  L150():
    formalArgs2 = ldf formalArgs;
    check L151() else D57();
  D57():
    deopt 235 [];
  L151():
    p50 = prom<V +>{
      replace9 = ld replace;
      replace10 = force? replace9;
      checkMissing(replace10);
      return replace10;
    };
    r131 = dyn formalArgs2(p50);
    check L152() else D58();
  D58():
    deopt 237 [r131];
  L152():
    st args = r131;
    sym11 = ldf identical;
    base11 = ldf identical in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L153() else L154();
  L32(r133):
    c30 = `as.logical`(r133);
    if c30 then L160() else L34();
  L153():
    args17 = ld args;
    check L155() else D59();
  L154():
    r132 = dyn base11(<sym args>, <lang c("from", "to", "value")>);
    goto L32(r132);
  D59():
    deopt 241 [args17];
  L34():
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L163() else L164();
  L35():
    setMethod1 = ldf setMethod;
    check L201() else D85();
  L155():
    args18 = force? args17;
    checkMissing(args18);
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L156() else L157();
  L160():
    replace11 = ld replace;
    check L161() else D62();
  D62():
    deopt 259 [replace11];
  D85():
    deopt 350 [];
  L33(r135):
    identical1 = ldf identical in base;
    r137 = dyn identical1(args18, r135, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L159() else D61();
  L36(r139):
    r141 = `!=`(r139, 2.0);
    c31 = `as.logical`(r141);
    if c31 then L167() else L37();
  L156():
    c29 = ldf c in base;
    r136 = dyn c29("from", "to", "value");
    check L158() else D60();
  L157():
    r134 = dyn base12("from", "to", "value");
    goto L33(r134);
  L161():
    replace12 = force? replace11;
    checkMissing(replace12);
    st method = replace12;
    goto L35();
  L163():
    args19 = ld args;
    check L165() else D63();
  L164():
    r138 = dyn base13(<sym args>);
    goto L36(r138);
  L201():
    p62 = prom<V +>{
      sym20 = ldf c;
      base20 = ldf c in base;
      guard20 = `==`.4(sym20, base20);
      if guard20 then L1() else L2();
    L0(r187):
      return r187;
    L1():
      from15 = ld from;
      from16 = force? from15;
      checkMissing(from16);
      to23 = ld to;
      to24 = force? to23;
      checkMissing(to24);
      c34 = ldf c in base;
      r188 = dyn c34(from16, to24);
      goto L0(r188);
    L2():
      r186 = dyn base20(<sym from>, <sym to>);
      goto L0(r186);
    };
    p63 = prom<V +>{
      method4 = ld method;
      method5 = force? method4;
      checkMissing(method5);
      return method5;
    };
    p64 = prom<V +>{
      where11 = ld where;
      where12 = force? where11;
      checkMissing(where12);
      return where12;
    };
    r192 = dyn setMethod1[, , , where]("coerce<-", p62, p63, p64);
    check L202() else D86();
  D60():
    deopt 249 [r136];
  D61():
    deopt 258 [r137];
  D63():
    deopt 264 [args19];
  D86():
    deopt 356 [r192];
  L37():
    goto L38();
  L38():
    body1 = ldf body;
    check L171() else D67();
  L158():
    goto L33(r136);
  L159():
    goto L32(r137);
  L165():
    args20 = force? args19;
    checkMissing(args20);
    length2 = ldf length in base;
    r140 = dyn length2(args20);
    check L166() else D64();
  L167():
    stop4 = ldf stop;
    check L168() else D65();
  L202():
    popenv;
    return r192;
  D64():
    deopt 267 [r140];
  D65():
    deopt 271 [];
  D67():
    deopt 279 [];
  L166():
    goto L36(r140);
  L168():
    p52 = prom<V +>{
      gettextf4 = ldf gettextf;
      p51 = prom<V +>{
        sym14 = ldf length;
        base14 = ldf length in base;
        guard14 = `==`.4(sym14, base14);
        if guard14 then L1() else L2();
      L0(r143):
        return r143;
      L1():
        args21 = ld args;
        args22 = force? args21;
        checkMissing(args22);
        length3 = ldf length in base;
        r144 = dyn length3(args22);
        goto L0(r144);
      L2():
        r142 = dyn base14(<sym args>);
        goto L0(r142);
      };
      r146 = dyn gettextf4("a 'replace' method definition in 'setAs' must be a function of two arguments, got %d", p51);
      return r146;
    };
    r148 = dyn stop4[, domain](p52, NA_LGL);
    check L169() else D66();
  L171():
    p53 = prom<V +>{
      replace14 = ld replace;
      replace15 = force? replace14;
      checkMissing(replace15);
      return replace15;
    };
    r151 = dyn body1(p53);
    check L172() else D68();
  D66():
    deopt 275 [r148];
  D68():
    deopt 281 [r151];
  L169():
    goto L38();
  L172():
    st replace = r151;
    sym15 = ldf identical;
    base15 = ldf identical in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L173() else L174();
  L39(r153):
    r158 = `!`(r153);
    c33 = `as.logical`(r158);
    if c33 then L180() else L41();
  L173():
    args23 = ld args;
    check L175() else D69();
  L174():
    r152 = dyn base15(<sym args>, <lang c("from", "value")>);
    goto L39(r152);
  D69():
    deopt 285 [args23];
  L41():
    goto L45();
  L45():
    eval = ldf eval;
    check L196() else D80();
  L175():
    args24 = force? args23;
    checkMissing(args24);
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L176() else L177();
  L180():
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L181() else L182();
  D80():
    deopt 336 [];
  L40(r155):
    identical2 = ldf identical in base;
    r157 = dyn identical2(args24, r155, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L179() else D71();
  L42(r160):
    st ll = r160;
    args25 = ld args;
    check L188() else D73();
  L176():
    c32 = ldf c in base;
    r156 = dyn c32("from", "value");
    check L178() else D70();
  L177():
    r154 = dyn base16("from", "value");
    goto L40(r154);
  L181():
    sym18 = ldf quote;
    base18 = ldf quote in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L183() else L184();
  L182():
    r159 = dyn base17(<lang quote(from)>, <lang quote(value)>);
    goto L42(r159);
  L196():
    p60 = prom<V +>{
      r181 = clos inner1536832960;
      return r181;
    };
    r183 = dyn eval(p60);
    check L197() else D81();
  D70():
    deopt 292 [r156];
  D71():
    deopt 301 [r157];
  D73():
    deopt 314 [args25];
  D81():
    deopt 338 [r183];
  L43(r162):
    sym19 = ldf quote;
    base19 = ldf quote in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L185() else L186();
  L178():
    goto L40(r156);
  L179():
    goto L39(r157);
  L183():
    quote = ldf quote in base;
    r163 = dyn quote(<sym from>);
    goto L43(r163);
  L184():
    r161 = dyn base18(<sym from>);
    goto L43(r161);
  L188():
    args26 = force? args25;
    checkMissing(args26);
    l4 = ld ll;
    names__ = ldf `names<-`;
    check L189() else D74();
  L197():
    st method = r183;
    replace20 = ld replace;
    check L198() else D82();
  D74():
    deopt 317 [args26, l4, args26];
  D82():
    deopt 340 [replace20];
  L44(r165):
    list = ldf list in base;
    r167 = dyn list(r162, r165);
    check L187() else D72();
  L185():
    quote1 = ldf quote in base;
    r166 = dyn quote1(<sym value>);
    goto L44(r166);
  L186():
    r164 = dyn base19(<sym value>);
    goto L44(r164);
  L189():
    r168 = dyn names__(l4, NULL, args26);
    check L190() else D75();
  L198():
    replace21 = force? replace20;
    checkMissing(replace21);
    l5 = ld method;
    body__1 = ldf `body<-`;
    check L199() else D83();
  D72():
    deopt 312 [r167];
  D75():
    deopt 319 [args26, r168];
  D83():
    deopt 343 [replace21, l5, replace21];
  L187():
    goto L42(r167);
  L190():
    st ll = r168;
    substituteDirect = ldf substituteDirect;
    check L191() else D76();
  L199():
    p61 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r185 = dyn body__1[, , envir, ](l5, NULL, p61, replace21);
    check L200() else D84();
  D76():
    deopt 322 [];
  D84():
    deopt 347 [replace21, r185];
  L191():
    p54 = prom<V +>{
      replace16 = ld replace;
      replace17 = force? replace16;
      checkMissing(replace17);
      return replace17;
    };
    p55 = prom<V +>{
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      return ll1;
    };
    r171 = dyn substituteDirect(p54, p55);
    check L192() else D77();
  L200():
    st method = r185;
    goto L35();
  D77():
    deopt 325 [r171];
  L192():
    st replace = r171;
    warning = ldf warning;
    check L193() else D78();
  D78():
    deopt 328 [];
  L193():
    p59 = prom<V +>{
      gettextf5 = ldf gettextf;
      p58 = prom<V +>{
        paste1 = ldf paste;
        p57 = prom<V +>{
          deparse = ldf deparse;
          p56 = prom<V +>{
            replace18 = ld replace;
            replace19 = force? replace18;
            checkMissing(replace19);
            return replace19;
          };
          r173 = dyn deparse(p56);
          return r173;
        };
        r175 = dyn paste1[, sep](p57, "\n    ");
        return r175;
      };
      r177 = dyn gettextf5("argument names in 'replace' changed to agree with 'coerce<-' generic:\n%s", p58);
      return r177;
    };
    r179 = dyn warning[, domain](p59, NA_LGL);
    check L194() else D79();
  D79():
    deopt 332 [r179];
  L194():
    goto L45();
  }
}
fun inner1536832960(from, to, value) {
  (reg from:*, reg to:*, reg value:*) -+> V { var from:*, var to:*, var value:* |
    mkenv;
    st from = from;
    st to = to;
    st value = value;
    popenv;
    return NULL;
  }
}
fun inner1697196618(from) {
  (reg from:*) -+> V { var from:*, reg __:cls, reg r:V |
    mkenv;
    st from = from;
    __ = ldf `@` in base;
    r = dyn __(<sym from>, <sym y>);
    popenv;
    return r;
  }
}
fun inner838351097(from, to) {
  (reg from:*, reg to:*) -+> V { var from:*, var to:*, reg new:cls, reg to1:*, reg to2:V, reg p:p(V +), reg __:cls, reg r1:V, reg p1:p(V +), reg __1:cls, reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st from = from;
    st to = to;
    new = ldf new;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      return to2;
    };
    p1 = prom<V +>{
      __ = ldf `@` in base;
      r1 = dyn __(<sym from>, <sym b>);
      return r1;
    };
    p2 = prom<V +>{
      __1 = ldf `@` in base;
      r3 = dyn __1(<sym from>, <sym id>);
      return r3;
    };
    r5 = dyn new[, a, id](p, p1, p2);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    popenv;
    return r5;
  }
}
fun inner1507669653(x, y, z) {
  (reg x:*, reg y:*, reg z:*) -+> V { var x:*, var y:*, var z:*, reg __:cls, reg r:V |
    mkenv;
    st x = x;
    st y = y;
    st z = z;
    __ = ldf `@` in base;
    r = dyn __(<sym x>, <sym y>);
    popenv;
    return r;
  }
}