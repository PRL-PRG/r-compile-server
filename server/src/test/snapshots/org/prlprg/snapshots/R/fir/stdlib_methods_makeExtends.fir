fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3227645984;
    st makeExtends = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3227645984(Class, coerce, test, replace, by, package, slots, classDef1, classDef2) {
  (reg Class:*, reg coerce:*, reg test:*, reg replace:*, reg by:*, reg package:*, reg slots:*, reg classDef1:*, reg classDef2:*) -+> V { var Class:*, var coerce:*, reg coerce_isMissing:L, reg coerce_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, var replace:*, reg replace_isMissing:L, reg replace_orDefault:*, var by:*, reg by_isMissing:L, reg by_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var package:*, var slots:*, reg slots_isMissing:L, reg slots_orDefault:*, reg getSlots:cls, reg classDef3:*, reg classDef4:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), var classDef1:*, reg classDef1_isMissing:L, reg classDef1_orDefault:*, reg getClass:cls, reg Class1:*, reg Class2:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), var classDef2:*, reg r8:cls, reg _requirePackage:cls, reg package1:*, reg package2:V, reg p5:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg missing:cls, reg r13:V, reg class1Defined:*, reg class1Defined1:V, reg c:L, reg __:cls, reg r14:V, reg packageSlot:cls, reg classDef5:*, reg classDef6:V, reg p6:p(V +), reg r16:V, reg l:*, reg packageSlot__:cls, reg r17:V, reg __1:cls, reg r19:V, reg packageSlot1:cls, reg classDef7:*, reg classDef8:V, reg p7:p(V +), reg r21:V, reg l1:*, reg packageSlot__1:cls, reg r22:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg coerce1:*, reg coerce2:V, reg c1:V, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg c7:L, reg r26:V, reg test1:*, reg test2:V, reg c8:V, reg c9:L, reg c10:V, reg c12:L, reg c14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg c17:L, reg r28:V, reg replace1:*, reg replace2:V, reg c18:V, reg c19:L, reg c20:V, reg c22:L, reg c24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg c27:L, reg r30:V, reg by1:*, reg by2:V, reg length:cls, reg r31:V, reg r32:V, reg c28:L, reg c29:V, reg elNamed:cls, reg slots1:*, reg slots2:V, reg p8:p(V +), reg r34:V, reg simple:*, reg simple1:V, reg c31:L, reg c33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg c36:L, reg r36:V, reg dataPartClass:*, reg dataPartClass1:V, reg c37:V, reg r37:V, reg c38:L, reg c39:V, reg c41:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg getClassDef:cls, reg dataPartClass2:*, reg dataPartClass3:V, reg p9:p(V +), reg r41:V, reg c42:V, reg c43:L, reg c44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg c48:L, reg r43:V, reg getClassDef1:cls, reg to:*, reg to1:V, reg p10:p(V +), reg r45:V, reg c49:V, reg c50:L, reg c51:V, reg r46:V, reg c53:L, reg dataEquiv:cls, reg dataPartClass4:*, reg dataPartClass5:V, reg p11:p(V +), reg to2:*, reg to3:V, reg p12:p(V +), reg r49:V, reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg r53:V, reg coerce3:*, reg coerce4:V, reg c54:V, reg c55:L, reg _simpleExtCoerce:*, reg _simpleExtCoerce1:V, reg isXS3Class:cls, reg classDef9:*, reg classDef10:V, reg p13:p(V +), reg r55:V, reg c56:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg substitute:cls, reg r58:V, reg l2:*, reg body__:cls, reg packageEnv:*, reg packageEnv1:V, reg p14:p(V +), reg r60:V, reg r61:V, reg isVirtualClass:cls, reg classDef11:*, reg classDef12:V, reg p15:p(V +), reg r63:V, reg r64:V, reg c57:L, reg _simpleCoerceExpr:cls, reg Class3:*, reg Class4:V, reg p16:p(V +), reg to4:*, reg to5:V, reg p17:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg slots3:*, reg slots4:V, reg names:cls, reg r69:V, reg p18:p(V +), reg classDef13:*, reg classDef14:V, reg p19:p(V +), reg r72:V, reg l3:*, reg body__1:cls, reg packageEnv2:*, reg packageEnv3:V, reg p20:p(V +), reg r74:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r76:V, reg r77:V, reg coerce5:*, reg coerce6:V, reg is_function:cls, reg r78:V, reg c58:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r79:V, reg r80:V, reg formals:cls, reg coerce7:*, reg coerce8:V, reg p21:p(V +), reg r82:V, reg length1:cls, reg r83:V, reg r84:V, reg c59:L, reg _ChangeFormals:cls, reg coerce9:*, reg coerce10:V, reg p22:p(V +), reg _simpleIsCoerce:*, reg _simpleIsCoerce1:V, reg p23:p(V +), reg r87:V, reg _simpleExtCoerce2:*, reg _simpleExtCoerce3:V, reg body:cls, reg coerce11:*, reg coerce12:V, reg p24:p(V +), reg r89:V, reg l4:*, reg body__2:cls, reg environment:cls, reg coerce13:*, reg coerce14:V, reg p25:p(V +), reg r91:V, reg p26:p(V +), reg r93:V, reg tmp:*, reg tmp1:V, reg tmp2:V, reg _ChangeFormals1:cls, reg coerce15:*, reg coerce16:V, reg p27:p(V +), reg _simpleExtCoerce4:*, reg _simpleExtCoerce5:V, reg p28:p(V +), reg r96:V, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r97:V, reg r98:V, reg coerce17:*, reg coerce18:V, reg class:cls, reg r99:V, reg p29:p(V +), reg r101:V, reg p30:p(V +), reg r103:V, reg p31:p(V +), reg r105:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r106:V, reg r107:V, reg test3:*, reg test4:V, reg c60:V, reg c61:L, reg _simpleExtTest:*, reg _simpleExtTest1:V, reg _ChangeFormals2:cls, reg test5:*, reg test6:V, reg p32:p(V +), reg _simpleExtTest2:*, reg _simpleExtTest3:V, reg p33:p(V +), reg r111:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r112:V, reg r113:V, reg replace3:*, reg replace4:V, reg c62:V, reg c63:L, reg dataPart:*, reg dataPart1:V, reg c64:L, reg __2:cls, reg r114:V, reg c65:L, reg r116:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dataPartClass6:*, reg dataPartClass7:V, reg __3:cls, reg r117:V, reg is:cls, reg extn:*, reg extn1:V, reg p34:p(V +), reg r119:V, reg c66:L, reg __4:cls, reg r120:V, reg easy:*, reg easy1:V, reg c67:L, reg _dataPartReplace:*, reg _dataPartReplace1:V, reg c68:L, reg _dataPartReplace3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r122:V, reg dx4:V, reg _dataPartReplace4:*, reg _dataPartReplace5:V, reg c69:L, reg _dataPartReplace7:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r123:V, reg body1:cls, reg replace5:*, reg replace6:V, reg p35:p(V +), reg r125:V, reg substituteDirect:cls, reg bdy:*, reg bdy1:V, reg p36:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r127:V, reg r128:V, reg dataPartClass8:*, reg dataPartClass9:V, reg list:cls, reg r129:V, reg p37:p(V +), reg r131:V, reg l5:*, reg body__3:cls, reg environment1:cls, reg replace7:*, reg replace8:V, reg p38:p(V +), reg r133:V, reg p39:p(V +), reg r135:V, reg simple2:*, reg simple3:V, reg c70:L, reg _simpleExtReplace:*, reg _simpleExtReplace1:V, reg isXS3Class1:cls, reg classDef15:*, reg classDef16:V, reg p40:p(V +), reg r137:V, reg c71:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r138:V, reg r139:V, reg __5:cls, reg r140:V, reg attr:cls, reg r141:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r142:V, reg r143:V, reg S3Class:*, reg S3Class1:V, reg c72:V, reg c73:L, reg to6:*, reg to7:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r144:V, reg r145:V, reg quote:cls, reg r146:V, reg l6:*, reg body__4:cls, reg packageEnv4:*, reg packageEnv5:V, reg p41:p(V +), reg r148:V, reg r149:V, reg isVirtualClass1:cls, reg classDef17:*, reg classDef18:V, reg p42:p(V +), reg r151:V, reg c74:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r152:V, reg r153:V, reg substitute1:cls, reg r154:V, reg l7:*, reg body__5:cls, reg packageEnv6:*, reg packageEnv7:V, reg p43:p(V +), reg r156:V, reg class1Defined2:*, reg class1Defined3:V, reg c75:L, reg c77:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r157:V, reg c80:L, reg r158:V, reg slots5:*, reg slots6:V, reg length2:cls, reg r159:V, reg r160:V, reg c81:L, reg c82:V, reg c84:L, reg getAllSuperClasses:cls, reg classDef19:*, reg classDef20:V, reg p44:p(V +), reg r162:V, reg __6:cls, reg r163:V, reg ext:*, reg ext1:V, reg s:V, reg l8:I, reg i:I, reg i1:I, reg i2:I, reg c85:L, reg x:V, reg _identC:cls, reg eclass:*, reg eclass1:V, reg p45:p(V +), reg to9:*, reg to10:V, reg p46:p(V +), reg r166:V, reg c86:L, reg getClassDef2:cls, reg eclass2:*, reg eclass3:V, reg p47:p(V +), reg packageEnv8:*, reg packageEnv9:V, reg p48:p(V +), reg r170:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r171:V, reg i11:I, reg r172:V, reg edef:*, reg edef1:V, reg c87:V, reg r173:V, reg c88:L, reg i13:I, reg c90:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r174:V, reg i16:I, reg c93:L, reg r175:V, reg __7:cls, reg r176:V, reg length3:cls, reg r177:V, reg r178:V, reg c94:L, reg c95:V, reg c97:L, reg sameSlots:*, reg sameSlots1:V, reg c98:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r180:V, reg r181:V, reg substitute2:cls, reg r182:V, reg l9:*, reg body__6:cls, reg packageEnv10:*, reg packageEnv11:V, reg p49:p(V +), reg r184:V, reg r185:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r186:V, reg r187:V, reg toSlots:*, reg toSlots1:V, reg length4:cls, reg r188:V, reg r189:V, reg c99:L, reg _ErrorReplace:*, reg _ErrorReplace1:V, reg _simpleReplaceExpr:cls, reg classDef21:*, reg classDef22:V, reg p50:p(V +), reg r191:V, reg l10:*, reg body__7:cls, reg packageEnv12:*, reg packageEnv13:V, reg p51:p(V +), reg r193:V, reg _ErrorReplace2:*, reg _ErrorReplace3:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r194:V, reg r195:V, reg replace9:*, reg replace10:V, reg _ErrorReplace4:*, reg _ErrorReplace5:V, reg identical:cls, reg r196:V, reg c100:L, reg warning:cls, reg gettextf1:cls, reg to11:*, reg to12:V, reg p52:p(V +), reg dQuote1:cls, reg Class5:*, reg Class6:V, reg p53:p(V +), reg r199:V, reg p54:p(V +), reg r201:V, reg p55:p(V +), reg r203:V, reg r204:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r206:V, reg r207:V, reg replace11:*, reg replace12:V, reg is_function1:cls, reg r208:V, reg c101:L, reg sym28:cls, reg base28:cls, reg guard28:L, reg r209:V, reg r210:V, reg formals1:cls, reg replace13:*, reg replace14:V, reg p56:p(V +), reg r212:V, reg length5:cls, reg r213:V, reg r214:V, reg c102:L, reg _ChangeFormals3:cls, reg replace15:*, reg replace16:V, reg p57:p(V +), reg _dataPartReplace8:*, reg _dataPartReplace9:V, reg c103:L, reg _dataPartReplace11:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r216:V, reg p58:p(V +), reg r218:V, reg _ErrorReplace6:*, reg _ErrorReplace7:V, reg body2:cls, reg replace17:*, reg replace18:V, reg p59:p(V +), reg r220:V, reg l11:*, reg body__8:cls, reg environment2:cls, reg replace19:*, reg replace20:V, reg p60:p(V +), reg r222:V, reg p61:p(V +), reg r224:V, reg tmp3:*, reg tmp4:V, reg tmp5:V, reg _ChangeFormals4:cls, reg replace21:*, reg replace22:V, reg p62:p(V +), reg _ErrorReplace8:*, reg _ErrorReplace9:V, reg p63:p(V +), reg r227:V, reg stop1:cls, reg gettextf2:cls, reg dQuote2:cls, reg sym29:cls, reg base29:cls, reg guard29:L, reg r228:V, reg r229:V, reg replace23:*, reg replace24:V, reg class1:cls, reg r230:V, reg p64:p(V +), reg r232:V, reg p65:p(V +), reg r234:V, reg p66:p(V +), reg r236:V, reg new:cls, reg extClass:*, reg extClass1:V, reg p67:p(V +), reg Class7:*, reg Class8:V, reg p68:p(V +), reg to13:*, reg to14:V, reg p69:p(V +), reg package3:*, reg package4:V, reg p70:p(V +), reg coerce19:*, reg coerce20:V, reg p71:p(V +), reg test7:*, reg test8:V, reg p72:p(V +), reg replace25:*, reg replace26:V, reg p73:p(V +), reg simple4:*, reg simple5:V, reg p74:p(V +), reg by3:*, reg by4:V, reg p75:p(V +), reg dataPart2:*, reg dataPart3:V, reg p76:p(V +), reg distance:*, reg distance1:V, reg p77:p(V +), reg r248:V |
    mkenv;
    st Class = Class;
    coerce_isMissing = missing.0(coerce);
    if coerce_isMissing then L0(NULL) else L0(coerce);
  L0(coerce_orDefault):
    st coerce = coerce_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L1(NULL) else L1(test);
  L1(test_orDefault):
    st test = test_orDefault;
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
    st package = package;
    slots_isMissing = missing.0(slots);
    if slots_isMissing then L5() else L6(slots);
  L5():
    p2 = prom<V +>{
      getSlots = ldf getSlots;
      p1 = prom<V +>{
        classDef3 = ld classDef1;
        classDef4 = force? classDef3;
        checkMissing(classDef4);
        return classDef4;
      };
      r3 = dyn getSlots(p1);
      return r3;
    };
    goto L6(p2);
  L6(slots_orDefault):
    st slots = slots_orDefault;
    classDef1_isMissing = missing.0(classDef1);
    if classDef1_isMissing then L7() else L8(classDef1);
  L7():
    p4 = prom<V +>{
      getClass = ldf getClass;
      p3 = prom<V +>{
        Class1 = ld Class;
        Class2 = force? Class1;
        checkMissing(Class2);
        return Class2;
      };
      r6 = dyn getClass(p3);
      return r6;
    };
    goto L8(p4);
  L8(classDef1_orDefault):
    st classDef1 = classDef1_orDefault;
    st classDef2 = classDef2;
    r8 = clos inner337443693;
    st dataEquiv = r8;
    _requirePackage = ldf `.requirePackage`;
    check L89() else D0();
  D0():
    deopt 4 [];
  L89():
    p5 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    r10 = dyn _requirePackage(p5);
    check L90() else D1();
  D1():
    deopt 6 [r10];
  L90():
    st packageEnv = r10;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L91() else L92();
  L9(r12):
    st class1Defined = r12;
    class1Defined = ld class1Defined;
    check L93() else D2();
  L91():
    missing = ldf missing in base;
    r13 = dyn missing(<sym slots>);
    goto L9(r13);
  L92():
    r11 = dyn base(<sym slots>);
    goto L9(r11);
  D2():
    deopt 12 [class1Defined];
  L93():
    class1Defined1 = force? class1Defined;
    checkMissing(class1Defined1);
    c = `as.logical`(class1Defined1);
    if c then L94() else L10();
  L10():
    goto L11();
  L11():
    __1 = ldf `@` in base;
    r19 = dyn __1(<sym classDef2>, <sym className>);
    st to = r19;
    packageSlot1 = ldf packageSlot;
    check L100() else D7();
  L94():
    __ = ldf `@` in base;
    r14 = dyn __(<sym classDef1>, <sym className>);
    st Class = r14;
    packageSlot = ldf packageSlot;
    check L95() else D3();
  D3():
    deopt 18 [];
  D7():
    deopt 32 [];
  L95():
    p6 = prom<V +>{
      classDef5 = ld classDef1;
      classDef6 = force? classDef5;
      checkMissing(classDef6);
      return classDef6;
    };
    r16 = dyn packageSlot(p6);
    check L96() else D4();
  L100():
    p7 = prom<V +>{
      classDef7 = ld classDef2;
      classDef8 = force? classDef7;
      checkMissing(classDef8);
      return classDef8;
    };
    r21 = dyn packageSlot1(p7);
    check L101() else D8();
  D4():
    deopt 20 [r16];
  D8():
    deopt 34 [r21];
  L96():
    l = ld Class;
    packageSlot__ = ldf `packageSlot<-`;
    check L97() else D5();
  L101():
    l1 = ld to;
    packageSlot__1 = ldf `packageSlot<-`;
    check L102() else D9();
  D5():
    deopt 22 [r16, l, r16];
  D9():
    deopt 36 [r21, l1, r21];
  L97():
    r17 = dyn packageSlot__(l, NULL, r16);
    check L98() else D6();
  L102():
    r22 = dyn packageSlot__1(l1, NULL, r21);
    check L103() else D10();
  D6():
    deopt 24 [r16, r17];
  D10():
    deopt 38 [r21, r22];
  L98():
    st Class = r17;
    goto L11();
  L103():
    st to = r22;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L104() else L105();
  L12(r24):
    c2 = `as.logical`(r24);
    if c2 then L107() else L13(c2);
  L104():
    coerce1 = ld coerce;
    check L106() else D11();
  L105():
    r23 = dyn base1(<sym coerce>);
    goto L12(r23);
  D11():
    deopt 41 [coerce1];
  L13(c4):
    c12 = `as.logical`(c4);
    if c12 then L112() else L15(c12);
  L106():
    coerce2 = force? coerce1;
    checkMissing(coerce2);
    c1 = `==`(coerce2, NULL);
    goto L12(c1);
  L107():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L108() else L109();
  L14(c7, r26):
    c9 = `as.logical`(r26);
    c10 = `&&`(c7, c9);
    goto L13(c10);
  L15(c14):
    c22 = `as.logical`(c14);
    if c22 then L117() else L17(c22);
  L108():
    test1 = ld test;
    check L110() else D12();
  L109():
    r25 = dyn base2(<sym test>);
    goto L14(c2, r25);
  L112():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L113() else L114();
  D12():
    deopt 45 [c2, test1];
  L16(c17, r28):
    c19 = `as.logical`(r28);
    c20 = `&&`(c17, c19);
    goto L15(c20);
  L17(c24):
    st simple = c24;
    st distance = 1.0;
    elNamed = ldf elNamed;
    check L123() else D16();
  L110():
    test2 = force? test1;
    checkMissing(test2);
    c8 = `==`(test2, NULL);
    goto L14(c2, c8);
  L113():
    replace1 = ld replace;
    check L115() else D13();
  L114():
    r27 = dyn base3(<sym replace>);
    goto L16(c12, r27);
  L117():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L118() else L119();
  D13():
    deopt 50 [c12, replace1];
  D16():
    deopt 68 [];
  L18(c27, r30):
    r32 = `==`(r30, 0.0);
    c28 = `as.logical`(r32);
    c29 = `&&`(c27, c28);
    goto L17(c29);
  L115():
    replace2 = force? replace1;
    checkMissing(replace2);
    c18 = `==`(replace2, NULL);
    goto L16(c12, c18);
  L118():
    by1 = ld by;
    check L120() else D14();
  L119():
    r29 = dyn base4(<sym by>);
    goto L18(c22, r29);
  L123():
    p8 = prom<V +>{
      slots1 = ld slots;
      slots2 = force? slots1;
      checkMissing(slots2);
      return slots2;
    };
    r34 = dyn elNamed(p8, ".Data");
    check L124() else D17();
  D14():
    deopt 56 [c22, by1];
  D17():
    deopt 71 [r34];
  L120():
    by2 = force? by1;
    checkMissing(by2);
    length = ldf length in base;
    r31 = dyn length(by2);
    check L121() else D15();
  L124():
    st dataPartClass = r34;
    st dataPart = FALSE;
    simple = ld simple;
    check L125() else D18();
  D15():
    deopt 59 [c22, r31];
  D18():
    deopt 76 [simple];
  L121():
    goto L18(c22, r31);
  L125():
    simple1 = force? simple;
    checkMissing(simple1);
    c31 = `as.logical`(simple1);
    if c31 then L126() else L19(c31);
  L19(c33):
    c41 = `as.logical`(c33);
    if c41 then L131() else L21();
  L126():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L127() else L128();
  L20(c36, r36):
    r37 = `!`(r36);
    c38 = `as.logical`(r37);
    c39 = `&&`(c36, c38);
    goto L19(c39);
  L21():
    goto L27();
  L27():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L147() else L148();
  L127():
    dataPartClass = ld dataPartClass;
    check L129() else D19();
  L128():
    r35 = dyn base5(<sym dataPartClass>);
    goto L20(c31, r35);
  L131():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L132() else L133();
  D19():
    deopt 79 [c31, dataPartClass];
  L22(r39):
    c43 = `as.logical`(r39);
    if c43 then L23(c43) else L136();
  L28(r53):
    c55 = `as.logical`(r53);
    if c55 then L150() else L29();
  L129():
    dataPartClass1 = force? dataPartClass;
    checkMissing(dataPartClass1);
    c37 = `==`(dataPartClass1, NULL);
    goto L20(c31, c37);
  L132():
    getClassDef = ldf getClassDef;
    check L134() else D20();
  L133():
    r38 = dyn base6(<lang getClassDef(dataPartClass)>);
    goto L22(r38);
  L147():
    coerce3 = ld coerce;
    check L149() else D26();
  L148():
    r52 = dyn base8(<sym coerce>);
    goto L28(r52);
  D20():
    deopt 86 [];
  D26():
    deopt 109 [coerce3];
  L23(c44):
    r46 = `!`(c44);
    c53 = `as.logical`(r46);
    if c53 then L142() else L25();
  L29():
    sym11 = ldf `is.function`;
    base11 = ldf `is.function` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L169() else L170();
  L34():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L194() else L195();
  L134():
    p9 = prom<V +>{
      dataPartClass2 = ld dataPartClass;
      dataPartClass3 = force? dataPartClass2;
      checkMissing(dataPartClass3);
      return dataPartClass3;
    };
    r41 = dyn getClassDef(p9);
    check L135() else D21();
  L136():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L137() else L138();
  L149():
    coerce4 = force? coerce3;
    checkMissing(coerce4);
    c54 = `==`(coerce4, NULL);
    goto L28(c54);
  L150():
    _simpleExtCoerce = ld `.simpleExtCoerce`;
    check L151() else D27();
  D21():
    deopt 88 [r41];
  D27():
    deopt 112 [_simpleExtCoerce];
  L24(c48, r43):
    c50 = `as.logical`(r43);
    c51 = `||`(c48, c50);
    goto L23(c51);
  L25():
    goto L26(NULL);
  L26(r50):
    goto L27();
  L35(r77):
    c58 = `as.logical`(r77);
    if c58 then L173() else L36();
  L40(r107):
    c61 = `as.logical`(r107);
    if c61 then L197() else L41();
  L135():
    c42 = `==`(r41, NULL);
    goto L22(c42);
  L137():
    getClassDef1 = ldf getClassDef;
    check L139() else D22();
  L138():
    r42 = dyn base7(<lang getClassDef(to)>);
    goto L24(c43, r42);
  L142():
    dataEquiv = ldf dataEquiv;
    check L143() else D24();
  L151():
    _simpleExtCoerce1 = force? _simpleExtCoerce;
    checkMissing(_simpleExtCoerce1);
    st coerce = _simpleExtCoerce1;
    isXS3Class = ldf isXS3Class;
    check L152() else D28();
  L169():
    coerce5 = ld coerce;
    check L171() else D38();
  L170():
    r76 = dyn base11(<sym coerce>);
    goto L35(r76);
  L194():
    test3 = ld test;
    check L196() else D55();
  L195():
    r106 = dyn base14(<sym test>);
    goto L40(r106);
  D22():
    deopt 92 [c43];
  D24():
    deopt 99 [];
  D28():
    deopt 116 [];
  D38():
    deopt 152 [coerce5];
  D55():
    deopt 204 [test3];
  L36():
    stop = ldf stop;
    check L192() else D53();
  L41():
    _ChangeFormals2 = ldf `.ChangeFormals`;
    check L200() else D57();
  L42():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L202() else L203();
  L139():
    p10 = prom<V +>{
      to = ld to;
      to1 = force? to;
      checkMissing(to1);
      return to1;
    };
    r45 = dyn getClassDef1(p10);
    check L140() else D23();
  L143():
    p11 = prom<V +>{
      dataPartClass4 = ld dataPartClass;
      dataPartClass5 = force? dataPartClass4;
      checkMissing(dataPartClass5);
      return dataPartClass5;
    };
    p12 = prom<V +>{
      to2 = ld to;
      to3 = force? to2;
      checkMissing(to3);
      return to3;
    };
    r49 = dyn dataEquiv(p11, p12);
    check L144() else D25();
  L152():
    p13 = prom<V +>{
      classDef9 = ld classDef2;
      classDef10 = force? classDef9;
      checkMissing(classDef10);
      return classDef10;
    };
    r55 = dyn isXS3Class(p13);
    check L153() else D29();
  L171():
    coerce6 = force? coerce5;
    checkMissing(coerce6);
    is_function = ldf `is.function` in base;
    r78 = dyn is_function(coerce6);
    check L172() else D39();
  L173():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L174() else L175();
  L196():
    test4 = force? test3;
    checkMissing(test4);
    c60 = `==`(test4, NULL);
    goto L40(c60);
  L197():
    _simpleExtTest = ld `.simpleExtTest`;
    check L198() else D56();
  D23():
    deopt 94 [c43, r45];
  D25():
    deopt 102 [r49];
  D29():
    deopt 118 [r55];
  D39():
    deopt 155 [r78];
  D53():
    deopt 198 [];
  D56():
    deopt 207 [_simpleExtTest];
  D57():
    deopt 214 [];
  L37(r80):
    r84 = `==`(r80, 1.0);
    c59 = `as.logical`(r84);
    if c59 then L179() else L38();
  L43(r113):
    c63 = `as.logical`(r113);
    if c63 then L205() else L44();
  L140():
    c49 = `==`(r45, NULL);
    goto L24(c43, c49);
  L144():
    st dataPart = r49;
    goto L26(r49);
  L153():
    c56 = `as.logical`(r55);
    if c56 then L154() else L30();
  L172():
    goto L35(r78);
  L174():
    formals = ldf formals;
    check L176() else D40();
  L175():
    r79 = dyn base12(<lang formals(coerce)>);
    goto L37(r79);
  L192():
    p31 = prom<V +>{
      gettextf = ldf gettextf;
      p30 = prom<V +>{
        dQuote = ldf dQuote;
        p29 = prom<V +>{
          sym13 = ldf class;
          base13 = ldf class in base;
          guard13 = `==`.4(sym13, base13);
          if guard13 then L1() else L2();
        L0(r98):
          return r98;
        L1():
          coerce17 = ld coerce;
          coerce18 = force? coerce17;
          checkMissing(coerce18);
          class = ldf class in base;
          r99 = dyn class(coerce18);
          goto L0(r99);
        L2():
          r97 = dyn base13(<sym coerce>);
          goto L0(r97);
        };
        r101 = dyn dQuote(p29);
        return r101;
      };
      r103 = dyn gettextf("the 'coerce' argument to 'setIs' should be a function of one argument, got an object of class %s", p30);
      return r103;
    };
    r105 = dyn stop[, domain](p31, NA_LGL);
    check L193() else D54();
  L198():
    _simpleExtTest1 = force? _simpleExtTest;
    checkMissing(_simpleExtTest1);
    st test = _simpleExtTest1;
    st extClass = "SClassExtension";
    goto L42();
  L200():
    p32 = prom<V +>{
      test5 = ld test;
      test6 = force? test5;
      checkMissing(test6);
      return test6;
    };
    p33 = prom<V +>{
      _simpleExtTest2 = ld `.simpleExtTest`;
      _simpleExtTest3 = force? _simpleExtTest2;
      checkMissing(_simpleExtTest3);
      return _simpleExtTest3;
    };
    r111 = dyn _ChangeFormals2(p32, p33, "'test' argument to setIs ");
    check L201() else D58();
  L202():
    replace3 = ld replace;
    check L204() else D59();
  L203():
    r112 = dyn base15(<sym replace>);
    goto L43(r112);
  D40():
    deopt 159 [];
  D54():
    deopt 202 [r105];
  D58():
    deopt 218 [r111];
  D59():
    deopt 224 [replace3];
  L30():
    isVirtualClass = ldf isVirtualClass;
    check L160() else D32();
  L32(r61):
    goto L34();
  L38():
    _ChangeFormals1 = ldf `.ChangeFormals`;
    check L189() else D51();
  L39(tmp2):
    goto L34();
  L44():
    sym27 = ldf `is.function`;
    base27 = ldf `is.function` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L325() else L326();
  L83():
    new = ldf new;
    check L350() else D131();
  L154():
    sym9 = ldf substitute;
    base9 = ldf substitute in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L155() else L156();
  L176():
    p21 = prom<V +>{
      coerce7 = ld coerce;
      coerce8 = force? coerce7;
      checkMissing(coerce8);
      return coerce8;
    };
    r82 = dyn formals(p21);
    check L177() else D41();
  L179():
    _ChangeFormals = ldf `.ChangeFormals`;
    check L180() else D43();
  L193():
    goto L34();
  L201():
    st test = r111;
    st extClass = "conditionalExtension";
    goto L42();
  L204():
    replace4 = force? replace3;
    checkMissing(replace4);
    c62 = `==`(replace4, NULL);
    goto L43(c62);
  L205():
    dataPart = ld dataPart;
    check L206() else D60();
  D32():
    deopt 130 [];
  D41():
    deopt 161 [r82];
  D43():
    deopt 167 [];
  D51():
    deopt 191 [];
  D60():
    deopt 227 [dataPart];
  D131():
    deopt 504 [];
  L31(r57):
    l2 = ld coerce;
    body__ = ldf `body<-`;
    check L157() else D30();
  L84(r207):
    c101 = `as.logical`(r207);
    if c101 then L329() else L85();
  L155():
    substitute = ldf substitute in base;
    r58 = dyn substitute(<lang {
      if(strict, `::`(methods, S3Part)(from, S3Class=S3CLASS), from)
    }>, <lang list(S3CLASS=to)>);
    goto L31(r58);
  L156():
    r56 = dyn base9(<lang {
      if(strict, `::`(methods, S3Part)(from, S3Class=S3CLASS), from)
    }>, <lang list(S3CLASS=to)>);
    goto L31(r56);
  L160():
    p15 = prom<V +>{
      classDef11 = ld classDef2;
      classDef12 = force? classDef11;
      checkMissing(classDef12);
      return classDef12;
    };
    r63 = dyn isVirtualClass(p15);
    check L161() else D33();
  L177():
    length1 = ldf length in base;
    r83 = dyn length1(r82);
    check L178() else D42();
  L180():
    p22 = prom<V +>{
      coerce9 = ld coerce;
      coerce10 = force? coerce9;
      checkMissing(coerce10);
      return coerce10;
    };
    p23 = prom<V +>{
      _simpleIsCoerce = ld `.simpleIsCoerce`;
      _simpleIsCoerce1 = force? _simpleIsCoerce;
      checkMissing(_simpleIsCoerce1);
      return _simpleIsCoerce1;
    };
    r87 = dyn _ChangeFormals(p22, p23, "'coerce' argument to setIs ");
    check L181() else D44();
  L189():
    p27 = prom<V +>{
      coerce15 = ld coerce;
      coerce16 = force? coerce15;
      checkMissing(coerce16);
      return coerce16;
    };
    p28 = prom<V +>{
      _simpleExtCoerce4 = ld `.simpleExtCoerce`;
      _simpleExtCoerce5 = force? _simpleExtCoerce4;
      checkMissing(_simpleExtCoerce5);
      return _simpleExtCoerce5;
    };
    r96 = dyn _ChangeFormals1(p27, p28, "'coerce' argument to setIs ");
    check L190() else D52();
  L206():
    dataPart1 = force? dataPart;
    checkMissing(dataPart1);
    c64 = `as.logical`(dataPart1);
    if c64 then L207() else L45();
  L325():
    replace11 = ld replace;
    check L327() else D114();
  L326():
    r206 = dyn base27(<sym replace>);
    goto L84(r206);
  L350():
    p67 = prom<V +>{
      extClass = ld extClass;
      extClass1 = force? extClass;
      checkMissing(extClass1);
      return extClass1;
    };
    p68 = prom<V +>{
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      return Class8;
    };
    p69 = prom<V +>{
      to13 = ld to;
      to14 = force? to13;
      checkMissing(to14);
      return to14;
    };
    p70 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p71 = prom<V +>{
      coerce19 = ld coerce;
      coerce20 = force? coerce19;
      checkMissing(coerce20);
      return coerce20;
    };
    p72 = prom<V +>{
      test7 = ld test;
      test8 = force? test7;
      checkMissing(test8);
      return test8;
    };
    p73 = prom<V +>{
      replace25 = ld replace;
      replace26 = force? replace25;
      checkMissing(replace26);
      return replace26;
    };
    p74 = prom<V +>{
      simple4 = ld simple;
      simple5 = force? simple4;
      checkMissing(simple5);
      return simple5;
    };
    p75 = prom<V +>{
      by3 = ld by;
      by4 = force? by3;
      checkMissing(by4);
      return by4;
    };
    p76 = prom<V +>{
      dataPart2 = ld dataPart;
      dataPart3 = force? dataPart2;
      checkMissing(dataPart3);
      return dataPart3;
    };
    p77 = prom<V +>{
      distance = ld distance;
      distance1 = force? distance;
      checkMissing(distance1);
      return distance1;
    };
    r248 = dyn new[, subClass, superClass, package, coerce, test, replace, simple, by, dataPart, distance](p67, p68, p69, p70, p71, p72, p73, p74, p75, p76, p77);
    check L351() else D132();
  D30():
    deopt 123 [r57, l2, r57];
  D33():
    deopt 132 [r63];
  D42():
    deopt 163 [r83];
  D44():
    deopt 171 [r87];
  D52():
    deopt 195 [r96];
  D114():
    deopt 452 [replace11];
  D132():
    deopt 526 [r248];
  L45():
    simple2 = ld simple;
    check L236() else D73();
  L51():
    sym26 = ldf identical;
    base26 = ldf identical in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L315() else L316();
  L85():
    stop1 = ldf stop;
    check L348() else D129();
  L157():
    p14 = prom<V +>{
      packageEnv = ld packageEnv;
      packageEnv1 = force? packageEnv;
      checkMissing(packageEnv1);
      return packageEnv1;
    };
    r60 = dyn body__[, , envir, ](l2, NULL, p14, r57);
    check L158() else D31();
  L161():
    r64 = `!`(r63);
    c57 = `as.logical`(r64);
    if c57 then L162() else L33();
  L178():
    goto L37(r83);
  L181():
    st coerce = r87;
    _simpleExtCoerce2 = ld `.simpleExtCoerce`;
    check L182() else D45();
  L190():
    st coerce = r96;
    goto L39(r96);
  L207():
    __2 = ldf `@` in base;
    r114 = dyn __2(<sym classDef2>, <sym contains>);
    c65 = `is.object`(r114);
    if c65 then L208() else L209(r114);
  L327():
    replace12 = force? replace11;
    checkMissing(replace12);
    is_function1 = ldf `is.function` in base;
    r208 = dyn is_function1(replace12);
    check L328() else D115();
  L329():
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L330() else L331();
  L351():
    popenv;
    return r248;
  D31():
    deopt 127 [r57, r60];
  D45():
    deopt 173 [_simpleExtCoerce2];
  D73():
    deopt 273 [simple2];
  D115():
    deopt 455 [r208];
  D129():
    deopt 498 [];
  L33():
    goto L32(NULL);
  L46(dx1):
    st extn = dx1;
    is = ldf is;
    check L212() else D62();
  L80(r195):
    c100 = `as.logical`(r195);
    if c100 then L320() else L81();
  L86(r210):
    r214 = `==`(r210, 2.0);
    c102 = `as.logical`(r214);
    if c102 then L335() else L87();
  L158():
    st coerce = r60;
    goto L32(r57);
  L162():
    _simpleCoerceExpr = ldf `.simpleCoerceExpr`;
    check L163() else D34();
  L182():
    _simpleExtCoerce3 = force? _simpleExtCoerce2;
    checkMissing(_simpleExtCoerce3);
    st tmp = _simpleExtCoerce3;
    body = ldf body;
    check L183() else D46();
  L208():
    dr = tryDispatchBuiltin.1("[[", r114);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L210() else L209(dr);
  L209(r116):
    dataPartClass6 = ld dataPartClass;
    check L211() else D61();
  L236():
    simple3 = force? simple2;
    checkMissing(simple3);
    c70 = `as.logical`(simple3);
    if c70 then L237() else L52();
  L315():
    replace9 = ld replace;
    check L317() else D109();
  L316():
    r194 = dyn base26(<sym replace>, <sym .ErrorReplace>);
    goto L80(r194);
  L328():
    goto L84(r208);
  L330():
    formals1 = ldf formals;
    check L332() else D116();
  L331():
    r209 = dyn base28(<lang formals(replace)>);
    goto L86(r209);
  L348():
    p66 = prom<V +>{
      gettextf2 = ldf gettextf;
      p65 = prom<V +>{
        dQuote2 = ldf dQuote;
        p64 = prom<V +>{
          sym29 = ldf class;
          base29 = ldf class in base;
          guard29 = `==`.4(sym29, base29);
          if guard29 then L1() else L2();
        L0(r229):
          return r229;
        L1():
          replace23 = ld replace;
          replace24 = force? replace23;
          checkMissing(replace24);
          class1 = ldf class in base;
          r230 = dyn class1(replace24);
          goto L0(r230);
        L2():
          r228 = dyn base29(<sym replace>);
          goto L0(r228);
        };
        r232 = dyn dQuote2(p64);
        return r232;
      };
      r234 = dyn gettextf2("the 'replace' argument to setIs() should be a function of 2 or 3 arguments, got an object of class %s", p65);
      return r234;
    };
    r236 = dyn stop1[, domain](p66, NA_LGL);
    check L349() else D130();
  D34():
    deopt 135 [];
  D46():
    deopt 177 [];
  D61():
    deopt 231 [r116, dataPartClass6];
  D62():
    deopt 236 [];
  D109():
    deopt 429 [replace9];
  D116():
    deopt 459 [];
  D130():
    deopt 502 [r236];
  L52():
    _ErrorReplace2 = ld `.ErrorReplace`;
    check L314() else D108();
  L81():
    goto L82(NULL);
  L82(r204):
    goto L83();
  L87():
    _ChangeFormals4 = ldf `.ChangeFormals`;
    check L345() else D127();
  L88(tmp5):
    goto L83();
  L163():
    p16 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p17 = prom<V +>{
      to4 = ld to;
      to5 = force? to4;
      checkMissing(to5);
      return to5;
    };
    p18 = prom<V +>{
      sym10 = ldf names;
      base10 = ldf names in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r68):
      return r68;
    L1():
      slots3 = ld slots;
      slots4 = force? slots3;
      checkMissing(slots4);
      names = ldf names in base;
      r69 = dyn names(slots4);
      goto L0(r69);
    L2():
      r67 = dyn base10(<sym slots>);
      goto L0(r67);
    };
    p19 = prom<V +>{
      classDef13 = ld classDef2;
      classDef14 = force? classDef13;
      checkMissing(classDef14);
      return classDef14;
    };
    r72 = dyn _simpleCoerceExpr(p16, p17, p18, p19);
    check L164() else D35();
  L183():
    p24 = prom<V +>{
      coerce11 = ld coerce;
      coerce12 = force? coerce11;
      checkMissing(coerce12);
      return coerce12;
    };
    r89 = dyn body(p24);
    check L184() else D47();
  L210():
    dx = getTryDispatchBuiltinValue(dr);
    goto L46(dx);
  L211():
    dataPartClass7 = force? dataPartClass6;
    __3 = ldf `[[` in base;
    r117 = dyn __3(r116, dataPartClass7);
    goto L46(r117);
  L212():
    p34 = prom<V +>{
      extn = ld extn;
      extn1 = force? extn;
      checkMissing(extn1);
      return extn1;
    };
    r119 = dyn is(p34, "SClassExtension");
    check L213() else D63();
  L237():
    _simpleExtReplace = ld `.simpleExtReplace`;
    check L238() else D74();
  L317():
    replace10 = force? replace9;
    checkMissing(replace10);
    _ErrorReplace4 = ld `.ErrorReplace`;
    check L318() else D110();
  L320():
    warning = ldf warning;
    check L321() else D112();
  L332():
    p56 = prom<V +>{
      replace13 = ld replace;
      replace14 = force? replace13;
      checkMissing(replace14);
      return replace14;
    };
    r212 = dyn formals1(p56);
    check L333() else D117();
  L335():
    _ChangeFormals3 = ldf `.ChangeFormals`;
    check L336() else D119();
  L349():
    goto L83();
  D35():
    deopt 140 [r72];
  D47():
    deopt 179 [r89];
  D63():
    deopt 239 [r119];
  D74():
    deopt 275 [_simpleExtReplace];
  D108():
    deopt 424 [_ErrorReplace2];
  D110():
    deopt 431 [_ErrorReplace4];
  D112():
    deopt 443 [];
  D117():
    deopt 461 [r212];
  D119():
    deopt 467 [];
  D127():
    deopt 491 [];
  L164():
    l3 = ld coerce;
    body__1 = ldf `body<-`;
    check L165() else D36();
  L184():
    l4 = ld tmp;
    body__2 = ldf `body<-`;
    check L185() else D48();
  L213():
    c66 = `as.logical`(r119);
    if c66 then L214() else L47();
  L238():
    _simpleExtReplace1 = force? _simpleExtReplace;
    checkMissing(_simpleExtReplace1);
    st replace = _simpleExtReplace1;
    isXS3Class1 = ldf isXS3Class;
    check L239() else D75();
  L314():
    _ErrorReplace3 = force? _ErrorReplace2;
    checkMissing(_ErrorReplace3);
    st replace = _ErrorReplace3;
    goto L51();
  L318():
    _ErrorReplace5 = force? _ErrorReplace4;
    checkMissing(_ErrorReplace5);
    identical = ldf identical in base;
    r196 = dyn identical(replace10, _ErrorReplace5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L319() else D111();
  L321():
    p55 = prom<V +>{
      gettextf1 = ldf gettextf;
      p52 = prom<V +>{
        to11 = ld to;
        to12 = force? to11;
        checkMissing(to12);
        return to12;
      };
      p54 = prom<V +>{
        dQuote1 = ldf dQuote;
        p53 = prom<V +>{
          Class5 = ld Class;
          Class6 = force? Class5;
          checkMissing(Class6);
          return Class6;
        };
        r199 = dyn dQuote1(p53);
        return r199;
      };
      r201 = dyn gettextf1("there is no automatic definition for 'as(object, \"%s\") <- value' when object has class %s and no 'replace' argument was supplied; replacement will be an error", p52, p54);
      return r201;
    };
    r203 = dyn warning[, domain](p55, NA_LGL);
    check L322() else D113();
  L333():
    length5 = ldf length in base;
    r213 = dyn length5(r212);
    check L334() else D118();
  L336():
    p57 = prom<V +>{
      replace15 = ld replace;
      replace16 = force? replace15;
      checkMissing(replace16);
      return replace16;
    };
    p58 = prom<V +>{
      _dataPartReplace8 = ld `.dataPartReplace`;
      _dataPartReplace9 = force? _dataPartReplace8;
      checkMissing(_dataPartReplace9);
      c103 = `is.object`(_dataPartReplace9);
      if c103 then L1() else L2(_dataPartReplace9);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("$", _dataPartReplace9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(_dataPartReplace11):
      r216 = `$`(_dataPartReplace11, <sym f2args>);
      goto L0(r216);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    r218 = dyn _ChangeFormals3(p57, p58, "'replace' argument to setIs ");
    check L337() else D120();
  L345():
    p62 = prom<V +>{
      replace21 = ld replace;
      replace22 = force? replace21;
      checkMissing(replace22);
      return replace22;
    };
    p63 = prom<V +>{
      _ErrorReplace8 = ld `.ErrorReplace`;
      _ErrorReplace9 = force? _ErrorReplace8;
      checkMissing(_ErrorReplace9);
      return _ErrorReplace9;
    };
    r227 = dyn _ChangeFormals4(p62, p63, "'replace' argument to setIs ");
    check L346() else D128();
  D36():
    deopt 142 [r72, l3, r72];
  D48():
    deopt 181 [r89, l4, r89];
  D75():
    deopt 279 [];
  D111():
    deopt 441 [r196];
  D113():
    deopt 447 [r203];
  D118():
    deopt 463 [r213];
  D120():
    deopt 471 [r218];
  D128():
    deopt 495 [r227];
  L47():
    st easy = FALSE;
    goto L48();
  L48():
    easy = ld easy;
    check L216() else D64();
  L165():
    p20 = prom<V +>{
      packageEnv2 = ld packageEnv;
      packageEnv3 = force? packageEnv2;
      checkMissing(packageEnv3);
      return packageEnv3;
    };
    r74 = dyn body__1[, , envir, ](l3, NULL, p20, r72);
    check L166() else D37();
  L185():
    p26 = prom<V +>{
      environment = ldf environment;
      p25 = prom<V +>{
        coerce13 = ld coerce;
        coerce14 = force? coerce13;
        checkMissing(coerce14);
        return coerce14;
      };
      r91 = dyn environment(p25);
      return r91;
    };
    r93 = dyn body__2[, , envir, ](l4, NULL, p26, r89);
    check L186() else D49();
  L214():
    __4 = ldf `@` in base;
    r120 = dyn __4(<sym extn>, <sym simple>);
    st easy = r120;
    goto L48();
  L239():
    p40 = prom<V +>{
      classDef15 = ld classDef2;
      classDef16 = force? classDef15;
      checkMissing(classDef16);
      return classDef16;
    };
    r137 = dyn isXS3Class1(p40);
    check L240() else D76();
  L319():
    goto L80(r196);
  L322():
    goto L82(r203);
  L334():
    goto L86(r213);
  L337():
    st replace = r218;
    _ErrorReplace6 = ld `.ErrorReplace`;
    check L338() else D121();
  L346():
    st replace = r227;
    goto L88(r227);
  D37():
    deopt 146 [r72, r74];
  D49():
    deopt 185 [r89, r93];
  D64():
    deopt 246 [easy];
  D76():
    deopt 281 [r137];
  D121():
    deopt 473 [_ErrorReplace6];
  L166():
    st coerce = r74;
    goto L32(r72);
  L186():
    st tmp = r93;
    tmp = ld tmp;
    check L187() else D50();
  L216():
    easy1 = force? easy;
    checkMissing(easy1);
    c67 = `as.logical`(easy1);
    if c67 then L217() else L49();
  L240():
    c71 = `as.logical`(r137);
    if c71 then L241() else L53();
  L338():
    _ErrorReplace7 = force? _ErrorReplace6;
    checkMissing(_ErrorReplace7);
    st tmp = _ErrorReplace7;
    body2 = ldf body;
    check L339() else D122();
  D50():
    deopt 187 [tmp];
  D122():
    deopt 477 [];
  L49():
    _dataPartReplace4 = ld `.dataPartReplace`;
    check L224() else D66();
  L50(dx4):
    goto L51();
  L53():
    isVirtualClass1 = ldf isVirtualClass;
    check L256() else D82();
  L59(r149):
    goto L51();
  L187():
    tmp1 = force? tmp;
    checkMissing(tmp1);
    st coerce = tmp1;
    goto L39(tmp1);
  L217():
    _dataPartReplace = ld `.dataPartReplace`;
    check L218() else D65();
  L241():
    sym17 = ldf attr;
    base17 = ldf attr in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L242() else L243();
  L339():
    p59 = prom<V +>{
      replace17 = ld replace;
      replace18 = force? replace17;
      checkMissing(replace18);
      return replace18;
    };
    r220 = dyn body2(p59);
    check L340() else D123();
  D65():
    deopt 248 [_dataPartReplace];
  D66():
    deopt 252 [_dataPartReplace4];
  D82():
    deopt 310 [];
  D123():
    deopt 479 [r220];
  L54(r139):
    st S3Class = r139;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L245() else L246();
  L218():
    _dataPartReplace1 = force? _dataPartReplace;
    checkMissing(_dataPartReplace1);
    c68 = `is.object`(_dataPartReplace1);
    if c68 then L220() else L221(_dataPartReplace1);
  L224():
    _dataPartReplace5 = force? _dataPartReplace4;
    checkMissing(_dataPartReplace5);
    c69 = `is.object`(_dataPartReplace5);
    if c69 then L226() else L227(_dataPartReplace5);
  L242():
    __5 = ldf `@` in base;
    r140 = dyn __5(<sym classDef2>, <sym prototype>);
    attr = ldf attr in base;
    r141 = dyn attr(r140, ".S3Class");
    check L244() else D77();
  L243():
    r138 = dyn base17(<lang `@`(classDef2, prototype)>, ".S3Class");
    goto L54(r138);
  L256():
    p42 = prom<V +>{
      classDef17 = ld classDef2;
      classDef18 = force? classDef17;
      checkMissing(classDef18);
      return classDef18;
    };
    r151 = dyn isVirtualClass1(p42);
    check L257() else D83();
  L340():
    l11 = ld tmp;
    body__8 = ldf `body<-`;
    check L341() else D124();
  D77():
    deopt 288 [r141];
  D83():
    deopt 312 [r151];
  D124():
    deopt 481 [r220, l11, r220];
  L55(r143):
    c73 = `as.logical`(r143);
    if c73 then L248() else L56();
  L219(dx3):
    st replace = dx3;
    goto L50(dx3);
  L220():
    dr2 = tryDispatchBuiltin.1("$", _dataPartReplace1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L222() else L221(dr2);
  L221(_dataPartReplace3):
    r122 = `$`(_dataPartReplace3, <sym f1>);
    goto L219(r122);
  L225(dx6):
    st replace = dx6;
    body1 = ldf body;
    check L229() else D67();
  L226():
    dr4 = tryDispatchBuiltin.1("$", _dataPartReplace5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L228() else L227(dr4);
  L227(_dataPartReplace7):
    r123 = `$`(_dataPartReplace7, <sym f2>);
    goto L225(r123);
  L244():
    goto L54(r141);
  L245():
    S3Class = ld S3Class;
    check L247() else D78();
  L246():
    r142 = dyn base18(<sym S3Class>);
    goto L55(r142);
  L257():
    c74 = `as.logical`(r151);
    if c74 then L258() else L60();
  L341():
    p61 = prom<V +>{
      environment2 = ldf environment;
      p60 = prom<V +>{
        replace19 = ld replace;
        replace20 = force? replace19;
        checkMissing(replace20);
        return replace20;
      };
      r222 = dyn environment2(p60);
      return r222;
    };
    r224 = dyn body__8[, , envir, ](l11, NULL, p61, r220);
    check L342() else D125();
  D67():
    deopt 257 [];
  D78():
    deopt 291 [S3Class];
  D125():
    deopt 485 [r220, r224];
  L56():
    goto L57();
  L57():
    sym19 = ldf quote;
    base19 = ldf quote in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L251() else L252();
  L60():
    class1Defined2 = ld class1Defined;
    check L264() else D86();
  L222():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L219(dx2);
  L228():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L225(dx5);
  L229():
    p35 = prom<V +>{
      replace5 = ld replace;
      replace6 = force? replace5;
      checkMissing(replace6);
      return replace6;
    };
    r125 = dyn body1(p35);
    check L230() else D68();
  L247():
    S3Class1 = force? S3Class;
    checkMissing(S3Class1);
    c72 = `==`(S3Class1, NULL);
    goto L55(c72);
  L248():
    to6 = ld to;
    check L249() else D79();
  L258():
    sym20 = ldf substitute;
    base20 = ldf substitute in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L259() else L260();
  L342():
    st tmp = r224;
    tmp3 = ld tmp;
    check L343() else D126();
  D68():
    deopt 259 [r125];
  D79():
    deopt 294 [to6];
  D86():
    deopt 323 [class1Defined2];
  D126():
    deopt 487 [tmp3];
  L58(r145):
    l6 = ld replace;
    body__4 = ldf `body<-`;
    check L253() else D80();
  L61(r153):
    l7 = ld replace;
    body__5 = ldf `body<-`;
    check L261() else D84();
  L230():
    st bdy = r125;
    substituteDirect = ldf substituteDirect;
    check L231() else D69();
  L249():
    to7 = force? to6;
    checkMissing(to7);
    st S3Class = to7;
    goto L57();
  L251():
    quote = ldf quote in base;
    r146 = dyn quote(<lang {
      `<-`(`::`(methods, S3Part)(from), value);
      from
    }>);
    goto L58(r146);
  L252():
    r144 = dyn base19(<lang {
      `<-`(`::`(methods, S3Part)(from), value);
      from
    }>);
    goto L58(r144);
  L259():
    substitute1 = ldf substitute in base;
    r154 = dyn substitute1(<lang {
      if(`!`(is(value, TO)), stop(gettextf("the computation: 'as(object,\"%s\") <- value' is valid when object has class %s only if 'is(value, \"%s\")' is TRUE ('class(value)' was %s)\n", TO, dQuote(FROM), TO, dQuote(class(value))), domain=NA_LGL));
      value
    }>, <lang list(FROM=Class, TO=to)>);
    goto L61(r154);
  L260():
    r152 = dyn base20(<lang {
      if(`!`(is(value, TO)), stop(gettextf("the computation: 'as(object,\"%s\") <- value' is valid when object has class %s only if 'is(value, \"%s\")' is TRUE ('class(value)' was %s)\n", TO, dQuote(FROM), TO, dQuote(class(value))), domain=NA_LGL));
      value
    }>, <lang list(FROM=Class, TO=to)>);
    goto L61(r152);
  L264():
    class1Defined3 = force? class1Defined2;
    checkMissing(class1Defined3);
    c75 = `as.logical`(class1Defined3);
    if c75 then L265() else L62(c75);
  L343():
    tmp4 = force? tmp3;
    checkMissing(tmp4);
    st replace = tmp4;
    goto L88(tmp4);
  D69():
    deopt 262 [];
  D80():
    deopt 303 [r145, l6, r145];
  D84():
    deopt 317 [r153, l7, r153];
  L62(c77):
    c84 = `as.logical`(c77);
    if c84 then L271() else L64();
  L231():
    p36 = prom<V +>{
      bdy = ld bdy;
      bdy1 = force? bdy;
      checkMissing(bdy1);
      return bdy1;
    };
    p37 = prom<V +>{
      sym16 = ldf list;
      base16 = ldf list in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r128):
      return r128;
    L1():
      dataPartClass8 = ld dataPartClass;
      dataPartClass9 = force? dataPartClass8;
      checkMissing(dataPartClass9);
      list = ldf list in base;
      r129 = dyn list(dataPartClass9);
      goto L0(r129);
    L2():
      r127 = dyn base16[THISCLASS](<sym dataPartClass>);
      goto L0(r127);
    };
    r131 = dyn substituteDirect(p36, p37);
    check L232() else D70();
  L253():
    p41 = prom<V +>{
      packageEnv4 = ld packageEnv;
      packageEnv5 = force? packageEnv4;
      checkMissing(packageEnv5);
      return packageEnv5;
    };
    r148 = dyn body__4[, , envir, ](l6, NULL, p41, r145);
    check L254() else D81();
  L261():
    p43 = prom<V +>{
      packageEnv6 = ld packageEnv;
      packageEnv7 = force? packageEnv6;
      checkMissing(packageEnv7);
      return packageEnv7;
    };
    r156 = dyn body__5[, , envir, ](l7, NULL, p43, r153);
    check L262() else D85();
  L265():
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L266() else L267();
  D70():
    deopt 265 [r131];
  D81():
    deopt 307 [r145, r148];
  D85():
    deopt 321 [r153, r156];
  L63(c80, r158):
    r160 = `==`(r158, 0.0);
    c81 = `as.logical`(r160);
    c82 = `&&`(c80, c81);
    goto L62(c82);
  L64():
    _simpleReplaceExpr = ldf `.simpleReplaceExpr`;
    check L309() else D104();
  L232():
    l5 = ld replace;
    body__3 = ldf `body<-`;
    check L233() else D71();
  L254():
    st replace = r148;
    goto L59(r145);
  L262():
    st replace = r156;
    goto L59(r153);
  L266():
    slots5 = ld slots;
    check L268() else D87();
  L267():
    r157 = dyn base21(<sym slots>);
    goto L63(c75, r157);
  L271():
    getAllSuperClasses = ldf getAllSuperClasses;
    check L272() else D89();
  D71():
    deopt 267 [r131, l5, r131];
  D87():
    deopt 327 [c75, slots5];
  D89():
    deopt 335 [];
  D104():
    deopt 414 [];
  L233():
    p39 = prom<V +>{
      environment1 = ldf environment;
      p38 = prom<V +>{
        replace7 = ld replace;
        replace8 = force? replace7;
        checkMissing(replace8);
        return replace8;
      };
      r133 = dyn environment1(p38);
      return r133;
    };
    r135 = dyn body__3[, , envir, ](l5, NULL, p39, r131);
    check L234() else D72();
  L268():
    slots6 = force? slots5;
    checkMissing(slots6);
    length2 = ldf length in base;
    r159 = dyn length2(slots6);
    check L269() else D88();
  L272():
    p44 = prom<V +>{
      classDef19 = ld classDef1;
      classDef20 = force? classDef19;
      checkMissing(classDef20);
      return classDef20;
    };
    r162 = dyn getAllSuperClasses(p44, TRUE);
    check L273() else D90();
  L309():
    p50 = prom<V +>{
      classDef21 = ld classDef2;
      classDef22 = force? classDef21;
      checkMissing(classDef22);
      return classDef22;
    };
    r191 = dyn _simpleReplaceExpr(p50);
    check L310() else D105();
  D72():
    deopt 271 [r131, r135];
  D88():
    deopt 330 [c75, r159];
  D90():
    deopt 338 [r162];
  D105():
    deopt 416 [r191];
  L234():
    st replace = r135;
    goto L50(r131);
  L269():
    goto L63(c75, r159);
  L273():
    st ext = r162;
    __6 = ldf `@` in base;
    r163 = dyn __6(<sym classDef2>, <sym slots>);
    st toSlots = r163;
    st sameSlots = TRUE;
    ext = ld ext;
    check L274() else D91();
  L310():
    l10 = ld replace;
    body__7 = ldf `body<-`;
    check L311() else D106();
  D91():
    deopt 346 [ext];
  D106():
    deopt 418 [r191, l10, r191];
  L274():
    ext1 = force? ext;
    checkMissing(ext1);
    s = toForSeq(ext1);
    l8 = length(s);
    i = 0;
    goto L65(i);
  L311():
    p51 = prom<V +>{
      packageEnv12 = ld packageEnv;
      packageEnv13 = force? packageEnv12;
      checkMissing(packageEnv13);
      return packageEnv13;
    };
    r193 = dyn body__7[, , envir, ](l10, NULL, p51, r191);
    check L312() else D107();
  D107():
    deopt 422 [r191, r193];
  L65(i1):
    i2 = `+`.1(i1, 1);
    c85 = `<`.1(l8, i2);
    if c85 then L275() else L74();
  L312():
    st replace = r193;
    goto L59(r191);
  L72():
    sameSlots = ld sameSlots;
    check L294() else D98();
  L74():
    x = `[[`(s, i2, NULL, TRUE);
    st eclass = x;
    _identC = ldf `.identC`;
    check L276() else D92();
  L275():
    goto L72();
  D92():
    deopt 349 [i2];
  D98():
    deopt 388 [sameSlots];
  L276():
    p45 = prom<V +>{
      eclass = ld eclass;
      eclass1 = force? eclass;
      checkMissing(eclass1);
      return eclass1;
    };
    p46 = prom<V +>{
      to9 = ld to;
      to10 = force? to9;
      checkMissing(to10);
      return to10;
    };
    r166 = dyn _identC(p45, p46);
    check L277() else D93();
  L294():
    sameSlots1 = force? sameSlots;
    checkMissing(sameSlots1);
    c98 = `as.logical`(sameSlots1);
    if c98 then L295() else L75();
  D93():
    deopt 352 [i2, r166];
  L75():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L301() else L302();
  L77(r185):
    goto L59(r185);
  L277():
    c86 = `as.logical`(r166);
    if c86 then L278() else L66();
  L295():
    sym24 = ldf substitute;
    base24 = ldf substitute in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L296() else L297();
  L66():
    getClassDef2 = ldf getClassDef;
    check L281() else D94();
  L76(r181):
    l9 = ld replace;
    body__6 = ldf `body<-`;
    check L298() else D99();
  L78(r187):
    r189 = `==`(r187, 0.0);
    c99 = `as.logical`(r189);
    if c99 then L305() else L79();
  L278():
    goto L65(i2);
  L296():
    substitute2 = ldf substitute in base;
    r182 = dyn substitute2(<lang {
      `<-`(class(value), FROM);
      value
    }>, <lang list(FROM=Class)>);
    goto L76(r182);
  L297():
    r180 = dyn base24(<lang {
      `<-`(class(value), FROM);
      value
    }>, <lang list(FROM=Class)>);
    goto L76(r180);
  L301():
    toSlots = ld toSlots;
    check L303() else D101();
  L302():
    r186 = dyn base25(<sym toSlots>);
    goto L78(r186);
  D94():
    deopt 358 [i2];
  D99():
    deopt 394 [r181, l9, r181];
  D101():
    deopt 402 [toSlots];
  L79():
    goto L77(NULL);
  L281():
    p47 = prom<V +>{
      eclass2 = ld eclass;
      eclass3 = force? eclass2;
      checkMissing(eclass3);
      return eclass3;
    };
    p48 = prom<V +>{
      packageEnv8 = ld packageEnv;
      packageEnv9 = force? packageEnv8;
      checkMissing(packageEnv9);
      return packageEnv9;
    };
    r170 = dyn getClassDef2[, where](p47, p48);
    check L282() else D95();
  L298():
    p49 = prom<V +>{
      packageEnv10 = ld packageEnv;
      packageEnv11 = force? packageEnv10;
      checkMissing(packageEnv11);
      return packageEnv11;
    };
    r184 = dyn body__6[, , envir, ](l9, NULL, p49, r181);
    check L299() else D100();
  L303():
    toSlots1 = force? toSlots;
    checkMissing(toSlots1);
    length4 = ldf length in base;
    r188 = dyn length4(toSlots1);
    check L304() else D102();
  L305():
    _ErrorReplace = ld `.ErrorReplace`;
    check L306() else D103();
  D95():
    deopt 362 [i2, r170];
  D100():
    deopt 398 [r181, r184];
  D102():
    deopt 405 [r188];
  D103():
    deopt 408 [_ErrorReplace];
  L282():
    st edef = r170;
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L283() else L284();
  L299():
    st replace = r184;
    goto L77(r181);
  L304():
    goto L78(r188);
  L306():
    _ErrorReplace1 = force? _ErrorReplace;
    checkMissing(_ErrorReplace1);
    st replace = _ErrorReplace1;
    goto L77(_ErrorReplace1);
  L68(i11, r172):
    r173 = `!`(r172);
    c88 = `as.logical`(r173);
    if c88 then L286() else L69(i11, c88);
  L283():
    edef = ld edef;
    check L285() else D96();
  L284():
    r171 = dyn base22(<sym edef>);
    goto L68(i2, r171);
  D96():
    deopt 365 [i2, edef];
  L69(i13, c90):
    c97 = `as.logical`(c90);
    if c97 then L291() else L71();
  L285():
    edef1 = force? edef;
    checkMissing(edef1);
    c87 = `==`(edef1, NULL);
    goto L68(i2, c87);
  L286():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L287() else L288();
  L70(i16, c93, r175):
    r178 = `>`(r175, 0.0);
    c94 = `as.logical`(r178);
    c95 = `&&`(c93, c94);
    goto L69(i16, c95);
  L71():
    goto L65(i13);
  L287():
    __7 = ldf `@` in base;
    r176 = dyn __7(<sym edef>, <sym slots>);
    length3 = ldf length in base;
    r177 = dyn length3(r176);
    check L289() else D97();
  L288():
    r174 = dyn base23(<lang `@`(edef, slots)>);
    goto L70(i11, c88, r174);
  L291():
    st sameSlots = FALSE;
    goto L72();
  D97():
    deopt 374 [i11, c88, r177];
  L289():
    goto L70(i11, c88, r177);
  }
}
fun inner337443693(cl1, cl2) {
  (reg cl1:*, reg cl2:*) -+> V { var cl1:*, var cl2:*, reg _identC:cls, reg cl3:*, reg cl4:V, reg p:p(V +), reg cl5:*, reg cl6:V, reg p1:p(V +), reg r2:V, reg c:L, reg c1:V, reg extends:cls, reg cl7:*, reg cl8:V, reg p2:p(V +), reg cl9:*, reg cl10:V, reg p3:p(V +), reg r5:V, reg c3:L, reg c6:L, reg c7:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg c12:L, reg c13:L, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg c18:L, reg c19:L, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c24:L, reg c25:L, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg c30:L, reg c31:L, reg r13:V, reg cl11:*, reg cl12:V, reg cl13:*, reg cl14:V, reg c32:cls, reg r14:V, reg _BasicClasses:*, reg _BasicClasses1:V, reg match:cls, reg r15:V, reg is_na:cls, reg r16:V, reg any:cls, reg r17:V, reg r18:V, reg c33:L, reg c34:V, reg c37:L, reg c38:V |
    mkenv;
    st cl1 = cl1;
    st cl2 = cl2;
    _identC = ldf `.identC`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      cl3 = ld cl1;
      cl4 = force? cl3;
      checkMissing(cl4);
      return cl4;
    };
    p1 = prom<V +>{
      cl5 = ld cl2;
      cl6 = force? cl5;
      checkMissing(cl6);
      return cl6;
    };
    r2 = dyn _identC(p, p1);
    check L7() else D1();
  D1():
    deopt 4 [r2];
  L7():
    c = `as.logical`(r2);
    if c then L0(c) else L8();
  L0(c1):
    popenv;
    return c1;
  L8():
    extends = ldf extends;
    check L9() else D2();
  D2():
    deopt 6 [c];
  L9():
    p2 = prom<V +>{
      cl7 = ld cl1;
      cl8 = force? cl7;
      checkMissing(cl8);
      return cl8;
    };
    p3 = prom<V +>{
      cl9 = ld cl2;
      cl10 = force? cl9;
      checkMissing(cl10);
      return cl10;
    };
    r5 = dyn extends(p2, p3);
    check L10() else D3();
  D3():
    deopt 9 [c, r5];
  L10():
    c3 = `as.logical`(r5);
    if c3 then L11() else L1(c, c3);
  L1(c6, c7):
    c37 = `as.logical`(c7);
    c38 = `||`(c6, c37);
    goto L0(c38);
  L11():
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(c12, c13, r7):
    r18 = `!`(r7);
    c33 = `as.logical`(r18);
    c34 = `&&`(c13, c33);
    goto L1(c12, c34);
  L12():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L13():
    r6 = dyn base(<lang is.na(match(c(cl1, cl2), .BasicClasses))>);
    goto L2(c, c3, r6);
  L3(c18, c19, r9):
    any = ldf any in base;
    r17 = dyn any(r9);
    check L26() else D10();
  L14():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L15():
    r8 = dyn base1(<lang match(c(cl1, cl2), .BasicClasses)>);
    goto L3(c, c3, r8);
  D10():
    deopt 33 [c18, c19, r17];
  L4(c24, c25, r11):
    is_na = ldf `is.na` in base;
    r16 = dyn is_na(r11);
    check L25() else D9();
  L16():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L18() else L19();
  L17():
    r10 = dyn base2(<lang c(cl1, cl2)>, <sym .BasicClasses>);
    goto L4(c, c3, r10);
  L26():
    goto L2(c18, c19, r17);
  D9():
    deopt 31 [c24, c25, r16];
  L5(c30, c31, r13):
    _BasicClasses = ld `.BasicClasses`;
    check L23() else D7();
  L18():
    cl11 = ld cl1;
    check L20() else D4();
  L19():
    r12 = dyn base3(<sym cl1>, <sym cl2>);
    goto L5(c, c3, r12);
  L25():
    goto L3(c24, c25, r16);
  D4():
    deopt 18 [c, c3, cl11];
  D7():
    deopt 24 [c30, c31, _BasicClasses];
  L20():
    cl12 = force? cl11;
    checkMissing(cl12);
    cl13 = ld cl2;
    check L21() else D5();
  L23():
    _BasicClasses1 = force? _BasicClasses;
    checkMissing(_BasicClasses1);
    match = ldf match in base;
    r15 = dyn match(r13, _BasicClasses1, NA_INT, NULL);
    check L24() else D8();
  D5():
    deopt 20 [c, c3, cl13];
  D8():
    deopt 29 [c30, c31, r15];
  L21():
    cl14 = force? cl13;
    checkMissing(cl14);
    c32 = ldf c in base;
    r14 = dyn c32(cl12, cl14);
    check L22() else D6();
  L24():
    goto L4(c30, c31, r15);
  D6():
    deopt 23 [c, c3, r14];
  L22():
    goto L5(c, c3, r14);
  }
}