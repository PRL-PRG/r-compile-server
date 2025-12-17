fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3363976672;
    st `.disambiguateMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3363976672(target, which, generic, methods, supersList, fromGroup, classDefs, verbose) {
  (reg target:*, reg which:*, reg generic:*, reg methods:*, reg supersList:*, reg fromGroup:*, reg classDefs:*, reg verbose:*) -+> V { var target:*, var which:*, var generic:*, var methods:*, var supersList:*, var fromGroup:*, var classDefs:*, var verbose:*, reg methods1:*, reg methods2:V, reg c:L, reg methods4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg which1:*, reg which2:V, reg __:cls, reg r:V, reg character:cls, reg r1:V, reg _leastMethodDistance:cls, reg candidates:*, reg candidates1:V, reg p:p(V +), reg supersList1:*, reg supersList2:V, reg p1:p(V +), reg classDefs1:*, reg classDefs2:V, reg p2:p(V +), reg fromGroup1:*, reg fromGroup2:V, reg c1:L, reg fromGroup4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg which3:*, reg which4:V, reg __1:cls, reg r5:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg which5:*, reg which6:V, reg length:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg r15:V, reg which7:*, reg which8:V, reg length1:cls, reg r16:V, reg r17:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg sprintf:cls, reg ngettext:cls, reg which9:*, reg which10:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg which11:*, reg which12:V, reg p6:p(V +), reg r24:V, reg c3:cls, reg r25:V, reg which13:*, reg which14:V, reg c4:L, reg which16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg which17:*, reg which18:V, reg __2:cls, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg which19:*, reg which20:V, reg length2:cls, reg r29:V, reg r30:V, reg c5:L, reg c7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg c10:L, reg r32:V, reg fromGroup5:*, reg fromGroup6:V, reg c11:L, reg c13:L, reg fromGroup8:V, reg dr6:V, reg dc3:L, reg dx7:V, reg c15:L, reg dx8:V, reg which21:*, reg which22:V, reg __3:cls, reg r33:V, reg any:cls, reg r34:V, reg c16:L, reg c17:V, reg c19:L, reg c21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg c24:L, reg r36:V, reg fromGroup9:*, reg fromGroup10:V, reg c25:L, reg c27:L, reg fromGroup12:V, reg dr8:V, reg dc4:L, reg dx9:V, reg c29:L, reg dx10:V, reg which23:*, reg which24:V, reg __4:cls, reg r37:V, reg all:cls, reg r38:V, reg r39:V, reg c30:L, reg c31:V, reg c33:L, reg which25:*, reg which26:V, reg c34:L, reg which28:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg fromGroup13:*, reg fromGroup14:V, reg r40:V, reg __5:cls, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg note:*, reg note1:V, reg sprintf1:cls, reg ngettext1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg which29:*, reg which30:V, reg length3:cls, reg r46:V, reg p7:p(V +), reg r48:V, reg p8:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r50:V, reg r51:V, reg which31:*, reg which32:V, reg length4:cls, reg r52:V, reg p9:p(V +), reg r54:V, reg c35:cls, reg r55:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg which33:*, reg which34:V, reg length5:cls, reg r59:V, reg r60:V, reg c36:L, reg vapply:cls, reg methods5:*, reg methods6:V, reg c37:L, reg methods8:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg which35:*, reg which36:V, reg __6:cls, reg r61:V, reg p10:p(V +), reg r63:cls, reg p11:p(V +), reg target1:*, reg target2:V, reg p12:p(V +), reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg direct:*, reg direct1:V, reg any1:cls, reg r69:V, reg c38:L, reg c40:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r70:V, reg c43:L, reg r71:V, reg direct2:*, reg direct3:V, reg all1:cls, reg r72:V, reg r73:V, reg c44:L, reg c45:V, reg c47:L, reg which37:*, reg which38:V, reg c48:L, reg which40:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg direct4:*, reg direct5:V, reg __7:cls, reg r74:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r75:V, reg r76:V, reg note2:*, reg note3:V, reg sprintf2:cls, reg ngettext2:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r77:V, reg r78:V, reg which41:*, reg which42:V, reg length6:cls, reg r79:V, reg p13:p(V +), reg r81:V, reg p14:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r83:V, reg r84:V, reg which43:*, reg which44:V, reg length7:cls, reg r85:V, reg p15:p(V +), reg r87:V, reg c49:cls, reg r88:V, reg r89:V, reg which45:*, reg which46:V, reg c50:L, reg which48:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg __8:cls, reg r91:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r92:V, reg r93:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r94:V, reg r95:V, reg generic1:*, reg generic2:V, reg as_character:cls, reg r96:V, reg identical:cls, reg r97:V, reg c51:L, reg which49:*, reg which50:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r100:V, reg r101:V, reg methods9:*, reg methods10:V, reg names:cls, reg r102:V, reg c52:L, reg r104:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg which51:*, reg which52:V, reg __9:cls, reg r105:V, reg sprintf3:cls, reg ngettext3:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r106:V, reg r107:V, reg candidates2:*, reg candidates3:V, reg length8:cls, reg r108:V, reg p16:p(V +), reg r110:V, reg p17:p(V +), reg sQuote:cls, reg selected:*, reg selected1:V, reg p18:p(V +), reg r113:V, reg p19:p(V +), reg sym19:cls, reg base19:cls, reg guard19:L, reg r115:V, reg r116:V, reg candidates4:*, reg candidates5:V, reg length9:cls, reg r117:V, reg p20:p(V +), reg r119:V, reg simpleCondition:cls, reg msg:*, reg msg1:V, reg p21:p(V +), reg r121:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r122:V, reg r123:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r124:V, reg r125:V, reg condObject:*, reg condObject1:V, reg class:cls, reg r126:V, reg c53:cls, reg r127:V, reg l:*, reg class__:cls, reg r128:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r129:V, reg r130:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r131:V, reg r132:V, reg condObject2:*, reg condObject3:V, reg attributes:cls, reg r133:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r134:V, reg r135:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r136:V, reg r137:V, reg candidates6:*, reg candidates7:V, reg names1:cls, reg r138:V, reg _sigLabel:cls, reg target3:*, reg target4:V, reg p22:p(V +), reg r140:V, reg selected2:*, reg selected3:V, reg generic3:*, reg generic4:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r141:V, reg r142:V, reg note4:*, reg note5:V, reg length10:cls, reg r143:V, reg c54:L, reg paste:cls, reg note6:*, reg note7:V, reg p23:p(V +), reg r145:V, reg r146:V, reg list:cls, reg r147:V, reg c55:cls, reg r148:V, reg l1:*, reg attributes__:cls, reg r149:V, reg verbose1:*, reg verbose2:V, reg c56:L, reg cat:cls, reg sym27:cls, reg base27:cls, reg guard27:L, reg r150:V, reg r151:V, reg condObject4:*, reg condObject5:V, reg attr:cls, reg r152:V, reg p24:p(V +), reg r154:V, reg signalCondition:cls, reg condObject6:*, reg condObject7:V, reg p25:p(V +), reg r157:V, reg which53:*, reg which54:V |
    mkenv;
    st target = target;
    st which = which;
    st generic = generic;
    st methods = methods;
    st supersList = supersList;
    st fromGroup = fromGroup;
    st classDefs = classDefs;
    st verbose = verbose;
    methods1 = ld methods;
    check L46() else D0();
  D0():
    deopt 0 [methods1];
  L46():
    methods2 = force? methods1;
    checkMissing(methods2);
    c = `is.object`(methods2);
    if c then L47() else L48(methods2);
  L0(dx1):
    st candidates = dx1;
    character = ldf character;
    check L51() else D2();
  L47():
    dr = tryDispatchBuiltin.1("[", methods2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L49() else L48(dr);
  L48(methods4):
    which1 = ld which;
    check L50() else D1();
  D1():
    deopt 2 [methods4, which1];
  D2():
    deopt 7 [];
  L49():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L50():
    which2 = force? which1;
    __ = ldf `[` in base;
    r = dyn __(methods4, which2);
    goto L0(r);
  L51():
    r1 = dyn character();
    check L52() else D3();
  D3():
    deopt 8 [r1];
  L52():
    st note = r1;
    _leastMethodDistance = ldf `.leastMethodDistance`;
    check L53() else D4();
  D4():
    deopt 11 [];
  L53():
    p = prom<V +>{
      candidates = ld candidates;
      candidates1 = force? candidates;
      checkMissing(candidates1);
      return candidates1;
    };
    p1 = prom<V +>{
      supersList1 = ld supersList;
      supersList2 = force? supersList1;
      checkMissing(supersList2);
      return supersList2;
    };
    p2 = prom<V +>{
      classDefs1 = ld classDefs;
      classDefs2 = force? classDefs1;
      checkMissing(classDefs2);
      return classDefs2;
    };
    p3 = prom<V +>{
      fromGroup1 = ld fromGroup;
      fromGroup2 = force? fromGroup1;
      checkMissing(fromGroup2);
      c1 = `is.object`(fromGroup2);
      if c1 then L1() else L2(fromGroup2);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", fromGroup2);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(fromGroup4):
      which3 = ld which;
      which4 = force? which3;
      __1 = ldf `[` in base;
      r5 = dyn __1(fromGroup4, which4);
      goto L0(r5);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r7 = dyn _leastMethodDistance(p, p1, p2, p3);
    check L54() else D5();
  D5():
    deopt 16 [r7];
  L54():
    st which2 = r7;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L55() else L56();
  L1(r9):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L59() else L60();
  L55():
    which5 = ld which2;
    check L57() else D6();
  L56():
    r8 = dyn base(<sym which2>);
    goto L1(r8);
  D6():
    deopt 20 [which5];
  L2(r14, r15):
    r17 = `<`(r14, r15);
    c2 = `as.logical`(r17);
    if c2 then L63() else L3();
  L57():
    which6 = force? which5;
    checkMissing(which6);
    length = ldf length in base;
    r10 = dyn length(which6);
    check L58() else D7();
  L59():
    which7 = ld which;
    check L61() else D8();
  L60():
    r13 = dyn base1(<sym which>);
    goto L2(r9, r13);
  D7():
    deopt 23 [r10];
  D8():
    deopt 25 [r9, which7];
  L3():
    goto L6();
  L6():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L75() else L76();
  L58():
    goto L1(r10);
  L61():
    which8 = force? which7;
    checkMissing(which8);
    length1 = ldf length in base;
    r16 = dyn length1(which8);
    check L62() else D9();
  L63():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L64() else L65();
  D9():
    deopt 28 [r9, r16];
  L4(r19):
    st note = r19;
    which13 = ld which;
    check L69() else D13();
  L7(r28):
    r30 = `>`(r28, 1.0);
    c5 = `as.logical`(r30);
    if c5 then L79() else L8(c5);
  L62():
    goto L2(r9, r16);
  L64():
    sprintf = ldf sprintf;
    check L66() else D10();
  L65():
    r18 = dyn base2(<lang sprintf(ngettext(which2, "Selecting %d method of minimum distance", "Selecting %d methods of minimum distance"), which2)>);
    goto L4(r18);
  L75():
    which19 = ld which;
    check L77() else D15();
  L76():
    r27 = dyn base3(<sym which>);
    goto L7(r27);
  D10():
    deopt 33 [];
  D13():
    deopt 40 [which13];
  D15():
    deopt 50 [which19];
  L8(c7):
    c19 = `as.logical`(c7);
    if c19 then L89() else L11(c19);
  L66():
    p5 = prom<V +>{
      ngettext = ldf ngettext;
      p4 = prom<V +>{
        which9 = ld which2;
        which10 = force? which9;
        checkMissing(which10);
        return which10;
      };
      r21 = dyn ngettext(p4, "Selecting %d method of minimum distance", "Selecting %d methods of minimum distance");
      return r21;
    };
    p6 = prom<V +>{
      which11 = ld which2;
      which12 = force? which11;
      checkMissing(which12);
      return which12;
    };
    r24 = dyn sprintf(p5, p6);
    check L67() else D11();
  L69():
    which14 = force? which13;
    checkMissing(which14);
    c4 = `is.object`(which14);
    if c4 then L70() else L71(which14);
  L77():
    which20 = force? which19;
    checkMissing(which20);
    length2 = ldf length in base;
    r29 = dyn length2(which20);
    check L78() else D16();
  L79():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L80() else L81();
  D11():
    deopt 36 [r24];
  D16():
    deopt 53 [r29];
  L5(dx5):
    st which = dx5;
    goto L6();
  L9(c10, r32):
    c16 = `as.logical`(r32);
    c17 = `&&`(c10, c16);
    goto L8(c17);
  L11(c21):
    c33 = `as.logical`(c21);
    if c33 then L99() else L14();
  L67():
    c3 = ldf c in base;
    r25 = dyn c3(r24);
    check L68() else D12();
  L70():
    dr4 = tryDispatchBuiltin.1("[", which14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L72() else L71(dr4);
  L71(which16):
    which17 = ld which2;
    check L73() else D14();
  L78():
    goto L7(r29);
  L80():
    fromGroup5 = ld fromGroup;
    check L82() else D17();
  L81():
    r31 = dyn base4(<lang `[`(fromGroup, which)>);
    goto L9(c5, r31);
  L89():
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L90() else L91();
  D12():
    deopt 38 [r25];
  D14():
    deopt 42 [which16, which17];
  D17():
    deopt 58 [c5, fromGroup5];
  L12(c24, r36):
    r39 = `!`(r36);
    c30 = `as.logical`(r39);
    c31 = `&&`(c24, c30);
    goto L11(c31);
  L14():
    goto L17();
  L17():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L112() else L113();
  L68():
    goto L4(r25);
  L72():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L73():
    which18 = force? which17;
    __2 = ldf `[` in base;
    r26 = dyn __2(which16, which18);
    goto L5(r26);
  L82():
    fromGroup6 = force? fromGroup5;
    checkMissing(fromGroup6);
    c11 = `is.object`(fromGroup6);
    if c11 then L83() else L84(c5, fromGroup6);
  L90():
    fromGroup9 = ld fromGroup;
    check L92() else D20();
  L91():
    r35 = dyn base5(<lang `[`(fromGroup, which)>);
    goto L12(c19, r35);
  L99():
    which25 = ld which;
    check L100() else D23();
  D20():
    deopt 68 [c19, fromGroup9];
  D23():
    deopt 77 [which25];
  L10(c15, dx8):
    any = ldf any in base;
    r34 = dyn any(dx8);
    check L87() else D19();
  L18(r58):
    r60 = `>`(r58, 1.0);
    c36 = `as.logical`(r60);
    if c36 then L116() else L19();
  L83():
    dr6 = tryDispatchBuiltin.1("[", fromGroup6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L85() else L84(c5, dr6);
  L84(c13, fromGroup8):
    which21 = ld which;
    check L86() else D18();
  L92():
    fromGroup10 = force? fromGroup9;
    checkMissing(fromGroup10);
    c25 = `is.object`(fromGroup10);
    if c25 then L93() else L94(c19, fromGroup10);
  L100():
    which26 = force? which25;
    checkMissing(which26);
    c34 = `is.object`(which26);
    if c34 then L101() else L102(which26);
  L112():
    which33 = ld which;
    check L114() else D29();
  L113():
    r57 = dyn base9(<sym which>);
    goto L18(r57);
  D18():
    deopt 60 [c13, fromGroup8, which21];
  D19():
    deopt 64 [c15, r34];
  D29():
    deopt 100 [which33];
  L13(c29, dx10):
    all = ldf all in base;
    r38 = dyn all(dx10);
    check L97() else D22();
  L15(dx12):
    st which = dx12;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L105() else L106();
  L19():
    goto L27();
  L27():
    which45 = ld which;
    check L143() else D43();
  L85():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L10(c5, dx7);
  L86():
    which22 = force? which21;
    __3 = ldf `[` in base;
    r33 = dyn __3(fromGroup8, which22);
    goto L10(c13, r33);
  L87():
    goto L9(c15, r34);
  L93():
    dr8 = tryDispatchBuiltin.1("[", fromGroup10);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L95() else L94(c19, dr8);
  L94(c27, fromGroup12):
    which23 = ld which;
    check L96() else D21();
  L101():
    dr10 = tryDispatchBuiltin.1("[", which26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L103() else L102(dr10);
  L102(which28):
    fromGroup13 = ld fromGroup;
    check L104() else D24();
  L114():
    which34 = force? which33;
    checkMissing(which34);
    length5 = ldf length in base;
    r59 = dyn length5(which34);
    check L115() else D30();
  L116():
    vapply = ldf vapply;
    check L117() else D31();
  D21():
    deopt 70 [c27, fromGroup12, which23];
  D22():
    deopt 74 [c29, r38];
  D24():
    deopt 79 [which28, fromGroup13];
  D30():
    deopt 103 [r59];
  D31():
    deopt 107 [];
  D43():
    deopt 151 [which45];
  L16(r43):
    st note = r43;
    goto L17();
  L95():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L13(c19, dx9);
  L96():
    which24 = force? which23;
    __4 = ldf `[` in base;
    r37 = dyn __4(fromGroup12, which24);
    goto L13(c27, r37);
  L97():
    goto L12(c29, r38);
  L103():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L15(dx11);
  L104():
    fromGroup14 = force? fromGroup13;
    checkMissing(fromGroup14);
    r40 = `!`(fromGroup14);
    __5 = ldf `[` in base;
    r41 = dyn __5(which28, r40);
    goto L15(r41);
  L105():
    note = ld note;
    check L107() else D25();
  L106():
    r42 = dyn base6(<sym note>, <lang sprintf(ngettext(length(which), "Selecting %d non-group method", "Selecting %d non-group methods"), length(which))>);
    goto L16(r42);
  L115():
    goto L18(r59);
  L117():
    p10 = prom<V +>{
      methods5 = ld methods;
      methods6 = force? methods5;
      checkMissing(methods6);
      c37 = `is.object`(methods6);
      if c37 then L1() else L2(methods6);
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("[", methods6);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(methods8):
      which35 = ld which;
      which36 = force? which35;
      __6 = ldf `[` in base;
      r61 = dyn __6(methods8, which36);
      goto L0(r61);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    p11 = prom<V +>{
      r63 = clos inner3630577721;
      return r63;
    };
    p12 = prom<V +>{
      target1 = ld target;
      target2 = force? target1;
      checkMissing(target2);
      return target2;
    };
    r66 = dyn vapply[, , , target](p10, p11, NA_LGL, p12);
    check L118() else D32();
  L143():
    which46 = force? which45;
    checkMissing(which46);
    c50 = `is.object`(which46);
    if c50 then L144() else L145(which46);
  D25():
    deopt 86 [note];
  D32():
    deopt 113 [r66];
  L28(dx18):
    st which = dx18;
    sym15 = ldf identical;
    base15 = ldf identical in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L147() else L148();
  L107():
    note1 = force? note;
    checkMissing(note1);
    sprintf1 = ldf sprintf;
    check L108() else D26();
  L118():
    st direct = r66;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L119() else L120();
  L144():
    dr16 = tryDispatchBuiltin.1("[[", which46);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L146() else L145(dr16);
  L145(which48):
    __8 = ldf `[[` in base;
    r91 = dyn __8(which48, 1);
    goto L28(r91);
  D26():
    deopt 89 [];
  L20(r68):
    c38 = `as.logical`(r68);
    if c38 then L123() else L21(c38);
  L29(r93):
    c51 = `as.logical`(r93);
    if c51 then L154() else L31();
  L108():
    p8 = prom<V +>{
      ngettext1 = ldf ngettext;
      p7 = prom<V +>{
        sym7 = ldf length;
        base7 = ldf length in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r45):
        return r45;
      L1():
        which29 = ld which;
        which30 = force? which29;
        checkMissing(which30);
        length3 = ldf length in base;
        r46 = dyn length3(which30);
        goto L0(r46);
      L2():
        r44 = dyn base7(<sym which>);
        goto L0(r44);
      };
      r48 = dyn ngettext1(p7, "Selecting %d non-group method", "Selecting %d non-group methods");
      return r48;
    };
    p9 = prom<V +>{
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      which31 = ld which;
      which32 = force? which31;
      checkMissing(which32);
      length4 = ldf length in base;
      r52 = dyn length4(which32);
      goto L0(r52);
    L2():
      r50 = dyn base8(<sym which>);
      goto L0(r50);
    };
    r54 = dyn sprintf1(p8, p9);
    check L109() else D27();
  L119():
    direct = ld direct;
    check L121() else D33();
  L120():
    r67 = dyn base10(<sym direct>);
    goto L20(r67);
  L146():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L28(dx17);
  L147():
    sym16 = ldf `as.character`;
    base16 = ldf `as.character` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L149() else L150();
  L148():
    r92 = dyn base15(<lang as.character(generic)>, "coerce");
    goto L29(r92);
  D27():
    deopt 92 [r54];
  D33():
    deopt 117 [direct];
  L21(c40):
    c47 = `as.logical`(c40);
    if c47 then L129() else L23();
  L30(r95):
    identical = ldf identical in base;
    r97 = dyn identical(r95, "coerce", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L153() else D46();
  L31():
    sym17 = ldf names;
    base17 = ldf names in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L158() else L159();
  L109():
    c35 = ldf c in base;
    r55 = dyn c35(note1, r54);
    check L110() else D28();
  L121():
    direct1 = force? direct;
    checkMissing(direct1);
    any1 = ldf any in base;
    r69 = dyn any1(direct1);
    check L122() else D34();
  L123():
    sym11 = ldf all;
    base11 = ldf all in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L124() else L125();
  L149():
    generic1 = ld generic;
    check L151() else D44();
  L150():
    r94 = dyn base16(<sym generic>);
    goto L30(r94);
  L154():
    which49 = ld which;
    check L155() else D47();
  D28():
    deopt 94 [r55];
  D34():
    deopt 120 [r69];
  D44():
    deopt 161 [generic1];
  D46():
    deopt 174 [r97];
  D47():
    deopt 175 [which49];
  L22(c43, r71):
    r73 = `!`(r71);
    c44 = `as.logical`(r73);
    c45 = `&&`(c43, c44);
    goto L21(c45);
  L23():
    goto L26(NULL);
  L26(r89):
    goto L27();
  L33(r101):
    c52 = `is.object`(r101);
    if c52 then L162() else L163(r101);
  L110():
    goto L16(r55);
  L122():
    goto L20(r69);
  L124():
    direct2 = ld direct;
    check L126() else D35();
  L125():
    r70 = dyn base11(<sym direct>);
    goto L22(c38, r70);
  L129():
    which37 = ld which;
    check L130() else D37();
  L151():
    generic2 = force? generic1;
    checkMissing(generic2);
    as_character = ldf `as.character` in base;
    r96 = dyn as_character(generic2);
    check L152() else D45();
  L153():
    goto L29(r97);
  L155():
    which50 = force? which49;
    checkMissing(which50);
    popenv;
    return which50;
  L158():
    methods9 = ld methods;
    check L160() else D48();
  L159():
    r100 = dyn base17(<sym methods>);
    goto L33(r100);
  D35():
    deopt 123 [c38, direct2];
  D37():
    deopt 129 [which37];
  D45():
    deopt 164 [r96];
  D48():
    deopt 182 [methods9];
  L34(dx20):
    st selected = dx20;
    sprintf3 = ldf sprintf;
    check L166() else D51();
  L126():
    direct3 = force? direct2;
    checkMissing(direct3);
    all1 = ldf all in base;
    r72 = dyn all1(direct3);
    check L127() else D36();
  L130():
    which38 = force? which37;
    checkMissing(which38);
    c48 = `is.object`(which38);
    if c48 then L131() else L132(which38);
  L152():
    goto L30(r96);
  L160():
    methods10 = force? methods9;
    checkMissing(methods10);
    names = ldf names in base;
    r102 = dyn names(methods10);
    check L161() else D49();
  L162():
    dr18 = tryDispatchBuiltin.1("[[", r101);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L164() else L163(dr18);
  L163(r104):
    which51 = ld which;
    check L165() else D50();
  D36():
    deopt 126 [c38, r72];
  D49():
    deopt 185 [r102];
  D50():
    deopt 186 [r104, which51];
  D51():
    deopt 191 [];
  L24(dx16):
    st which = dx16;
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L135() else L136();
  L127():
    goto L22(c38, r72);
  L131():
    dr14 = tryDispatchBuiltin.1("[", which38);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L133() else L132(dr14);
  L132(which40):
    direct4 = ld direct;
    check L134() else D38();
  L161():
    goto L33(r102);
  L164():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L34(dx19);
  L165():
    which52 = force? which51;
    __9 = ldf `[[` in base;
    r105 = dyn __9(r104, which52);
    goto L34(r105);
  L166():
    p17 = prom<V +>{
      ngettext3 = ldf ngettext;
      p16 = prom<V +>{
        sym18 = ldf length;
        base18 = ldf length in base;
        guard18 = `==`.4(sym18, base18);
        if guard18 then L1() else L2();
      L0(r107):
        return r107;
      L1():
        candidates2 = ld candidates;
        candidates3 = force? candidates2;
        checkMissing(candidates3);
        length8 = ldf length in base;
        r108 = dyn length8(candidates3);
        goto L0(r108);
      L2():
        r106 = dyn base18(<sym candidates>);
        goto L0(r106);
      };
      r110 = dyn ngettext3(p16, "Choosing method %s from %d ambiguous possibility", "Choosing method %s from %d ambiguous possibilities");
      return r110;
    };
    p19 = prom<V +>{
      sQuote = ldf sQuote;
      p18 = prom<V +>{
        selected = ld selected;
        selected1 = force? selected;
        checkMissing(selected1);
        return selected1;
      };
      r113 = dyn sQuote(p18);
      return r113;
    };
    p20 = prom<V +>{
      sym19 = ldf length;
      base19 = ldf length in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r116):
      return r116;
    L1():
      candidates4 = ld candidates;
      candidates5 = force? candidates4;
      checkMissing(candidates5);
      length9 = ldf length in base;
      r117 = dyn length9(candidates5);
      goto L0(r117);
    L2():
      r115 = dyn base19(<sym candidates>);
      goto L0(r115);
    };
    r119 = dyn sprintf3(p17, p19, p20);
    check L167() else D52();
  D38():
    deopt 131 [which40, direct4];
  D52():
    deopt 195 [r119];
  L25(r76):
    st note = r76;
    goto L26(r76);
  L133():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L24(dx15);
  L134():
    direct5 = force? direct4;
    __7 = ldf `[` in base;
    r74 = dyn __7(which40, direct5);
    goto L24(r74);
  L135():
    note2 = ld note;
    check L137() else D39();
  L136():
    r75 = dyn base12(<sym note>, <lang sprintf(ngettext(length(which), "Selecting %d partially exact-matching method", "Selecting %d partially exact-matching methods"), length(which))>);
    goto L25(r75);
  L167():
    st msg = r119;
    simpleCondition = ldf simpleCondition;
    check L168() else D53();
  D39():
    deopt 137 [note2];
  D53():
    deopt 198 [];
  L137():
    note3 = force? note2;
    checkMissing(note3);
    sprintf2 = ldf sprintf;
    check L138() else D40();
  L168():
    p21 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r121 = dyn simpleCondition(p21);
    check L169() else D54();
  D40():
    deopt 140 [];
  D54():
    deopt 200 [r121];
  L138():
    p14 = prom<V +>{
      ngettext2 = ldf ngettext;
      p13 = prom<V +>{
        sym13 = ldf length;
        base13 = ldf length in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L1() else L2();
      L0(r78):
        return r78;
      L1():
        which41 = ld which;
        which42 = force? which41;
        checkMissing(which42);
        length6 = ldf length in base;
        r79 = dyn length6(which42);
        goto L0(r79);
      L2():
        r77 = dyn base13(<sym which>);
        goto L0(r77);
      };
      r81 = dyn ngettext2(p13, "Selecting %d partially exact-matching method", "Selecting %d partially exact-matching methods");
      return r81;
    };
    p15 = prom<V +>{
      sym14 = ldf length;
      base14 = ldf length in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r84):
      return r84;
    L1():
      which43 = ld which;
      which44 = force? which43;
      checkMissing(which44);
      length7 = ldf length in base;
      r85 = dyn length7(which44);
      goto L0(r85);
    L2():
      r83 = dyn base14(<sym which>);
      goto L0(r83);
    };
    r87 = dyn sprintf2(p14, p15);
    check L139() else D41();
  L169():
    st condObject = r121;
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L170() else L171();
  D41():
    deopt 143 [r87];
  L35(r123):
    l = ld condObject;
    class__ = ldf `class<-`;
    check L177() else D58();
  L139():
    c49 = ldf c in base;
    r88 = dyn c49(note3, r87);
    check L140() else D42();
  L170():
    sym21 = ldf class;
    base21 = ldf class in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L172() else L173();
  L171():
    r122 = dyn base20("ambiguousMethodSelection", <lang class(condObject)>);
    goto L35(r122);
  D42():
    deopt 145 [r88];
  D58():
    deopt 214 [r123, l, r123];
  L36(r125):
    c53 = ldf c in base;
    r127 = dyn c53("ambiguousMethodSelection", r125);
    check L176() else D57();
  L140():
    goto L25(r88);
  L172():
    condObject = ld condObject;
    check L174() else D55();
  L173():
    r124 = dyn base21(<sym condObject>);
    goto L36(r124);
  L177():
    r128 = dyn class__(l, NULL, r123);
    check L178() else D59();
  D55():
    deopt 207 [condObject];
  D57():
    deopt 212 [r127];
  D59():
    deopt 216 [r123, r128];
  L174():
    condObject1 = force? condObject;
    checkMissing(condObject1);
    class = ldf class in base;
    r126 = dyn class(condObject1);
    check L175() else D56();
  L176():
    goto L35(r127);
  L178():
    st condObject = r128;
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L179() else L180();
  D56():
    deopt 210 [r126];
  L37(r130):
    l1 = ld condObject;
    attributes__ = ldf `attributes<-`;
    check L205() else D74();
  L175():
    goto L36(r126);
  L179():
    sym23 = ldf attributes;
    base23 = ldf attributes in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L181() else L182();
  L180():
    r129 = dyn base22(<lang attributes(condObject)>, <lang list(candidates=names(candidates), target=.sigLabel(target), selected=selected, generic=generic, notes=if(length(note), paste(note, collapse="; "), ""))>);
    goto L37(r129);
  D74():
    deopt 266 [r130, l1, r130];
  L38(r132):
    sym24 = ldf list;
    base24 = ldf list in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L185() else L186();
  L181():
    condObject2 = ld condObject;
    check L183() else D60();
  L182():
    r131 = dyn base23(<sym condObject>);
    goto L38(r131);
  L205():
    r149 = dyn attributes__(l1, NULL, r130);
    check L206() else D75();
  D60():
    deopt 222 [condObject2];
  D75():
    deopt 268 [r130, r149];
  L39(r135):
    c55 = ldf c in base;
    r148 = dyn c55(r132, r135);
    check L204() else D73();
  L183():
    condObject3 = force? condObject2;
    checkMissing(condObject3);
    attributes = ldf attributes in base;
    r133 = dyn attributes(condObject3);
    check L184() else D61();
  L185():
    sym25 = ldf names;
    base25 = ldf names in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L187() else L188();
  L186():
    r134 = dyn base24[candidates, target, selected, generic, notes](<lang names(candidates)>, <lang .sigLabel(target)>, <sym selected>, <sym generic>, <lang if(length(note), paste(note, collapse="; "), "")>);
    goto L39(r134);
  L206():
    st condObject = r149;
    verbose1 = ld verbose;
    check L207() else D76();
  D61():
    deopt 225 [r133];
  D73():
    deopt 264 [r148];
  D76():
    deopt 270 [verbose1];
  L40(r137):
    _sigLabel = ldf `.sigLabel`;
    check L191() else D64();
  L184():
    goto L38(r133);
  L187():
    candidates6 = ld candidates;
    check L189() else D62();
  L188():
    r136 = dyn base25(<sym candidates>);
    goto L40(r136);
  L204():
    goto L37(r148);
  L207():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c56 = `as.logical`(verbose2);
    if c56 then L208() else L44();
  D62():
    deopt 230 [candidates6];
  D64():
    deopt 236 [];
  L44():
    goto L45();
  L45():
    signalCondition = ldf signalCondition;
    check L212() else D79();
  L189():
    candidates7 = force? candidates6;
    checkMissing(candidates7);
    names1 = ldf names in base;
    r138 = dyn names1(candidates7);
    check L190() else D63();
  L191():
    p22 = prom<V +>{
      target3 = ld target;
      target4 = force? target3;
      checkMissing(target4);
      return target4;
    };
    r140 = dyn _sigLabel(p22);
    check L192() else D65();
  L208():
    cat = ldf cat;
    check L209() else D77();
  D63():
    deopt 233 [r138];
  D65():
    deopt 238 [r140];
  D77():
    deopt 273 [];
  D79():
    deopt 281 [];
  L190():
    goto L40(r138);
  L192():
    selected2 = ld selected;
    check L193() else D66();
  L209():
    p24 = prom<V +>{
      sym27 = ldf attr;
      base27 = ldf attr in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L1() else L2();
    L0(r151):
      return r151;
    L1():
      condObject4 = ld condObject;
      condObject5 = force? condObject4;
      checkMissing(condObject5);
      attr = ldf attr in base;
      r152 = dyn attr(condObject5, "notes");
      goto L0(r152);
    L2():
      r150 = dyn base27(<sym condObject>, "notes");
      goto L0(r150);
    };
    r154 = dyn cat("   .disambiguateM*(): notes =\n\t", p24, "\n");
    check L210() else D78();
  L212():
    p25 = prom<V +>{
      condObject6 = ld condObject;
      condObject7 = force? condObject6;
      checkMissing(condObject7);
      return condObject7;
    };
    r157 = dyn signalCondition(p25);
    check L213() else D80();
  D66():
    deopt 240 [selected2];
  D78():
    deopt 277 [r154];
  D80():
    deopt 283 [r157];
  L193():
    selected3 = force? selected2;
    checkMissing(selected3);
    generic3 = ld generic;
    check L194() else D67();
  L210():
    goto L45();
  L213():
    which53 = ld which;
    check L214() else D81();
  D67():
    deopt 243 [generic3];
  D81():
    deopt 284 [which53];
  L194():
    generic4 = force? generic3;
    checkMissing(generic4);
    sym26 = ldf length;
    base26 = ldf length in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L195() else L196();
  L214():
    which54 = force? which53;
    checkMissing(which54);
    popenv;
    return which54;
  L41(r142):
    c54 = `as.logical`(r142);
    if c54 then L199() else L42();
  L195():
    note4 = ld note;
    check L197() else D68();
  L196():
    r141 = dyn base26(<sym note>);
    goto L41(r141);
  D68():
    deopt 248 [note4];
  L42():
    goto L43("");
  L43(r146):
    list = ldf list in base;
    r147 = dyn list(r137, r140, selected3, generic4, r146);
    check L203() else D72();
  L197():
    note5 = force? note4;
    checkMissing(note5);
    length10 = ldf length in base;
    r143 = dyn length10(note5);
    check L198() else D69();
  L199():
    paste = ldf paste;
    check L200() else D70();
  D69():
    deopt 251 [r143];
  D70():
    deopt 253 [];
  D72():
    deopt 262 [r147];
  L198():
    goto L41(r143);
  L200():
    p23 = prom<V +>{
      note6 = ld note;
      note7 = force? note6;
      checkMissing(note7);
      return note7;
    };
    r145 = dyn paste[, collapse](p23, "; ");
    check L201() else D71();
  L203():
    goto L39(r147);
  D71():
    deopt 257 [r145];
  L201():
    goto L43(r145);
  }
}
fun inner3630577721(x, target) {
  (reg x:*, reg target:*) -+> V { var x:*, var target:*, reg is:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg target1:*, reg target2:V, reg __:cls, reg r4:V, reg r5:V, reg any:cls, reg r6:V, reg c6:L, reg c7:V |
    mkenv;
    st x = x;
    st target = target;
    is = ldf is;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is(p, "MethodDefinition");
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    c = `as.logical`(r1);
    if c then L4() else L0(c);
  L0(c2):
    visible.0();
    popenv;
    return c2;
  L4():
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(c5, r3):
    c6 = `as.logical`(r3);
    c7 = `&&`(c5, c6);
    goto L0(c7);
  L5():
    target1 = ld target;
    check L7() else D2();
  L6():
    r2 = dyn base(<lang `==`(target, `@`(x, defined))>);
    goto L1(c, r2);
  D2():
    deopt 7 [c, target1];
  L7():
    target2 = force? target1;
    checkMissing(target2);
    __ = ldf `@` in base;
    r4 = dyn __(<sym x>, <sym defined>);
    r5 = `==`(target2, r4);
    any = ldf any in base;
    r6 = dyn any(r5);
    check L8() else D3();
  D3():
    deopt 12 [c, r6];
  L8():
    goto L1(c, r6);
  }
}