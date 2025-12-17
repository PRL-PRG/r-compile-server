fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1634712521;
    st `aggregate.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1634712521(x, data, FUN, `...`, subset, `na.action`) {
  (reg x:*, reg data:*, reg FUN:*, reg ddd:dots, reg subset:*, reg na_action:*) -+> V { var x:*, var data:*, var FUN:*, var `...`:dots?, var subset:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_omit:*, reg na_omit1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg inherits:cls, reg r8:V, reg r9:V, reg c1:L, reg stop1:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg x3:*, reg x4:V, reg length:cls, reg r14:V, reg r15:V, reg c2:L, reg stop2:cls, reg r16:V, reg match_call:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg eval:cls, reg m:*, reg m1:V, reg c3:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r21:V, reg p1:p(V +), reg parent_frame:cls, reg r23:V, reg p2:p(V +), reg r25:V, reg is_matrix:cls, reg r26:V, reg c4:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p3:p(V +), reg r28:V, reg l:*, reg c5:L, reg r30:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r32:V, reg dx3:V, reg r33:V, reg l3:*, reg c6:L, reg r36:dots, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r38:dots, reg dx5:V, reg r39:V, reg l6:*, reg ___:cls, reg ddd1:dots?, reg r40:V, reg l7:*, reg names:cls, reg r41:V, reg c7:L, reg r44:S, reg l9:*, reg r45:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r47:S, reg l11:*, reg dx7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg r55:S, reg l14:*, reg r56:V, reg r57:S, reg r58:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r65:V, reg r66:S, reg l17:*, reg r67:V, reg r68:S, reg r69:V, reg m4:*, reg m5:V, reg names1:cls, reg r70:V, reg match:cls, reg r71:V, reg ___1:cls, reg r72:V, reg names__:cls, reg r73:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r74:V, reg r75:V, reg quote:cls, reg r76:V, reg l18:*, reg c8:L, reg r78:V, reg l20:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ____:cls, reg r81:V, reg x5:*, reg x6:V, reg c9:L, reg x8:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __:cls, reg r82:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r83:V, reg dx14:V, reg r84:V, reg quote1:cls, reg r85:V, reg r86:V, reg c10:L, reg as_list:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r87:V, reg r88:V, reg terms:cls, reg x9:*, reg x10:V, reg c11:L, reg x12:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg __1:cls, reg r89:V, reg p4:p(V +), reg r91:V, reg attr:cls, reg r92:V, reg c12:L, reg r94:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg __2:cls, reg r95:V, reg p5:p(V +), reg r97:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r98:V, reg r99:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r100:V, reg r101:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r102:V, reg r103:V, reg quote2:cls, reg r104:V, reg setdiff:cls, reg lapply:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r105:V, reg r106:V, reg data3:*, reg data4:V, reg names2:cls, reg r107:V, reg p6:p(V +), reg as_name:*, reg as_name1:V, reg p7:p(V +), reg r110:V, reg p8:p(V +), reg rhs:*, reg rhs1:V, reg p9:p(V +), reg r113:V, reg c13:cls, reg r114:V, reg as_call:cls, reg r115:V, reg lhs:*, reg lhs1:V, reg l21:*, reg c14:L, reg lhs3:V, reg l23:*, reg dr16:V, reg dc8:L, reg dx19:V, reg dx20:V, reg ____1:cls, reg r116:V, reg x13:*, reg x14:V, reg l24:*, reg c15:L, reg x16:V, reg l26:*, reg dr18:V, reg dc9:L, reg dx21:V, reg x18:V, reg dx22:V, reg ____2:cls, reg r117:V, reg eval1:cls, reg m6:*, reg m7:V, reg p10:p(V +), reg parent_frame1:cls, reg r119:V, reg p11:p(V +), reg r121:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r122:V, reg r123:V, reg mf:*, reg mf1:V, reg c16:L, reg mf3:V, reg dr20:V, reg dc10:L, reg dx23:V, reg dx24:V, reg __3:cls, reg r124:V, reg is_matrix1:cls, reg r125:V, reg c17:L, reg as_data_frame1:cls, reg mf4:*, reg mf5:V, reg c18:L, reg mf7:V, reg dr22:V, reg dc11:L, reg dx25:V, reg dx26:V, reg __4:cls, reg r126:V, reg p12:p(V +), reg r128:V, reg r129:V, reg mf8:*, reg mf9:V, reg c19:L, reg mf11:V, reg dr24:V, reg dc12:L, reg dx27:V, reg __5:cls, reg r130:V, reg aggregate_data_frame:cls, reg lhs6:*, reg lhs7:V, reg p13:p(V +), reg mf12:*, reg mf13:V, reg c20:L, reg mf15:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg __6:cls, reg r132:V, reg p14:p(V +), reg FUN1:*, reg FUN2:V, reg p15:p(V +), reg ddd2:dots?, reg r135:V |
    mkenv;
    st x = x;
    st data = data;
    st FUN = FUN;
    st `...` = ddd;
    st subset = subset;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L0() else L1(na_action);
  L0():
    p = prom<V +>{
      na_omit = ld `na.omit`;
      na_omit1 = force? na_omit;
      checkMissing(na_omit1);
      return na_omit1;
    };
    goto L1(p);
  L1(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L2(r2):
    c = `as.logical`(r2);
    if c then L34() else L3();
  L32():
    missing = ldf missing in base;
    r3 = dyn missing(<sym x>);
    goto L2(r3);
  L33():
    r1 = dyn base(<sym x>);
    goto L2(r1);
  L3():
    goto L4();
  L4():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L34():
    stop = ldf stop;
    check L35() else D0();
  D0():
    deopt 4 [];
  L5(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L42() else L6();
  L35():
    r4 = dyn stop("argument 'x' is  missing -- it has been renamed from 'formula'");
    check L36() else D1();
  L38():
    x1 = ld x;
    check L40() else D2();
  L39():
    r6 = dyn base1(<sym x>, "formula");
    goto L5(r6);
  D1():
    deopt 6 [r4];
  D2():
    deopt 11 [x1];
  L6():
    goto L7();
  L7():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L36():
    goto L4();
  L40():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r8 = dyn inherits(x2, "formula", FALSE);
    check L41() else D3();
  L42():
    stop1 = ldf stop;
    check L43() else D4();
  D3():
    deopt 16 [r8];
  D4():
    deopt 19 [];
  L8(r13):
    r15 = `!=`(r13, 3);
    c2 = `as.logical`(r15);
    if c2 then L50() else L9();
  L41():
    goto L5(r8);
  L43():
    r10 = dyn stop1("argument 'x' must be a formula");
    check L44() else D5();
  L46():
    x3 = ld x;
    check L48() else D6();
  L47():
    r12 = dyn base2(<sym x>);
    goto L8(r12);
  D5():
    deopt 21 [r10];
  D6():
    deopt 26 [x3];
  L9():
    goto L10();
  L10():
    match_call = ldf `match.call`;
    check L54() else D10();
  L44():
    goto L7();
  L48():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r14 = dyn length(x4);
    check L49() else D7();
  L50():
    stop2 = ldf stop;
    check L51() else D8();
  D7():
    deopt 29 [r14];
  D8():
    deopt 33 [];
  D10():
    deopt 39 [];
  L49():
    goto L8(r14);
  L51():
    r16 = dyn stop2("formula 'x' must have both left and right hand sides");
    check L52() else D9();
  L54():
    r18 = dyn match_call[`expand.dots`](FALSE);
    check L55() else D11();
  D9():
    deopt 35 [r16];
  D11():
    deopt 42 [r18];
  L52():
    goto L10();
  L55():
    st m = r18;
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L56() else L57();
  L11(r20):
    c4 = `as.logical`(r20);
    if c4 then L61() else L12();
  L56():
    eval = ldf eval;
    check L58() else D12();
  L57():
    r19 = dyn base3(<lang eval(`$`(m, data), parent.frame())>);
    goto L11(r19);
  D12():
    deopt 47 [];
  L12():
    goto L13();
  L13():
    l3 = ld m;
    c6 = `is.object`(l3);
    if c6 then L70() else L71(NULL, l3);
  L58():
    p1 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c3 = `is.object`(m1);
      if c3 then L1() else L2(m1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", m1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(m3):
      r21 = `$`(m3, <sym data>);
      goto L0(r21);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r23 = dyn parent_frame();
      return r23;
    };
    r25 = dyn eval(p1, p2);
    check L59() else D13();
  L61():
    as_data_frame = ldf `as.data.frame`;
    check L62() else D15();
  D13():
    deopt 50 [r25];
  D15():
    deopt 54 [];
  L59():
    is_matrix = ldf `is.matrix` in base;
    r26 = dyn is_matrix(r25);
    check L60() else D14();
  L62():
    p3 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r28 = dyn as_data_frame(p3);
    check L63() else D16();
  L69(r38, dx5):
    st m = dx5;
    l6 = ld m;
    ___ = ldf `$<-`;
    check L73() else D17();
  L70():
    dr4 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L72() else L71(NULL, dr4);
  L71(r36, l5):
    r39 = `$<-`(l5, <sym FUN>, NULL);
    goto L69(r36, r39);
  D14():
    deopt 52 [r26];
  D16():
    deopt 56 [r28];
  D17():
    deopt 68 [r38, l6, r38];
  L60():
    goto L11(r26);
  L63():
    l = ld m;
    c5 = `is.object`(l);
    if c5 then L65() else L66(r28, l);
  L72():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L69(NULL, dx4);
  L73():
    ddd1 = ld `...`;
    r40 = dyn ___[, , `...`, ](l6, NULL, ddd1, r38);
    check L74() else D18();
  D18():
    deopt 71 [r38, r40];
  L64(r32, dx3):
    st m = dx3;
    goto L13();
  L65():
    dr2 = tryDispatchBuiltin.0("$<-", l, r28);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L67() else L66(r28, dr2);
  L66(r30, l2):
    r33 = `$<-`(l2, <sym data>, r28);
    goto L64(r30, r33);
  L74():
    st m = r40;
    l7 = ld m;
    names = ldf names;
    check L75() else D19();
  D19():
    deopt 76 ["formula", l7, "formula"];
  L67():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L64(r28, dx2);
  L75():
    r41 = dyn names("formula", NULL);
    check L76() else D20();
  D20():
    deopt 78 ["formula", l7, "formula", r41];
  L76():
    c7 = `is.object`(r41);
    if c7 then L77() else L78("formula", l7, r41);
  L14(r47, l11, dx7):
    names__ = ldf `names<-`;
    check L87() else D24();
  L77():
    dr6 = tryDispatchBuiltin.0("[<-", r41, "formula");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L79() else L78("formula", l7, dr6);
  L78(r44, l9, r45):
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L80() else L81();
  D24():
    deopt 94 [r47, l11, dx7];
  L15(r55, l14, r56, r57, r58):
    ___1 = ldf `[<-` in base;
    r72 = dyn ___1(r56, r57, r58);
    goto L14(r55, l14, r72);
  L79():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L14("formula", l7, dx6);
  L80():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L82() else L83();
  L81():
    r54 = dyn base4("x", <lang names(m)>);
    goto L15(r44, l9, r45, "formula", r54);
  L87():
    r73 = dyn names__(l11, NULL, dx7);
    check L88() else D25();
  D25():
    deopt 96 [r47, r73];
  L16(r66, l17, r67, r68, r69):
    match = ldf match in base;
    r71 = dyn match("x", r69, NA_INT, NULL);
    check L86() else D23();
  L82():
    m4 = ld m;
    check L84() else D21();
  L83():
    r65 = dyn base5(<sym m>);
    goto L16(r44, l9, r45, "formula", r65);
  L88():
    st m = r73;
    sym6 = ldf quote;
    base6 = ldf quote in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L89() else L90();
  D21():
    deopt 85 [r44, l9, r45, "formula", m4];
  D23():
    deopt 92 [r66, l17, r67, r68, r71];
  L17(r75):
    l18 = ld m;
    c8 = `is.object`(l18);
    if c8 then L91() else L92(r75, l18);
  L84():
    m5 = force? m4;
    checkMissing(m5);
    names1 = ldf names in base;
    r70 = dyn names1(m5);
    check L85() else D22();
  L86():
    goto L15(r66, l17, r67, r68, r71);
  L89():
    quote = ldf quote in base;
    r76 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L17(r76);
  L90():
    r74 = dyn base6(<lang `::`(stats, model.frame)>);
    goto L17(r74);
  D22():
    deopt 88 [r44, l9, r45, "formula", r70];
  L18(dx9):
    st m = dx9;
    x5 = ld x;
    check L94() else D26();
  L85():
    goto L16(r44, l9, r45, "formula", r70);
  L91():
    dr8 = tryDispatchBuiltin.0("[[<-", l18, r75);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L93() else L92(r75, dr8);
  L92(r78, l20):
    ____ = ldf `[[<-` in base;
    r81 = dyn ____(l20, r75, 1);
    goto L18(r81);
  D26():
    deopt 106 [x5];
  L93():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L18(dx8);
  L94():
    x6 = force? x5;
    checkMissing(x6);
    c9 = `is.object`(x6);
    if c9 then L95() else L96(x6);
  L19(dx11):
    sym7 = ldf quote;
    base7 = ldf quote in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L98() else L99();
  L95():
    dr10 = tryDispatchBuiltin.1("[[", x6);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L97() else L96(dr10);
  L96(x8):
    __ = ldf `[[` in base;
    r82 = dyn __(x8, 2);
    goto L19(r82);
  L20(dx14, r84):
    r86 = `==`(dx14, r84);
    c10 = `as.logical`(r86);
    if c10 then L100() else L21();
  L97():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L19(dx10);
  L98():
    quote1 = ldf quote in base;
    r85 = dyn quote1(<sym .>);
    goto L20(dx11, r85);
  L99():
    r83 = dyn base7(<sym .>);
    goto L20(dx11, r83);
  L21():
    goto L27();
  L27():
    eval1 = ldf eval;
    check L122() else D35();
  L100():
    as_list = ldf `as.list`;
    check L101() else D27();
  D27():
    deopt 115 [];
  D35():
    deopt 153 [];
  L101():
    p5 = prom<V +>{
      sym8 = ldf attr;
      base8 = ldf attr in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r88):
      c12 = `is.object`(r88);
      if c12 then L4() else L5(r88);
    L2():
      terms = ldf terms;
      p4 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c11 = `is.object`(x10);
        if c11 then L1() else L2(x10);
      L0(dx16):
        return dx16;
      L1():
        dr12 = tryDispatchBuiltin.1("[", x10);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(x12):
        __1 = ldf `[` in base;
        r89 = dyn __1(x12, -2);
        goto L0(r89);
      L3():
        dx15 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx15);
      };
      r91 = dyn terms(p4);
      attr = ldf attr in base;
      r92 = dyn attr(r91, "variables");
      goto L0(r92);
    L3():
      r87 = dyn base8(<lang terms(`[`(x, `-`(2)))>, "variables");
      goto L0(r87);
    L1(dx18):
      return dx18;
    L4():
      dr14 = tryDispatchBuiltin.1("[", r88);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L6() else L5(dr14);
    L5(r94):
      __2 = ldf `[` in base;
      r95 = dyn __2(r94, -1.0);
      goto L1(r95);
    L6():
      dx17 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx17);
    };
    r97 = dyn as_list(p5);
    check L102() else D28();
  L122():
    p10 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    p11 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r119 = dyn parent_frame1();
      return r119;
    };
    r121 = dyn eval1(p10, p11);
    check L123() else D36();
  D28():
    deopt 117 [r97];
  D36():
    deopt 156 [r121];
  L102():
    st rhs = r97;
    sym9 = ldf `as.call`;
    base9 = ldf `as.call` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L103() else L104();
  L123():
    st mf = r121;
    sym13 = ldf `is.matrix`;
    base13 = ldf `is.matrix` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L124() else L125();
  L22(r99):
    st lhs = r99;
    lhs = ld lhs;
    check L113() else D33();
  L28(r123):
    c17 = `as.logical`(r123);
    if c17 then L131() else L30();
  L103():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L105() else L106();
  L104():
    r98 = dyn base9(<lang c(quote(cbind), setdiff(lapply(names(data), as.name), rhs))>);
    goto L22(r98);
  L124():
    mf = ld mf;
    check L126() else D37();
  L125():
    r122 = dyn base13(<lang `[[`(mf, 1)>);
    goto L28(r122);
  D33():
    deopt 136 [lhs];
  D37():
    deopt 160 [mf];
  L23(r101):
    as_call = ldf `as.call` in base;
    r115 = dyn as_call(r101);
    check L112() else D32();
  L30():
    mf8 = ld mf;
    check L135() else D41();
  L31(r129):
    st lhs = r129;
    aggregate_data_frame = ldf `aggregate.data.frame`;
    check L139() else D42();
  L105():
    sym11 = ldf quote;
    base11 = ldf quote in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L107() else L108();
  L106():
    r100 = dyn base10(<lang quote(cbind)>, <lang setdiff(lapply(names(data), as.name), rhs)>);
    goto L23(r100);
  L113():
    lhs1 = force? lhs;
    checkMissing(lhs1);
    l21 = ld x;
    c14 = `is.object`(l21);
    if c14 then L114() else L115(lhs1, l21);
  L126():
    mf1 = force? mf;
    checkMissing(mf1);
    c16 = `is.object`(mf1);
    if c16 then L127() else L128(mf1);
  L131():
    as_data_frame1 = ldf `as.data.frame`;
    check L132() else D39();
  D32():
    deopt 134 [r115];
  D39():
    deopt 168 [];
  D41():
    deopt 171 [mf8];
  D42():
    deopt 178 [];
  L24(r103):
    setdiff = ldf setdiff;
    check L109() else D29();
  L25(dx20):
    st x = dx20;
    x13 = ld x;
    check L117() else D34();
  L29(dx24):
    is_matrix1 = ldf `is.matrix` in base;
    r125 = dyn is_matrix1(dx24);
    check L130() else D38();
  L107():
    quote2 = ldf quote in base;
    r104 = dyn quote2(<sym cbind>);
    goto L24(r104);
  L108():
    r102 = dyn base11(<sym cbind>);
    goto L24(r102);
  L112():
    goto L22(r115);
  L114():
    dr16 = tryDispatchBuiltin.0("[[<-", l21, lhs1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L116() else L115(lhs1, dr16);
  L115(lhs3, l23):
    ____1 = ldf `[[<-` in base;
    r116 = dyn ____1(l23, lhs1, 2);
    goto L25(r116);
  L127():
    dr20 = tryDispatchBuiltin.1("[[", mf1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L129() else L128(dr20);
  L128(mf3):
    __3 = ldf `[[` in base;
    r124 = dyn __3(mf3, 1);
    goto L29(r124);
  L132():
    p12 = prom<V +>{
      mf4 = ld mf;
      mf5 = force? mf4;
      checkMissing(mf5);
      c18 = `is.object`(mf5);
      if c18 then L1() else L2(mf5);
    L0(dx26):
      return dx26;
    L1():
      dr22 = tryDispatchBuiltin.1("[[", mf5);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(mf7):
      __4 = ldf `[[` in base;
      r126 = dyn __4(mf7, 1);
      goto L0(r126);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx25);
    };
    r128 = dyn as_data_frame1(p12);
    check L133() else D40();
  L135():
    mf9 = force? mf8;
    checkMissing(mf9);
    c19 = `is.object`(mf9);
    if c19 then L136() else L137(mf9);
  L139():
    p13 = prom<V +>{
      lhs6 = ld lhs;
      lhs7 = force? lhs6;
      checkMissing(lhs7);
      return lhs7;
    };
    p14 = prom<V +>{
      mf12 = ld mf;
      mf13 = force? mf12;
      checkMissing(mf13);
      c20 = `is.object`(mf13);
      if c20 then L1() else L2(mf13);
    L0(dx29):
      return dx29;
    L1():
      dr26 = tryDispatchBuiltin.1("[", mf13);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(mf15):
      __6 = ldf `[` in base;
      r132 = dyn __6(mf15, -1);
      goto L0(r132);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx28);
    };
    p15 = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    ddd2 = ld `...`;
    r135 = dyn aggregate_data_frame[, , FUN, `...`](p13, p14, p15, ddd2);
    check L140() else D43();
  D29():
    deopt 127 [];
  D34():
    deopt 143 [x13];
  D38():
    deopt 166 [r125];
  D40():
    deopt 170 [r128];
  D43():
    deopt 184 [r135];
  L109():
    p8 = prom<V +>{
      lapply = ldf lapply;
      p6 = prom<V +>{
        sym12 = ldf names;
        base12 = ldf names in base;
        guard12 = `==`.4(sym12, base12);
        if guard12 then L1() else L2();
      L0(r106):
        return r106;
      L1():
        data3 = ld data;
        data4 = force? data3;
        checkMissing(data4);
        names2 = ldf names in base;
        r107 = dyn names2(data4);
        goto L0(r107);
      L2():
        r105 = dyn base12(<sym data>);
        goto L0(r105);
      };
      p7 = prom<V +>{
        as_name = ld `as.name`;
        as_name1 = force? as_name;
        checkMissing(as_name1);
        return as_name1;
      };
      r110 = dyn lapply(p6, p7);
      return r110;
    };
    p9 = prom<V +>{
      rhs = ld rhs;
      rhs1 = force? rhs;
      checkMissing(rhs1);
      return rhs1;
    };
    r113 = dyn setdiff(p8, p9);
    check L110() else D30();
  L116():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L25(dx19);
  L117():
    x14 = force? x13;
    checkMissing(x14);
    l24 = ld m;
    c15 = `is.object`(l24);
    if c15 then L118() else L119(x14, l24);
  L129():
    dx23 = getTryDispatchBuiltinValue(dr20);
    goto L29(dx23);
  L130():
    goto L28(r125);
  L133():
    goto L31(r128);
  L136():
    dr24 = tryDispatchBuiltin.1("[", mf9);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L138() else L137(dr24);
  L137(mf11):
    __5 = ldf `[` in base;
    r130 = dyn __5(mf11, 1);
    goto L31(r130);
  L140():
    popenv;
    return r135;
  D30():
    deopt 130 [r113];
  L26(x18, dx22):
    st m = dx22;
    goto L27();
  L110():
    c13 = ldf c in base;
    r114 = dyn c13(r103, r113);
    check L111() else D31();
  L118():
    dr18 = tryDispatchBuiltin.0("[[<-", l24, x14);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L120() else L119(x14, dr18);
  L119(x16, l26):
    ____2 = ldf `[[<-` in base;
    r117 = dyn ____2(l26, x14, 2);
    goto L26(x16, r117);
  L138():
    dx27 = getTryDispatchBuiltinValue(dr24);
    goto L31(dx27);
  D31():
    deopt 132 [r114];
  L111():
    goto L23(r114);
  L120():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L26(x14, dx21);
  }
}