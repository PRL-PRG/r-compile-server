fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner262388851;
    st `AIC.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner262388851(object, `...`, k) {
  (reg object:*, reg ddd:dots, reg k:*) -+> V { var object:*, var `...`:dots?, var k:*, reg k_isMissing:L, reg k_orDefault:*, reg isNamespaceLoaded:cls, reg r:V, reg c:L, reg __:cls, reg r1:V, reg r2:V, reg logLik:*, reg logLik1:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg r6:V, reg c1:L, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg list:cls, reg object1:*, reg object2:V, reg p:p(V +), reg ddd1:dots?, reg r10:V, reg p1:p(V +), reg ll:*, reg ll1:V, reg p2:p(V +), reg r13:V, reg sapply:cls, reg lls:*, reg lls1:V, reg p3:p(V +), reg r15:cls, reg p4:p(V +), reg r17:V, reg data_frame:cls, reg vals:*, reg vals1:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r18:V, reg p5:p(V +), reg vals4:*, reg vals5:V, reg c3:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r20:V, reg p6:p(V +), reg r22:V, reg na_omit:cls, reg vals8:*, reg vals9:V, reg c4:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __3:cls, reg r23:V, reg p7:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg nos:*, reg nos1:V, reg length:cls, reg r28:V, reg c5:L, reg c7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg c10:L, reg r30:V, reg nos2:*, reg nos3:V, reg nos4:*, reg nos5:V, reg c11:L, reg c13:L, reg nos8:V, reg nos9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c15:L, reg nos11:V, reg dx7:V, reg __4:cls, reg r31:V, reg r32:V, reg any:cls, reg r33:V, reg c16:L, reg c17:V, reg c19:L, reg warning:cls, reg r34:V, reg data_frame1:cls, reg val:*, reg val1:V, reg c20:L, reg val3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r36:V, reg p8:p(V +), reg val4:*, reg val5:V, reg c21:L, reg r39:R, reg val7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg r41:R, reg dx11:V, reg r42:V, reg r43:V, reg k1:*, reg k2:V, reg val8:*, reg val9:V, reg c22:L, reg r45:V, reg k4:V, reg val11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg r47:V, reg k6:V, reg dx13:V, reg r48:V, reg r49:V, reg r50:V, reg p9:p(V +), reg r52:V, reg match_call:cls, reg r53:V, reg l:*, reg c23:L, reg r55:dots, reg l2:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r58:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r59:V, reg r60:V, reg Call:*, reg Call1:V, reg c24:L, reg Call3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __5:cls, reg r61:V, reg as_character:cls, reg r62:V, reg l3:*, reg row_names__:cls, reg r63:V, reg val12:*, reg val13:V, reg ll2:cls, reg object3:*, reg object4:V, reg p10:p(V +), reg r65:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r68:V, reg r69:R, reg r70:V, reg lls2:*, reg lls3:V, reg as_numeric:cls, reg r71:V, reg r72:V, reg k7:*, reg k8:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r75:V, reg r76:V, reg k11:V, reg r77:V, reg lls4:*, reg lls5:V, reg attr:cls, reg r78:V, reg r79:V, reg r80:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(2.0) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    isNamespaceLoaded = ldf isNamespaceLoaded;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    r = dyn isNamespaceLoaded("stats4");
    check L16() else D1();
  D1():
    deopt 3 [r];
  L16():
    c = `as.logical`(r);
    if c then L17() else L1();
  L1():
    logLik = ld logLik;
    check L21() else D4();
  L2(r2):
    st ll = r2;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L17():
    __ = ldf `::`;
    check L18() else D2();
  D2():
    deopt 5 [];
  D4():
    deopt 9 [logLik];
  L3(r4):
    r6 = `!`(r4);
    c1 = `as.logical`(r6);
    if c1 then L24() else L4();
  L18():
    r1 = dyn __("stats4", "logLik");
    check L19() else D3();
  L21():
    logLik1 = force? logLik;
    checkMissing(logLik1);
    goto L2(logLik1);
  L22():
    missing = ldf missing in base;
    r5 = dyn missing(<sym ...>);
    goto L3(r5);
  L23():
    r3 = dyn base(<sym ...>);
    goto L3(r3);
  D3():
    deopt 8 [r1];
  L4():
    ll2 = ldf ll;
    check L70() else D29();
  L19():
    goto L2(r1);
  L24():
    lapply = ldf lapply;
    check L25() else D5();
  D5():
    deopt 17 [];
  D29():
    deopt 99 [];
  L25():
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      list = ldf list;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      ddd1 = ld `...`;
      r10 = dyn list[, `...`](p, ddd1);
      goto L0(r10);
    L2():
      r7 = dyn base1(<sym object>, <sym ...>);
      goto L0(r7);
    };
    p2 = prom<V +>{
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      return ll1;
    };
    r13 = dyn lapply(p1, p2);
    check L26() else D6();
  L70():
    p10 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r65 = dyn ll2(p10);
    check L71() else D30();
  D6():
    deopt 20 [r13];
  D30():
    deopt 101 [r65];
  L26():
    st lls = r13;
    sapply = ldf sapply;
    check L27() else D7();
  L71():
    st lls = r65;
    sym5 = ldf `as.numeric`;
    base5 = ldf `as.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L72() else L73();
  D7():
    deopt 23 [];
  L13(r69, r70):
    r72 = `*`(r69, r70);
    k7 = ld k;
    check L76() else D33();
  L27():
    p3 = prom<V +>{
      lls = ld lls;
      lls1 = force? lls;
      checkMissing(lls1);
      return lls1;
    };
    p4 = prom<V +>{
      r15 = clos inner1262313735;
      return r15;
    };
    r17 = dyn sapply(p3, p4);
    check L28() else D8();
  L72():
    lls2 = ld lls;
    check L74() else D31();
  L73():
    r68 = dyn base5(<sym lls>);
    goto L13(-2.0, r68);
  D8():
    deopt 26 [r17];
  D31():
    deopt 106 [-2.0, lls2];
  D33():
    deopt 110 [r72, k7];
  L28():
    st vals = r17;
    data_frame = ldf `data.frame`;
    check L29() else D9();
  L74():
    lls3 = force? lls2;
    checkMissing(lls3);
    as_numeric = ldf `as.numeric` in base;
    r71 = dyn as_numeric(lls3);
    check L75() else D32();
  L76():
    k8 = force? k7;
    checkMissing(k8);
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  D9():
    deopt 29 [];
  D32():
    deopt 109 [-2.0, r71];
  L14(r76, k11, r77):
    r79 = `*`(k11, r77);
    r80 = `+`(r76, r79);
    popenv;
    return r80;
  L29():
    p5 = prom<V +>{
      vals = ld vals;
      vals1 = force? vals;
      checkMissing(vals1);
      c2 = `is.object`(vals1);
      if c2 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", vals1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r18 = dyn __1(vals1, 2, <missing>);
      goto L0(r18);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p6 = prom<V +>{
      vals4 = ld vals;
      vals5 = force? vals4;
      checkMissing(vals5);
      c3 = `is.object`(vals5);
      if c3 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", vals5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r20 = dyn __2(vals5, 1, <missing>);
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r22 = dyn data_frame[df, ll](p5, p6);
    check L30() else D10();
  L75():
    goto L13(-2.0, r71);
  L77():
    lls4 = ld lls;
    check L79() else D34();
  L78():
    r75 = dyn base6(<sym lls>, "df");
    goto L14(r72, k8, r75);
  D10():
    deopt 34 [r22];
  D34():
    deopt 113 [r72, k8, lls4];
  L30():
    st val = r22;
    na_omit = ldf `na.omit`;
    check L31() else D11();
  L79():
    lls5 = force? lls4;
    checkMissing(lls5);
    attr = ldf attr in base;
    r78 = dyn attr(lls5, "df");
    check L80() else D35();
  D11():
    deopt 37 [];
  D35():
    deopt 117 [r72, k8, r78];
  L31():
    p7 = prom<V +>{
      vals8 = ld vals;
      vals9 = force? vals8;
      checkMissing(vals9);
      c4 = `is.object`(vals9);
      if c4 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", vals9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r23 = dyn __3(vals9, 3, <missing>);
      goto L0(r23);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r25 = dyn na_omit(p7);
    check L32() else D12();
  L80():
    goto L14(r72, k8, r78);
  D12():
    deopt 39 [r25];
  L32():
    st nos = r25;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L5(r27):
    c5 = `as.logical`(r27);
    if c5 then L37() else L6(c5);
  L33():
    nos = ld nos;
    check L35() else D13();
  L34():
    r26 = dyn base2(<sym nos>);
    goto L5(r26);
  D13():
    deopt 43 [nos];
  L6(c7):
    c19 = `as.logical`(c7);
    if c19 then L47() else L9();
  L35():
    nos1 = force? nos;
    checkMissing(nos1);
    length = ldf length in base;
    r28 = dyn length(nos1);
    check L36() else D14();
  L37():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  D14():
    deopt 46 [r28];
  L7(c10, r30):
    c16 = `as.logical`(r30);
    c17 = `&&`(c10, c16);
    goto L6(c17);
  L9():
    goto L10();
  L10():
    data_frame1 = ldf `data.frame`;
    check L51() else D20();
  L36():
    goto L5(r28);
  L38():
    nos2 = ld nos;
    check L40() else D15();
  L39():
    r29 = dyn base3(<lang `!=`(nos, `[`(nos, 1))>);
    goto L7(c5, r29);
  L47():
    warning = ldf warning;
    check L48() else D18();
  D15():
    deopt 49 [c5, nos2];
  D18():
    deopt 60 [];
  D20():
    deopt 66 [];
  L40():
    nos3 = force? nos2;
    checkMissing(nos3);
    nos4 = ld nos;
    check L41() else D16();
  L48():
    r34 = dyn warning("models are not all fitted to the same number of observations");
    check L49() else D19();
  L51():
    p8 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      c20 = `is.object`(val1);
      if c20 then L1() else L2(val1);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", val1);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(val3):
      r36 = `$`(val3, <sym df>);
      goto L0(r36);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p9 = prom<V +>{
      val4 = ld val;
      val5 = force? val4;
      checkMissing(val5);
      c21 = `is.object`(val5);
      if c21 then L1() else L2(-2.0, val5);
    L0(r41, dx11):
      r43 = `*`(r41, dx11);
      k1 = ld k;
      k2 = force? k1;
      checkMissing(k2);
      val8 = ld val;
      val9 = force? val8;
      checkMissing(val9);
      c22 = `is.object`(val9);
      if c22 then L5() else L6(r43, k2, val9);
    L1():
      dr10 = tryDispatchBuiltin.1("$", val5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(-2.0, dr10);
    L2(r39, val7):
      r42 = `$`(val7, <sym ll>);
      goto L0(r39, r42);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(-2.0, dx10);
    L4(r47, k6, dx13):
      r49 = `*`(k6, dx13);
      r50 = `+`(r47, r49);
      return r50;
    L5():
      dr12 = tryDispatchBuiltin.1("$", val9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(r43, k2, dr12);
    L6(r45, k4, val11):
      r48 = `$`(val11, <sym df>);
      goto L4(r45, k4, r48);
    L7():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L4(r43, k2, dx12);
    };
    r52 = dyn data_frame1[df, AIC](p8, p9);
    check L52() else D21();
  D16():
    deopt 50 [c5, nos3, nos4];
  D19():
    deopt 62 [r34];
  D21():
    deopt 71 [r52];
  L41():
    nos5 = force? nos4;
    checkMissing(nos5);
    c11 = `is.object`(nos5);
    if c11 then L42() else L43(c5, nos3, nos5);
  L49():
    goto L10();
  L52():
    st val = r52;
    match_call = ldf `match.call`;
    check L53() else D22();
  D22():
    deopt 74 [];
  L8(c15, nos11, dx7):
    r32 = `!=`(nos11, dx7);
    any = ldf any in base;
    r33 = dyn any(r32);
    check L45() else D17();
  L42():
    dr6 = tryDispatchBuiltin.1("[", nos5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L44() else L43(c5, nos3, dr6);
  L43(c13, nos8, nos9):
    __4 = ldf `[` in base;
    r31 = dyn __4(nos9, 1);
    goto L8(c13, nos8, r31);
  L53():
    r53 = dyn match_call();
    check L54() else D23();
  D17():
    deopt 57 [c15, r33];
  D23():
    deopt 75 [r53];
  L44():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(c5, nos3, dx6);
  L45():
    goto L7(c15, r33);
  L54():
    st Call = r53;
    l = ld Call;
    c23 = `is.object`(l);
    if c23 then L56() else L57(NULL, l);
  L55(dx15):
    st Call = dx15;
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  L56():
    dr14 = tryDispatchBuiltin.0("$<-", l, NULL);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L58() else L57(NULL, dr14);
  L57(r55, l2):
    r58 = `$<-`(l2, <sym k>, NULL);
    goto L55(r58);
  L11(r60):
    l3 = ld val;
    row_names__ = ldf `row.names<-`;
    check L66() else D26();
  L58():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L55(dx14);
  L59():
    Call = ld Call;
    check L61() else D24();
  L60():
    r59 = dyn base4(<lang `[`(Call, `-`(1))>);
    goto L11(r59);
  D24():
    deopt 84 [Call];
  D26():
    deopt 92 [r60, l3, r60];
  L61():
    Call1 = force? Call;
    checkMissing(Call1);
    c24 = `is.object`(Call1);
    if c24 then L62() else L63(Call1);
  L66():
    r63 = dyn row_names__(l3, NULL, r60);
    check L67() else D27();
  D27():
    deopt 94 [r60, r63];
  L12(dx17):
    as_character = ldf `as.character` in base;
    r62 = dyn as_character(dx17);
    check L65() else D25();
  L62():
    dr16 = tryDispatchBuiltin.1("[", Call1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L64() else L63(dr16);
  L63(Call3):
    __5 = ldf `[` in base;
    r61 = dyn __5(Call3, -1);
    goto L12(r61);
  L67():
    st val = r63;
    val12 = ld val;
    check L68() else D28();
  D25():
    deopt 90 [r62];
  D28():
    deopt 96 [val12];
  L64():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L12(dx16);
  L65():
    goto L11(r62);
  L68():
    val13 = force? val12;
    checkMissing(val13);
    popenv;
    return val13;
  }
}
fun inner1262313735(el) {
  (reg el:*) -+> V { var el:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg el1:*, reg el2:V, reg as_numeric:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg el3:*, reg el4:V, reg attr:cls, reg r7:V, reg ____:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg el5:*, reg el6:V, reg attr1:cls, reg r10:V, reg p:p(V +), reg r12:V, reg c:cls, reg r13:V |
    mkenv;
    st el = el;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    sym1 = ldf `as.numeric`;
    base1 = ldf `as.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang as.numeric(el)>, <lang attr(el, "df")>, <lang `%||%`(attr(el, "nobs"), NA_INT)>);
    goto L0(r);
  L1(r3):
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L9() else L10();
  L5():
    el1 = ld el;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym el>);
    goto L1(r2);
  D0():
    deopt 4 [el1];
  L2(r6):
    ____ = ldf `%||%`;
    check L13() else D4();
  L7():
    el2 = force? el1;
    checkMissing(el2);
    as_numeric = ldf `as.numeric` in base;
    r4 = dyn as_numeric(el2);
    check L8() else D1();
  L9():
    el3 = ld el;
    check L11() else D2();
  L10():
    r5 = dyn base2(<sym el>, "df");
    goto L2(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [el3];
  D4():
    deopt 16 [];
  L8():
    goto L1(r4);
  L11():
    el4 = force? el3;
    checkMissing(el4);
    attr = ldf attr in base;
    r7 = dyn attr(el4, "df");
    check L12() else D3();
  L13():
    p = prom<V +>{
      sym3 = ldf attr;
      base3 = ldf attr in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      el5 = ld el;
      el6 = force? el5;
      checkMissing(el6);
      attr1 = ldf attr in base;
      r10 = dyn attr1(el6, "nobs");
      goto L0(r10);
    L2():
      r8 = dyn base3(<sym el>, "nobs");
      goto L0(r8);
    };
    r12 = dyn ____(p, NA_INT);
    check L14() else D5();
  D3():
    deopt 14 [r7];
  D5():
    deopt 19 [r12];
  L12():
    goto L2(r7);
  L14():
    c = ldf c in base;
    r13 = dyn c(r3, r6, r12);
    check L15() else D6();
  D6():
    deopt 21 [r13];
  L15():
    goto L0(r13);
  }
}