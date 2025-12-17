fun main() {
  () -+> V { reg r:cls, reg setClass:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg setClass1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg setClass2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg numeric:cls, reg r17:V, reg matrix:cls, reg r18:V, reg matrix1:cls, reg r19:V, reg list:cls, reg r20:V, reg p3:p(V +), reg r22:V, reg setIs:cls, reg r23:cls, reg p4:p(V +), reg r25:cls, reg p5:p(V +), reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p6:p(V +), reg r31:V, reg setMethod:cls, reg r32:cls, reg p7:p(V +), reg r34:V, reg setMethod1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg c3:cls, reg r37:V, reg p8:p(V +), reg r39:cls, reg p9:p(V +), reg r41:V, reg promptClass:cls, reg stdout:cls, reg r42:V, reg p10:p(V +), reg r44:V, reg promptClass1:cls, reg stdout1:cls, reg r45:V, reg p11:p(V +), reg r47:V, reg removeMethods:cls, reg r48:V |
    mkenv;
    r = clos inner3230511245;
    st promptClass = r;
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
    p3 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      numeric = ldf numeric;
      r17 = dyn numeric();
      matrix = ldf matrix;
      r18 = dyn matrix(0.0, 0.0, 0.0);
      matrix1 = ldf matrix;
      r19 = dyn matrix1(0.0, 0.0, 0.0);
      list = ldf list in base;
      r20 = dyn list(r17, r18, r19);
      goto L0(r20);
    L2():
      r15 = dyn base3[x, y, smooth](<lang numeric()>, <lang matrix(0.0, 0.0, 0.0)>, <lang matrix(0.0, 0.0, 0.0)>);
      goto L0(r15);
    };
    r22 = dyn setClass2[, slots, prototype]("trackMultiCurve", p2, p3);
    check L6() else D5();
  D5():
    deopt 24 [r22];
  L6():
    setIs = ldf setIs;
    check L7() else D6();
  D6():
    deopt 26 [];
  L7():
    p4 = prom<V +>{
      r23 = clos inner1912617395;
      return r23;
    };
    p5 = prom<V +>{
      r25 = clos inner1912617395;
      return r25;
    };
    r27 = dyn setIs[, , test, coerce]("trackMultiCurve", "trackCurve", p4, p5);
    check L8() else D7();
  D7():
    deopt 33 [r27];
  L8():
    sym4 = ldf require;
    base4 = ldf require in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L9() else L10();
  L0():
    setMethod = ldf setMethod;
    check L13() else D10();
  L9():
    require = ldf require;
    check L11() else D8();
  L10():
    r28 = dyn base4(<sym graphics>);
    goto L0();
  D8():
    deopt 36 [];
  D10():
    deopt 40 [];
  L11():
    p6 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r31 = dyn require(p6);
    check L12() else D9();
  L13():
    p7 = prom<V +>{
      r32 = clos inner3924448841;
      return r32;
    };
    r34 = dyn setMethod("plot", "track", p7);
    check L14() else D11();
  D9():
    deopt 38 [r31];
  D11():
    deopt 44 [r34];
  L12():
    goto L0();
  L14():
    setMethod1 = ldf setMethod;
    check L15() else D12();
  D12():
    deopt 46 [];
  L15():
    p8 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      c3 = ldf c in base;
      r37 = dyn c3("trackCurve", "missing");
      goto L0(r37);
    L2():
      r35 = dyn base5("trackCurve", "missing");
      goto L0(r35);
    };
    p9 = prom<V +>{
      r39 = clos inner3924448841;
      return r39;
    };
    r41 = dyn setMethod1("plot", p8, p9);
    check L16() else D13();
  D13():
    deopt 50 [r41];
  L16():
    promptClass = ldf promptClass;
    check L17() else D14();
  D14():
    deopt 52 [];
  L17():
    p10 = prom<V +>{
      stdout = ldf stdout;
      r42 = dyn stdout();
      return r42;
    };
    r44 = dyn promptClass("trackMultiCurve", p10);
    check L18() else D15();
  D15():
    deopt 55 [r44];
  L18():
    promptClass1 = ldf promptClass;
    check L19() else D16();
  D16():
    deopt 57 [];
  L19():
    p11 = prom<V +>{
      stdout1 = ldf stdout;
      r45 = dyn stdout1();
      return r45;
    };
    r47 = dyn promptClass1("track", p11);
    check L20() else D17();
  D17():
    deopt 60 [r47];
  L20():
    removeMethods = ldf removeMethods;
    check L21() else D18();
  D18():
    deopt 62 [];
  L21():
    r48 = dyn removeMethods("plot");
    check L22() else D19();
  D19():
    deopt 64 [r48];
  L22():
    popenv;
    return r48;
  }
}
fun inner3230511245(clName, filename, type, keywords, where, generatorName) {
  (reg clName:*, reg filename:*, reg type:*, reg keywords:*, reg where:*, reg generatorName:*) -+> V { var clName:*, var filename:*, reg filename_isMissing:L, reg filename_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var keywords:*, reg keywords_isMissing:L, reg keywords_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var generatorName:*, reg generatorName_isMissing:L, reg generatorName_orDefault:*, reg clName1:*, reg clName2:V, reg p2:p(V +), reg r5:cls, reg r6:cls, reg r7:cls, reg r8:cls, reg r9:cls, reg r10:cls, reg r11:cls, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg filename1:*, reg filename2:V, reg c:V, reg c1:L, reg paste0:cls, reg ___:cls, reg r14:V, reg r15:cls, reg type1:*, reg type2:V, reg p3:p(V +), reg clName3:*, reg clName4:V, reg p4:p(V +), reg r18:V, reg p5:p(V +), reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg missing:cls, reg r24:V, reg r25:V, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg c7:L, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg c10:L, reg r29:V, reg clName5:*, reg clName6:V, reg getClasses:cls, reg where1:*, reg where2:V, reg p6:p(V +), reg r31:V, reg match:cls, reg r32:V, reg is_na:cls, reg r33:V, reg r34:V, reg c11:L, reg c12:V, reg c14:L, reg where3:*, reg where4:V, reg __:cls, reg r35:V, reg r36:cls, reg classMetaName:cls, reg clName7:*, reg clName8:V, reg p7:p(V +), reg r38:V, reg p8:p(V +), reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg whereClass:*, reg whereClass1:V, reg length:cls, reg r43:V, reg r44:V, reg c15:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg clName9:*, reg clName10:V, reg p9:p(V +), reg r46:V, reg p10:p(V +), reg r48:V, reg p11:p(V +), reg r50:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg r52:V, reg whereClass2:*, reg whereClass3:V, reg length1:cls, reg r53:V, reg r54:V, reg c16:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r55:V, reg r56:V, reg where6:*, reg where7:V, reg topenv1:cls, reg parent_frame1:cls, reg r57:V, reg p12:p(V +), reg r59:V, reg identical:cls, reg r60:V, reg c17:L, reg whereClass4:*, reg whereClass5:V, reg c18:L, reg whereClass7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r61:V, reg warning:cls, reg gettextf1:cls, reg dQuote1:cls, reg clName11:*, reg clName12:V, reg p13:p(V +), reg r63:V, reg p14:p(V +), reg whereClass8:*, reg whereClass9:V, reg p15:p(V +), reg r66:V, reg p16:p(V +), reg r68:V, reg r69:V, reg exists:cls, reg classMetaName1:cls, reg clName13:*, reg clName14:V, reg p17:p(V +), reg r71:V, reg p18:p(V +), reg where8:*, reg where9:V, reg p19:p(V +), reg r74:V, reg c19:L, reg where10:*, reg where11:V, reg stop1:cls, reg sprintf:cls, reg ngettext:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r75:V, reg r76:V, reg whereClass10:*, reg whereClass11:V, reg length2:cls, reg r77:V, reg p20:p(V +), reg r79:V, reg p21:p(V +), reg dQuote2:cls, reg clName15:*, reg clName16:V, reg p22:p(V +), reg r82:V, reg p23:p(V +), reg where12:*, reg where13:V, reg p24:p(V +), reg paste1:cls, reg whereClass12:*, reg whereClass13:V, reg p25:p(V +), reg r86:V, reg p26:p(V +), reg r88:V, reg p27:p(V +), reg r90:V, reg ___1:cls, reg r91:V, reg r92:cls, reg clName17:*, reg clName18:V, reg p28:p(V +), reg r94:V, reg getClass:cls, reg clName19:*, reg clName20:V, reg p29:p(V +), reg whereClass14:*, reg whereClass15:V, reg p30:p(V +), reg r97:V, reg paste2:cls, reg fullName:*, reg fullName1:V, reg p31:p(V +), reg r99:V, reg paste3:cls, reg type3:*, reg type4:V, reg p32:p(V +), reg r101:V, reg paste4:cls, reg fullName2:*, reg fullName3:V, reg p33:p(V +), reg r103:V, reg sprintf1:cls, reg clName21:*, reg clName22:V, reg p34:p(V +), reg r105:V, reg paste5:cls, reg r106:V, reg getSlots:cls, reg clDef:*, reg clDef1:V, reg p35:p(V +), reg r108:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r109:V, reg r110:V, reg slotclasses:*, reg slotclasses1:V, reg names:cls, reg r111:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r112:V, reg r113:V, reg slotclasses2:*, reg slotclasses3:V, reg as_character:cls, reg r114:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r115:V, reg r116:V, reg slotclasses4:*, reg slotclasses5:V, reg length3:cls, reg r117:V, reg paste6:cls, reg clName23:*, reg clName24:V, reg p36:p(V +), reg r119:V, reg isVirtualClass:cls, reg clName25:*, reg clName26:V, reg p37:p(V +), reg r121:V, reg virtualClass:*, reg virtualClass1:V, reg c20:L, reg paste7:cls, reg _usage:*, reg _usage1:V, reg p38:p(V +), reg r123:V, reg exists1:cls, reg generatorName1:*, reg generatorName2:V, reg p39:p(V +), reg where14:*, reg where15:V, reg p40:p(V +), reg r127:V, reg c21:L, reg get:cls, reg generatorName3:*, reg generatorName4:V, reg p41:p(V +), reg where16:*, reg where17:V, reg p42:p(V +), reg r130:V, reg is:cls, reg generator:*, reg generator1:V, reg p43:p(V +), reg r133:V, reg c22:L, reg cleanPrompt:cls, reg generator2:*, reg generator3:V, reg p44:p(V +), reg generatorName5:*, reg generatorName6:V, reg p45:p(V +), reg r136:V, reg _makeCallString:cls, reg generator4:*, reg generator5:V, reg p46:p(V +), reg generatorName7:*, reg generatorName8:V, reg p47:p(V +), reg r139:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r140:V, reg r141:V, reg _alias:*, reg _alias1:V, reg promptGenerator:*, reg promptGenerator1:V, reg c23:L, reg promptGenerator3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r142:V, reg c24:cls, reg r143:V, reg unRematchDefinition:cls, reg selectMethod:cls, reg clName27:*, reg clName28:V, reg p48:p(V +), reg r146:V, reg p49:p(V +), reg r148:V, reg formalArgs:cls, reg initMethod:*, reg initMethod1:V, reg p50:p(V +), reg r150:V, reg clNameQ:*, reg clNameQ1:V, reg l:*, reg c25:L, reg clNameQ3:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ____:cls, reg r151:V, reg _makeCallString1:cls, reg initMethod2:*, reg initMethod3:V, reg p51:p(V +), reg argNames:*, reg argNames1:V, reg p52:p(V +), reg r154:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r155:V, reg r156:V, reg paste8:cls, reg _usage2:*, reg _usage3:V, reg p53:p(V +), reg r158:V, reg paste9:cls, reg callString:*, reg callString1:V, reg p54:p(V +), reg r160:V, reg c26:cls, reg r161:V, reg nslots:*, reg nslots1:V, reg r162:V, reg c27:L, reg slotClassWithSource:cls, reg clName29:*, reg clName30:V, reg p55:p(V +), reg r164:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r165:V, reg r166:V, reg slotclasses6:*, reg slotclasses7:V, reg names1:cls, reg r167:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r168:V, reg r169:V, reg c28:cls, reg r170:V, reg paste10:cls, reg slotnames:*, reg slotnames1:V, reg p56:p(V +), reg slotclasses8:*, reg slotclasses9:V, reg p57:p(V +), reg r173:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r174:V, reg r175:V, reg c29:cls, reg r176:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r177:V, reg r178:V, reg _slots_head:*, reg _slots_head1:V, reg _slots_body:*, reg _slots_body1:V, reg _slots_tail:*, reg _slots_tail1:V, reg c30:cls, reg r179:V, reg r180:V, reg character:cls, reg r181:V, reg __2:cls, reg r182:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r183:V, reg r184:V, reg _extends:*, reg _extends1:V, reg length4:cls, reg r185:V, reg c31:L, reg showExtends:cls, reg _extends2:*, reg _extends3:V, reg p58:p(V +), reg r187:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r188:V, reg r189:V, reg paste11:cls, reg _extends4:*, reg _extends5:V, reg c32:L, reg _extends7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r190:V, reg p59:p(V +), reg gsub:cls, reg _extends8:*, reg _extends9:V, reg c33:L, reg _extends11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r192:V, reg p60:p(V +), reg r194:V, reg p61:p(V +), reg r196:V, reg c34:cls, reg r197:V, reg character1:cls, reg r199:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r200:V, reg r201:V, reg genWithClass:cls, reg clName31:*, reg clName32:V, reg p62:p(V +), reg whereClass16:*, reg whereClass17:V, reg p63:p(V +), reg r204:V, reg length5:cls, reg r205:V, reg nmeths:*, reg nmeths1:V, reg r206:V, reg c35:L, reg nmeths2:*, reg nmeths3:V, reg r207:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c36:L, reg x:V, reg sigsList:cls, reg methnms:*, reg methnms1:V, reg c37:L, reg methnms3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i5:*, reg i6:V, reg __3:cls, reg r208:V, reg p64:p(V +), reg whereClass18:*, reg whereClass19:V, reg p65:p(V +), reg r211:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r212:V, reg i9:I, reg r213:V, reg _sig:*, reg _sig1:V, reg r214:I, reg s1:V, reg l4:I, reg i10:I, reg i11:I, reg i12:I, reg i13:I, reg c38:L, reg x1:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r215:V, reg i22:I, reg i23:I, reg r216:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r217:V, reg i28:I, reg i29:I, reg r218:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r219:V, reg i34:I, reg i35:I, reg r220:V, reg _sig2:*, reg _sig3:V, reg c39:L, reg i38:I, reg i39:I, reg _sig5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i42:I, reg i43:I, reg dx13:V, reg j:*, reg j1:V, reg __4:cls, reg r221:V, reg clName33:*, reg clName34:V, reg match1:cls, reg r222:V, reg is_na1:cls, reg r223:V, reg all:cls, reg r224:V, reg r225:V, reg c40:L, reg escape:cls, reg methnms4:*, reg methnms5:V, reg c41:L, reg methnms7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg i48:*, reg i49:V, reg __5:cls, reg r226:V, reg p66:p(V +), reg r228:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r229:V, reg i54:I, reg i55:I, reg r230:V, reg _meths_body:*, reg _meths_body1:V, reg paste12:cls, reg methn_i:*, reg methn_i1:V, reg p67:p(V +), reg pastePar:cls, reg _sig6:*, reg _sig7:V, reg c42:L, reg _sig9:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg j2:*, reg j3:V, reg __6:cls, reg r232:V, reg p68:p(V +), reg r234:V, reg p69:p(V +), reg r236:V, reg c43:cls, reg r237:V, reg paste13:cls, reg _sig10:*, reg _sig11:V, reg c44:L, reg _sig13:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg j4:*, reg j5:V, reg __7:cls, reg r238:V, reg p70:p(V +), reg r240:V, reg paste14:cls, reg _methAliases:*, reg _methAliases1:V, reg p71:p(V +), reg methn_i2:*, reg methn_i3:V, reg p72:p(V +), reg cur:*, reg cur1:V, reg p73:p(V +), reg r244:V, reg i56:I, reg i57:I, reg sym25:cls, reg base25:cls, reg guard25:L, reg r246:V, reg r247:V, reg _meths_body2:*, reg _meths_body3:V, reg c45:cls, reg r248:V, reg paste15:cls, reg clNameQ6:*, reg clNameQ7:V, reg p74:p(V +), reg r251:V, reg paste16:cls, reg keywords1:*, reg keywords2:V, reg p75:p(V +), reg r253:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r254:V, reg r255:V, reg _name:*, reg _name1:V, reg _type:*, reg _type1:V, reg _alias2:*, reg _alias3:V, reg _methAliases2:*, reg _methAliases3:V, reg _title:*, reg _title1:V, reg _desc:*, reg _desc1:V, reg _usage4:*, reg _usage5:V, reg _slots:*, reg _slots1:V, reg _extends12:*, reg _extends13:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r256:V, reg r257:V, reg _meths_head:*, reg _meths_head1:V, reg _meths_body4:*, reg _meths_body5:V, reg _meths_tail:*, reg _meths_tail1:V, reg c46:cls, reg r258:V, reg paste17:cls, reg r259:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r260:V, reg r261:V, reg paste18:cls, reg r262:V, reg c47:cls, reg r263:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r264:V, reg r265:V, reg paste19:cls, reg r266:V, reg paste20:cls, reg r267:V, reg c48:cls, reg r268:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r269:V, reg r270:V, reg paste21:cls, reg clNameQ8:*, reg clNameQ9:V, reg p76:p(V +), reg r272:V, reg c49:cls, reg r273:V, reg _keywords:*, reg _keywords1:V, reg list:cls, reg r274:V, reg is1:cls, reg clDef2:*, reg clDef3:V, reg p77:p(V +), reg r276:V, reg c50:L, reg refClassPrompt:cls, reg clDef4:*, reg clDef5:V, reg p78:p(V +), reg Rdtxt:*, reg Rdtxt1:V, reg p79:p(V +), reg nmeths4:*, reg nmeths5:V, reg p80:p(V +), reg nslots2:*, reg nslots3:V, reg p81:p(V +), reg _meths_head2:*, reg _meths_head3:V, reg p82:p(V +), reg r282:V, reg is2:cls, reg generator6:*, reg generator7:V, reg p83:p(V +), reg r285:V, reg c51:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r286:V, reg r287:V, reg c52:cls, reg r288:V, reg promptGenerator4:*, reg promptGenerator5:V, reg c53:L, reg promptGenerator7:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg what:*, reg what1:V, reg __8:cls, reg r289:V, reg l5:*, reg c54:L, reg dx23:V, reg l7:*, reg dr22:V, reg dc11:L, reg dx25:V, reg dx26:V, reg dx27:V, reg what2:*, reg what3:V, reg ___2:cls, reg r290:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r291:V, reg r292:V, reg filename3:*, reg filename4:V, reg is_na2:cls, reg r293:V, reg c55:L, reg Rdtxt2:*, reg Rdtxt3:V, reg cat:cls, reg unlist:cls, reg Rdtxt4:*, reg Rdtxt5:V, reg p84:p(V +), reg r297:V, reg p85:p(V +), reg filename5:*, reg filename6:V, reg p86:p(V +), reg r300:V, reg _message:cls, reg _fileDesc:cls, reg filename7:*, reg filename8:V, reg p87:p(V +), reg r302:V, reg p88:p(V +), reg r304:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r305:V, reg r306:V, reg filename9:*, reg filename10:V, reg invisible:cls, reg r307:V |
    mkenv;
    st clName = clName;
    filename_isMissing = missing.0(filename);
    if filename_isMissing then L0(NULL) else L0(filename);
  L0(filename_orDefault):
    st filename = filename_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L1("class") else L1(type);
  L1(type_orDefault):
    st type = type_orDefault;
    keywords_isMissing = missing.0(keywords);
    if keywords_isMissing then L2("classes") else L2(keywords);
  L2(keywords_orDefault):
    st keywords = keywords_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L3() else L4(where);
  L3():
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
    goto L4(p1);
  L4(where_orDefault):
    st where = where_orDefault;
    generatorName_isMissing = missing.0(generatorName);
    if generatorName_isMissing then L5() else L6(generatorName);
  L5():
    p2 = prom<V +>{
      clName1 = ld clName;
      clName2 = force? clName1;
      checkMissing(clName2);
      return clName2;
    };
    goto L6(p2);
  L6(generatorName_orDefault):
    st generatorName = generatorName_orDefault;
    r5 = clos inner1265413865;
    st classInSig = r5;
    r6 = clos inner4201342054;
    st genWithClass = r6;
    r7 = clos inner2770166732;
    st sigsList = r7;
    r8 = clos inner2585040660;
    st slotClassWithSource = r8;
    r9 = clos inner1396911006;
    st cleanPrompt = r9;
    r10 = clos inner2501545716;
    st pastePar = r10;
    r11 = clos inner4259292012;
    st escape = r11;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L78() else L79();
  L7(r13):
    c1 = `as.logical`(r13);
    if c1 then L81() else L8();
  L78():
    filename1 = ld filename;
    check L80() else D0();
  L79():
    r12 = dyn base(<sym filename>);
    goto L7(r12);
  D0():
    deopt 22 [filename1];
  L8():
    goto L9();
  L9():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L85() else L86();
  L80():
    filename2 = force? filename1;
    checkMissing(filename2);
    c = `==`(filename2, NULL);
    goto L7(c);
  L81():
    paste0 = ldf paste0;
    check L82() else D1();
  D1():
    deopt 26 [];
  L10(r23):
    r25 = `!`(r23);
    c2 = `as.logical`(r25);
    if c2 then L87() else L11(c2);
  L82():
    p5 = prom<V +>{
      ___ = ldf `:::`;
      r14 = dyn ___("utils", "topicName");
      checkFun.0(r14);
      r15 = r14 as cls;
      p3 = prom<V +>{
        type1 = ld type;
        type2 = force? type1;
        checkMissing(type2);
        return type2;
      };
      p4 = prom<V +>{
        clName3 = ld clName;
        clName4 = force? clName3;
        checkMissing(clName4);
        return clName4;
      };
      r18 = dyn r15(p3, p4);
      return r18;
    };
    r20 = dyn paste0(p5, ".Rd");
    check L83() else D2();
  L85():
    missing = ldf missing in base;
    r24 = dyn missing(<sym where>);
    goto L10(r24);
  L86():
    r22 = dyn base1(<sym where>);
    goto L10(r22);
  D2():
    deopt 29 [r20];
  L11(c4):
    c14 = `as.logical`(c4);
    if c14 then L98() else L14();
  L83():
    st filename = r20;
    goto L9();
  L87():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L88() else L89();
  L12(c7, r27):
    r34 = `!`(r27);
    c11 = `as.logical`(r34);
    c12 = `&&`(c7, c11);
    goto L11(c12);
  L14():
    __ = ldf `::`;
    check L101() else D9();
  L15():
    ___1 = ldf `:::`;
    check L139() else D30();
  L88():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L90() else L91();
  L89():
    r26 = dyn base2(<lang match(clName, getClasses(where))>);
    goto L12(c2, r26);
  L98():
    where3 = ld where;
    check L99() else D8();
  D8():
    deopt 55 [where3];
  D9():
    deopt 59 [];
  D30():
    deopt 137 [];
  L13(c10, r29):
    is_na = ldf `is.na` in base;
    r33 = dyn is_na(r29);
    check L96() else D7();
  L90():
    clName5 = ld clName;
    check L92() else D3();
  L91():
    r28 = dyn base3(<sym clName>, <lang getClasses(where)>);
    goto L13(c2, r28);
  L99():
    where4 = force? where3;
    checkMissing(where4);
    st whereClass = where4;
    goto L15();
  L101():
    r35 = dyn __("utils", "find");
    check L102() else D10();
  L139():
    r91 = dyn ___1("utils", "topicName");
    check L140() else D31();
  D3():
    deopt 41 [c2, clName5];
  D7():
    deopt 52 [c10, r33];
  D10():
    deopt 62 [r35];
  D31():
    deopt 140 [r91];
  L92():
    clName6 = force? clName5;
    checkMissing(clName6);
    getClasses = ldf getClasses;
    check L93() else D4();
  L96():
    goto L12(c10, r33);
  L102():
    checkFun.0(r35);
    r36 = r35 as cls;
    p8 = prom<V +>{
      classMetaName = ldf classMetaName;
      p7 = prom<V +>{
        clName7 = ld clName;
        clName8 = force? clName7;
        checkMissing(clName8);
        return clName8;
      };
      r38 = dyn classMetaName(p7);
      return r38;
    };
    r40 = dyn r36(p8);
    check L103() else D11();
  L140():
    checkFun.0(r91);
    r92 = r91 as cls;
    p28 = prom<V +>{
      clName17 = ld clName;
      clName18 = force? clName17;
      checkMissing(clName18);
      return clName18;
    };
    r94 = dyn r92("class", p28);
    check L141() else D32();
  D4():
    deopt 44 [c2];
  D11():
    deopt 65 [r40];
  D32():
    deopt 144 [r94];
  L93():
    p6 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r31 = dyn getClasses(p6);
    check L94() else D5();
  L103():
    st whereClass = r40;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L104() else L105();
  L141():
    st fullName = r94;
    getClass = ldf getClass;
    check L142() else D33();
  D5():
    deopt 46 [c2, r31];
  D33():
    deopt 147 [];
  L16(r42):
    r44 = `==`(r42, 0);
    c15 = `as.logical`(r44);
    if c15 then L108() else L17();
  L94():
    match = ldf match in base;
    r32 = dyn match(clName6, r31, NA_INT, NULL);
    check L95() else D6();
  L104():
    whereClass = ld whereClass;
    check L106() else D12();
  L105():
    r41 = dyn base4(<sym whereClass>);
    goto L16(r41);
  L142():
    p29 = prom<V +>{
      clName19 = ld clName;
      clName20 = force? clName19;
      checkMissing(clName20);
      return clName20;
    };
    p30 = prom<V +>{
      whereClass14 = ld whereClass;
      whereClass15 = force? whereClass14;
      checkMissing(whereClass15);
      return whereClass15;
    };
    r97 = dyn getClass[, where](p29, p30);
    check L143() else D34();
  D6():
    deopt 50 [c2, r32];
  D12():
    deopt 69 [whereClass];
  D34():
    deopt 151 [r97];
  L17():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L112() else L113();
  L95():
    goto L13(c2, r32);
  L106():
    whereClass1 = force? whereClass;
    checkMissing(whereClass1);
    length = ldf length in base;
    r43 = dyn length(whereClass1);
    check L107() else D13();
  L108():
    stop = ldf stop;
    check L109() else D14();
  L143():
    st clDef = r97;
    paste2 = ldf paste0;
    check L144() else D35();
  D13():
    deopt 72 [r43];
  D14():
    deopt 76 [];
  D35():
    deopt 154 [];
  L18(r52):
    r54 = `>`(r52, 1);
    c16 = `as.logical`(r54);
    if c16 then L116() else L19();
  L107():
    goto L16(r43);
  L109():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p10 = prom<V +>{
        dQuote = ldf dQuote;
        p9 = prom<V +>{
          clName9 = ld clName;
          clName10 = force? clName9;
          checkMissing(clName10);
          return clName10;
        };
        r46 = dyn dQuote(p9);
        return r46;
      };
      r48 = dyn gettextf("no definition of class %s found", p10);
      return r48;
    };
    r50 = dyn stop[, domain](p11, NA_LGL);
    check L110() else D15();
  L112():
    whereClass2 = ld whereClass;
    check L114() else D16();
  L113():
    r51 = dyn base5(<sym whereClass>);
    goto L18(r51);
  L144():
    p31 = prom<V +>{
      fullName = ld fullName;
      fullName1 = force? fullName;
      checkMissing(fullName1);
      return fullName1;
    };
    r99 = dyn paste2("\\name{", p31, "}");
    check L145() else D36();
  D15():
    deopt 80 [r50];
  D16():
    deopt 83 [whereClass2];
  D36():
    deopt 158 [r99];
  L19():
    goto L15();
  L110():
    goto L15();
  L114():
    whereClass3 = force? whereClass2;
    checkMissing(whereClass3);
    length1 = ldf length in base;
    r53 = dyn length1(whereClass3);
    check L115() else D17();
  L116():
    sym6 = ldf identical;
    base6 = ldf identical in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L117() else L118();
  L145():
    st `.name` = r99;
    paste3 = ldf paste0;
    check L146() else D37();
  D17():
    deopt 86 [r53];
  D37():
    deopt 161 [];
  L20(r56):
    c17 = `as.logical`(r56);
    if c17 then L123() else L21();
  L115():
    goto L18(r53);
  L117():
    where6 = ld where;
    check L119() else D18();
  L118():
    r55 = dyn base6(<sym where>, <lang topenv(parent.frame())>);
    goto L20(r55);
  L146():
    p32 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    r101 = dyn paste3("\\docType{", p32, "}");
    check L147() else D38();
  D18():
    deopt 91 [where6];
  D38():
    deopt 165 [r101];
  L21():
    exists = ldf exists;
    check L131() else D25();
  L23(r69):
    goto L15();
  L119():
    where7 = force? where6;
    checkMissing(where7);
    topenv1 = ldf topenv;
    check L120() else D19();
  L123():
    whereClass4 = ld whereClass;
    check L124() else D22();
  L147():
    st `.type` = r101;
    paste4 = ldf paste0;
    check L148() else D39();
  D19():
    deopt 94 [];
  D22():
    deopt 106 [whereClass4];
  D25():
    deopt 119 [];
  D39():
    deopt 168 [];
  L120():
    p12 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r57 = dyn parent_frame1();
      return r57;
    };
    r59 = dyn topenv1(p12);
    check L121() else D20();
  L124():
    whereClass5 = force? whereClass4;
    checkMissing(whereClass5);
    c18 = `is.object`(whereClass5);
    if c18 then L125() else L126(whereClass5);
  L131():
    p18 = prom<V +>{
      classMetaName1 = ldf classMetaName;
      p17 = prom<V +>{
        clName13 = ld clName;
        clName14 = force? clName13;
        checkMissing(clName14);
        return clName14;
      };
      r71 = dyn classMetaName1(p17);
      return r71;
    };
    p19 = prom<V +>{
      where8 = ld where;
      where9 = force? where8;
      checkMissing(where9);
      return where9;
    };
    r74 = dyn exists[, , inherits](p18, p19, FALSE);
    check L132() else D26();
  L148():
    p33 = prom<V +>{
      fullName2 = ld fullName;
      fullName3 = force? fullName2;
      checkMissing(fullName3);
      return fullName3;
    };
    r103 = dyn paste4("\\alias{", p33, "}");
    check L149() else D40();
  D20():
    deopt 96 [r59];
  D26():
    deopt 124 [r74];
  D40():
    deopt 172 [r103];
  L22(dx1):
    st whereClass = dx1;
    warning = ldf warning;
    check L128() else D23();
  L121():
    identical = ldf identical in base;
    r60 = dyn identical(where7, r59, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L122() else D21();
  L125():
    dr = tryDispatchBuiltin.1("[[", whereClass5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L127() else L126(dr);
  L126(whereClass7):
    __1 = ldf `[[` in base;
    r61 = dyn __1(whereClass7, 1);
    goto L22(r61);
  L132():
    c19 = `as.logical`(r74);
    if c19 then L133() else L24();
  L149():
    st `.alias` = r103;
    sprintf1 = ldf sprintf;
    check L150() else D41();
  D21():
    deopt 105 [r60];
  D23():
    deopt 113 [];
  D41():
    deopt 175 [];
  L24():
    stop1 = ldf stop;
    check L136() else D28();
  L122():
    goto L20(r60);
  L127():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(dx);
  L128():
    p16 = prom<V +>{
      gettextf1 = ldf gettextf;
      p14 = prom<V +>{
        dQuote1 = ldf dQuote;
        p13 = prom<V +>{
          clName11 = ld clName;
          clName12 = force? clName11;
          checkMissing(clName12);
          return clName12;
        };
        r63 = dyn dQuote1(p13);
        return r63;
      };
      p15 = prom<V +>{
        whereClass8 = ld whereClass;
        whereClass9 = force? whereClass8;
        checkMissing(whereClass9);
        return whereClass9;
      };
      r66 = dyn gettextf1("multiple definitions of %s found; using the one on %s", p14, p15);
      return r66;
    };
    r68 = dyn warning[, domain](p16, NA_LGL);
    check L129() else D24();
  L133():
    where10 = ld where;
    check L134() else D27();
  L150():
    p34 = prom<V +>{
      clName21 = ld clName;
      clName22 = force? clName21;
      checkMissing(clName22);
      return clName22;
    };
    r105 = dyn sprintf1("\\title{Class \\code{\"%s\"}}", p34);
    check L151() else D42();
  D24():
    deopt 117 [r68];
  D27():
    deopt 125 [where10];
  D28():
    deopt 129 [];
  D42():
    deopt 178 [r105];
  L129():
    goto L23(r68);
  L134():
    where11 = force? where10;
    checkMissing(where11);
    st whereClass = where11;
    goto L23(where11);
  L136():
    p27 = prom<V +>{
      sprintf = ldf sprintf;
      p21 = prom<V +>{
        ngettext = ldf ngettext;
        p20 = prom<V +>{
          sym7 = ldf length;
          base7 = ldf length in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L1() else L2();
        L0(r76):
          return r76;
        L1():
          whereClass10 = ld whereClass;
          whereClass11 = force? whereClass10;
          checkMissing(whereClass11);
          length2 = ldf length in base;
          r77 = dyn length2(whereClass11);
          goto L0(r77);
        L2():
          r75 = dyn base7(<sym whereClass>);
          goto L0(r75);
        };
        r79 = dyn ngettext(p20, "no definition of class %s in the specified position, %s, definition on : %s", "no definition of class %s in the specified position, %s, definitions on : %s");
        return r79;
      };
      p23 = prom<V +>{
        dQuote2 = ldf dQuote;
        p22 = prom<V +>{
          clName15 = ld clName;
          clName16 = force? clName15;
          checkMissing(clName16);
          return clName16;
        };
        r82 = dyn dQuote2(p22);
        return r82;
      };
      p24 = prom<V +>{
        where12 = ld where;
        where13 = force? where12;
        checkMissing(where13);
        return where13;
      };
      p26 = prom<V +>{
        paste1 = ldf paste;
        p25 = prom<V +>{
          whereClass12 = ld whereClass;
          whereClass13 = force? whereClass12;
          checkMissing(whereClass13);
          return whereClass13;
        };
        r86 = dyn paste1[, collapse](p25, ", ");
        return r86;
      };
      r88 = dyn sprintf(p21, p23, p24, p26);
      return r88;
    };
    r90 = dyn stop1[, domain](p27, NA_LGL);
    check L137() else D29();
  L151():
    st `.title` = r105;
    paste5 = ldf paste0;
    check L152() else D43();
  D29():
    deopt 133 [r90];
  D43():
    deopt 181 [];
  L137():
    goto L23(r90);
  L152():
    r106 = dyn paste5("\\description{", "\n%%  ~~ A concise (1-5 lines) description of what the class is. ~~", "\n}");
    check L153() else D44();
  D44():
    deopt 185 [r106];
  L153():
    st `.desc` = r106;
    getSlots = ldf getSlots;
    check L154() else D45();
  D45():
    deopt 188 [];
  L154():
    p35 = prom<V +>{
      clDef = ld clDef;
      clDef1 = force? clDef;
      checkMissing(clDef1);
      return clDef1;
    };
    r108 = dyn getSlots(p35);
    check L155() else D46();
  D46():
    deopt 190 [r108];
  L155():
    st slotclasses = r108;
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L156() else L157();
  L25(r110):
    st slotnames = r110;
    sym9 = ldf `as.character`;
    base9 = ldf `as.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L160() else L161();
  L156():
    slotclasses = ld slotclasses;
    check L158() else D47();
  L157():
    r109 = dyn base8(<sym slotclasses>);
    goto L25(r109);
  D47():
    deopt 194 [slotclasses];
  L26(r113):
    st slotclasses = r113;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L164() else L165();
  L158():
    slotclasses1 = force? slotclasses;
    checkMissing(slotclasses1);
    names = ldf names in base;
    r111 = dyn names(slotclasses1);
    check L159() else D48();
  L160():
    slotclasses2 = ld slotclasses;
    check L162() else D49();
  L161():
    r112 = dyn base9(<sym slotclasses>);
    goto L26(r112);
  D48():
    deopt 197 [r111];
  D49():
    deopt 201 [slotclasses2];
  L27(r116):
    st nslots = r116;
    paste6 = ldf paste0;
    check L168() else D53();
  L159():
    goto L25(r111);
  L162():
    slotclasses3 = force? slotclasses2;
    checkMissing(slotclasses3);
    as_character = ldf `as.character` in base;
    r114 = dyn as_character(slotclasses3);
    check L163() else D50();
  L164():
    slotclasses4 = ld slotclasses;
    check L166() else D51();
  L165():
    r115 = dyn base10(<sym slotclasses>);
    goto L27(r115);
  D50():
    deopt 204 [r114];
  D51():
    deopt 208 [slotclasses4];
  D53():
    deopt 214 [];
  L163():
    goto L26(r114);
  L166():
    slotclasses5 = force? slotclasses4;
    checkMissing(slotclasses5);
    length3 = ldf length in base;
    r117 = dyn length3(slotclasses5);
    check L167() else D52();
  L168():
    p36 = prom<V +>{
      clName23 = ld clName;
      clName24 = force? clName23;
      checkMissing(clName24);
      return clName24;
    };
    r119 = dyn paste6("\"", p36, "\"");
    check L169() else D54();
  D52():
    deopt 211 [r117];
  D54():
    deopt 218 [r119];
  L167():
    goto L27(r117);
  L169():
    st clNameQ = r119;
    st `.usage` = "\\section{Objects from the Class}";
    isVirtualClass = ldf isVirtualClass;
    check L170() else D55();
  D55():
    deopt 224 [];
  L170():
    p37 = prom<V +>{
      clName25 = ld clName;
      clName26 = force? clName25;
      checkMissing(clName26);
      return clName26;
    };
    r121 = dyn isVirtualClass(p37);
    check L171() else D56();
  D56():
    deopt 226 [r121];
  L171():
    st virtualClass = r121;
    virtualClass = ld virtualClass;
    check L172() else D57();
  D57():
    deopt 228 [virtualClass];
  L172():
    virtualClass1 = force? virtualClass;
    checkMissing(virtualClass1);
    c20 = `as.logical`(virtualClass1);
    if c20 then L173() else L28();
  L28():
    exists1 = ldf exists;
    check L177() else D60();
  L29():
    nslots = ld nslots;
    check L217() else D85();
  L173():
    paste7 = ldf paste0;
    check L174() else D58();
  D58():
    deopt 231 [];
  D60():
    deopt 240 [];
  D85():
    deopt 326 [nslots];
  L174():
    p38 = prom<V +>{
      _usage = ld `.usage`;
      _usage1 = force? _usage;
      checkMissing(_usage1);
      return _usage1;
    };
    r123 = dyn paste7(p38, "{A virtual Class: No objects may be created from it.}");
    check L175() else D59();
  L177():
    p39 = prom<V +>{
      generatorName1 = ld generatorName;
      generatorName2 = force? generatorName1;
      checkMissing(generatorName2);
      return generatorName2;
    };
    p40 = prom<V +>{
      where14 = ld where;
      where15 = force? where14;
      checkMissing(where15);
      return where15;
    };
    r127 = dyn exists1[, , inherits](p39, p40, FALSE);
    check L178() else D61();
  L217():
    nslots1 = force? nslots;
    checkMissing(nslots1);
    r162 = `>`(nslots1, 0.0);
    c27 = `as.logical`(r162);
    if c27 then L218() else L37();
  D59():
    deopt 234 [r123];
  D61():
    deopt 245 [r127];
  L37():
    character = ldf character;
    check L240() else D98();
  L42(r180):
    st `.slots` = r180;
    __2 = ldf `@` in base;
    r182 = dyn __2(<sym clDef>, <sym contains>);
    st `.extends` = r182;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L242() else L243();
  L175():
    st `.usage` = r123;
    st generator = NULL;
    goto L29();
  L178():
    c21 = `as.logical`(r127);
    if c21 then L179() else L30();
  L218():
    slotClassWithSource = ldf slotClassWithSource;
    check L219() else D86();
  D86():
    deopt 331 [];
  D98():
    deopt 377 [];
  L30():
    st generator = NULL;
    goto L31();
  L31():
    is = ldf is;
    check L183() else D64();
  L43(r184):
    c31 = `as.logical`(r184);
    if c31 then L246() else L44();
  L179():
    get = ldf get;
    check L180() else D62();
  L219():
    p55 = prom<V +>{
      clName29 = ld clName;
      clName30 = force? clName29;
      checkMissing(clName30);
      return clName30;
    };
    r164 = dyn slotClassWithSource(p55);
    check L220() else D87();
  L240():
    r181 = dyn character();
    check L241() else D99();
  L242():
    _extends = ld `.extends`;
    check L244() else D100();
  L243():
    r183 = dyn base17(<sym .extends>);
    goto L43(r183);
  D62():
    deopt 247 [];
  D64():
    deopt 258 [];
  D87():
    deopt 333 [r164];
  D99():
    deopt 378 [r181];
  D100():
    deopt 385 [_extends];
  L44():
    character1 = ldf character;
    check L255() else D107();
  L46():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L257() else L258();
  L180():
    p41 = prom<V +>{
      generatorName3 = ld generatorName;
      generatorName4 = force? generatorName3;
      checkMissing(generatorName4);
      return generatorName4;
    };
    p42 = prom<V +>{
      where16 = ld where;
      where17 = force? where16;
      checkMissing(where17);
      return where17;
    };
    r130 = dyn get[, , inherits](p41, p42, FALSE);
    check L181() else D63();
  L183():
    p43 = prom<V +>{
      generator = ld generator;
      generator1 = force? generator;
      checkMissing(generator1);
      return generator1;
    };
    r133 = dyn is(p43, "classGeneratorFunction");
    check L184() else D65();
  L220():
    st slotclasses = r164;
    sym13 = ldf names;
    base13 = ldf names in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L221() else L222();
  L241():
    goto L42(r181);
  L244():
    _extends1 = force? _extends;
    checkMissing(_extends1);
    length4 = ldf length in base;
    r185 = dyn length4(_extends1);
    check L245() else D101();
  L246():
    showExtends = ldf showExtends;
    check L247() else D102();
  D63():
    deopt 252 [r130];
  D65():
    deopt 261 [r133];
  D101():
    deopt 388 [r185];
  D102():
    deopt 390 [];
  D107():
    deopt 412 [];
  L38(r166):
    st slotnames = r166;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L225() else L226();
  L47(r201):
    st nmeths = r201;
    st `.meths.head` = "\\section{Methods}{";
    st `.methAliases` = "";
    nmeths = ld nmeths;
    check L262() else D112();
  L181():
    st generator = r130;
    goto L31();
  L184():
    c22 = `as.logical`(r133);
    if c22 then L185() else L32();
  L221():
    slotclasses6 = ld slotclasses;
    check L223() else D88();
  L222():
    r165 = dyn base13(<sym slotclasses>);
    goto L38(r165);
  L245():
    goto L43(r185);
  L247():
    p58 = prom<V +>{
      _extends2 = ld `.extends`;
      _extends3 = force? _extends2;
      checkMissing(_extends3);
      return _extends3;
    };
    r187 = dyn showExtends[, printTo](p58, FALSE);
    check L248() else D103();
  L255():
    r199 = dyn character1();
    check L256() else D108();
  L257():
    genWithClass = ldf genWithClass;
    check L259() else D109();
  L258():
    r200 = dyn base19(<lang `<-`(methnms, genWithClass(clName, where=whereClass))>);
    goto L47(r200);
  D88():
    deopt 337 [slotclasses6];
  D103():
    deopt 394 [r187];
  D108():
    deopt 413 [r199];
  D109():
    deopt 418 [];
  D112():
    deopt 433 [nmeths];
  L32():
    unRematchDefinition = ldf unRematchDefinition;
    check L200() else D73();
  L34():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L210() else L211();
  L39(r169):
    st `.slots.head` = r169;
    paste10 = ldf paste0;
    check L228() else D91();
  L185():
    cleanPrompt = ldf cleanPrompt;
    check L186() else D66();
  L223():
    slotclasses7 = force? slotclasses6;
    checkMissing(slotclasses7);
    names1 = ldf names in base;
    r167 = dyn names1(slotclasses7);
    check L224() else D89();
  L225():
    c28 = ldf c in base;
    r170 = dyn c28("\\section{Slots}{", "  \\describe{");
    check L227() else D90();
  L226():
    r168 = dyn base14("\\section{Slots}{", "  \\describe{");
    goto L39(r168);
  L248():
    st `.extends` = r187;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L249() else L250();
  L256():
    st `.extends` = r199;
    goto L46();
  L259():
    p62 = prom<V +>{
      clName31 = ld clName;
      clName32 = force? clName31;
      checkMissing(clName32);
      return clName32;
    };
    p63 = prom<V +>{
      whereClass16 = ld whereClass;
      whereClass17 = force? whereClass16;
      checkMissing(whereClass17);
      return whereClass17;
    };
    r204 = dyn genWithClass[, where](p62, p63);
    check L260() else D110();
  L262():
    nmeths1 = force? nmeths;
    checkMissing(nmeths1);
    r206 = `>`(nmeths1, 0.0);
    c35 = `as.logical`(r206);
    if c35 then L263() else L48();
  D66():
    deopt 263 [];
  D73():
    deopt 285 [];
  D89():
    deopt 340 [r167];
  D90():
    deopt 347 [r170];
  D91():
    deopt 350 [];
  D110():
    deopt 422 [r204];
  L36(r156):
    st `.usage` = r156;
    goto L29();
  L45(r189):
    st `.extends` = r189;
    goto L46();
  L48():
    st `.meths.head` = "\\section{Methods}{";
    paste15 = ldf paste;
    check L306() else D135();
  L62():
    st `.meths.tail` = "}";
    paste16 = ldf paste0;
    check L308() else D137();
  L186():
    p44 = prom<V +>{
      generator2 = ld generator;
      generator3 = force? generator2;
      checkMissing(generator3);
      return generator3;
    };
    p45 = prom<V +>{
      generatorName5 = ld generatorName;
      generatorName6 = force? generatorName5;
      checkMissing(generatorName6);
      return generatorName6;
    };
    r136 = dyn cleanPrompt(p44, p45);
    check L187() else D67();
  L200():
    p49 = prom<V +>{
      selectMethod = ldf selectMethod;
      p48 = prom<V +>{
        clName27 = ld clName;
        clName28 = force? clName27;
        checkMissing(clName28);
        return clName28;
      };
      r146 = dyn selectMethod("initialize", p48);
      return r146;
    };
    r148 = dyn unRematchDefinition(p49);
    check L201() else D74();
  L210():
    paste8 = ldf paste0;
    check L212() else D80();
  L211():
    r155 = dyn base12(<lang paste0(.usage, "{")>, <lang paste0("Objects can be created by calls of the form \\code{", callString, "}.")>, "%%  ~~ describe objects here ~~ ", "}");
    goto L36(r155);
  L224():
    goto L38(r167);
  L227():
    goto L39(r170);
  L228():
    p56 = prom<V +>{
      slotnames = ld slotnames;
      slotnames1 = force? slotnames;
      checkMissing(slotnames1);
      return slotnames1;
    };
    p57 = prom<V +>{
      slotclasses8 = ld slotclasses;
      slotclasses9 = force? slotclasses8;
      checkMissing(slotclasses9);
      return slotclasses9;
    };
    r173 = dyn paste10("    \\item{\\code{", p56, "}:}", "{Object of class \\code{", p57, "} ~~ }");
    check L229() else D92();
  L249():
    paste11 = ldf paste0;
    check L251() else D104();
  L250():
    r188 = dyn base18("\\section{Extends}{", <lang paste0("Class \\code{\"\\linkS4class{", `$`(.extends, what), "}\"}, ", gsub("^(by class) (\".*\")$", "\\1 \\\\code{\\2}", `$`(.extends, how)), ".")>, "}");
    goto L45(r188);
  L260():
    st methnms = r204;
    length5 = ldf length in base;
    r205 = dyn length5(r204);
    check L261() else D111();
  L263():
    st `.meths.body` = "  \\describe{";
    nmeths2 = ld nmeths;
    check L264() else D113();
  D67():
    deopt 266 [r136];
  D74():
    deopt 287 [r148];
  D80():
    deopt 311 [];
  D92():
    deopt 357 [r173];
  D104():
    deopt 400 [];
  D111():
    deopt 425 [r205];
  D113():
    deopt 441 [1, nmeths2];
  D135():
    deopt 534 [];
  D137():
    deopt 544 [];
  L187():
    st promptGenerator = r136;
    _makeCallString = ldf `.makeCallString`;
    check L188() else D68();
  L201():
    st initMethod = r148;
    formalArgs = ldf formalArgs;
    check L202() else D75();
  L212():
    p53 = prom<V +>{
      _usage2 = ld `.usage`;
      _usage3 = force? _usage2;
      checkMissing(_usage3);
      return _usage3;
    };
    r158 = dyn paste8(p53, "{");
    check L213() else D81();
  L229():
    st `.slots.body` = r173;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L230() else L231();
  L251():
    p59 = prom<V +>{
      _extends4 = ld `.extends`;
      _extends5 = force? _extends4;
      checkMissing(_extends5);
      c32 = `is.object`(_extends5);
      if c32 then L1() else L2(_extends5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", _extends5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(_extends7):
      r190 = `$`(_extends7, <sym what>);
      goto L0(r190);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p61 = prom<V +>{
      gsub = ldf gsub;
      p60 = prom<V +>{
        _extends8 = ld `.extends`;
        _extends9 = force? _extends8;
        checkMissing(_extends9);
        c33 = `is.object`(_extends9);
        if c33 then L1() else L2(_extends9);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("$", _extends9);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(_extends11):
        r192 = `$`(_extends11, <sym how>);
        goto L0(r192);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r194 = dyn gsub("^(by class) (\".*\")$", "\\1 \\\\code{\\2}", p60);
      return r194;
    };
    r196 = dyn paste11("Class \\code{\"\\linkS4class{", p59, "}\"}, ", p61, ".");
    check L252() else D105();
  L261():
    goto L47(r205);
  L264():
    nmeths3 = force? nmeths2;
    checkMissing(nmeths3);
    r207 = `:`(1, nmeths3);
    s = toForSeq(r207);
    l3 = length(s);
    i = 0;
    goto L49(i);
  L306():
    p74 = prom<V +>{
      clNameQ6 = ld clNameQ;
      clNameQ7 = force? clNameQ6;
      checkMissing(clNameQ7);
      return clNameQ7;
    };
    r251 = dyn paste15("No methods defined with class", p74, "in the signature.");
    check L307() else D136();
  L308():
    p75 = prom<V +>{
      keywords1 = ld keywords;
      keywords2 = force? keywords1;
      checkMissing(keywords2);
      return keywords2;
    };
    r253 = dyn paste16("\\keyword{", p75, "}");
    check L309() else D138();
  D68():
    deopt 269 [];
  D75():
    deopt 290 [];
  D81():
    deopt 314 [r158];
  D105():
    deopt 406 [r196];
  D136():
    deopt 538 [r251];
  D138():
    deopt 548 [r253];
  L40(r175):
    st `.slots.tail` = r175;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L233() else L234();
  L49(i1):
    i2 = `+`.1(i1, 1);
    c36 = `<`.1(l3, i2);
    if c36 then L265() else L60();
  L188():
    p46 = prom<V +>{
      generator4 = ld generator;
      generator5 = force? generator4;
      checkMissing(generator5);
      return generator5;
    };
    p47 = prom<V +>{
      generatorName7 = ld generatorName;
      generatorName8 = force? generatorName7;
      checkMissing(generatorName8);
      return generatorName8;
    };
    r139 = dyn _makeCallString(p46, p47);
    check L189() else D69();
  L202():
    p50 = prom<V +>{
      initMethod = ld initMethod;
      initMethod1 = force? initMethod;
      checkMissing(initMethod1);
      return initMethod1;
    };
    r150 = dyn formalArgs(p50);
    check L203() else D76();
  L213():
    paste9 = ldf paste0;
    check L214() else D82();
  L230():
    c29 = ldf c in base;
    r176 = dyn c29("  }", "}");
    check L232() else D93();
  L231():
    r174 = dyn base15("  }", "}");
    goto L40(r174);
  L252():
    c34 = ldf c in base;
    r197 = dyn c34("\\section{Extends}{", r196, "}");
    check L253() else D106();
  L307():
    st `.meths.body` = r251;
    goto L62();
  L309():
    st `.keywords` = r253;
    sym26 = ldf list;
    base26 = ldf list in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L310() else L311();
  D69():
    deopt 272 [r139];
  D76():
    deopt 292 [r150];
  D82():
    deopt 316 [];
  D93():
    deopt 364 [r176];
  D106():
    deopt 409 [r197];
  L41(r178):
    goto L42(r178);
  L60():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sigsList = ldf sigsList;
    check L266() else D114();
  L63(r255):
    st Rdtxt = r255;
    is1 = ldf is;
    check L348() else D167();
  L189():
    st callString = r139;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L190() else L191();
  L203():
    st argNames = r150;
    clNameQ = ld clNameQ;
    check L204() else D77();
  L214():
    p54 = prom<V +>{
      callString = ld callString;
      callString1 = force? callString;
      checkMissing(callString1);
      return callString1;
    };
    r160 = dyn paste9("Objects can be created by calls of the form \\code{", p54, "}.");
    check L215() else D83();
  L232():
    goto L40(r176);
  L233():
    _slots_head = ld `.slots.head`;
    check L235() else D94();
  L234():
    r177 = dyn base16(<sym .slots.head>, <sym .slots.body>, <sym .slots.tail>);
    goto L41(r177);
  L253():
    goto L45(r197);
  L265():
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L301() else L302();
  L310():
    _name = ld `.name`;
    check L312() else D139();
  L311():
    r254 = dyn base26[name, type, aliases, methAliases, title, description, `section{Objects from the Class}`, `section{Slots}`, `section{Extends}`, `section{Methods}`, references, author, note, seealso, examples, keywords](<sym .name>, <sym .type>, <sym .alias>, <sym .methAliases>, <sym .title>, <sym .desc>, <sym .usage>, <sym .slots>, <sym .extends>, <lang c(.meths.head, .meths.body, .meths.tail)>, <lang paste("\\references{\n%%  ~~put references to the", "literature/web site here~~\n}")>, "\\author{\n%%  ~~who you are~~\n}", <lang c("\\note{\n%%  ~~further notes~~\n}", "", paste("%% ~Make other sections like Warning with", "\\section{Warning }{....} ~"), "")>, <lang c("\\seealso{", paste("%%  ~~objects to See Also as", "\\code{\\link{~~fun~~}}, ~~~"), paste("%%  ~~or \\code{\\linkS4class{CLASSNAME}}", "for links to other classes ~~~"), "}")>, <lang c("\\examples{", paste0("showClass(", clNameQ, ")"), "}")>, <sym .keywords>);
    goto L63(r254);
  D77():
    deopt 294 [clNameQ];
  D83():
    deopt 320 [r160];
  D94():
    deopt 368 [_slots_head];
  D114():
    deopt 445 [i2];
  D139():
    deopt 552 [_name];
  D167():
    deopt 648 [];
  L33(r141):
    st `.alias` = r141;
    goto L34();
  L61(r247):
    st `.meths.body` = r247;
    goto L62();
  L190():
    _alias = ld `.alias`;
    check L192() else D70();
  L191():
    r140 = dyn base11(<sym .alias>, <lang `$`(promptGenerator, aliases)>);
    goto L33(r140);
  L204():
    clNameQ1 = force? clNameQ;
    checkMissing(clNameQ1);
    l = ld argNames;
    c25 = `is.object`(l);
    if c25 then L205() else L206(clNameQ1, l);
  L215():
    c26 = ldf c in base;
    r161 = dyn c26(r158, r160, "%%  ~~ describe objects here ~~ ", "}");
    check L216() else D84();
  L235():
    _slots_head1 = force? _slots_head;
    checkMissing(_slots_head1);
    _slots_body = ld `.slots.body`;
    check L236() else D95();
  L266():
    p64 = prom<V +>{
      methnms = ld methnms;
      methnms1 = force? methnms;
      checkMissing(methnms1);
      c37 = `is.object`(methnms1);
      if c37 then L1() else L2(methnms1);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", methnms1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(methnms3):
      i5 = ld i;
      i6 = force? i5;
      __3 = ldf `[` in base;
      r208 = dyn __3(methnms3, i6);
      goto L0(r208);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p65 = prom<V +>{
      whereClass18 = ld whereClass;
      whereClass19 = force? whereClass18;
      checkMissing(whereClass19);
      return whereClass19;
    };
    r211 = dyn sigsList[, where](p64, p65);
    check L267() else D115();
  L301():
    _meths_body2 = ld `.meths.body`;
    check L303() else D133();
  L302():
    r246 = dyn base25(<sym .meths.body>, "\t }");
    goto L61(r246);
  L312():
    _name1 = force? _name;
    checkMissing(_name1);
    _type = ld `.type`;
    check L313() else D140();
  L348():
    p77 = prom<V +>{
      clDef2 = ld clDef;
      clDef3 = force? clDef2;
      checkMissing(clDef3);
      return clDef3;
    };
    r276 = dyn is1(p77, "refClassRepresentation");
    check L349() else D168();
  D70():
    deopt 276 [_alias];
  D84():
    deopt 324 [r161];
  D95():
    deopt 370 [_slots_body];
  D115():
    deopt 449 [i2, r211];
  D133():
    deopt 524 [_meths_body2];
  D140():
    deopt 555 [_type];
  D168():
    deopt 651 [r276];
  L35(dx5):
    st argNames = dx5;
    _makeCallString1 = ldf `.makeCallString`;
    check L208() else D78();
  L192():
    _alias1 = force? _alias;
    checkMissing(_alias1);
    promptGenerator = ld promptGenerator;
    check L193() else D71();
  L205():
    dr4 = tryDispatchBuiltin.0("[[<-", l, clNameQ1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L207() else L206(clNameQ1, dr4);
  L206(clNameQ3, l2):
    ____ = ldf `[[<-` in base;
    r151 = dyn ____(l2, clNameQ1, 1);
    goto L35(r151);
  L216():
    goto L36(r161);
  L236():
    _slots_body1 = force? _slots_body;
    checkMissing(_slots_body1);
    _slots_tail = ld `.slots.tail`;
    check L237() else D96();
  L267():
    st `.sig` = r211;
    sym20 = ldf seq_along;
    base20 = ldf seq_along in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L268() else L269();
  L303():
    _meths_body3 = force? _meths_body2;
    checkMissing(_meths_body3);
    c45 = ldf c in base;
    r248 = dyn c45(_meths_body3, "\t }");
    check L304() else D134();
  L313():
    _type1 = force? _type;
    checkMissing(_type1);
    _alias2 = ld `.alias`;
    check L314() else D141();
  L349():
    c50 = `as.logical`(r276);
    if c50 then L350() else L68();
  D71():
    deopt 278 [promptGenerator];
  D78():
    deopt 302 [];
  D96():
    deopt 372 [_slots_tail];
  D134():
    deopt 528 [r248];
  D141():
    deopt 558 [_alias2];
  L50(i9, r213):
    s1 = toForSeq(r213);
    l4 = length(s1);
    i10 = 0;
    goto L51(i9, i10);
  L68():
    is2 = ldf is;
    check L354() else D171();
  L69():
    sym32 = ldf `is.na`;
    base32 = ldf `is.na` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L370() else L371();
  L193():
    promptGenerator1 = force? promptGenerator;
    checkMissing(promptGenerator1);
    c23 = `is.object`(promptGenerator1);
    if c23 then L195() else L196(promptGenerator1);
  L207():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L35(dx4);
  L208():
    p51 = prom<V +>{
      initMethod2 = ld initMethod;
      initMethod3 = force? initMethod2;
      checkMissing(initMethod3);
      return initMethod3;
    };
    p52 = prom<V +>{
      argNames = ld argNames;
      argNames1 = force? argNames;
      checkMissing(argNames1);
      return argNames1;
    };
    r154 = dyn _makeCallString1(p51, "new", p52);
    check L209() else D79();
  L237():
    _slots_tail1 = force? _slots_tail;
    checkMissing(_slots_tail1);
    c30 = ldf c in base;
    r179 = dyn c30(_slots_head1, _slots_body1, _slots_tail1);
    check L238() else D97();
  L268():
    _sig = ld `.sig`;
    check L270() else D116();
  L269():
    r212 = dyn base20(<sym .sig>);
    goto L50(i2, r212);
  L304():
    goto L61(r248);
  L314():
    _alias3 = force? _alias2;
    checkMissing(_alias3);
    _methAliases2 = ld `.methAliases`;
    check L315() else D142();
  L350():
    refClassPrompt = ldf refClassPrompt;
    check L351() else D169();
  D79():
    deopt 306 [r154];
  D97():
    deopt 375 [r179];
  D116():
    deopt 452 [i2, _sig];
  D142():
    deopt 561 [_methAliases2];
  D169():
    deopt 653 [];
  D171():
    deopt 662 [];
  L51(i11, i12):
    i13 = `+`.1(i12, 1);
    c38 = `<`.1(l4, i13);
    if c38 then L271() else L59();
  L74(r292):
    c55 = `as.logical`(r292);
    if c55 then L374() else L75();
  L194(dx3):
    c24 = ldf c in base;
    r143 = dyn c24(_alias1, dx3);
    check L198() else D72();
  L195():
    dr2 = tryDispatchBuiltin.1("$", promptGenerator1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L197() else L196(dr2);
  L196(promptGenerator3):
    r142 = `$`(promptGenerator3, <sym aliases>);
    goto L194(r142);
  L209():
    st callString = r154;
    goto L34();
  L238():
    goto L41(r179);
  L270():
    _sig1 = force? _sig;
    checkMissing(_sig1);
    r214 = seq_along(_sig1);
    goto L50(i2, r214);
  L315():
    _methAliases3 = force? _methAliases2;
    checkMissing(_methAliases3);
    _title = ld `.title`;
    check L316() else D143();
  L351():
    p78 = prom<V +>{
      clDef4 = ld clDef;
      clDef5 = force? clDef4;
      checkMissing(clDef5);
      return clDef5;
    };
    p79 = prom<V +>{
      Rdtxt = ld Rdtxt;
      Rdtxt1 = force? Rdtxt;
      checkMissing(Rdtxt1);
      return Rdtxt1;
    };
    p80 = prom<V +>{
      nmeths4 = ld nmeths;
      nmeths5 = force? nmeths4;
      checkMissing(nmeths5);
      return nmeths5;
    };
    p81 = prom<V +>{
      nslots2 = ld nslots;
      nslots3 = force? nslots2;
      checkMissing(nslots3);
      return nslots3;
    };
    p82 = prom<V +>{
      _meths_head2 = ld `.meths.head`;
      _meths_head3 = force? _meths_head2;
      checkMissing(_meths_head3);
      return _meths_head3;
    };
    r282 = dyn refClassPrompt(p78, p79, p80, p81, p82);
    check L352() else D170();
  L354():
    p83 = prom<V +>{
      generator6 = ld generator;
      generator7 = force? generator6;
      checkMissing(generator7);
      return generator7;
    };
    r285 = dyn is2(p83, "classGeneratorFunction");
    check L355() else D172();
  L370():
    filename3 = ld filename;
    check L372() else D177();
  L371():
    r291 = dyn base32(<sym filename>);
    goto L74(r291);
  D72():
    deopt 282 [r143];
  D143():
    deopt 564 [_title];
  D170():
    deopt 659 [r282];
  D172():
    deopt 665 [r285];
  D177():
    deopt 687 [filename3];
  L59():
    x1 = `[[`(s1, i13, NULL, TRUE);
    st j = x1;
    sym21 = ldf all;
    base21 = ldf all in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L272() else L273();
  L75():
    cat = ldf cat;
    check L378() else D180();
  L197():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L194(dx2);
  L198():
    goto L33(r143);
  L271():
    goto L49(i11);
  L316():
    _title1 = force? _title;
    checkMissing(_title1);
    _desc = ld `.desc`;
    check L317() else D144();
  L352():
    st Rdtxt = r282;
    goto L69();
  L355():
    c51 = `as.logical`(r285);
    if c51 then L356() else L70();
  L372():
    filename4 = force? filename3;
    checkMissing(filename4);
    is_na2 = ldf `is.na` in base;
    r293 = dyn is_na2(filename4);
    check L373() else D178();
  L374():
    Rdtxt2 = ld Rdtxt;
    check L375() else D179();
  D144():
    deopt 567 [_desc];
  D178():
    deopt 690 [r293];
  D179():
    deopt 691 [Rdtxt2];
  D180():
    deopt 697 [];
  L52(i22, i23, r216):
    r225 = `!`(r216);
    c40 = `as.logical`(r225);
    if c40 then L287() else L56();
  L70():
    goto L69();
  L272():
    sym22 = ldf `is.na`;
    base22 = ldf `is.na` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L274() else L275();
  L273():
    r215 = dyn base21(<lang is.na(match(`[[`(.sig, j), clName))>);
    goto L52(i11, i13, r215);
  L317():
    _desc1 = force? _desc;
    checkMissing(_desc1);
    _usage4 = ld `.usage`;
    check L318() else D145();
  L356():
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L357() else L358();
  L373():
    goto L74(r293);
  L375():
    Rdtxt3 = force? Rdtxt2;
    checkMissing(Rdtxt3);
    popenv;
    return Rdtxt3;
  L378():
    p85 = prom<V +>{
      unlist = ldf unlist;
      p84 = prom<V +>{
        Rdtxt4 = ld Rdtxt;
        Rdtxt5 = force? Rdtxt4;
        checkMissing(Rdtxt5);
        return Rdtxt5;
      };
      r297 = dyn unlist(p84);
      return r297;
    };
    p86 = prom<V +>{
      filename5 = ld filename;
      filename6 = force? filename5;
      checkMissing(filename6);
      return filename6;
    };
    r300 = dyn cat[, file, sep](p85, p86, "\n");
    check L379() else D181();
  D145():
    deopt 570 [_usage4];
  D181():
    deopt 703 [r300];
  L53(i28, i29, r218):
    all = ldf all in base;
    r224 = dyn all(r218);
    check L286() else D122();
  L56():
    goto L58(i22, i23);
  L58(i56, i57):
    goto L51(i56, i57);
  L71(r287):
    st what = r287;
    promptGenerator4 = ld promptGenerator;
    check L360() else D174();
  L274():
    sym23 = ldf match;
    base23 = ldf match in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L276() else L277();
  L275():
    r217 = dyn base22(<lang match(`[[`(.sig, j), clName)>);
    goto L53(i11, i13, r217);
  L287():
    escape = ldf escape;
    check L288() else D123();
  L318():
    _usage5 = force? _usage4;
    checkMissing(_usage5);
    _slots = ld `.slots`;
    check L319() else D146();
  L357():
    c52 = ldf c in base;
    r288 = dyn c52("usage", "arguments");
    check L359() else D173();
  L358():
    r286 = dyn base31("usage", "arguments");
    goto L71(r286);
  L379():
    _message = ldf `.message`;
    check L380() else D182();
  D122():
    deopt 475 [i28, i29, r224];
  D123():
    deopt 478 [i22, i23];
  D146():
    deopt 573 [_slots];
  D173():
    deopt 671 [r288];
  D174():
    deopt 673 [promptGenerator4];
  D182():
    deopt 705 [];
  L54(i34, i35, r220):
    is_na1 = ldf `is.na` in base;
    r223 = dyn is_na1(r220);
    check L285() else D121();
  L276():
    _sig2 = ld `.sig`;
    check L278() else D117();
  L277():
    r219 = dyn base23(<lang `[[`(.sig, j)>, <sym clName>);
    goto L54(i11, i13, r219);
  L286():
    goto L52(i28, i29, r224);
  L288():
    p66 = prom<V +>{
      methnms4 = ld methnms;
      methnms5 = force? methnms4;
      checkMissing(methnms5);
      c41 = `is.object`(methnms5);
      if c41 then L1() else L2(methnms5);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", methnms5);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(methnms7):
      i48 = ld i;
      i49 = force? i48;
      __5 = ldf `[` in base;
      r226 = dyn __5(methnms7, i49);
      goto L0(r226);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r228 = dyn escape(p66);
    check L289() else D124();
  L319():
    _slots1 = force? _slots;
    checkMissing(_slots1);
    _extends12 = ld `.extends`;
    check L320() else D147();
  L359():
    goto L71(r288);
  L360():
    promptGenerator5 = force? promptGenerator4;
    checkMissing(promptGenerator5);
    c53 = `is.object`(promptGenerator5);
    if c53 then L361() else L362(promptGenerator5);
  L380():
    p88 = prom<V +>{
      _fileDesc = ldf `.fileDesc`;
      p87 = prom<V +>{
        filename7 = ld filename;
        filename8 = force? filename7;
        checkMissing(filename8);
        return filename8;
      };
      r302 = dyn _fileDesc(p87);
      return r302;
    };
    r304 = dyn _message("A shell of class documentation has been written", p88, ".\n");
    check L381() else D183();
  D117():
    deopt 461 [i11, i13, _sig2];
  D121():
    deopt 473 [i34, i35, r223];
  D124():
    deopt 480 [i22, i23, r228];
  D147():
    deopt 576 [_extends12];
  D183():
    deopt 709 [r304];
  L72(dx21):
    l5 = ld Rdtxt;
    c54 = `is.object`(l5);
    if c54 then L365() else L366(dx21, l5);
  L278():
    _sig3 = force? _sig2;
    checkMissing(_sig3);
    c39 = `is.object`(_sig3);
    if c39 then L279() else L280(i11, i13, _sig3);
  L285():
    goto L53(i34, i35, r223);
  L289():
    st `methn.i` = r228;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L290() else L291();
  L320():
    _extends13 = force? _extends12;
    checkMissing(_extends13);
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L321() else L322();
  L361():
    dr20 = tryDispatchBuiltin.1("[", promptGenerator5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L363() else L362(dr20);
  L362(promptGenerator7):
    what = ld what;
    check L364() else D175();
  L381():
    sym33 = ldf invisible;
    base33 = ldf invisible in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L382() else L383();
  D175():
    deopt 675 [promptGenerator7, what];
  L55(i42, i43, dx13):
    clName33 = ld clName;
    check L283() else D119();
  L57(i54, i55, r230):
    st `.meths.body` = r230;
    paste13 = ldf paste;
    check L296() else D129();
  L64(r257):
    paste17 = ldf paste;
    check L327() else D152();
  L73(dx26, dx27):
    st Rdtxt = dx27;
    goto L69();
  L77(r306):
    popenv;
    return r306;
  L279():
    dr12 = tryDispatchBuiltin.1("[[", _sig3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L281() else L280(i11, i13, dr12);
  L280(i38, i39, _sig5):
    j = ld j;
    check L282() else D118();
  L290():
    _meths_body = ld `.meths.body`;
    check L292() else D125();
  L291():
    r229 = dyn base24(<sym .meths.body>, <lang paste0("    \\item{", methn.i, "}{\\code{signature", pastePar(`[[`(.sig, j)), "}: ... }")>);
    goto L57(i22, i23, r229);
  L321():
    _meths_head = ld `.meths.head`;
    check L323() else D148();
  L322():
    r256 = dyn base27(<sym .meths.head>, <sym .meths.body>, <sym .meths.tail>);
    goto L64(r256);
  L363():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L72(dx20);
  L364():
    what1 = force? what;
    __8 = ldf `[` in base;
    r289 = dyn __8(promptGenerator7, what1);
    goto L72(r289);
  L365():
    dr22 = tryDispatchBuiltin.0("[<-", l5, dx21);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L367() else L366(dx21, dr22);
  L366(dx23, l7):
    what2 = ld what;
    check L368() else D176();
  L382():
    filename9 = ld filename;
    check L384() else D184();
  L383():
    r305 = dyn base33(<sym filename>);
    goto L77(r305);
  D118():
    deopt 463 [i38, i39, _sig5, j];
  D119():
    deopt 466 [i42, i43, clName33];
  D125():
    deopt 484 [i22, i23, _meths_body];
  D129():
    deopt 498 [i54, i55];
  D148():
    deopt 581 [_meths_head];
  D152():
    deopt 591 [];
  D176():
    deopt 679 [dx23, l7, dx21, what2];
  D184():
    deopt 712 [filename9];
  L281():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L55(i11, i13, dx12);
  L282():
    j1 = force? j;
    __4 = ldf `[[` in base;
    r221 = dyn __4(_sig5, j1);
    goto L55(i38, i39, r221);
  L283():
    clName34 = force? clName33;
    checkMissing(clName34);
    match1 = ldf match in base;
    r222 = dyn match1(dx13, clName34, NA_INT, NULL);
    check L284() else D120();
  L292():
    _meths_body1 = force? _meths_body;
    checkMissing(_meths_body1);
    paste12 = ldf paste0;
    check L293() else D126();
  L296():
    p70 = prom<V +>{
      _sig10 = ld `.sig`;
      _sig11 = force? _sig10;
      checkMissing(_sig11);
      c44 = `is.object`(_sig11);
      if c44 then L1() else L2(_sig11);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", _sig11);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(_sig13):
      j4 = ld j;
      j5 = force? j4;
      __7 = ldf `[[` in base;
      r238 = dyn __7(_sig13, j5);
      goto L0(r238);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r240 = dyn paste13[, collapse](p70, ",");
    check L297() else D130();
  L323():
    _meths_head1 = force? _meths_head;
    checkMissing(_meths_head1);
    _meths_body4 = ld `.meths.body`;
    check L324() else D149();
  L327():
    r259 = dyn paste17("\\references{\n%%  ~~put references to the", "literature/web site here~~\n}");
    check L328() else D153();
  L367():
    dx25 = getTryDispatchBuiltinValue(dr22);
    goto L73(dx21, dx25);
  L368():
    what3 = force? what2;
    ___2 = ldf `[<-` in base;
    r290 = dyn ___2(l7, dx21, what3);
    goto L73(dx23, r290);
  L384():
    filename10 = force? filename9;
    checkMissing(filename10);
    invisible = ldf invisible in base;
    r307 = dyn invisible(filename10);
    check L385() else D185();
  D120():
    deopt 471 [i42, i43, r222];
  D126():
    deopt 487 [i22, i23];
  D130():
    deopt 502 [i54, i55, r240];
  D149():
    deopt 583 [_meths_body4];
  D153():
    deopt 594 [r259];
  D185():
    deopt 715 [r307];
  L284():
    goto L54(i42, i43, r222);
  L293():
    p67 = prom<V +>{
      methn_i = ld `methn.i`;
      methn_i1 = force? methn_i;
      checkMissing(methn_i1);
      return methn_i1;
    };
    p69 = prom<V +>{
      pastePar = ldf pastePar;
      p68 = prom<V +>{
        _sig6 = ld `.sig`;
        _sig7 = force? _sig6;
        checkMissing(_sig7);
        c42 = `is.object`(_sig7);
        if c42 then L1() else L2(_sig7);
      L0(dx17):
        return dx17;
      L1():
        dr16 = tryDispatchBuiltin.1("[[", _sig7);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(_sig9):
        j2 = ld j;
        j3 = force? j2;
        __6 = ldf `[[` in base;
        r232 = dyn __6(_sig9, j3);
        goto L0(r232);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx16);
      };
      r234 = dyn pastePar(p68);
      return r234;
    };
    r236 = dyn paste12("    \\item{", p67, "}{\\code{signature", p69, "}: ... }");
    check L294() else D127();
  L297():
    st cur = r240;
    paste14 = ldf paste0;
    check L298() else D131();
  L324():
    _meths_body5 = force? _meths_body4;
    checkMissing(_meths_body5);
    _meths_tail = ld `.meths.tail`;
    check L325() else D150();
  L328():
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L329() else L330();
  L385():
    goto L77(r307);
  D127():
    deopt 493 [i22, i23, r236];
  D131():
    deopt 505 [i54, i55];
  D150():
    deopt 585 [_meths_tail];
  L65(r261):
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L334() else L335();
  L294():
    c43 = ldf c in base;
    r237 = dyn c43(_meths_body1, r236);
    check L295() else D128();
  L298():
    p71 = prom<V +>{
      _methAliases = ld `.methAliases`;
      _methAliases1 = force? _methAliases;
      checkMissing(_methAliases1);
      return _methAliases1;
    };
    p72 = prom<V +>{
      methn_i2 = ld `methn.i`;
      methn_i3 = force? methn_i2;
      checkMissing(methn_i3);
      return methn_i3;
    };
    p73 = prom<V +>{
      cur = ld cur;
      cur1 = force? cur;
      checkMissing(cur1);
      return cur1;
    };
    r244 = dyn paste14(p71, "\\alias{", p72, ",", p73, "-method}\n");
    check L299() else D132();
  L325():
    _meths_tail1 = force? _meths_tail;
    checkMissing(_meths_tail1);
    c46 = ldf c in base;
    r258 = dyn c46(_meths_head1, _meths_body5, _meths_tail1);
    check L326() else D151();
  L329():
    paste18 = ldf paste;
    check L331() else D154();
  L330():
    r260 = dyn base28("\\note{\n%%  ~~further notes~~\n}", "", <lang paste("%% ~Make other sections like Warning with", "\\section{Warning }{....} ~")>, "");
    goto L65(r260);
  D128():
    deopt 495 [i22, i23, r237];
  D132():
    deopt 512 [i54, i55, r244];
  D151():
    deopt 588 [r258];
  D154():
    deopt 603 [];
  L66(r265):
    sym30 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L341() else L342();
  L295():
    goto L57(i22, i23, r237);
  L299():
    st `.methAliases` = r244;
    goto L58(i54, i55);
  L326():
    goto L64(r258);
  L331():
    r262 = dyn paste18("%% ~Make other sections like Warning with", "\\section{Warning }{....} ~");
    check L332() else D155();
  L334():
    paste19 = ldf paste;
    check L336() else D157();
  L335():
    r264 = dyn base29("\\seealso{", <lang paste("%%  ~~objects to See Also as", "\\code{\\link{~~fun~~}}, ~~~")>, <lang paste("%%  ~~or \\code{\\linkS4class{CLASSNAME}}", "for links to other classes ~~~")>, "}");
    goto L66(r264);
  D155():
    deopt 606 [r262];
  D157():
    deopt 615 [];
  L67(r270):
    _keywords = ld `.keywords`;
    check L346() else D165();
  L332():
    c47 = ldf c in base;
    r263 = dyn c47("\\note{\n%%  ~~further notes~~\n}", "", r262, "");
    check L333() else D156();
  L336():
    r266 = dyn paste19("%%  ~~objects to See Also as", "\\code{\\link{~~fun~~}}, ~~~");
    check L337() else D158();
  L341():
    paste21 = ldf paste0;
    check L343() else D162();
  L342():
    r269 = dyn base30("\\examples{", <lang paste0("showClass(", clNameQ, ")")>, "}");
    goto L67(r269);
  D156():
    deopt 609 [r263];
  D158():
    deopt 618 [r266];
  D162():
    deopt 632 [];
  D165():
    deopt 641 [_keywords];
  L333():
    goto L65(r263);
  L337():
    paste20 = ldf paste;
    check L338() else D159();
  L343():
    p76 = prom<V +>{
      clNameQ8 = ld clNameQ;
      clNameQ9 = force? clNameQ8;
      checkMissing(clNameQ9);
      return clNameQ9;
    };
    r272 = dyn paste21("showClass(", p76, ")");
    check L344() else D163();
  L346():
    _keywords1 = force? _keywords;
    checkMissing(_keywords1);
    list = ldf list in base;
    r274 = dyn list(_name1, _type1, _alias3, _methAliases3, _title1, _desc1, _usage5, _slots1, _extends13, r257, r259, "\\author{\n%%  ~~who you are~~\n}", r261, r265, r270, _keywords1);
    check L347() else D166();
  D159():
    deopt 620 [];
  D163():
    deopt 636 [r272];
  D166():
    deopt 645 [r274];
  L338():
    r267 = dyn paste20("%%  ~~or \\code{\\linkS4class{CLASSNAME}}", "for links to other classes ~~~");
    check L339() else D160();
  L344():
    c49 = ldf c in base;
    r273 = dyn c49("\\examples{", r272, "}");
    check L345() else D164();
  L347():
    goto L63(r274);
  D160():
    deopt 623 [r267];
  D164():
    deopt 639 [r273];
  L339():
    c48 = ldf c in base;
    r268 = dyn c48("\\seealso{", r266, r267, "}");
    check L340() else D161();
  L345():
    goto L67(r273);
  D161():
    deopt 626 [r268];
  L340():
    goto L66(r268);
  }
}
fun inner1265413865(g, where, cl) {
  (reg g:*, reg where:*, reg cl:*) -+> V { var g:*, var where:*, var cl:*, reg _in_:cls, reg cl1:*, reg cl2:V, reg p:p(V +), reg unique:cls, reg unlist:cls, reg __:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V |
    mkenv;
    st g = g;
    st where = where;
    st cl = cl;
    _in_ = ldf `%in%`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      cl1 = ld cl;
      cl2 = force? cl1;
      checkMissing(cl2);
      return cl2;
    };
    p3 = prom<V +>{
      unique = ldf unique;
      p2 = prom<V +>{
        unlist = ldf unlist;
        p1 = prom<V +>{
          __ = ldf `@` in base;
          r1 = dyn __(<lang findMethods(g, where)>, <sym signatures>);
          return r1;
        };
        r3 = dyn unlist(p1);
        return r3;
      };
      r5 = dyn unique(p2);
      return r5;
    };
    r7 = dyn _in_(p, p3);
    check L1() else D1();
  D1():
    deopt 4 [r7];
  L1():
    popenv;
    return r7;
  }
}
fun inner4201342054(cl, where) {
  (reg cl:*, reg where:*) -+> V { var cl:*, var where:*, reg getGenerics:cls, reg where1:*, reg where2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg unlist:cls, reg lapply:cls, reg allgen:*, reg allgen1:V, reg p1:p(V +), reg classInSig:*, reg classInSig1:V, reg p2:p(V +), reg cl1:*, reg cl2:V, reg p3:p(V +), reg where3:*, reg where4:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg r10:V, reg as_logical:cls, reg r11:V, reg allgen2:*, reg allgen3:V, reg c:L, reg allgen5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ok:*, reg ok1:V, reg __:cls, reg r12:V |
    mkenv;
    st cl = cl;
    st where = where;
    getGenerics = ldf getGenerics;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r1 = dyn getGenerics[where](p);
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    st allgen = r1;
    sym = ldf `as.logical`;
    base = ldf `as.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r3):
    st ok = r3;
    allgen2 = ld allgen;
    check L9() else D5();
  L4():
    unlist = ldf unlist;
    check L6() else D2();
  L5():
    r2 = dyn base(<lang unlist(lapply(allgen, classInSig, cl=cl, where=where))>);
    goto L0(r2);
  D2():
    deopt 9 [];
  D5():
    deopt 15 [allgen2];
  L6():
    p5 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        allgen = ld allgen;
        allgen1 = force? allgen;
        checkMissing(allgen1);
        return allgen1;
      };
      p2 = prom<V +>{
        classInSig = ld classInSig;
        classInSig1 = force? classInSig;
        checkMissing(classInSig1);
        return classInSig1;
      };
      p3 = prom<V +>{
        cl1 = ld cl;
        cl2 = force? cl1;
        checkMissing(cl2);
        return cl2;
      };
      p4 = prom<V +>{
        where3 = ld where;
        where4 = force? where3;
        checkMissing(where4);
        return where4;
      };
      r8 = dyn lapply[, , cl, where](p1, p2, p3, p4);
      return r8;
    };
    r10 = dyn unlist(p5);
    check L7() else D3();
  L9():
    allgen3 = force? allgen2;
    checkMissing(allgen3);
    c = `is.object`(allgen3);
    if c then L10() else L11(allgen3);
  D3():
    deopt 11 [r10];
  L1(dx1):
    popenv;
    return dx1;
  L7():
    as_logical = ldf `as.logical` in base;
    r11 = dyn as_logical(r10);
    check L8() else D4();
  L10():
    dr = tryDispatchBuiltin.1("[", allgen3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(allgen5):
    ok = ld ok;
    check L13() else D6();
  D4():
    deopt 13 [r11];
  D6():
    deopt 17 [allgen5, ok];
  L8():
    goto L0(r11);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    ok1 = force? ok;
    __ = ldf `[` in base;
    r12 = dyn __(allgen5, ok1);
    goto L1(r12);
  }
}
fun inner2770166732(g, where) {
  (reg g:*, reg where:*) -+> V { var g:*, var where:*, reg findMethods:cls, reg g1:*, reg g2:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r2:V, reg __:cls, reg r3:V, reg __1:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg value:*, reg value1:V, reg length:cls, reg r7:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg value2:*, reg value3:V, reg c1:L, reg value5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __2:cls, reg r10:V, reg length1:cls, reg r11:V, reg l:*, reg length__:cls, reg r12:V, reg lapply:cls, reg value6:*, reg value7:V, reg p2:p(V +), reg r14:cls, reg p3:p(V +), reg r16:V, reg value8:*, reg value9:V |
    mkenv;
    st g = g;
    st where = where;
    findMethods = ldf findMethods;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      g1 = ld g;
      g2 = force? g1;
      checkMissing(g2);
      return g2;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r2 = dyn findMethods(p, p1);
    check L6() else D1();
  D1():
    deopt 4 [r2];
  L6():
    st methods = r2;
    __ = ldf `@` in base;
    r3 = dyn __(<sym methods>, <sym signatures>);
    st value = r3;
    __1 = ldf `@` in base;
    r4 = dyn __1(<sym methods>, <sym arguments>);
    st args = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r6):
    c = `as.logical`(r6);
    if c then L11() else L1();
  L7():
    value = ld value;
    check L9() else D2();
  L8():
    r5 = dyn base(<sym value>);
    goto L0(r5);
  D2():
    deopt 14 [value];
  L1():
    goto L4();
  L4():
    value8 = ld value;
    check L24() else D10();
  L9():
    value1 = force? value;
    checkMissing(value1);
    length = ldf length in base;
    r7 = dyn length(value1);
    check L10() else D3();
  L11():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D3():
    deopt 17 [r7];
  D10():
    deopt 40 [value8];
  L2(r9):
    l = ld args;
    length__ = ldf `length<-`;
    check L19() else D6();
  L10():
    goto L0(r7);
  L12():
    value2 = ld value;
    check L14() else D4();
  L13():
    r8 = dyn base1(<lang `[[`(value, 1.0)>);
    goto L2(r8);
  L24():
    value9 = force? value8;
    checkMissing(value9);
    popenv;
    return value9;
  D4():
    deopt 20 [value2];
  D6():
    deopt 28 [r9, l, r9];
  L14():
    value3 = force? value2;
    checkMissing(value3);
    c1 = `is.object`(value3);
    if c1 then L15() else L16(value3);
  L19():
    r12 = dyn length__(l, NULL, r9);
    check L20() else D7();
  D7():
    deopt 30 [r9, r12];
  L3(dx1):
    length1 = ldf length in base;
    r11 = dyn length1(dx1);
    check L18() else D5();
  L15():
    dr = tryDispatchBuiltin.1("[[", value3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(value5):
    __2 = ldf `[[` in base;
    r10 = dyn __2(value5, 1.0);
    goto L3(r10);
  L20():
    st args = r12;
    lapply = ldf lapply;
    check L21() else D8();
  D5():
    deopt 26 [r11];
  D8():
    deopt 33 [];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L18():
    goto L2(r11);
  L21():
    p2 = prom<V +>{
      value6 = ld value;
      value7 = force? value6;
      checkMissing(value7);
      return value7;
    };
    p3 = prom<V +>{
      r14 = clos inner2501545716;
      return r14;
    };
    r16 = dyn lapply(p2, p3);
    check L22() else D9();
  D9():
    deopt 36 [r16];
  L22():
    st value = r16;
    goto L4();
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg args:*, reg args1:V, reg l:*, reg names__:cls, reg r:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    args = ld args;
    check L0() else D0();
  D0():
    deopt 0 [args];
  L0():
    args1 = force? args;
    checkMissing(args1);
    l = ld x;
    names__ = ldf `names<-`;
    check L1() else D1();
  D1():
    deopt 3 [args1, l, args1];
  L1():
    r = dyn names__(l, NULL, args1);
    check L2() else D2();
  D2():
    deopt 5 [args1, r];
  L2():
    st x = r;
    x1 = ld x;
    check L3() else D3();
  D3():
    deopt 7 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}
fun inner2585040660(clname) {
  (reg clname:*) -+> V { var clname:*, reg getClassDef:cls, reg clname1:*, reg clname2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg names:cls, reg r5:V, reg getSlots:cls, reg clDef:*, reg clDef1:V, reg p1:p(V +), reg r7:V, reg rev:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg extds:*, reg extds1:V, reg r10:I, reg p2:p(V +), reg r12:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg extds2:*, reg extds3:V, reg c1:L, reg i6:I, reg extds5:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg j:*, reg j1:V, reg __1:cls, reg r13:V, reg getSlots1:cls, reg getClass:cls, reg i9:*, reg i10:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg i13:I, reg r19:V, reg slotsi:*, reg slotsi1:V, reg length:cls, reg r20:V, reg c2:L, reg paste0:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg slotsi2:*, reg slotsi3:V, reg as_character:cls, reg r23:V, reg p5:p(V +), reg i16:*, reg i17:V, reg p6:p(V +), reg r26:V, reg l1:*, reg c3:L, reg i19:I, reg r28:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i21:I, reg r30:V, reg dx3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg i24:I, reg r36:V, reg l6:*, reg r37:V, reg r38:V, reg slotsi4:*, reg slotsi5:V, reg names1:cls, reg r39:V, reg ___:cls, reg r40:V, reg i25:I, reg getSlots2:cls, reg clDef2:*, reg clDef3:V, reg p7:p(V +), reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg slotsi6:*, reg slotsi7:V, reg length1:cls, reg r46:V, reg c4:L, reg paste1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg slotsi8:*, reg slotsi9:V, reg as_character1:cls, reg r49:V, reg p8:p(V +), reg r51:V, reg l7:*, reg c5:L, reg r53:V, reg l9:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r55:V, reg dx5:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg r61:V, reg l12:*, reg r62:V, reg r63:V, reg slotsi10:*, reg slotsi11:V, reg names2:cls, reg r64:V, reg ___1:cls, reg r65:V, reg allslots:*, reg allslots1:V |
    mkenv;
    st clname = clname;
    getClassDef = ldf getClassDef;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      clname1 = ld clname;
      clname2 = force? clname1;
      checkMissing(clname2);
      return clname2;
    };
    r1 = dyn getClassDef(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    st clDef = r1;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r3):
    st extds = r3;
    getSlots = ldf getSlots;
    check L19() else D3();
  L16():
    __ = ldf `@` in base;
    r4 = dyn __(<sym clDef>, <sym contains>);
    names = ldf names in base;
    r5 = dyn names(r4);
    check L18() else D2();
  L17():
    r2 = dyn base(<lang `@`(clDef, contains)>);
    goto L0(r2);
  D2():
    deopt 10 [r5];
  D3():
    deopt 13 [];
  L18():
    goto L0(r5);
  L19():
    p1 = prom<V +>{
      clDef = ld clDef;
      clDef1 = force? clDef;
      checkMissing(clDef1);
      return clDef1;
    };
    r7 = dyn getSlots(p1);
    check L20() else D4();
  D4():
    deopt 15 [r7];
  L20():
    st allslots = r7;
    rev = ldf rev;
    check L21() else D5();
  D5():
    deopt 18 [];
  L21():
    p2 = prom<V +>{
      sym1 = ldf seq_along;
      base1 = ldf seq_along in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      extds = ld extds;
      extds1 = force? extds;
      checkMissing(extds1);
      r10 = seq_along(extds1);
      goto L0(r10);
    L2():
      r8 = dyn base1(<sym extds>);
      goto L0(r8);
    };
    r12 = dyn rev(p2);
    check L22() else D6();
  D6():
    deopt 20 [r12];
  L22():
    s = toForSeq(r12);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L23() else L8();
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st j = x;
    extds2 = ld extds;
    check L24() else D7();
  L23():
    getSlots2 = ldf getSlots;
    check L46() else D17();
  D7():
    deopt 21 [i2, extds2];
  D17():
    deopt 61 [];
  L24():
    extds3 = force? extds2;
    checkMissing(extds3);
    c1 = `is.object`(extds3);
    if c1 then L25() else L26(i2, extds3);
  L46():
    p7 = prom<V +>{
      clDef2 = ld clDef;
      clDef3 = force? clDef2;
      checkMissing(clDef3);
      return clDef3;
    };
    r43 = dyn getSlots2(p7);
    check L47() else D18();
  D18():
    deopt 63 [r43];
  L2(i8, dx1):
    st i = dx1;
    getSlots1 = ldf getSlots;
    check L29() else D9();
  L25():
    dr = tryDispatchBuiltin.1("[[", extds3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(i2, dr);
  L26(i6, extds5):
    j = ld j;
    check L28() else D8();
  L47():
    st slotsi = r43;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  D8():
    deopt 23 [i6, extds5, j];
  D9():
    deopt 28 [i8];
  L9(r45):
    c4 = `as.logical`(r45);
    if c4 then L52() else L10();
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L28():
    j1 = force? j;
    __1 = ldf `[[` in base;
    r13 = dyn __1(extds5, j1);
    goto L2(i6, r13);
  L29():
    p4 = prom<V +>{
      getClass = ldf getClass;
      p3 = prom<V +>{
        i9 = ld i;
        i10 = force? i9;
        checkMissing(i10);
        return i10;
      };
      r15 = dyn getClass(p3);
      return r15;
    };
    r17 = dyn getSlots1(p4);
    check L30() else D10();
  L48():
    slotsi6 = ld slotsi;
    check L50() else D19();
  L49():
    r44 = dyn base5(<sym slotsi>);
    goto L9(r44);
  D10():
    deopt 30 [i8, r17];
  D19():
    deopt 67 [slotsi6];
  L10():
    goto L13();
  L13():
    allslots = ld allslots;
    check L63() else D25();
  L30():
    st slotsi = r17;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L50():
    slotsi7 = force? slotsi6;
    checkMissing(slotsi7);
    length1 = ldf length in base;
    r46 = dyn length1(slotsi7);
    check L51() else D20();
  L52():
    paste1 = ldf paste0;
    check L53() else D21();
  D20():
    deopt 70 [r46];
  D21():
    deopt 72 [];
  D25():
    deopt 88 [allslots];
  L3(i13, r19):
    c2 = `as.logical`(r19);
    if c2 then L35() else L4();
  L31():
    slotsi = ld slotsi;
    check L33() else D11();
  L32():
    r18 = dyn base2(<sym slotsi>);
    goto L3(i8, r18);
  L51():
    goto L9(r46);
  L53():
    p8 = prom<V +>{
      sym6 = ldf `as.character`;
      base6 = ldf `as.character` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      slotsi8 = ld slotsi;
      slotsi9 = force? slotsi8;
      checkMissing(slotsi9);
      as_character1 = ldf `as.character` in base;
      r49 = dyn as_character1(slotsi9);
      goto L0(r49);
    L2():
      r47 = dyn base6(<sym slotsi>);
      goto L0(r47);
    };
    r51 = dyn paste1("\"", p8, "\"");
    check L54() else D22();
  L63():
    allslots1 = force? allslots;
    checkMissing(allslots1);
    popenv;
    return allslots1;
  D11():
    deopt 34 [i8, slotsi];
  D22():
    deopt 76 [r51];
  L4():
    goto L7(i13);
  L7(i25):
    goto L1(i25);
  L33():
    slotsi1 = force? slotsi;
    checkMissing(slotsi1);
    length = ldf length in base;
    r20 = dyn length(slotsi1);
    check L34() else D12();
  L35():
    paste0 = ldf paste0;
    check L36() else D13();
  L54():
    l7 = ld allslots;
    c5 = `is.object`(l7);
    if c5 then L55() else L56(r51, l7);
  D12():
    deopt 37 [i8, r20];
  D13():
    deopt 39 [i13];
  L11(r55, dx5):
    st allslots = dx5;
    goto L13();
  L34():
    goto L3(i8, r20);
  L36():
    p5 = prom<V +>{
      sym3 = ldf `as.character`;
      base3 = ldf `as.character` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      slotsi2 = ld slotsi;
      slotsi3 = force? slotsi2;
      checkMissing(slotsi3);
      as_character = ldf `as.character` in base;
      r23 = dyn as_character(slotsi3);
      goto L0(r23);
    L2():
      r21 = dyn base3(<sym slotsi>);
      goto L0(r21);
    };
    p6 = prom<V +>{
      i16 = ld i;
      i17 = force? i16;
      checkMissing(i17);
      return i17;
    };
    r26 = dyn paste0("\"", p5, "\", from class \"", p6, "\"");
    check L37() else D14();
  L55():
    dr4 = tryDispatchBuiltin.0("[<-", l7, r51);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L57() else L56(r51, dr4);
  L56(r53, l9):
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L58() else L59();
  D14():
    deopt 45 [i13, r26];
  L12(r61, l12, r62, r63):
    ___1 = ldf `[<-` in base;
    r65 = dyn ___1(l12, r62, r63);
    goto L11(r61, r65);
  L37():
    l1 = ld allslots;
    c3 = `is.object`(l1);
    if c3 then L38() else L39(i13, r26, l1);
  L57():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(r51, dx4);
  L58():
    slotsi10 = ld slotsi;
    check L60() else D23();
  L59():
    r60 = dyn base7(<sym slotsi>);
    goto L12(r53, l9, r51, r60);
  D23():
    deopt 80 [r53, l9, r51, slotsi10];
  L5(i21, r30, dx3):
    st allslots = dx3;
    goto L7(i21);
  L38():
    dr2 = tryDispatchBuiltin.0("[<-", l1, r26);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(i13, r26, dr2);
  L39(i19, r28, l3):
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L60():
    slotsi11 = force? slotsi10;
    checkMissing(slotsi11);
    names2 = ldf names in base;
    r64 = dyn names2(slotsi11);
    check L61() else D24();
  D24():
    deopt 83 [r53, l9, r51, r64];
  L6(i24, r36, l6, r37, r38):
    ___ = ldf `[<-` in base;
    r40 = dyn ___(l6, r37, r38);
    goto L5(i24, r36, r40);
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i13, r26, dx2);
  L41():
    slotsi4 = ld slotsi;
    check L43() else D15();
  L42():
    r35 = dyn base4(<sym slotsi>);
    goto L6(i19, r28, l3, r26, r35);
  L61():
    goto L12(r53, l9, r51, r64);
  D15():
    deopt 49 [i19, r28, l3, r26, slotsi4];
  L43():
    slotsi5 = force? slotsi4;
    checkMissing(slotsi5);
    names1 = ldf names in base;
    r39 = dyn names1(slotsi5);
    check L44() else D16();
  D16():
    deopt 52 [i19, r28, l3, r26, r39];
  L44():
    goto L6(i19, r28, l3, r26, r39);
  }
}
fun inner1396911006(object, name) {
  (reg object:*, reg name:*) -+> V { var object:*, var name:*, reg __:cls, reg r:V, reg r1:cls, reg object1:*, reg object2:V, reg p:p(V +), reg name1:*, reg name2:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg value:*, reg value1:V, reg r7:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg value2:*, reg value3:V, reg c1:L, reg i6:I, reg value5:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __1:cls, reg r8:V, reg grepl:cls, reg item:*, reg item1:V, reg p2:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg i13:I, reg r12:V, reg bad:*, reg bad1:V, reg any:cls, reg r13:V, reg c2:L, reg item2:*, reg item3:V, reg c3:L, reg i17:I, reg item5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg dx3:V, reg bad2:*, reg bad3:V, reg r14:V, reg __2:cls, reg r15:V, reg l1:*, reg c4:L, reg i21:I, reg dx5:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx7:V, reg i23:I, reg dx8:V, reg dx9:V, reg i24:*, reg i25:V, reg ____:cls, reg r16:V, reg i26:I, reg value6:*, reg value7:V |
    mkenv;
    st object = object;
    st name = name;
    __ = ldf `::`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    r = dyn __("utils", "prompt");
    check L10() else D1();
  D1():
    deopt 4 [r];
  L10():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    p1 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    r4 = dyn r1[, name, filename](p, p1, NA_LGL);
    check L11() else D2();
  D2():
    deopt 11 [r4];
  L11():
    st value = r4;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r6):
    s = toForSeq(r6);
    l = length(s);
    i = 0;
    goto L1(i);
  L12():
    value = ld value;
    check L14() else D3();
  L13():
    r5 = dyn base(<sym value>);
    goto L0(r5);
  D3():
    deopt 14 [value];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L15() else L8();
  L14():
    value1 = force? value;
    checkMissing(value1);
    r7 = seq_along(value1);
    goto L0(r7);
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    value2 = ld value;
    check L16() else D4();
  L15():
    value6 = ld value;
    check L38() else D13();
  D4():
    deopt 17 [i2, value2];
  D13():
    deopt 51 [value6];
  L16():
    value3 = force? value2;
    checkMissing(value3);
    c1 = `is.object`(value3);
    if c1 then L17() else L18(i2, value3);
  L38():
    value7 = force? value6;
    checkMissing(value7);
    popenv;
    return value7;
  L2(i8, dx1):
    st item = dx1;
    grepl = ldf grepl;
    check L21() else D6();
  L17():
    dr = tryDispatchBuiltin.1("[[", value3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(i2, dr);
  L18(i6, value5):
    i9 = ld i;
    check L20() else D5();
  D5():
    deopt 19 [i6, value5, i9];
  D6():
    deopt 24 [i8];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L20():
    i10 = force? i9;
    __1 = ldf `[[` in base;
    r8 = dyn __1(value5, i10);
    goto L2(i6, r8);
  L21():
    p2 = prom<V +>{
      item = ld item;
      item1 = force? item;
      checkMissing(item1);
      return item1;
    };
    r10 = dyn grepl("^ *%", p2);
    check L22() else D7();
  D7():
    deopt 27 [i8, r10];
  L22():
    st bad = r10;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L3(i13, r12):
    c2 = `as.logical`(r12);
    if c2 then L27() else L4();
  L23():
    bad = ld bad;
    check L25() else D8();
  L24():
    r11 = dyn base1(<sym bad>);
    goto L3(i8, r11);
  D8():
    deopt 31 [i8, bad];
  L4():
    goto L7(i13);
  L7(i26):
    goto L1(i26);
  L25():
    bad1 = force? bad;
    checkMissing(bad1);
    any = ldf any in base;
    r13 = dyn any(bad1);
    check L26() else D9();
  L27():
    item2 = ld item;
    check L28() else D10();
  D9():
    deopt 34 [i8, r13];
  D10():
    deopt 35 [i13, item2];
  L26():
    goto L3(i8, r13);
  L28():
    item3 = force? item2;
    checkMissing(item3);
    c3 = `is.object`(item3);
    if c3 then L29() else L30(i13, item3);
  L5(i19, dx3):
    l1 = ld value;
    c4 = `is.object`(l1);
    if c4 then L33() else L34(i19, dx3, l1);
  L29():
    dr2 = tryDispatchBuiltin.1("[", item3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(i13, dr2);
  L30(i17, item5):
    bad2 = ld bad;
    check L32() else D11();
  D11():
    deopt 37 [i17, item5, bad2];
  L6(i23, dx8, dx9):
    st value = dx9;
    goto L7(i23);
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i13, dx2);
  L32():
    bad3 = force? bad2;
    checkMissing(bad3);
    r14 = `!`(bad3);
    __2 = ldf `[` in base;
    r15 = dyn __2(item5, r14);
    goto L5(i17, r15);
  L33():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(i19, dx3, dr4);
  L34(i21, dx5, l3):
    i24 = ld i;
    check L36() else D12();
  D12():
    deopt 42 [i21, dx5, l3, dx3, i24];
  L35():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L6(i19, dx3, dx7);
  L36():
    i25 = force? i24;
    ____ = ldf `[[<-` in base;
    r16 = dyn ____(l3, dx3, i25);
    goto L6(i21, dx5, r16);
  }
}
fun inner4259292012(txt) {
  (reg txt:*) -+> V { var txt:*, reg gsub:cls, reg txt1:*, reg txt2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st txt = txt;
    gsub = ldf gsub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      txt1 = ld txt;
      txt2 = force? txt1;
      checkMissing(txt2);
      return txt2;
    };
    r1 = dyn gsub[, , , fixed]("%", "\\%", p, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner1912617395(obj) {
  (reg obj:*) -+> V { var obj:*, reg ncol:cls, reg slot:cls, reg obj1:*, reg obj2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg r4:V |
    mkenv;
    st obj = obj;
    ncol = ldf ncol;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      slot = ldf slot;
      p = prom<V +>{
        obj1 = ld obj;
        obj2 = force? obj1;
        checkMissing(obj2);
        return obj2;
      };
      r1 = dyn slot(p, "y");
      return r1;
    };
    r3 = dyn ncol(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    r4 = `==`(r3, 1.0);
    popenv;
    return r4;
  }
}
fun inner3924448841(x, y, `...`) {
  (reg x:*, reg y:*, reg ddd:dots) -+> V { var x:*, var y:*, var `...`:dots?, reg plot:cls, reg slot:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg y1:*, reg y2:V, reg p2:p(V +), reg ddd1:dots?, reg r4:V |
    mkenv;
    st x = x;
    st y = y;
    st `...` = ddd;
    plot = ldf plot;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      slot = ldf slot;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn slot(p, "y");
      return r1;
    };
    p2 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    ddd1 = ld `...`;
    r4 = dyn plot[, , `...`](p1, p2, ddd1);
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}