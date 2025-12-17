fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3230926300;
    st `drop1.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3230926300(object, scope, scale, test, k, trace, `...`) {
  (reg object:*, reg scope:*, reg scale:*, reg test:*, reg k:*, reg trace:*, reg ddd:dots) -+> V { var object:*, var scope:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var k:*, reg k_isMissing:L, reg k_orDefault:*, var trace:*, reg trace_isMissing:L, reg trace_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg terms:cls, reg object1:*, reg object2:V, reg p1:p(V +), reg r7:V, reg attr:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c1:L, reg drop_scope:cls, reg object3:*, reg object4:V, reg p2:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg scope1:*, reg scope2:V, reg c2:L, reg r17:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg terms1:cls, reg update_formula:cls, reg object5:*, reg object6:V, reg p3:p(V +), reg scope3:*, reg scope4:V, reg p4:p(V +), reg r22:V, reg p5:p(V +), reg r24:V, reg attr1:cls, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg scope5:*, reg scope6:V, reg tl:*, reg tl1:V, reg match:cls, reg r31:V, reg r32:V, reg all:cls, reg r33:V, reg r34:V, reg c4:L, reg stop:cls, reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg scope7:*, reg scope8:V, reg length:cls, reg r38:V, reg matrix:cls, reg ns:*, reg ns1:V, reg r39:V, reg p6:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg scope9:*, reg scope10:V, reg c5:cls, reg r45:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r46:V, reg r47:V, reg c6:cls, reg r48:V, reg list:cls, reg r49:V, reg p7:p(V +), reg r51:V, reg extractAIC:cls, reg object7:*, reg object8:V, reg p8:p(V +), reg scale1:*, reg scale2:V, reg p9:p(V +), reg k1:*, reg k2:V, reg p10:p(V +), reg ddd1:dots?, reg r55:V, reg l:*, reg c7:L, reg r57:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r60:V, reg nobs:cls, reg object9:*, reg object10:V, reg p11:p(V +), reg r62:V, reg environment:cls, reg formula:cls, reg object11:*, reg object12:V, reg p12:p(V +), reg r64:V, reg p13:p(V +), reg r66:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg ns2:*, reg ns3:V, reg r69:I, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg scope11:*, reg scope12:V, reg c9:L, reg i6:I, reg scope14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg i9:*, reg i10:V, reg __:cls, reg r70:V, reg trace1:*, reg trace2:V, reg r71:V, reg c10:L, reg cat:cls, reg tt:*, reg tt1:V, reg p14:p(V +), reg r73:V, reg flush_console:cls, reg r74:V, reg i13:I, reg update:cls, reg object13:*, reg object14:V, reg p15:p(V +), reg as_formula:cls, reg paste:cls, reg tt2:*, reg tt3:V, reg p16:p(V +), reg r78:V, reg p17:p(V +), reg r80:V, reg p18:p(V +), reg r82:V, reg eval:cls, reg nfit:*, reg nfit1:V, reg p19:p(V +), reg env:*, reg env1:V, reg p20:p(V +), reg r85:V, reg extractAIC1:cls, reg nfit2:*, reg nfit3:V, reg p21:p(V +), reg scale3:*, reg scale4:V, reg p22:p(V +), reg k3:*, reg k4:V, reg p23:p(V +), reg ddd2:dots?, reg r89:V, reg l4:*, reg c11:L, reg i15:I, reg r91:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i17:I, reg dx5:V, reg i18:*, reg i19:V, reg r94:V, reg ___1:cls, reg r95:V, reg nobs1:cls, reg nfit4:*, reg nfit5:V, reg p24:p(V +), reg r97:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r98:V, reg i22:I, reg r99:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r100:V, reg i25:I, reg r101:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r102:V, reg i28:I, reg r103:V, reg n0:*, reg n1:V, reg nnew:*, reg nnew1:V, reg c12:cls, reg r104:V, reg is_finite:cls, reg r105:V, reg all1:cls, reg r106:V, reg c13:L, reg i30:I, reg c15:V, reg nnew2:*, reg nnew3:V, reg n2:*, reg n3:V, reg r107:V, reg c16:L, reg c17:V, reg c19:L, reg stop1:cls, reg r108:V, reg i34:I, reg ans:*, reg ans1:V, reg c20:L, reg ans3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r110:V, reg ans4:*, reg ans5:V, reg c21:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg dx13:V, reg __2:cls, reg r111:V, reg r112:V, reg l7:*, reg c22:L, reg r114:L, reg l9:*, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg ___2:cls, reg r117:V, reg data_frame:cls, reg dfs:*, reg dfs1:V, reg p25:p(V +), reg ans8:*, reg ans9:V, reg c23:L, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg __3:cls, reg r119:V, reg p26:p(V +), reg r121:V, reg match_arg:cls, reg test1:*, reg test2:V, reg p27:p(V +), reg r123:V, reg test3:*, reg test4:V, reg r124:V, reg c24:L, reg ans12:*, reg ans13:V, reg c25:L, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg __4:cls, reg r125:V, reg k5:*, reg k6:V, reg ans16:*, reg ans17:V, reg c26:L, reg dx21:V, reg k8:V, reg dr16:V, reg dc8:L, reg dx23:V, reg dx24:V, reg k10:V, reg dx25:V, reg __5:cls, reg r126:V, reg r127:V, reg r128:V, reg dev:*, reg dev1:V, reg dev2:*, reg dev3:V, reg c27:L, reg dev6:V, reg dev7:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dev9:V, reg dx27:V, reg __6:cls, reg r129:V, reg r130:V, reg l10:*, reg c28:L, reg r132:L, reg l12:*, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg ___3:cls, reg r135:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r136:V, reg r137:V, reg dev10:*, reg dev11:V, reg is_na:cls, reg r138:V, reg r139:V, reg dev12:*, reg dev13:V, reg safe_pchisq:cls, reg dev14:*, reg dev15:V, reg c29:L, reg dev17:V, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg nas:*, reg nas1:V, reg __7:cls, reg r140:V, reg p28:p(V +), reg dfs2:*, reg dfs3:V, reg c30:L, reg dfs5:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg nas2:*, reg nas3:V, reg __8:cls, reg r142:V, reg p29:p(V +), reg r144:V, reg l13:*, reg c31:L, reg r146:V, reg l15:*, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg nas4:*, reg nas5:V, reg ___4:cls, reg r149:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r150:V, reg r151:V, reg dev18:*, reg dev19:V, reg P:*, reg P1:V, reg list1:cls, reg r152:V, reg l16:*, reg c32:L, reg r154:V, reg l18:*, reg dr28:V, reg dc14:L, reg dx36:V, reg r156:V, reg dx37:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r161:V, reg r162:V, reg r163:V, reg r164:V, reg c33:cls, reg r165:V, reg ___5:cls, reg r166:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r168:V, reg r169:V, reg deparse:cls, reg formula1:cls, reg object15:*, reg object16:V, reg p30:p(V +), reg r171:V, reg p31:p(V +), reg r173:V, reg scale5:*, reg scale6:V, reg r174:V, reg c34:L, reg paste1:cls, reg format:cls, reg scale7:*, reg scale8:V, reg p32:p(V +), reg r176:V, reg p33:p(V +), reg r178:V, reg r179:V, reg c35:cls, reg r180:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r181:V, reg r182:V, reg c36:cls, reg r183:V, reg l22:*, reg class__:cls, reg r184:V, reg head:*, reg head1:V, reg l23:*, reg attr__:cls, reg r185:V, reg aod:*, reg aod1:V |
    mkenv;
    st object = object;
    st scope = scope;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(0.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L1() else L2(test);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("none", "Chisq");
      goto L0(r2);
    L2():
      r = dyn base("none", "Chisq");
      goto L0(r);
    };
    goto L2(p);
  L2(test_orDefault):
    st test = test_orDefault;
    k_isMissing = missing.0(k);
    if k_isMissing then L3(2.0) else L3(k);
  L3(k_orDefault):
    st k = k_orDefault;
    trace_isMissing = missing.0(trace);
    if trace_isMissing then L4(FALSE) else L4(trace);
  L4(trace_orDefault):
    st trace = trace_orDefault;
    st `...` = ddd;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L5(r5):
    st tl = r5;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L56() else L57();
  L51():
    terms = ldf terms;
    check L53() else D0();
  L52():
    r4 = dyn base1(<lang terms(object)>, "term.labels");
    goto L5(r4);
  D0():
    deopt 3 [];
  L6(r10):
    c1 = `as.logical`(r10);
    if c1 then L58() else L7();
  L53():
    p1 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r7 = dyn terms(p1);
    check L54() else D1();
  L56():
    missing = ldf missing in base;
    r11 = dyn missing(<sym scope>);
    goto L6(r11);
  L57():
    r9 = dyn base2(<sym scope>);
    goto L6(r9);
  D1():
    deopt 5 [r7];
  L7():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L62() else L63();
  L8():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  L54():
    attr = ldf attr in base;
    r8 = dyn attr(r7, "term.labels");
    check L55() else D2();
  L58():
    drop_scope = ldf `drop.scope`;
    check L59() else D3();
  D2():
    deopt 8 [r8];
  D3():
    deopt 14 [];
  L9(r16):
    r17 = `!`(r16);
    c3 = `as.logical`(r17);
    if c3 then L65() else L10();
  L16(r37):
    st ns = r37;
    matrix = ldf matrix;
    check L88() else D17();
  L55():
    goto L5(r8);
  L59():
    p2 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r13 = dyn drop_scope(p2);
    check L60() else D4();
  L62():
    scope1 = ld scope;
    check L64() else D5();
  L63():
    r15 = dyn base3(<sym scope>);
    goto L9(r15);
  L84():
    scope7 = ld scope;
    check L86() else D15();
  L85():
    r36 = dyn base7(<sym scope>);
    goto L16(r36);
  D4():
    deopt 16 [r13];
  D5():
    deopt 19 [scope1];
  D15():
    deopt 60 [scope7];
  D17():
    deopt 66 [];
  L10():
    goto L12();
  L12():
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L72() else L73();
  L60():
    st scope = r13;
    goto L8();
  L64():
    scope2 = force? scope1;
    checkMissing(scope2);
    c2 = `is.character`(scope2);
    goto L9(c2);
  L65():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L66() else L67();
  L86():
    scope8 = force? scope7;
    checkMissing(scope8);
    length = ldf length in base;
    r38 = dyn length(scope8);
    check L87() else D16();
  L88():
    p6 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      r39 = `+`(ns1, 1);
      return r39;
    };
    p7 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L3() else L4();
    L0(r42):
      return r42;
    L3():
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L5() else L6();
    L4():
      r41 = dyn base8(<lang c("<none>", scope)>, <lang c("df", "AIC")>);
      goto L0(r41);
    L1(r44):
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L7() else L8();
    L5():
      scope9 = ld scope;
      scope10 = force? scope9;
      checkMissing(scope10);
      c5 = ldf c in base;
      r45 = dyn c5("<none>", scope10);
      goto L1(r45);
    L6():
      r43 = dyn base9("<none>", <sym scope>);
      goto L1(r43);
    L2(r47):
      list = ldf list in base;
      r49 = dyn list(r44, r47);
      goto L0(r49);
    L7():
      c6 = ldf c in base;
      r48 = dyn c6("df", "AIC");
      goto L2(r48);
    L8():
      r46 = dyn base10("df", "AIC");
      goto L2(r46);
    };
    r51 = dyn matrix[nrow, ncol, dimnames](p6, 2, p7);
    check L89() else D18();
  D16():
    deopt 63 [r38];
  D18():
    deopt 73 [r51];
  L11(r19):
    st scope = r19;
    goto L12();
  L13(r28):
    r34 = `!`(r28);
    c4 = `as.logical`(r34);
    if c4 then L80() else L15();
  L66():
    terms1 = ldf terms;
    check L68() else D6();
  L67():
    r18 = dyn base4(<lang terms(update.formula(object, scope))>, "term.labels");
    goto L11(r18);
  L72():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L74() else L75();
  L73():
    r27 = dyn base5(<lang `>`(match(scope, tl, 0), 0)>);
    goto L13(r27);
  L87():
    goto L16(r38);
  L89():
    st ans = r51;
    extractAIC = ldf extractAIC;
    check L90() else D19();
  D6():
    deopt 26 [];
  D19():
    deopt 76 [];
  L14(r30):
    r32 = `>`(r30, 0);
    all = ldf all in base;
    r33 = dyn all(r32);
    check L79() else D12();
  L15():
    goto L8();
  L68():
    p5 = prom<V +>{
      update_formula = ldf `update.formula`;
      p3 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        return object6;
      };
      p4 = prom<V +>{
        scope3 = ld scope;
        scope4 = force? scope3;
        checkMissing(scope4);
        return scope4;
      };
      r22 = dyn update_formula(p3, p4);
      return r22;
    };
    r24 = dyn terms1(p5);
    check L69() else D7();
  L74():
    scope5 = ld scope;
    check L76() else D9();
  L75():
    r29 = dyn base6(<sym scope>, <sym tl>, 0);
    goto L14(r29);
  L80():
    stop = ldf stop;
    check L81() else D13();
  L90():
    p8 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      return object8;
    };
    p9 = prom<V +>{
      scale1 = ld scale;
      scale2 = force? scale1;
      checkMissing(scale2);
      return scale2;
    };
    p10 = prom<V +>{
      k1 = ld k;
      k2 = force? k1;
      checkMissing(k2);
      return k2;
    };
    ddd1 = ld `...`;
    r55 = dyn extractAIC[, , k, `...`](p8, p9, p10, ddd1);
    check L91() else D20();
  D7():
    deopt 28 [r24];
  D9():
    deopt 39 [scope5];
  D12():
    deopt 50 [r33];
  D13():
    deopt 53 [];
  D20():
    deopt 82 [r55];
  L69():
    attr1 = ldf attr in base;
    r25 = dyn attr1(r24, "term.labels");
    check L70() else D8();
  L76():
    scope6 = force? scope5;
    checkMissing(scope6);
    tl = ld tl;
    check L77() else D10();
  L79():
    goto L13(r33);
  L81():
    r35 = dyn stop("scope is not a subset of term labels");
    check L82() else D14();
  L91():
    l = ld ans;
    c7 = `is.object`(l);
    if c7 then L92() else L93(r55);
  D8():
    deopt 31 [r25];
  D10():
    deopt 41 [tl];
  D14():
    deopt 55 [r35];
  L17(dx1):
    st ans = dx1;
    nobs = ldf nobs;
    check L95() else D21();
  L70():
    goto L11(r25);
  L77():
    tl1 = force? tl;
    checkMissing(tl1);
    match = ldf match in base;
    r31 = dyn match(scope6, tl1, 0, NULL);
    check L78() else D11();
  L82():
    goto L8();
  L92():
    dr = tryDispatchBuiltin.0("[<-", l, r55);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L94() else L93(r55);
  L93(r57):
    ___ = ldf `[<-` in base;
    r60 = dyn ___(l, 1.0, <missing>, r55);
    goto L17(r60);
  D11():
    deopt 46 [r31];
  D21():
    deopt 90 [];
  L78():
    goto L14(r31);
  L94():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L95():
    p11 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    r62 = dyn nobs[, `use.fallback`](p11, TRUE);
    check L96() else D22();
  D22():
    deopt 94 [r62];
  L96():
    st n0 = r62;
    environment = ldf environment;
    check L97() else D23();
  D23():
    deopt 97 [];
  L97():
    p13 = prom<V +>{
      formula = ldf formula;
      p12 = prom<V +>{
        object11 = ld object;
        object12 = force? object11;
        checkMissing(object12);
        return object12;
      };
      r64 = dyn formula(p12);
      return r64;
    };
    r66 = dyn environment(p13);
    check L98() else D24();
  D24():
    deopt 99 [r66];
  L98():
    st env = r66;
    sym11 = ldf seq_len;
    base11 = ldf seq_len in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L99() else L100();
  L18(r68):
    s = toForSeq(r68);
    l3 = length(s);
    i = 0;
    goto L21(i);
  L99():
    ns2 = ld ns;
    check L101() else D25();
  L100():
    r67 = dyn base11(<sym ns>);
    goto L18(r67);
  D25():
    deopt 102 [ns2];
  L21(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l3, i2);
    if c8 then L20() else L32();
  L101():
    ns3 = force? ns2;
    checkMissing(ns3);
    r69 = seq_len(ns3);
    goto L18(r69);
  L20():
    ans = ld ans;
    check L145() else D51();
  L32():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    scope11 = ld scope;
    check L102() else D26();
  D26():
    deopt 107 [i2, scope11];
  D51():
    deopt 200 [ans];
  L102():
    scope12 = force? scope11;
    checkMissing(scope12);
    c9 = `is.object`(scope12);
    if c9 then L103() else L104(i2, scope12);
  L145():
    ans1 = force? ans;
    checkMissing(ans1);
    c20 = `is.object`(ans1);
    if c20 then L146() else L147(ans1);
  L22(i8, dx3):
    st tt = dx3;
    trace1 = ld trace;
    check L107() else D28();
  L33(dx7):
    ans4 = ld ans;
    check L149() else D52();
  L103():
    dr2 = tryDispatchBuiltin.1("[", scope12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L105() else L104(i2, dr2);
  L104(i6, scope14):
    i9 = ld i;
    check L106() else D27();
  L146():
    dr6 = tryDispatchBuiltin.1("[", ans1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L148() else L147(dr6);
  L147(ans3):
    __1 = ldf `[` in base;
    r110 = dyn __1(ans3, 1, 1);
    goto L33(r110);
  D27():
    deopt 109 [i6, scope14, i9];
  D28():
    deopt 113 [i8, trace1];
  D52():
    deopt 205 [dx7, ans4];
  L105():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(i2, dx2);
  L106():
    i10 = force? i9;
    __ = ldf `[` in base;
    r70 = dyn __(scope14, i10);
    goto L22(i6, r70);
  L107():
    trace2 = force? trace1;
    checkMissing(trace2);
    r71 = `>`(trace2, 1.0);
    c10 = `as.logical`(r71);
    if c10 then L108() else L23();
  L148():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L33(dx6);
  L149():
    ans5 = force? ans4;
    checkMissing(ans5);
    c21 = `is.object`(ans5);
    if c21 then L150() else L151(dx7);
  L23():
    goto L24(i8);
  L24(i13):
    update = ldf update;
    check L114() else D33();
  L34(dx12, dx13):
    r112 = `-`(dx12, dx13);
    st dfs = r112;
    l7 = ld dfs;
    c22 = `is.object`(l7);
    if c22 then L153() else L154(NA_LGL, l7);
  L108():
    cat = ldf cat;
    check L109() else D29();
  L150():
    dr8 = tryDispatchBuiltin.1("[", ans5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L152() else L151(dx7);
  L151(dx9):
    __2 = ldf `[` in base;
    r111 = dyn __2(ans5, <missing>, 1);
    goto L34(dx9, r111);
  D29():
    deopt 118 [i8];
  D33():
    deopt 131 [i13];
  L35(dx15):
    st dfs = dx15;
    data_frame = ldf `data.frame`;
    check L156() else D53();
  L109():
    p14 = prom<V +>{
      tt = ld tt;
      tt1 = force? tt;
      checkMissing(tt1);
      return tt1;
    };
    r73 = dyn cat[, , , sep]("trying -", p14, "\n", "");
    check L110() else D30();
  L114():
    p15 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      return object14;
    };
    p18 = prom<V +>{
      as_formula = ldf `as.formula`;
      p17 = prom<V +>{
        paste = ldf paste;
        p16 = prom<V +>{
          tt2 = ld tt;
          tt3 = force? tt2;
          checkMissing(tt3);
          return tt3;
        };
        r78 = dyn paste("~ . -", p16);
        return r78;
      };
      r80 = dyn as_formula(p17);
      return r80;
    };
    r82 = dyn update[, , evaluate](p15, p18, FALSE);
    check L115() else D34();
  L152():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L34(dx7, dx11);
  L153():
    dr10 = tryDispatchBuiltin.0("[<-", l7, NA_LGL);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L155() else L154(NA_LGL, dr10);
  L154(r114, l9):
    ___2 = ldf `[<-` in base;
    r117 = dyn ___2(l9, NA_LGL, 1);
    goto L35(r117);
  D30():
    deopt 124 [i8, r73];
  D34():
    deopt 136 [i13, r82];
  D53():
    deopt 221 [];
  L110():
    flush_console = ldf `flush.console`;
    check L111() else D31();
  L115():
    st nfit = r82;
    eval = ldf eval;
    check L116() else D35();
  L155():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L35(dx14);
  L156():
    p25 = prom<V +>{
      dfs = ld dfs;
      dfs1 = force? dfs;
      checkMissing(dfs1);
      return dfs1;
    };
    p26 = prom<V +>{
      ans8 = ld ans;
      ans9 = force? ans8;
      checkMissing(ans9);
      c23 = `is.object`(ans9);
      if c23 then L1() else L2();
    L0(dx17):
      return dx17;
    L1():
      dr12 = tryDispatchBuiltin.1("[", ans9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r119 = dyn __3(ans9, <missing>, 2.0);
      goto L0(r119);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx16);
    };
    r121 = dyn data_frame[Df, AIC](p25, p26);
    check L157() else D54();
  D31():
    deopt 126 [i8];
  D35():
    deopt 139 [i13];
  D54():
    deopt 226 [r121];
  L111():
    r74 = dyn flush_console();
    check L112() else D32();
  L116():
    p19 = prom<V +>{
      nfit = ld nfit;
      nfit1 = force? nfit;
      checkMissing(nfit1);
      return nfit1;
    };
    p20 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r85 = dyn eval[, envir](p19, p20);
    check L117() else D36();
  L157():
    st aod = r121;
    match_arg = ldf `match.arg`;
    check L158() else D55();
  D32():
    deopt 127 [i8, r74];
  D36():
    deopt 143 [i13, r85];
  D55():
    deopt 229 [];
  L112():
    goto L24(i8);
  L117():
    st nfit = r85;
    extractAIC1 = ldf extractAIC;
    check L118() else D37();
  L158():
    p27 = prom<V +>{
      test1 = ld test;
      test2 = force? test1;
      checkMissing(test2);
      return test2;
    };
    r123 = dyn match_arg(p27);
    check L159() else D56();
  D37():
    deopt 146 [i13];
  D56():
    deopt 231 [r123];
  L118():
    p21 = prom<V +>{
      nfit2 = ld nfit;
      nfit3 = force? nfit2;
      checkMissing(nfit3);
      return nfit3;
    };
    p22 = prom<V +>{
      scale3 = ld scale;
      scale4 = force? scale3;
      checkMissing(scale4);
      return scale4;
    };
    p23 = prom<V +>{
      k3 = ld k;
      k4 = force? k3;
      checkMissing(k4);
      return k4;
    };
    ddd2 = ld `...`;
    r89 = dyn extractAIC1[, , k, `...`](p21, p22, p23, ddd2);
    check L119() else D38();
  L159():
    st test = r123;
    test3 = ld test;
    check L160() else D57();
  D38():
    deopt 152 [i13, r89];
  D57():
    deopt 233 [test3];
  L119():
    l4 = ld ans;
    c11 = `is.object`(l4);
    if c11 then L120() else L121(i13, r89, l4);
  L160():
    test4 = force? test3;
    checkMissing(test4);
    r124 = `==`(test4, "Chisq");
    c24 = `as.logical`(r124);
    if c24 then L161() else L36();
  L25(i17, dx5):
    st ans = dx5;
    nobs1 = ldf nobs;
    check L124() else D40();
  L36():
    goto L46();
  L46():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L202() else L203();
  L120():
    dr4 = tryDispatchBuiltin.0("[<-", l4, r89);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L122() else L121(i13, r89, dr4);
  L121(i15, r91, l6):
    i18 = ld i;
    check L123() else D39();
  L161():
    ans12 = ld ans;
    check L162() else D58();
  D39():
    deopt 154 [i15, r91, l6, r89, i18];
  D40():
    deopt 163 [i17];
  D58():
    deopt 237 [ans12];
  L47(r169):
    st head = r169;
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L212() else L213();
  L122():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L25(i13, dx4);
  L123():
    i19 = force? i18;
    checkMissing(i19);
    r94 = `+`(i19, 1);
    ___1 = ldf `[<-` in base;
    r95 = dyn ___1(l4, r94, <missing>, r89);
    goto L25(i15, r95);
  L124():
    p24 = prom<V +>{
      nfit4 = ld nfit;
      nfit5 = force? nfit4;
      checkMissing(nfit5);
      return nfit5;
    };
    r97 = dyn nobs1[, `use.fallback`](p24, TRUE);
    check L125() else D41();
  L162():
    ans13 = force? ans12;
    checkMissing(ans13);
    c25 = `is.object`(ans13);
    if c25 then L163() else L164();
  L202():
    deparse = ldf deparse;
    check L204() else D73();
  L203():
    r168 = dyn base18("Single term deletions", "\nModel:", <lang deparse(formula(object))>, <lang if(`>`(scale, 0.0), paste("\nscale: ", format(scale), "\n"))>);
    goto L47(r168);
  D41():
    deopt 167 [i17, r97];
  D73():
    deopt 316 [];
  L37(dx19):
    k5 = ld k;
    check L166() else D59();
  L50(r182):
    l22 = ld aod;
    class__ = ldf `class<-`;
    check L215() else D80();
  L125():
    st nnew = r97;
    sym12 = ldf all;
    base12 = ldf all in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L126() else L127();
  L163():
    dr14 = tryDispatchBuiltin.1("[", ans13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L165() else L164();
  L164():
    __4 = ldf `[` in base;
    r125 = dyn __4(ans13, <missing>, 2);
    goto L37(r125);
  L204():
    p31 = prom<V +>{
      formula1 = ldf formula;
      p30 = prom<V +>{
        object15 = ld object;
        object16 = force? object15;
        checkMissing(object16);
        return object16;
      };
      r171 = dyn formula1(p30);
      return r171;
    };
    r173 = dyn deparse(p31);
    check L205() else D74();
  L212():
    c36 = ldf c in base;
    r183 = dyn c36("anova", "data.frame");
    check L214() else D79();
  L213():
    r181 = dyn base19("anova", "data.frame");
    goto L50(r181);
  D59():
    deopt 242 [dx19, k5];
  D74():
    deopt 318 [r173];
  D79():
    deopt 339 [r183];
  D80():
    deopt 341 [r182, l22, r182];
  L26(i22, r99):
    c13 = `as.logical`(r99);
    if c13 then L137() else L29(i22, c13);
  L126():
    sym13 = ldf `is.finite`;
    base13 = ldf `is.finite` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L128() else L129();
  L127():
    r98 = dyn base12(<lang is.finite(c(n0, nnew))>);
    goto L26(i17, r98);
  L165():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L37(dx18);
  L166():
    k6 = force? k5;
    checkMissing(k6);
    ans16 = ld ans;
    check L167() else D60();
  L205():
    scale5 = ld scale;
    check L206() else D75();
  L214():
    goto L50(r183);
  L215():
    r184 = dyn class__(l22, NULL, r182);
    check L216() else D81();
  D60():
    deopt 243 [dx19, k6, ans16];
  D75():
    deopt 319 [scale5];
  D81():
    deopt 343 [r182, r184];
  L27(i25, r101):
    all1 = ldf all in base;
    r106 = dyn all1(r101);
    check L136() else D46();
  L29(i30, c15):
    c19 = `as.logical`(c15);
    if c19 then L141() else L30();
  L128():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L130() else L131();
  L129():
    r100 = dyn base13(<lang c(n0, nnew)>);
    goto L27(i17, r100);
  L137():
    nnew2 = ld nnew;
    check L138() else D47();
  L167():
    ans17 = force? ans16;
    checkMissing(ans17);
    c26 = `is.object`(ans17);
    if c26 then L168() else L169(dx19, k6);
  L206():
    scale6 = force? scale5;
    checkMissing(scale6);
    r174 = `>`(scale6, 0.0);
    c34 = `as.logical`(r174);
    if c34 then L207() else L48();
  L216():
    st aod = r184;
    head = ld head;
    check L217() else D82();
  D46():
    deopt 184 [i25, r106];
  D47():
    deopt 185 [i22, c13, nnew2];
  D82():
    deopt 345 [head];
  L28(i28, r103):
    is_finite = ldf `is.finite` in base;
    r105 = dyn is_finite(r103);
    check L135() else D45();
  L30():
    goto L31(i30);
  L31(i34):
    goto L21(i34);
  L38(dx24, k10, dx25):
    r127 = `*`(k10, dx25);
    r128 = `-`(dx24, r127);
    st dev = r128;
    dev = ld dev;
    check L171() else D61();
  L48():
    goto L49(NULL);
  L49(r179):
    c35 = ldf c in base;
    r180 = dyn c35("Single term deletions", "\nModel:", r173, r179);
    check L211() else D78();
  L130():
    n0 = ld n0;
    check L132() else D42();
  L131():
    r102 = dyn base14(<sym n0>, <sym nnew>);
    goto L28(i17, r102);
  L136():
    goto L26(i25, r106);
  L138():
    nnew3 = force? nnew2;
    checkMissing(nnew3);
    n2 = ld n0;
    check L139() else D48();
  L141():
    stop1 = ldf stop;
    check L142() else D49();
  L168():
    dr16 = tryDispatchBuiltin.1("[", ans17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L170() else L169(dx19, k6);
  L169(dx21, k8):
    __5 = ldf `[` in base;
    r126 = dyn __5(ans17, <missing>, 1);
    goto L38(dx21, k8, r126);
  L207():
    paste1 = ldf paste;
    check L208() else D76();
  L217():
    head1 = force? head;
    checkMissing(head1);
    l23 = ld aod;
    attr__ = ldf `attr<-`;
    check L218() else D83();
  D42():
    deopt 175 [i17, n0];
  D45():
    deopt 182 [i28, r105];
  D48():
    deopt 186 [i22, c13, nnew3, n2];
  D49():
    deopt 191 [i30];
  D61():
    deopt 252 [dev];
  D76():
    deopt 324 [];
  D78():
    deopt 332 [r180];
  D83():
    deopt 348 [head1, l23, head1];
  L132():
    n1 = force? n0;
    checkMissing(n1);
    nnew = ld nnew;
    check L133() else D43();
  L135():
    goto L27(i28, r105);
  L139():
    n3 = force? n2;
    checkMissing(n3);
    r107 = `!=`(nnew3, n3);
    c16 = `as.logical`(r107);
    c17 = `&&`(c13, c16);
    goto L29(i22, c17);
  L142():
    r108 = dyn stop1("number of rows in use has changed: remove missing values?");
    check L143() else D50();
  L170():
    dx23 = getTryDispatchBuiltinValue(dr16);
    goto L38(dx19, k6, dx23);
  L171():
    dev1 = force? dev;
    checkMissing(dev1);
    dev2 = ld dev;
    check L172() else D62();
  L208():
    p33 = prom<V +>{
      format = ldf format;
      p32 = prom<V +>{
        scale7 = ld scale;
        scale8 = force? scale7;
        checkMissing(scale8);
        return scale8;
      };
      r176 = dyn format(p32);
      return r176;
    };
    r178 = dyn paste1("\nscale: ", p33, "\n");
    check L209() else D77();
  L211():
    goto L47(r180);
  L218():
    r185 = dyn attr__(l23, NULL, "heading", head1);
    check L219() else D84();
  D43():
    deopt 177 [i17, nnew];
  D50():
    deopt 193 [i30, r108];
  D62():
    deopt 253 [dev1, dev2];
  D77():
    deopt 328 [r178];
  D84():
    deopt 351 [head1, r185];
  L133():
    nnew1 = force? nnew;
    checkMissing(nnew1);
    c12 = ldf c in base;
    r104 = dyn c12(n1, nnew1);
    check L134() else D44();
  L143():
    goto L31(i30);
  L172():
    dev3 = force? dev2;
    checkMissing(dev3);
    c27 = `is.object`(dev3);
    if c27 then L173() else L174(dev1, dev3);
  L209():
    goto L49(r178);
  L219():
    st aod = r185;
    aod = ld aod;
    check L220() else D85();
  D44():
    deopt 180 [i17, r104];
  D85():
    deopt 353 [aod];
  L39(dev9, dx27):
    r130 = `-`(dev9, dx27);
    st dev = r130;
    l10 = ld dev;
    c28 = `is.object`(l10);
    if c28 then L176() else L177(NA_LGL, l10);
  L134():
    goto L28(i17, r104);
  L173():
    dr18 = tryDispatchBuiltin.1("[", dev3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L175() else L174(dev1, dr18);
  L174(dev6, dev7):
    __6 = ldf `[` in base;
    r129 = dyn __6(dev7, 1);
    goto L39(dev6, r129);
  L220():
    aod1 = force? aod;
    checkMissing(aod1);
    popenv;
    return aod1;
  L40(dx29):
    st dev = dx29;
    sym15 = ldf `is.na`;
    base15 = ldf `is.na` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L179() else L180();
  L175():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L39(dev1, dx26);
  L176():
    dr20 = tryDispatchBuiltin.0("[<-", l10, NA_LGL);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L178() else L177(NA_LGL, dr20);
  L177(r132, l12):
    ___3 = ldf `[<-` in base;
    r135 = dyn ___3(l12, NA_LGL, 1);
    goto L40(r135);
  L41(r137):
    r139 = `!`(r137);
    st nas = r139;
    dev12 = ld dev;
    check L183() else D65();
  L178():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L40(dx28);
  L179():
    dev10 = ld dev;
    check L181() else D63();
  L180():
    r136 = dyn base15(<sym dev>);
    goto L41(r136);
  D63():
    deopt 269 [dev10];
  D65():
    deopt 275 [dev12];
  L181():
    dev11 = force? dev10;
    checkMissing(dev11);
    is_na = ldf `is.na` in base;
    r138 = dyn is_na(dev11);
    check L182() else D64();
  L183():
    dev13 = force? dev12;
    checkMissing(dev13);
    st P = dev13;
    safe_pchisq = ldf safe_pchisq;
    check L184() else D66();
  D64():
    deopt 272 [r138];
  D66():
    deopt 279 [];
  L182():
    goto L41(r138);
  L184():
    p28 = prom<V +>{
      dev14 = ld dev;
      dev15 = force? dev14;
      checkMissing(dev15);
      c29 = `is.object`(dev15);
      if c29 then L1() else L2(dev15);
    L0(dx31):
      return dx31;
    L1():
      dr22 = tryDispatchBuiltin.1("[", dev15);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(dev17):
      nas = ld nas;
      nas1 = force? nas;
      __7 = ldf `[` in base;
      r140 = dyn __7(dev17, nas1);
      goto L0(r140);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx30);
    };
    p29 = prom<V +>{
      dfs2 = ld dfs;
      dfs3 = force? dfs2;
      checkMissing(dfs3);
      c30 = `is.object`(dfs3);
      if c30 then L1() else L2(dfs3);
    L0(dx33):
      return dx33;
    L1():
      dr24 = tryDispatchBuiltin.1("[", dfs3);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(dfs5):
      nas2 = ld nas;
      nas3 = force? nas2;
      __8 = ldf `[` in base;
      r142 = dyn __8(dfs5, nas3);
      goto L0(r142);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx32);
    };
    r144 = dyn safe_pchisq[, , `lower.tail`](p28, p29, FALSE);
    check L185() else D67();
  D67():
    deopt 284 [r144];
  L185():
    l13 = ld P;
    c31 = `is.object`(l13);
    if c31 then L186() else L187(r144, l13);
  L42(dx35):
    st P = dx35;
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L190() else L191();
  L186():
    dr26 = tryDispatchBuiltin.0("[<-", l13, r144);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L188() else L187(r144, dr26);
  L187(r146, l15):
    nas4 = ld nas;
    check L189() else D68();
  D68():
    deopt 286 [r146, l15, r144, nas4];
  L43(r151):
    l16 = ld aod;
    c32 = `is.object`(l16);
    if c32 then L195() else L196(r151, l16);
  L188():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L42(dx34);
  L189():
    nas5 = force? nas4;
    ___4 = ldf `[<-` in base;
    r149 = dyn ___4(l15, r144, nas5);
    goto L42(r149);
  L190():
    dev18 = ld dev;
    check L192() else D69();
  L191():
    r150 = dyn base16(<sym dev>, <sym P>);
    goto L43(r150);
  D69():
    deopt 292 [dev18];
  L44(r156, dx37):
    st aod = dx37;
    goto L46();
  L192():
    dev19 = force? dev18;
    checkMissing(dev19);
    P = ld P;
    check L193() else D70();
  L195():
    dr28 = tryDispatchBuiltin.0("[<-", l16, r151);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L197() else L196(r151, dr28);
  L196(r154, l18):
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L198() else L199();
  D70():
    deopt 294 [P];
  L45(r162, r163, r164):
    ___5 = ldf `[<-` in base;
    r166 = dyn ___5(l16, <missing>, r164, r163);
    goto L44(r162, r166);
  L193():
    P1 = force? P;
    checkMissing(P1);
    list1 = ldf list in base;
    r152 = dyn list1(dev19, P1);
    check L194() else D71();
  L197():
    dx36 = getTryDispatchBuiltinValue(dr28);
    goto L44(r151, dx36);
  L198():
    c33 = ldf c in base;
    r165 = dyn c33("LRT", "Pr(>Chi)");
    check L200() else D72();
  L199():
    r161 = dyn base17("LRT", "Pr(>Chi)");
    goto L45(r154, r151, r161);
  D71():
    deopt 297 [r152];
  D72():
    deopt 305 [r154, l18, r151, r165];
  L194():
    goto L43(r152);
  L200():
    goto L45(r154, r151, r165);
  }
}