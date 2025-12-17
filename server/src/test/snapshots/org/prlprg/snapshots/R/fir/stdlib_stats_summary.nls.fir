fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3368391425;
    st `summary.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3368391425(object, correlation, `symbolic.cor`, `...`) {
  (reg object:*, reg correlation:*, reg symbolic_cor:*, reg ddd:dots) -+> V { var object:*, var correlation:*, reg correlation_isMissing:L, reg correlation_orDefault:*, var `symbolic.cor`:*, reg symbolic_cor_isMissing:L, reg symbolic_cor_orDefault:*, var `...`:dots?, reg as_vector:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r1:V, reg dx6:cls, reg r2:V, reg p:p(V +), reg r4:V, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg w:*, reg w1:V, reg c3:V, reg r8:V, reg c4:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg w2:*, reg w3:V, reg r11:V, reg sum:cls, reg r12:V, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:*, reg r16:V, reg length:cls, reg r17:V, reg coef:cls, reg object9:*, reg object10:V, reg p1:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg param:*, reg param1:V, reg names:cls, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg param2:*, reg param3:V, reg length1:cls, reg r25:V, reg n:*, reg n1:V, reg p2:*, reg p3:V, reg r26:V, reg rdf:*, reg rdf1:V, reg r27:V, reg c5:L, reg r28:V, reg deviance:cls, reg object11:*, reg object12:V, reg p4:p(V +), reg r30:V, reg rdf2:*, reg rdf3:V, reg r31:V, reg chol2inv:cls, reg object13:*, reg object14:V, reg c6:L, reg object16:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg r32:V, reg c7:L, reg dx12:V, reg dr8:V, reg dc4:L, reg dx13:V, reg dx14:V, reg r33:V, reg dx15:cls, reg r34:V, reg p5:p(V +), reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg pnames:*, reg pnames1:V, reg pnames2:*, reg pnames3:V, reg list:cls, reg r39:V, reg l:*, reg dimnames__:cls, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg diag:cls, reg XtXinv:*, reg XtXinv1:V, reg p6:p(V +), reg r44:V, reg resvar:*, reg resvar1:V, reg r45:V, reg r46:V, reg param4:*, reg param5:V, reg se:*, reg se1:V, reg r47:V, reg cbind:cls, reg param6:*, reg param7:V, reg p7:p(V +), reg se2:*, reg se3:V, reg p8:p(V +), reg tval:*, reg tval1:V, reg p9:p(V +), reg pt:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg tval2:*, reg tval3:V, reg abs:cls, reg r53:V, reg p10:p(V +), reg rdf4:*, reg rdf5:V, reg p11:p(V +), reg r56:V, reg r57:V, reg p12:p(V +), reg r59:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r60:V, reg r61:V, reg pnames4:*, reg pnames5:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r62:V, reg r63:V, reg c8:cls, reg r64:V, reg list1:cls, reg r65:V, reg l1:*, reg dimnames__1:cls, reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg formula:cls, reg object17:*, reg object18:V, reg p13:p(V +), reg r70:V, reg r71:*, reg r72:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r73:V, reg r74:V, reg resvar2:*, reg resvar3:V, reg r75:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r76:V, reg r77:V, reg p14:*, reg p15:V, reg rdf6:*, reg rdf7:V, reg c9:cls, reg r78:V, reg XtXinv2:*, reg XtXinv3:V, reg object19:*, reg object20:V, reg c10:L, reg object22:V, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg r79:V, reg object23:*, reg object24:V, reg c11:L, reg object26:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg r80:V, reg object27:*, reg object28:V, reg c12:L, reg object30:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg r81:V, reg object31:*, reg object32:V, reg c13:L, reg object34:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg r82:V, reg param8:*, reg param9:V, reg param10:*, reg param11:V, reg list2:cls, reg r83:V, reg correlation1:*, reg correlation2:V, reg c14:L, reg c16:V, reg rdf8:*, reg rdf9:V, reg r84:V, reg c17:L, reg c18:V, reg c20:L, reg XtXinv4:*, reg XtXinv5:V, reg resvar4:*, reg resvar5:V, reg r85:V, reg outer:cls, reg se4:*, reg se5:V, reg p16:p(V +), reg se6:*, reg se7:V, reg p17:p(V +), reg r88:V, reg r89:V, reg l2:*, reg c21:L, reg r91:V, reg l4:*, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg r94:V, reg symbolic_cor1:*, reg symbolic_cor2:V, reg l5:*, reg c22:L, reg symbolic_cor4:V, reg l7:*, reg dr20:V, reg dc10:L, reg dx26:V, reg symbolic_cor6:V, reg dx27:V, reg r95:V, reg l8:*, reg class__:cls, reg r96:V, reg ans:*, reg ans1:V |
    mkenv;
    st object = object;
    correlation_isMissing = missing.0(correlation);
    if correlation_isMissing then L0(FALSE) else L0(correlation);
  L0(correlation_orDefault):
    st correlation = correlation_orDefault;
    symbolic_cor_isMissing = missing.0(symbolic_cor);
    if symbolic_cor_isMissing then L1(FALSE) else L1(symbolic_cor);
  L1(symbolic_cor_orDefault):
    st `symbolic.cor` = symbolic_cor_orDefault;
    st `...` = ddd;
    as_vector = ldf `as.vector`;
    check L20() else D0();
  D0():
    deopt 1 [];
  L20():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L1() else L2(object2);
    L0(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r = `$`(object4, <sym m>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L4(dx5):
      checkFun.0(dx5);
      dx6 = dx5 as cls;
      r2 = dyn dx6();
      return r2;
    L5():
      dr2 = tryDispatchBuiltin.1("$", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      r1 = `$`(dx3, <sym resid>);
      goto L4(r1);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L4(dx4);
    };
    r4 = dyn as_vector(p);
    check L21() else D1();
  D1():
    deopt 3 [r4];
  L21():
    st r = r4;
    object5 = ld object;
    check L22() else D2();
  D2():
    deopt 5 [object5];
  L22():
    object6 = force? object5;
    checkMissing(object6);
    c2 = `is.object`(object6);
    if c2 then L24() else L25(object6);
  L23(dx8):
    st w = dx8;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L24():
    dr4 = tryDispatchBuiltin.1("$", object6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L26() else L25(dr4);
  L25(object8):
    r5 = `$`(object8, <sym weights>);
    goto L23(r5);
  L2(r7):
    r8 = `!`(r7);
    c4 = `as.logical`(r8);
    if c4 then L30() else L3();
  L26():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L23(dx7);
  L27():
    w = ld w;
    check L29() else D3();
  L28():
    r6 = dyn base(<sym w>);
    goto L2(r6);
  D3():
    deopt 10 [w];
  L3():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L5(r13):
    st n = r13;
    coef = ldf coef;
    check L40() else D8();
  L29():
    w1 = force? w;
    checkMissing(w1);
    c3 = `==`(w1, NULL);
    goto L2(c3);
  L30():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  D8():
    deopt 30 [];
  L4(r10):
    goto L5(r10);
  L31():
    w2 = ld w;
    check L33() else D4();
  L32():
    r9 = dyn base1(<lang `>`(w, 0.0)>);
    goto L4(r9);
  L36():
    r15 = ld r;
    check L38() else D6();
  L37():
    r14 = dyn base2(<sym r>);
    goto L5(r14);
  L40():
    p1 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    r19 = dyn coef(p1);
    check L41() else D9();
  D4():
    deopt 16 [w2];
  D6():
    deopt 24 [r15];
  D9():
    deopt 32 [r19];
  L33():
    w3 = force? w2;
    checkMissing(w3);
    r11 = `>`(w3, 0.0);
    sum = ldf sum in base;
    r12 = dyn sum(r11);
    check L34() else D5();
  L38():
    r16 = force? r15;
    checkMissing(r16);
    length = ldf length in base;
    r17 = dyn length(r16);
    check L39() else D7();
  L41():
    st param = r19;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  D5():
    deopt 21 [r12];
  D7():
    deopt 27 [r17];
  L6(r21):
    st pnames = r21;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  L34():
    goto L4(r12);
  L39():
    goto L5(r17);
  L42():
    param = ld param;
    check L44() else D10();
  L43():
    r20 = dyn base3(<sym param>);
    goto L6(r20);
  D10():
    deopt 36 [param];
  L7(r24):
    st p = r24;
    n = ld n;
    check L50() else D14();
  L44():
    param1 = force? param;
    checkMissing(param1);
    names = ldf names in base;
    r22 = dyn names(param1);
    check L45() else D11();
  L46():
    param2 = ld param;
    check L48() else D12();
  L47():
    r23 = dyn base4(<sym param>);
    goto L7(r23);
  D11():
    deopt 39 [r22];
  D12():
    deopt 43 [param2];
  D14():
    deopt 48 [n];
  L45():
    goto L6(r22);
  L48():
    param3 = force? param2;
    checkMissing(param3);
    length1 = ldf length in base;
    r25 = dyn length1(param3);
    check L49() else D13();
  L50():
    n1 = force? n;
    checkMissing(n1);
    p2 = ld p;
    check L51() else D15();
  D13():
    deopt 46 [r25];
  D15():
    deopt 49 [n1, p2];
  L49():
    goto L7(r25);
  L51():
    p3 = force? p2;
    checkMissing(p3);
    r26 = `-`(n1, p3);
    st rdf = r26;
    rdf = ld rdf;
    check L52() else D16();
  D16():
    deopt 53 [rdf];
  L52():
    rdf1 = force? rdf;
    checkMissing(rdf1);
    r27 = `<=`(rdf1, 0.0);
    c5 = `as.logical`(r27);
    if c5 then L53() else L8();
  L8():
    deviance = ldf deviance;
    check L55() else D17();
  L9(r28):
    st resvar = r28;
    chol2inv = ldf chol2inv;
    check L58() else D20();
  L53():
    goto L9(NA_REAL);
  D17():
    deopt 60 [];
  D20():
    deopt 67 [];
  L55():
    p4 = prom<V +>{
      object11 = ld object;
      object12 = force? object11;
      checkMissing(object12);
      return object12;
    };
    r30 = dyn deviance(p4);
    check L56() else D18();
  L58():
    p5 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c6 = `is.object`(object14);
      if c6 then L1() else L2(object14);
    L0(dx10):
      c7 = `is.object`(dx10);
      if c7 then L5() else L6(dx10);
    L1():
      dr6 = tryDispatchBuiltin.1("$", object14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object16):
      r32 = `$`(object16, <sym m>);
      goto L0(r32);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx9);
    L4(dx14):
      checkFun.0(dx14);
      dx15 = dx14 as cls;
      r34 = dyn dx15();
      return r34;
    L5():
      dr8 = tryDispatchBuiltin.1("$", dx10);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dr8);
    L6(dx12):
      r33 = `$`(dx12, <sym Rmat>);
      goto L4(r33);
    L7():
      dx13 = getTryDispatchBuiltinValue(dr8);
      goto L4(dx13);
    };
    r36 = dyn chol2inv(p5);
    check L59() else D21();
  D18():
    deopt 62 [r30];
  D21():
    deopt 69 [r36];
  L56():
    rdf2 = ld rdf;
    check L57() else D19();
  L59():
    st XtXinv = r36;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  D19():
    deopt 62 [r30, rdf2];
  L10(r38):
    l = ld XtXinv;
    dimnames__ = ldf `dimnames<-`;
    check L65() else D25();
  L57():
    rdf3 = force? rdf2;
    checkMissing(rdf3);
    r31 = `/`(r30, rdf3);
    goto L9(r31);
  L60():
    pnames = ld pnames;
    check L62() else D22();
  L61():
    r37 = dyn base5(<sym pnames>, <sym pnames>);
    goto L10(r37);
  D22():
    deopt 73 [pnames];
  D25():
    deopt 80 [r38, l, r38];
  L62():
    pnames1 = force? pnames;
    checkMissing(pnames1);
    pnames2 = ld pnames;
    check L63() else D23();
  L65():
    r40 = dyn dimnames__(l, NULL, r38);
    check L66() else D26();
  D23():
    deopt 75 [pnames2];
  D26():
    deopt 82 [r38, r40];
  L63():
    pnames3 = force? pnames2;
    checkMissing(pnames3);
    list = ldf list in base;
    r39 = dyn list(pnames1, pnames3);
    check L64() else D24();
  L66():
    st XtXinv = r40;
    sym6 = ldf sqrt;
    base6 = ldf sqrt in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L67() else L68();
  D24():
    deopt 78 [r39];
  L11(r42):
    st se = r42;
    param4 = ld param;
    check L72() else D30();
  L64():
    goto L10(r39);
  L67():
    diag = ldf diag;
    check L69() else D27();
  L68():
    r41 = dyn base6(<lang `*`(diag(XtXinv), resvar)>);
    goto L11(r41);
  D27():
    deopt 86 [];
  D30():
    deopt 93 [param4];
  L69():
    p6 = prom<V +>{
      XtXinv = ld XtXinv;
      XtXinv1 = force? XtXinv;
      checkMissing(XtXinv1);
      return XtXinv1;
    };
    r44 = dyn diag(p6);
    check L70() else D28();
  L72():
    param5 = force? param4;
    checkMissing(param5);
    se = ld se;
    check L73() else D31();
  D28():
    deopt 88 [r44];
  D31():
    deopt 94 [param5, se];
  L70():
    resvar = ld resvar;
    check L71() else D29();
  L73():
    se1 = force? se;
    checkMissing(se1);
    r47 = `/`(param5, se1);
    st tval = r47;
    cbind = ldf cbind;
    check L74() else D32();
  D29():
    deopt 88 [r44, resvar];
  D32():
    deopt 99 [];
  L71():
    resvar1 = force? resvar;
    checkMissing(resvar1);
    r45 = `*`(r44, resvar1);
    r46 = sqrt(r45);
    goto L11(r46);
  L74():
    p7 = prom<V +>{
      param6 = ld param;
      param7 = force? param6;
      checkMissing(param7);
      return param7;
    };
    p8 = prom<V +>{
      se2 = ld se;
      se3 = force? se2;
      checkMissing(se3);
      return se3;
    };
    p9 = prom<V +>{
      tval = ld tval;
      tval1 = force? tval;
      checkMissing(tval1);
      return tval1;
    };
    p12 = prom<V +>{
      pt = ldf pt;
      p10 = prom<V +>{
        sym7 = ldf abs;
        base7 = ldf abs in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r52):
        return r52;
      L1():
        tval2 = ld tval;
        tval3 = force? tval2;
        checkMissing(tval3);
        abs = ldf abs in base;
        r53 = dyn abs(tval3);
        goto L0(r53);
      L2():
        r51 = dyn base7(<sym tval>);
        goto L0(r51);
      };
      p11 = prom<V +>{
        rdf4 = ld rdf;
        rdf5 = force? rdf4;
        checkMissing(rdf5);
        return rdf5;
      };
      r56 = dyn pt[, , `lower.tail`](p10, p11, FALSE);
      r57 = `*`(2.0, r56);
      return r57;
    };
    r59 = dyn cbind(p7, p8, p9, p12);
    check L75() else D33();
  D33():
    deopt 104 [r59];
  L75():
    st param = r59;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L76() else L77();
  L12(r61):
    l1 = ld param;
    dimnames__1 = ldf `dimnames<-`;
    check L83() else D37();
  L76():
    pnames4 = ld pnames;
    check L78() else D34();
  L77():
    r60 = dyn base8(<sym pnames>, <lang c("Estimate", "Std. Error", "t value", "Pr(>|t|)")>);
    goto L12(r60);
  D34():
    deopt 108 [pnames4];
  D37():
    deopt 121 [r61, l1, r61];
  L78():
    pnames5 = force? pnames4;
    checkMissing(pnames5);
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L79() else L80();
  L83():
    r66 = dyn dimnames__1(l1, NULL, r61);
    check L84() else D38();
  D38():
    deopt 123 [r61, r66];
  L13(r63):
    list1 = ldf list in base;
    r65 = dyn list1(pnames5, r63);
    check L82() else D36();
  L79():
    c8 = ldf c in base;
    r64 = dyn c8("Estimate", "Std. Error", "t value", "Pr(>|t|)");
    check L81() else D35();
  L80():
    r62 = dyn base9("Estimate", "Std. Error", "t value", "Pr(>|t|)");
    goto L13(r62);
  L84():
    st param = r66;
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L85() else L86();
  D35():
    deopt 117 [r64];
  D36():
    deopt 119 [r65];
  L14(r68):
    st ans = r68;
    correlation1 = ld correlation;
    check L122() else D54();
  L81():
    goto L13(r64);
  L82():
    goto L12(r65);
  L85():
    formula = ldf formula;
    check L87() else D39();
  L86():
    r67 = dyn base10[formula, residuals, sigma, df, `cov.unscaled`, call, convInfo, control, `na.action`, coefficients, parameters](<lang formula(object)>, <sym r>, <lang sqrt(resvar)>, <lang c(p, rdf)>, <sym XtXinv>, <lang `$`(object, call)>, <lang `$`(object, convInfo)>, <lang `$`(object, control)>, <lang `$`(object, na.action)>, <sym param>, <sym param>);
    goto L14(r67);
  D39():
    deopt 128 [];
  D54():
    deopt 177 [correlation1];
  L87():
    p13 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      return object18;
    };
    r70 = dyn formula(p13);
    check L88() else D40();
  L122():
    correlation2 = force? correlation1;
    checkMissing(correlation2);
    c14 = `as.logical`(correlation2);
    if c14 then L123() else L17(c14);
  D40():
    deopt 130 [r70];
  L17(c16):
    c20 = `as.logical`(c16);
    if c20 then L126() else L18();
  L88():
    r71 = ld r;
    check L89() else D41();
  L123():
    rdf8 = ld rdf;
    check L124() else D55();
  D41():
    deopt 132 [r71];
  D55():
    deopt 179 [c14, rdf8];
  L18():
    goto L19();
  L19():
    l8 = ld ans;
    class__ = ldf `class<-`;
    check L141() else D61();
  L89():
    r72 = force? r71;
    checkMissing(r72);
    sym11 = ldf sqrt;
    base11 = ldf sqrt in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L90() else L91();
  L124():
    rdf9 = force? rdf8;
    checkMissing(rdf9);
    r84 = `>`(rdf9, 0.0);
    c17 = `as.logical`(r84);
    c18 = `&&`(c14, c17);
    goto L17(c18);
  L126():
    XtXinv4 = ld XtXinv;
    check L127() else D56();
  D56():
    deopt 184 [XtXinv4];
  D61():
    deopt 206 ["summary.nls", l8, "summary.nls"];
  L15(r74):
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L93() else L94();
  L90():
    resvar2 = ld resvar;
    check L92() else D42();
  L91():
    r73 = dyn base11(<sym resvar>);
    goto L15(r73);
  L127():
    XtXinv5 = force? XtXinv4;
    checkMissing(XtXinv5);
    resvar4 = ld resvar;
    check L128() else D57();
  L141():
    r96 = dyn class__(l8, NULL, "summary.nls");
    check L142() else D62();
  D42():
    deopt 136 [resvar2];
  D57():
    deopt 185 [XtXinv5, resvar4];
  D62():
    deopt 208 ["summary.nls", r96];
  L16(r77):
    XtXinv2 = ld XtXinv;
    check L98() else D46();
  L92():
    resvar3 = force? resvar2;
    checkMissing(resvar3);
    r75 = sqrt(resvar3);
    goto L15(r75);
  L93():
    p14 = ld p;
    check L95() else D43();
  L94():
    r76 = dyn base12(<sym p>, <sym rdf>);
    goto L16(r76);
  L128():
    resvar5 = force? resvar4;
    checkMissing(resvar5);
    r85 = `*`(XtXinv5, resvar5);
    outer = ldf outer;
    check L129() else D58();
  L142():
    st ans = r96;
    ans = ld ans;
    check L143() else D63();
  D43():
    deopt 142 [p14];
  D46():
    deopt 149 [XtXinv2];
  D58():
    deopt 188 [r85];
  D63():
    deopt 210 [ans];
  L95():
    p15 = force? p14;
    checkMissing(p15);
    rdf6 = ld rdf;
    check L96() else D44();
  L98():
    XtXinv3 = force? XtXinv2;
    checkMissing(XtXinv3);
    object19 = ld object;
    check L99() else D47();
  L129():
    p16 = prom<V +>{
      se4 = ld se;
      se5 = force? se4;
      checkMissing(se5);
      return se5;
    };
    p17 = prom<V +>{
      se6 = ld se;
      se7 = force? se6;
      checkMissing(se7);
      return se7;
    };
    r88 = dyn outer(p16, p17);
    check L130() else D59();
  L143():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D44():
    deopt 144 [rdf6];
  D47():
    deopt 152 [object19];
  D59():
    deopt 191 [r85, r88];
  L96():
    rdf7 = force? rdf6;
    checkMissing(rdf7);
    c9 = ldf c in base;
    r78 = dyn c9(p15, rdf7);
    check L97() else D45();
  L99():
    object20 = force? object19;
    checkMissing(object20);
    c10 = `is.object`(object20);
    if c10 then L101() else L102(object20);
  L130():
    r89 = `/`(r85, r88);
    l2 = ld ans;
    c21 = `is.object`(l2);
    if c21 then L132() else L133(r89, l2);
  D45():
    deopt 147 [r78];
  L97():
    goto L16(r78);
  L100(dx17):
    object23 = ld object;
    check L104() else D48();
  L101():
    dr10 = tryDispatchBuiltin.1("$", object20);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L103() else L102(dr10);
  L102(object22):
    r79 = `$`(object22, <sym call>);
    goto L100(r79);
  L131(dx25):
    st ans = dx25;
    symbolic_cor1 = ld `symbolic.cor`;
    check L135() else D60();
  L132():
    dr18 = tryDispatchBuiltin.0("$<-", l2, r89);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L134() else L133(r89, dr18);
  L133(r91, l4):
    r94 = `$<-`(l4, <sym correlation>, r89);
    goto L131(r94);
  D48():
    deopt 156 [object23];
  D60():
    deopt 196 [symbolic_cor1];
  L103():
    dx16 = getTryDispatchBuiltinValue(dr10);
    goto L100(dx16);
  L104():
    object24 = force? object23;
    checkMissing(object24);
    c11 = `is.object`(object24);
    if c11 then L106() else L107(object24);
  L134():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L131(dx24);
  L135():
    symbolic_cor2 = force? symbolic_cor1;
    checkMissing(symbolic_cor2);
    l5 = ld ans;
    c22 = `is.object`(l5);
    if c22 then L137() else L138(symbolic_cor2, l5);
  L105(dx19):
    object27 = ld object;
    check L109() else D49();
  L106():
    dr12 = tryDispatchBuiltin.1("$", object24);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L108() else L107(dr12);
  L107(object26):
    r80 = `$`(object26, <sym convInfo>);
    goto L105(r80);
  L136(symbolic_cor6, dx27):
    st ans = dx27;
    goto L19();
  L137():
    dr20 = tryDispatchBuiltin.0("$<-", l5, symbolic_cor2);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L139() else L138(symbolic_cor2, dr20);
  L138(symbolic_cor4, l7):
    r95 = `$<-`(l7, <sym symbolic.cor>, symbolic_cor2);
    goto L136(symbolic_cor4, r95);
  D49():
    deopt 160 [object27];
  L108():
    dx18 = getTryDispatchBuiltinValue(dr12);
    goto L105(dx18);
  L109():
    object28 = force? object27;
    checkMissing(object28);
    c12 = `is.object`(object28);
    if c12 then L111() else L112(object28);
  L139():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L136(symbolic_cor2, dx26);
  L110(dx21):
    object31 = ld object;
    check L114() else D50();
  L111():
    dr14 = tryDispatchBuiltin.1("$", object28);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L113() else L112(dr14);
  L112(object30):
    r81 = `$`(object30, <sym control>);
    goto L110(r81);
  D50():
    deopt 164 [object31];
  L113():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L110(dx20);
  L114():
    object32 = force? object31;
    checkMissing(object32);
    c13 = `is.object`(object32);
    if c13 then L116() else L117(object32);
  L115(dx23):
    param8 = ld param;
    check L119() else D51();
  L116():
    dr16 = tryDispatchBuiltin.1("$", object32);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L118() else L117(dr16);
  L117(object34):
    r82 = `$`(object34, <sym na.action>);
    goto L115(r82);
  D51():
    deopt 168 [param8];
  L118():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L115(dx22);
  L119():
    param9 = force? param8;
    checkMissing(param9);
    param10 = ld param;
    check L120() else D52();
  D52():
    deopt 171 [param10];
  L120():
    param11 = force? param10;
    checkMissing(param11);
    list2 = ldf list in base;
    r83 = dyn list2(r70, r72, r74, r77, XtXinv3, dx17, dx19, dx21, dx23, param9, param11);
    check L121() else D53();
  D53():
    deopt 175 [r83];
  L121():
    goto L14(r83);
  }
}