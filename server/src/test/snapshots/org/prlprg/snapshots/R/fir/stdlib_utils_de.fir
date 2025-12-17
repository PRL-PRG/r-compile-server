fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1860887674;
    st de = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1860887674(`...`, Modes, Names) {
  (reg ddd:dots, reg Modes:*, reg Names:*) -+> V { var `...`:dots?, var Modes:*, reg Modes_isMissing:L, reg Modes_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var Names:*, reg Names_isMissing:L, reg Names_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg list1:cls, reg ddd1:dots?, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg substitute:cls, reg r11:V, reg c:L, reg r13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg as_character:cls, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg sdata:*, reg sdata1:V, reg c1:V, reg c2:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg Names1:*, reg Names2:V, reg c3:V, reg c4:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r20:V, reg r21:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r22:V, reg r23:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r24:V, reg r25:V, reg Modes1:*, reg Modes2:V, reg length:cls, reg r26:V, reg max:cls, reg r27:V, reg vector:cls, reg r28:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r30:V, reg r31:V, reg Names3:*, reg Names4:V, reg length1:cls, reg r32:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r35:V, reg r36:V, reg r37:V, reg Modes3:*, reg Modes4:V, reg length2:cls, reg r38:V, reg r39:V, reg c5:L, reg c7:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r40:V, reg c10:L, reg r41:V, reg Modes5:*, reg Modes6:V, reg length3:cls, reg r42:V, reg c11:L, reg c12:V, reg c14:L, reg warning:cls, reg r43:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r44:V, reg r45:V, reg list2:cls, reg r46:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r48:V, reg r49:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r50:V, reg r51:V, reg Names5:*, reg Names6:V, reg length4:cls, reg r52:V, reg vector1:cls, reg r53:V, reg Names7:*, reg Names8:V, reg l:*, reg names__:cls, reg r54:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r55:V, reg r56:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r57:V, reg r58:V, reg odata:*, reg odata1:V, reg length5:cls, reg r59:V, reg rep_int:cls, reg r60:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r61:V, reg r62:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r63:V, reg r64:V, reg odata2:*, reg odata3:V, reg length6:cls, reg r65:V, reg rep_int1:cls, reg r66:V, reg de_ncols:cls, reg sdata2:*, reg sdata3:V, reg p1:p(V +), reg r69:V, reg ncols:*, reg ncols1:V, reg c15:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r70:V, reg ncols4:*, reg ncols5:V, reg c16:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r71:V, reg de_setup:cls, reg sdata4:*, reg sdata5:V, reg p2:p(V +), reg snames:*, reg snames1:V, reg p3:p(V +), reg ncols8:*, reg ncols9:V, reg p4:p(V +), reg r75:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r76:V, reg r77:V, reg Names9:*, reg Names10:V, reg length7:cls, reg r78:V, reg c17:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r79:V, reg r80:V, reg Names11:*, reg Names12:V, reg length8:cls, reg r81:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r84:V, reg r85:V, reg r86:V, reg odata4:*, reg odata5:V, reg length9:cls, reg r87:V, reg r88:V, reg c18:L, reg warning1:cls, reg r89:V, reg r90:V, reg Names13:*, reg Names14:V, reg l1:*, reg names__1:cls, reg r91:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r93:V, reg r94:V, reg Modes7:*, reg Modes8:V, reg length10:cls, reg r95:V, reg c19:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r96:V, reg r97:V, reg Modes9:*, reg Modes10:V, reg length11:cls, reg r98:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r101:V, reg r102:V, reg r103:V, reg odata6:*, reg odata7:V, reg length12:cls, reg r104:V, reg r105:V, reg c20:L, reg warning2:cls, reg r106:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r107:V, reg r108:V, reg list3:cls, reg r109:V, reg r110:V, reg dataentry:cls, reg odata8:*, reg odata9:V, reg p5:p(V +), reg as_list:cls, reg Modes11:*, reg Modes12:V, reg p6:p(V +), reg r113:V, reg p7:p(V +), reg r115:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r116:V, reg r117:V, reg coltypes:*, reg coltypes1:V, reg r118:V, reg any:cls, reg r119:V, reg c21:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r120:V, reg r121:V, reg rdata:*, reg rdata1:V, reg length13:cls, reg r122:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r125:V, reg r126:V, reg r127:V, reg ncols10:*, reg ncols11:V, reg sum:cls, reg r128:V, reg r129:V, reg c22:L, reg de_restore:cls, reg rdata2:*, reg rdata3:V, reg p8:p(V +), reg ncols12:*, reg ncols13:V, reg p9:p(V +), reg coltypes2:*, reg coltypes3:V, reg p10:p(V +), reg snames2:*, reg snames3:V, reg p11:p(V +), reg sdata6:*, reg sdata7:V, reg p12:p(V +), reg r135:V, reg r136:V, reg warning3:cls, reg r137:V, reg rdata4:*, reg rdata5:V |
    mkenv;
    st `...` = ddd;
    Modes_isMissing = missing.0(Modes);
    if Modes_isMissing then L0() else L1(Modes);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(Modes_orDefault):
    st Modes = Modes_orDefault;
    Names_isMissing = missing.0(Names);
    if Names_isMissing then L2(NULL) else L2(Names);
  L2(Names_orDefault):
    st Names = Names_orDefault;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L52() else L53();
  L3(r5):
    st sdata = r5;
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L56() else L57();
  L52():
    list1 = ldf list;
    check L54() else D0();
  L53():
    r4 = dyn base1(<sym ...>);
    goto L3(r4);
  D0():
    deopt 2 [];
  L4(r8):
    st snames = r8;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L54():
    ddd1 = ld `...`;
    r6 = dyn list1[`...`](ddd1);
    check L55() else D1();
  L56():
    sym3 = ldf substitute;
    base3 = ldf substitute in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  L57():
    r7 = dyn base2(<lang `[`(substitute(list(...)), `-`(1))>);
    goto L4(r7);
  D1():
    deopt 4 [r6];
  L5(r10):
    c = `is.object`(r10);
    if c then L60() else L61(r10);
  L7(r17):
    c2 = `as.logical`(r17);
    if c2 then L67() else L8();
  L55():
    goto L3(r6);
  L58():
    substitute = ldf substitute in base;
    r11 = dyn substitute(<lang list(...)>);
    goto L5(r11);
  L59():
    r9 = dyn base3(<lang list(...)>);
    goto L5(r9);
  L64():
    sdata = ld sdata;
    check L66() else D3();
  L65():
    r16 = dyn base4(<sym sdata>);
    goto L7(r16);
  D3():
    deopt 18 [sdata];
  L6(dx1):
    as_character = ldf `as.character` in base;
    r15 = dyn as_character(dx1);
    check L63() else D2();
  L8():
    de_ncols = ldf `de.ncols`;
    check L129() else D30();
  L28():
    dataentry = ldf dataentry;
    check L183() else D56();
  L60():
    dr = tryDispatchBuiltin.1("[", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L62() else L61(dr);
  L61(r13):
    __ = ldf `[` in base;
    r14 = dyn __(r13, -1);
    goto L6(r14);
  L66():
    sdata1 = force? sdata;
    checkMissing(sdata1);
    c1 = `==`(sdata1, NULL);
    goto L7(c1);
  L67():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L68() else L69();
  D2():
    deopt 15 [r15];
  D30():
    deopt 116 [];
  D56():
    deopt 204 [];
  L9(r19):
    c4 = `as.logical`(r19);
    if c4 then L71() else L10();
  L62():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L63():
    goto L4(r15);
  L68():
    Names1 = ld Names;
    check L70() else D4();
  L69():
    r18 = dyn base5(<sym Names>);
    goto L9(r18);
  L129():
    p1 = prom<V +>{
      sdata2 = ld sdata;
      sdata3 = force? sdata2;
      checkMissing(sdata3);
      return sdata3;
    };
    r69 = dyn de_ncols(p1);
    check L130() else D31();
  L183():
    p5 = prom<V +>{
      odata8 = ld odata;
      odata9 = force? odata8;
      checkMissing(odata9);
      return odata9;
    };
    p7 = prom<V +>{
      as_list = ldf `as.list`;
      p6 = prom<V +>{
        Modes11 = ld Modes;
        Modes12 = force? Modes11;
        checkMissing(Modes12);
        return Modes12;
      };
      r113 = dyn as_list(p6);
      return r113;
    };
    r115 = dyn dataentry(p5, p7);
    check L184() else D57();
  D4():
    deopt 22 [Names1];
  D31():
    deopt 118 [r69];
  D57():
    deopt 207 [r115];
  L10():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L83() else L84();
  L14():
    sym15 = ldf `rep.int`;
    base15 = ldf `rep.int` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L114() else L115();
  L70():
    Names2 = force? Names1;
    checkMissing(Names2);
    c3 = `==`(Names2, NULL);
    goto L9(c3);
  L71():
    sym6 = ldf vector;
    base6 = ldf vector in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L130():
    st ncols = r69;
    ncols = ld ncols;
    check L131() else D32();
  L184():
    st rdata = r115;
    sym26 = ldf any;
    base26 = ldf any in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L185() else L186();
  D32():
    deopt 120 [ncols];
  L11(r21):
    st odata = r21;
    goto L14();
  L15(r31):
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L87() else L88();
  L24(r56):
    st ncols = r56;
    sym17 = ldf `rep.int`;
    base17 = ldf `rep.int` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L121() else L122();
  L45(r117):
    c21 = `as.logical`(r117);
    if c21 then L189() else L46();
  L72():
    sym7 = ldf max;
    base7 = ldf max in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  L73():
    r20 = dyn base6[, length]("list", <lang max(1.0, length(Modes))>);
    goto L11(r20);
  L83():
    Names3 = ld Names;
    check L85() else D9();
  L84():
    r30 = dyn base9(<sym Names>);
    goto L15(r30);
  L114():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L116() else L117();
  L115():
    r55 = dyn base15(1.0, <lang length(odata)>);
    goto L24(r55);
  L131():
    ncols1 = force? ncols;
    checkMissing(ncols1);
    c15 = `is.object`(ncols1);
    if c15 then L132() else L133();
  L185():
    coltypes = ld coltypes;
    check L187() else D58();
  L186():
    r116 = dyn base26(<lang `!=`(coltypes, 1)>);
    goto L45(r116);
  D9():
    deopt 44 [Names3];
  D58():
    deopt 211 [coltypes];
  L12(r23):
    vector = ldf vector in base;
    r28 = dyn vector("list", r23);
    check L81() else D8();
  L16(r36, r37):
    r39 = `!=`(r36, r37);
    c5 = `as.logical`(r39);
    if c5 then L91() else L17(c5);
  L25(r58):
    rep_int = ldf `rep.int` in base;
    r60 = dyn rep_int(1.0, r58);
    check L120() else D26();
  L26(r62):
    st coltypes = r62;
    goto L28();
  L29(dx3):
    st coltypes = dx3;
    ncols4 = ld ncols;
    check L135() else D33();
  L46():
    goto L51();
  L51():
    rdata4 = ld rdata;
    check L205() else D68();
  L74():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L76() else L77();
  L75():
    r22 = dyn base7(1.0, <lang length(Modes)>);
    goto L12(r22);
  L85():
    Names4 = force? Names3;
    checkMissing(Names4);
    length1 = ldf length in base;
    r32 = dyn length1(Names4);
    check L86() else D10();
  L87():
    Modes3 = ld Modes;
    check L89() else D11();
  L88():
    r35 = dyn base10(<sym Modes>);
    goto L16(r31, r35);
  L116():
    odata = ld odata;
    check L118() else D24();
  L117():
    r57 = dyn base16(<sym odata>);
    goto L25(r57);
  L121():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L123() else L124();
  L122():
    r61 = dyn base17(1.0, <lang length(odata)>);
    goto L26(r61);
  L132():
    dr2 = tryDispatchBuiltin.1("[", ncols1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L134() else L133();
  L133():
    __1 = ldf `[` in base;
    r70 = dyn __1(ncols1, <missing>, 2);
    goto L29(r70);
  L187():
    coltypes1 = force? coltypes;
    checkMissing(coltypes1);
    r118 = `!=`(coltypes1, 1);
    any = ldf any in base;
    r119 = dyn any(r118);
    check L188() else D59();
  L189():
    sym27 = ldf length;
    base27 = ldf length in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L190() else L191();
  D8():
    deopt 40 [r28];
  D10():
    deopt 47 [r32];
  D11():
    deopt 49 [r31, Modes3];
  D24():
    deopt 96 [odata];
  D26():
    deopt 101 [r60];
  D33():
    deopt 127 [ncols4];
  D59():
    deopt 216 [r119];
  D68():
    deopt 244 [rdata4];
  L13(r25):
    max = ldf max in base;
    r27 = dyn max(1.0, r25);
    check L80() else D7();
  L17(c7):
    c14 = `as.logical`(c7);
    if c14 then L97() else L19();
  L27(r64):
    rep_int1 = ldf `rep.int` in base;
    r66 = dyn rep_int1(1.0, r64);
    check L127() else D29();
  L47(r121):
    sym28 = ldf sum;
    base28 = ldf sum in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L194() else L195();
  L76():
    Modes1 = ld Modes;
    check L78() else D5();
  L77():
    r24 = dyn base8(<sym Modes>);
    goto L13(r24);
  L81():
    goto L11(r28);
  L86():
    goto L15(r32);
  L89():
    Modes4 = force? Modes3;
    checkMissing(Modes4);
    length2 = ldf length in base;
    r38 = dyn length2(Modes4);
    check L90() else D12();
  L91():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L92() else L93();
  L118():
    odata1 = force? odata;
    checkMissing(odata1);
    length5 = ldf length in base;
    r59 = dyn length5(odata1);
    check L119() else D25();
  L120():
    goto L24(r60);
  L123():
    odata2 = ld odata;
    check L125() else D27();
  L124():
    r63 = dyn base18(<sym odata>);
    goto L27(r63);
  L134():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L29(dx2);
  L135():
    ncols5 = force? ncols4;
    checkMissing(ncols5);
    c16 = `is.object`(ncols5);
    if c16 then L136() else L137();
  L188():
    goto L45(r119);
  L190():
    rdata = ld rdata;
    check L192() else D60();
  L191():
    r120 = dyn base27(<sym rdata>);
    goto L47(r120);
  L205():
    rdata5 = force? rdata4;
    checkMissing(rdata5);
    popenv;
    return rdata5;
  D5():
    deopt 33 [Modes1];
  D7():
    deopt 38 [r27];
  D12():
    deopt 52 [r31, r38];
  D25():
    deopt 99 [r59];
  D27():
    deopt 108 [odata2];
  D29():
    deopt 113 [r66];
  D60():
    deopt 219 [rdata];
  L18(c10, r41):
    c11 = `as.logical`(r41);
    c12 = `&&`(c10, c11);
    goto L17(c12);
  L19():
    goto L21();
  L21():
    sym13 = ldf vector;
    base13 = ldf vector in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L104() else L105();
  L30(dx5):
    st ncols = dx5;
    de_setup = ldf `de.setup`;
    check L139() else D34();
  L48(r126, r127):
    r129 = `==`(r126, r127);
    c22 = `as.logical`(r129);
    if c22 then L198() else L49();
  L78():
    Modes2 = force? Modes1;
    checkMissing(Modes2);
    length = ldf length in base;
    r26 = dyn length(Modes2);
    check L79() else D6();
  L80():
    goto L12(r27);
  L90():
    goto L16(r31, r38);
  L92():
    Modes5 = ld Modes;
    check L94() else D13();
  L93():
    r40 = dyn base11(<sym Modes>);
    goto L18(c5, r40);
  L97():
    warning = ldf warning;
    check L98() else D15();
  L119():
    goto L25(r59);
  L125():
    odata3 = force? odata2;
    checkMissing(odata3);
    length6 = ldf length in base;
    r65 = dyn length6(odata3);
    check L126() else D28();
  L127():
    goto L26(r66);
  L136():
    dr4 = tryDispatchBuiltin.1("[", ncols5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L138() else L137();
  L137():
    __2 = ldf `[` in base;
    r71 = dyn __2(ncols5, <missing>, 1.0);
    goto L30(r71);
  L192():
    rdata1 = force? rdata;
    checkMissing(rdata1);
    length13 = ldf length in base;
    r122 = dyn length13(rdata1);
    check L193() else D61();
  L194():
    ncols10 = ld ncols;
    check L196() else D62();
  L195():
    r125 = dyn base28(<sym ncols>);
    goto L48(r121, r125);
  D6():
    deopt 36 [r26];
  D13():
    deopt 56 [c5, Modes5];
  D15():
    deopt 62 [];
  D28():
    deopt 111 [r65];
  D34():
    deopt 135 [];
  D61():
    deopt 222 [r122];
  D62():
    deopt 224 [r121, ncols10];
  L22(r49):
    st odata = r49;
    Names7 = ld Names;
    check L111() else D21();
  L49():
    warning3 = ldf warning;
    check L202() else D66();
  L50(r136):
    goto L51();
  L79():
    goto L13(r26);
  L94():
    Modes6 = force? Modes5;
    checkMissing(Modes6);
    length3 = ldf length in base;
    r42 = dyn length3(Modes6);
    check L95() else D14();
  L98():
    r43 = dyn warning("'modes' argument ignored");
    check L99() else D16();
  L104():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L106() else L107();
  L105():
    r48 = dyn base13[, length]("list", <lang length(Names)>);
    goto L22(r48);
  L126():
    goto L27(r65);
  L138():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx4);
  L139():
    p2 = prom<V +>{
      sdata4 = ld sdata;
      sdata5 = force? sdata4;
      checkMissing(sdata5);
      return sdata5;
    };
    p3 = prom<V +>{
      snames = ld snames;
      snames1 = force? snames;
      checkMissing(snames1);
      return snames1;
    };
    p4 = prom<V +>{
      ncols8 = ld ncols;
      ncols9 = force? ncols8;
      checkMissing(ncols9);
      return ncols9;
    };
    r75 = dyn de_setup(p2, p3, p4);
    check L140() else D35();
  L193():
    goto L47(r122);
  L196():
    ncols11 = force? ncols10;
    checkMissing(ncols11);
    sum = ldf sum in base;
    r128 = dyn sum(ncols11);
    check L197() else D63();
  L198():
    de_restore = ldf `de.restore`;
    check L199() else D64();
  D14():
    deopt 59 [c5, r42];
  D16():
    deopt 64 [r43];
  D21():
    deopt 84 [Names7];
  D35():
    deopt 139 [r75];
  D63():
    deopt 227 [r121, r128];
  D64():
    deopt 230 [];
  D66():
    deopt 239 [];
  L23(r51):
    vector1 = ldf vector in base;
    r53 = dyn vector1("list", r51);
    check L110() else D20();
  L95():
    goto L18(c5, r42);
  L99():
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L100() else L101();
  L106():
    Names5 = ld Names;
    check L108() else D18();
  L107():
    r50 = dyn base14(<sym Names>);
    goto L23(r50);
  L111():
    Names8 = force? Names7;
    checkMissing(Names8);
    l = ld odata;
    names__ = ldf `names<-`;
    check L112() else D22();
  L140():
    st odata = r75;
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L141() else L142();
  L197():
    goto L48(r121, r128);
  L199():
    p8 = prom<V +>{
      rdata2 = ld rdata;
      rdata3 = force? rdata2;
      checkMissing(rdata3);
      return rdata3;
    };
    p9 = prom<V +>{
      ncols12 = ld ncols;
      ncols13 = force? ncols12;
      checkMissing(ncols13);
      return ncols13;
    };
    p10 = prom<V +>{
      coltypes2 = ld coltypes;
      coltypes3 = force? coltypes2;
      checkMissing(coltypes3);
      return coltypes3;
    };
    p11 = prom<V +>{
      snames2 = ld snames;
      snames3 = force? snames2;
      checkMissing(snames3);
      return snames3;
    };
    p12 = prom<V +>{
      sdata6 = ld sdata;
      sdata7 = force? sdata6;
      checkMissing(sdata7);
      return sdata7;
    };
    r135 = dyn de_restore(p8, p9, p10, p11, p12);
    check L200() else D65();
  L202():
    r137 = dyn warning3("could not restore variables properly");
    check L203() else D67();
  D18():
    deopt 77 [Names5];
  D20():
    deopt 82 [r53];
  D22():
    deopt 87 [Names8, l, Names8];
  D65():
    deopt 236 [r135];
  D67():
    deopt 241 [r137];
  L20(r45):
    st Modes = r45;
    goto L21();
  L31(r77):
    c17 = `as.logical`(r77);
    if c17 then L145() else L32();
  L100():
    list2 = ldf list in base;
    r46 = dyn list2();
    check L102() else D17();
  L101():
    r44 = dyn base12();
    goto L20(r44);
  L108():
    Names6 = force? Names5;
    checkMissing(Names6);
    length4 = ldf length in base;
    r52 = dyn length4(Names6);
    check L109() else D19();
  L110():
    goto L22(r53);
  L112():
    r54 = dyn names__(l, NULL, Names8);
    check L113() else D23();
  L141():
    Names9 = ld Names;
    check L143() else D36();
  L142():
    r76 = dyn base19(<sym Names>);
    goto L31(r76);
  L200():
    st rdata = r135;
    goto L50(r135);
  L203():
    goto L50(r137);
  D17():
    deopt 68 [r46];
  D19():
    deopt 80 [r52];
  D23():
    deopt 89 [Names8, r54];
  D36():
    deopt 143 [Names9];
  L32():
    goto L37();
  L37():
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L162() else L163();
  L102():
    goto L20(r46);
  L109():
    goto L23(r52);
  L113():
    st odata = r54;
    goto L14();
  L143():
    Names10 = force? Names9;
    checkMissing(Names10);
    length7 = ldf length in base;
    r78 = dyn length7(Names10);
    check L144() else D37();
  L145():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L146() else L147();
  D37():
    deopt 146 [r78];
  L33(r80):
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L150() else L151();
  L38(r94):
    c19 = `as.logical`(r94);
    if c19 then L166() else L39();
  L144():
    goto L31(r78);
  L146():
    Names11 = ld Names;
    check L148() else D38();
  L147():
    r79 = dyn base20(<sym Names>);
    goto L33(r79);
  L162():
    Modes7 = ld Modes;
    check L164() else D47();
  L163():
    r93 = dyn base22(<sym Modes>);
    goto L38(r93);
  D38():
    deopt 149 [Names11];
  D47():
    deopt 174 [Modes7];
  L34(r85, r86):
    r88 = `!=`(r85, r86);
    c18 = `as.logical`(r88);
    if c18 then L154() else L35();
  L39():
    goto L28();
  L148():
    Names12 = force? Names11;
    checkMissing(Names12);
    length8 = ldf length in base;
    r81 = dyn length8(Names12);
    check L149() else D39();
  L150():
    odata4 = ld odata;
    check L152() else D40();
  L151():
    r84 = dyn base21(<sym odata>);
    goto L34(r80, r84);
  L164():
    Modes8 = force? Modes7;
    checkMissing(Modes8);
    length10 = ldf length in base;
    r95 = dyn length10(Modes8);
    check L165() else D48();
  L166():
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L167() else L168();
  D39():
    deopt 152 [r81];
  D40():
    deopt 154 [r80, odata4];
  D48():
    deopt 177 [r95];
  L35():
    Names13 = ld Names;
    check L158() else D44();
  L36(r90):
    goto L37();
  L40(r97):
    sym24 = ldf length;
    base24 = ldf length in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L171() else L172();
  L149():
    goto L33(r81);
  L152():
    odata5 = force? odata4;
    checkMissing(odata5);
    length9 = ldf length in base;
    r87 = dyn length9(odata5);
    check L153() else D41();
  L154():
    warning1 = ldf warning;
    check L155() else D42();
  L165():
    goto L38(r95);
  L167():
    Modes9 = ld Modes;
    check L169() else D49();
  L168():
    r96 = dyn base23(<sym Modes>);
    goto L40(r96);
  D41():
    deopt 157 [r80, r87];
  D42():
    deopt 160 [];
  D44():
    deopt 163 [Names13];
  D49():
    deopt 180 [Modes9];
  L41(r102, r103):
    r105 = `!=`(r102, r103);
    c20 = `as.logical`(r105);
    if c20 then L175() else L42();
  L153():
    goto L34(r80, r87);
  L155():
    r89 = dyn warning1("'names' argument ignored");
    check L156() else D43();
  L158():
    Names14 = force? Names13;
    checkMissing(Names14);
    l1 = ld odata;
    names__1 = ldf `names<-`;
    check L159() else D45();
  L169():
    Modes10 = force? Modes9;
    checkMissing(Modes10);
    length11 = ldf length in base;
    r98 = dyn length11(Modes10);
    check L170() else D50();
  L171():
    odata6 = ld odata;
    check L173() else D51();
  L172():
    r101 = dyn base24(<sym odata>);
    goto L41(r97, r101);
  D43():
    deopt 162 [r89];
  D45():
    deopt 166 [Names14, l1, Names14];
  D50():
    deopt 183 [r98];
  D51():
    deopt 185 [r97, odata6];
  L42():
    goto L44(NULL);
  L44(r110):
    goto L28();
  L156():
    goto L36(r89);
  L159():
    r91 = dyn names__1(l1, NULL, Names14);
    check L160() else D46();
  L170():
    goto L40(r98);
  L173():
    odata7 = force? odata6;
    checkMissing(odata7);
    length12 = ldf length in base;
    r104 = dyn length12(odata7);
    check L174() else D52();
  L175():
    warning2 = ldf warning;
    check L176() else D53();
  D46():
    deopt 168 [Names14, r91];
  D52():
    deopt 188 [r97, r104];
  D53():
    deopt 191 [];
  L160():
    st odata = r91;
    goto L36(Names14);
  L174():
    goto L41(r97, r104);
  L176():
    r106 = dyn warning2("'modes' argument ignored");
    check L177() else D54();
  D54():
    deopt 193 [r106];
  L177():
    sym25 = ldf list;
    base25 = ldf list in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L178() else L179();
  L43(r108):
    st Modes = r108;
    goto L44(r108);
  L178():
    list3 = ldf list in base;
    r109 = dyn list3();
    check L180() else D55();
  L179():
    r107 = dyn base25();
    goto L43(r107);
  D55():
    deopt 197 [r109];
  L180():
    goto L43(r109);
  }
}