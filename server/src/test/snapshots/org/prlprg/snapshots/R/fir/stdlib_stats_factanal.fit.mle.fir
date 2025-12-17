fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3435310397;
    st `factanal.fit.mle` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3435310397(cmat, factors, start, lower, control, `...`) {
  (reg cmat:*, reg factors:*, reg start:*, reg lower:*, reg control:*, reg ddd:dots) -+> V { var cmat:*, var factors:*, var start:*, reg start_isMissing:L, reg start_orDefault:*, var lower:*, reg lower_isMissing:L, reg lower_orDefault:*, var control:*, reg control_isMissing:L, reg control_orDefault:*, var `...`:dots?, reg r:cls, reg r1:cls, reg r2:cls, reg ncol:cls, reg cmat1:*, reg cmat2:V, reg p:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg start1:*, reg start2:V, reg c:V, reg c1:L, reg factors1:*, reg factors2:V, reg r7:V, reg p1:*, reg p2:V, reg r8:V, reg r9:V, reg diag:cls, reg solve:cls, reg cmat3:*, reg cmat4:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg r13:V, reg r14:V, reg optim:cls, reg start3:*, reg start4:V, reg p5:p(V +), reg FAfn:*, reg FAfn1:V, reg p6:p(V +), reg FAgr:*, reg FAgr1:V, reg p7:p(V +), reg lower1:*, reg lower2:V, reg p8:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg rep:cls, reg r26:V, reg list:cls, reg r27:V, reg control1:*, reg control2:V, reg c2:cls, reg r28:V, reg p9:p(V +), reg factors3:*, reg factors4:V, reg p10:p(V +), reg cmat5:*, reg cmat6:V, reg p11:p(V +), reg r32:V, reg FAout:cls, reg res:*, reg res1:V, reg c3:L, reg res3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r33:V, reg p12:p(V +), reg cmat7:*, reg cmat8:V, reg p13:p(V +), reg factors5:*, reg factors6:V, reg p14:p(V +), reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg cmat9:*, reg cmat10:V, reg dimnames:cls, reg r42:V, reg c4:L, reg r44:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r45:V, reg paste0:cls, reg factors7:*, reg factors8:V, reg r46:V, reg p15:p(V +), reg r48:V, reg list1:cls, reg r49:V, reg l:*, reg dimnames__:cls, reg r50:V, reg ncol1:cls, reg cmat11:*, reg cmat12:V, reg p16:p(V +), reg r52:V, reg p17:*, reg p18:V, reg factors9:*, reg factors10:V, reg r53:V, reg r54:V, reg p19:*, reg p20:V, reg r55:V, reg factors11:*, reg factors12:V, reg r56:V, reg r57:V, reg setNames:cls, reg res4:*, reg res5:V, reg c5:L, reg res7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r58:V, reg p21:p(V +), reg colnames:cls, reg cmat13:*, reg cmat14:V, reg p22:p(V +), reg r61:V, reg p23:p(V +), reg r63:V, reg l1:*, reg class__:cls, reg r64:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r65:V, reg r66:V, reg res8:*, reg res9:V, reg c6:L, reg res11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r67:V, reg r68:V, reg Lambda:*, reg Lambda1:V, reg un:*, reg un1:V, reg cmat15:*, reg cmat16:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r69:V, reg r70:V, reg res12:*, reg res13:V, reg c7:L, reg res15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r71:V, reg res16:*, reg res17:V, reg c8:L, reg res19:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r72:V, reg c9:cls, reg r73:V, reg factors13:*, reg factors14:V, reg dof:*, reg dof1:V, reg list2:cls, reg r74:V, reg l2:*, reg class__1:cls, reg r75:V, reg ans:*, reg ans1:V |
    mkenv;
    st cmat = cmat;
    st factors = factors;
    start_isMissing = missing.0(start);
    if start_isMissing then L0(NULL) else L0(start);
  L0(start_orDefault):
    st start = start_orDefault;
    lower_isMissing = missing.0(lower);
    if lower_isMissing then L1(0.005) else L1(lower);
  L1(lower_orDefault):
    st lower = lower_orDefault;
    control_isMissing = missing.0(control);
    if control_isMissing then L2(NULL) else L2(control);
  L2(control_orDefault):
    st control = control_orDefault;
    st `...` = ddd;
    r = clos inner3205101920;
    st FAout = r;
    r1 = clos inner3205101920;
    st FAfn = r1;
    r2 = clos inner3205101920;
    st FAgr = r2;
    ncol = ldf ncol;
    check L11() else D0();
  D0():
    deopt 10 [];
  L11():
    p = prom<V +>{
      cmat1 = ld cmat;
      cmat2 = force? cmat1;
      checkMissing(cmat2);
      return cmat2;
    };
    r4 = dyn ncol(p);
    check L12() else D1();
  D1():
    deopt 12 [r4];
  L12():
    st p = r4;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L3(r6):
    c1 = `as.logical`(r6);
    if c1 then L16() else L4();
  L13():
    start1 = ld start;
    check L15() else D2();
  L14():
    r5 = dyn base(<sym start>);
    goto L3(r5);
  D2():
    deopt 15 [start1];
  L4():
    goto L5();
  L5():
    optim = ldf optim;
    check L22() else D7();
  L15():
    start2 = force? start1;
    checkMissing(start2);
    c = `==`(start2, NULL);
    goto L3(c);
  L16():
    factors1 = ld factors;
    check L17() else D3();
  D3():
    deopt 20 [1.0, 0.5, factors1];
  D7():
    deopt 34 [];
  L17():
    factors2 = force? factors1;
    checkMissing(factors2);
    r7 = `*`(0.5, factors2);
    p1 = ld p;
    check L18() else D4();
  L22():
    p5 = prom<V +>{
      start3 = ld start;
      start4 = force? start3;
      checkMissing(start4);
      return start4;
    };
    p6 = prom<V +>{
      FAfn = ld FAfn;
      FAfn1 = force? FAfn;
      checkMissing(FAfn1);
      return FAfn1;
    };
    p7 = prom<V +>{
      FAgr = ld FAgr;
      FAgr1 = force? FAgr;
      checkMissing(FAgr1);
      return FAgr1;
    };
    p8 = prom<V +>{
      lower1 = ld lower;
      lower2 = force? lower1;
      checkMissing(lower2);
      return lower2;
    };
    p9 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r21):
      return r21;
    L3():
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L4():
      r20 = dyn base1(<lang list(fnscale=1.0, parscale=rep(0.01, length(start)))>, <sym control>);
      goto L0(r20);
    L1(r23):
      control1 = ld control;
      control2 = force? control1;
      checkMissing(control2);
      c2 = ldf c in base;
      r28 = dyn c2(r23, control2);
      goto L0(r28);
    L5():
      sym3 = ldf rep;
      base3 = ldf rep in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L7() else L8();
    L6():
      r22 = dyn base2[fnscale, parscale](1.0, <lang rep(0.01, length(start))>);
      goto L1(r22);
    L2(r25):
      list = ldf list in base;
      r27 = dyn list(1.0, r25);
      goto L1(r27);
    L7():
      rep = ldf rep in base;
      r26 = dyn rep(0.01, <lang length(start)>);
      goto L2(r26);
    L8():
      r24 = dyn base3(0.01, <lang length(start)>);
      goto L2(r24);
    };
    p10 = prom<V +>{
      factors3 = ld factors;
      factors4 = force? factors3;
      checkMissing(factors4);
      return factors4;
    };
    p11 = prom<V +>{
      cmat5 = ld cmat;
      cmat6 = force? cmat5;
      checkMissing(cmat6);
      return cmat6;
    };
    r32 = dyn optim[, , , method, lower, upper, control, q, S](p5, p6, p7, "L-BFGS-B", p8, 1.0, p9, p10, p11);
    check L23() else D8();
  D4():
    deopt 22 [1.0, r7, p1];
  D8():
    deopt 50 [r32];
  L18():
    p2 = force? p1;
    checkMissing(p2);
    r8 = `/`(r7, p2);
    r9 = `-`(1.0, r8);
    diag = ldf diag;
    check L19() else D5();
  L23():
    st res = r32;
    FAout = ldf FAout;
    check L24() else D9();
  D5():
    deopt 26 [r9];
  D9():
    deopt 53 [];
  L19():
    p4 = prom<V +>{
      solve = ldf solve;
      p3 = prom<V +>{
        cmat3 = ld cmat;
        cmat4 = force? cmat3;
        checkMissing(cmat4);
        return cmat4;
      };
      r11 = dyn solve(p3);
      return r11;
    };
    r13 = dyn diag(p4);
    check L20() else D6();
  L24():
    p12 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      c3 = `is.object`(res1);
      if c3 then L1() else L2(res1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", res1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(res3):
      r33 = `$`(res3, <sym par>);
      goto L0(r33);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p13 = prom<V +>{
      cmat7 = ld cmat;
      cmat8 = force? cmat7;
      checkMissing(cmat8);
      return cmat8;
    };
    p14 = prom<V +>{
      factors5 = ld factors;
      factors6 = force? factors5;
      checkMissing(factors6);
      return factors6;
    };
    r37 = dyn FAout(p12, p13, p14);
    check L25() else D10();
  D6():
    deopt 28 [r9, r13];
  D10():
    deopt 57 [r37];
  L20():
    r14 = `/`(r9, r13);
    st start = r14;
    goto L5();
  L25():
    st Lambda = r37;
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L26() else L27();
  L6(r39):
    l = ld Lambda;
    dimnames__ = ldf `dimnames<-`;
    check L38() else D16();
  L26():
    sym5 = ldf dimnames;
    base5 = ldf dimnames in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L28() else L29();
  L27():
    r38 = dyn base4(<lang `[[`(dimnames(cmat), 1)>, <lang paste0("Factor", `:`(1, factors))>);
    goto L6(r38);
  D16():
    deopt 78 [r39, l, r39];
  L7(r41):
    c4 = `is.object`(r41);
    if c4 then L32() else L33(r41);
  L28():
    cmat9 = ld cmat;
    check L30() else D11();
  L29():
    r40 = dyn base5(<sym cmat>);
    goto L7(r40);
  L38():
    r50 = dyn dimnames__(l, NULL, r39);
    check L39() else D17();
  D11():
    deopt 63 [cmat9];
  D17():
    deopt 80 [r39, r50];
  L8(dx3):
    paste0 = ldf paste0;
    check L35() else D13();
  L30():
    cmat10 = force? cmat9;
    checkMissing(cmat10);
    dimnames = ldf dimnames in base;
    r42 = dyn dimnames(cmat10);
    check L31() else D12();
  L32():
    dr2 = tryDispatchBuiltin.1("[[", r41);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(dr2);
  L33(r44):
    __ = ldf `[[` in base;
    r45 = dyn __(r44, 1);
    goto L8(r45);
  L39():
    st Lambda = r50;
    ncol1 = ldf ncol;
    check L40() else D18();
  D12():
    deopt 66 [r42];
  D13():
    deopt 71 [];
  D18():
    deopt 83 [];
  L31():
    goto L7(r42);
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L35():
    p15 = prom<V +>{
      factors7 = ld factors;
      factors8 = force? factors7;
      checkMissing(factors8);
      r46 = `:`(1, factors8);
      return r46;
    };
    r48 = dyn paste0("Factor", p15);
    check L36() else D14();
  L40():
    p16 = prom<V +>{
      cmat11 = ld cmat;
      cmat12 = force? cmat11;
      checkMissing(cmat12);
      return cmat12;
    };
    r52 = dyn ncol1(p16);
    check L41() else D19();
  D14():
    deopt 74 [r48];
  D19():
    deopt 85 [r52];
  L36():
    list1 = ldf list in base;
    r49 = dyn list1(dx3, r48);
    check L37() else D15();
  L41():
    st p = r52;
    p17 = ld p;
    check L42() else D20();
  D15():
    deopt 76 [r49];
  D20():
    deopt 88 [0.5, p17];
  L37():
    goto L6(r49);
  L42():
    p18 = force? p17;
    checkMissing(p18);
    factors9 = ld factors;
    check L43() else D21();
  D21():
    deopt 89 [0.5, p18, factors9];
  L43():
    factors10 = force? factors9;
    checkMissing(factors10);
    r53 = `-`(p18, factors10);
    r54 = `^`(r53, 2.0);
    p19 = ld p;
    check L44() else D22();
  D22():
    deopt 93 [0.5, r54, p19];
  L44():
    p20 = force? p19;
    checkMissing(p20);
    r55 = `-`(r54, p20);
    factors11 = ld factors;
    check L45() else D23();
  D23():
    deopt 95 [0.5, r55, factors11];
  L45():
    factors12 = force? factors11;
    checkMissing(factors12);
    r56 = `-`(r55, factors12);
    r57 = `*`(0.5, r56);
    st dof = r57;
    setNames = ldf setNames;
    check L46() else D24();
  D24():
    deopt 101 [];
  L46():
    p21 = prom<V +>{
      res4 = ld res;
      res5 = force? res4;
      checkMissing(res5);
      c5 = `is.object`(res5);
      if c5 then L1() else L2(res5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", res5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(res7):
      r58 = `$`(res7, <sym par>);
      goto L0(r58);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p23 = prom<V +>{
      colnames = ldf colnames;
      p22 = prom<V +>{
        cmat13 = ld cmat;
        cmat14 = force? cmat13;
        checkMissing(cmat14);
        return cmat14;
      };
      r61 = dyn colnames(p22);
      return r61;
    };
    r63 = dyn setNames(p21, p23);
    check L47() else D25();
  D25():
    deopt 104 [r63];
  L47():
    st un = r63;
    l1 = ld Lambda;
    class__ = ldf `class<-`;
    check L48() else D26();
  D26():
    deopt 109 ["loadings", l1, "loadings"];
  L48():
    r64 = dyn class__(l1, NULL, "loadings");
    check L49() else D27();
  D27():
    deopt 111 ["loadings", r64];
  L49():
    st Lambda = r64;
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L50() else L51();
  L9(r66):
    st ans = r66;
    l2 = ld ans;
    class__1 = ldf `class<-`;
    check L76() else D38();
  L50():
    res8 = ld res;
    check L52() else D28();
  L51():
    r65 = dyn base6[converged, loadings, uniquenesses, correlation, criteria, factors, dof, method](<lang `==`(`$`(res, convergence), 0.0)>, <sym Lambda>, <sym un>, <sym cmat>, <lang c(objective=`$`(res, value), counts=`$`(res, counts))>, <sym factors>, <sym dof>, "mle");
    goto L9(r65);
  D28():
    deopt 115 [res8];
  D38():
    deopt 157 ["factanal", l2, "factanal"];
  L52():
    res9 = force? res8;
    checkMissing(res9);
    c6 = `is.object`(res9);
    if c6 then L54() else L55(res9);
  L76():
    r75 = dyn class__1(l2, NULL, "factanal");
    check L77() else D39();
  D39():
    deopt 159 ["factanal", r75];
  L53(dx7):
    r68 = `==`(dx7, 0.0);
    Lambda = ld Lambda;
    check L57() else D29();
  L54():
    dr6 = tryDispatchBuiltin.1("$", res9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L56() else L55(dr6);
  L55(res11):
    r67 = `$`(res11, <sym convergence>);
    goto L53(r67);
  L77():
    st ans = r75;
    ans = ld ans;
    check L78() else D40();
  D29():
    deopt 121 [Lambda];
  D40():
    deopt 161 [ans];
  L56():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L53(dx6);
  L57():
    Lambda1 = force? Lambda;
    checkMissing(Lambda1);
    un = ld un;
    check L58() else D30();
  L78():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D30():
    deopt 124 [un];
  L58():
    un1 = force? un;
    checkMissing(un1);
    cmat15 = ld cmat;
    check L59() else D31();
  D31():
    deopt 127 [cmat15];
  L59():
    cmat16 = force? cmat15;
    checkMissing(cmat16);
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L60() else L61();
  L10(r70):
    factors13 = ld factors;
    check L73() else D35();
  L60():
    res12 = ld res;
    check L62() else D32();
  L61():
    r69 = dyn base7[objective, counts](<lang `$`(res, value)>, <lang `$`(res, counts)>);
    goto L10(r69);
  D32():
    deopt 132 [res12];
  D35():
    deopt 143 [factors13];
  L62():
    res13 = force? res12;
    checkMissing(res13);
    c7 = `is.object`(res13);
    if c7 then L64() else L65(res13);
  L73():
    factors14 = force? factors13;
    checkMissing(factors14);
    dof = ld dof;
    check L74() else D36();
  D36():
    deopt 146 [dof];
  L63(dx9):
    res16 = ld res;
    check L67() else D33();
  L64():
    dr8 = tryDispatchBuiltin.1("$", res13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L66() else L65(dr8);
  L65(res15):
    r71 = `$`(res15, <sym value>);
    goto L63(r71);
  L74():
    dof1 = force? dof;
    checkMissing(dof1);
    list2 = ldf list in base;
    r74 = dyn list2(r68, Lambda1, un1, cmat16, r70, factors14, dof1, "mle");
    check L75() else D37();
  D33():
    deopt 136 [res16];
  D37():
    deopt 152 [r74];
  L66():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L63(dx8);
  L67():
    res17 = force? res16;
    checkMissing(res17);
    c8 = `is.object`(res17);
    if c8 then L69() else L70(res17);
  L75():
    goto L9(r74);
  L68(dx11):
    c9 = ldf c in base;
    r73 = dyn c9(dx9, dx11);
    check L72() else D34();
  L69():
    dr10 = tryDispatchBuiltin.1("$", res17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L71() else L70(dr10);
  L70(res19):
    r72 = `$`(res19, <sym counts>);
    goto L68(r72);
  D34():
    deopt 141 [r73];
  L71():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L68(dx10);
  L72():
    goto L10(r73);
  }
}
fun inner3205101920(Psi, S, q) {
  (reg Psi:*, reg S:*, reg q:*) -+> V { var Psi:*, var S:*, var q:*, reg diag:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:R, reg r4:V, reg Psi1:*, reg Psi2:V, reg r5:V, reg r6:V, reg p:p(V +), reg r8:V, reg sc:*, reg sc1:V, reg S1:*, reg S2:V, reg ___:cls, reg r9:V, reg sc2:*, reg sc3:V, reg ___1:cls, reg r10:V, reg eigen:cls, reg Sstar:*, reg Sstar1:V, reg p1:p(V +), reg r12:V, reg E:*, reg E1:V, reg c:L, reg E3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r13:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg q1:*, reg q2:V, reg r14:V, reg __:cls, reg r15:V, reg L:*, reg L1:V, reg diag1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg pmax:cls, reg E4:*, reg E5:V, reg c2:L, reg E7:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r18:V, reg c3:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg q3:*, reg q4:V, reg r19:V, reg __1:cls, reg r20:V, reg r21:V, reg p2:p(V +), reg r23:V, reg r24:V, reg p3:p(V +), reg q5:*, reg q6:V, reg p4:p(V +), reg r27:V, reg ___2:cls, reg r28:V, reg diag2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg Psi3:*, reg Psi4:V, reg r31:V, reg p5:p(V +), reg r33:V, reg load:*, reg load1:V, reg ___3:cls, reg r34:V |
    mkenv;
    st Psi = Psi;
    st S = S;
    st q = q;
    diag = ldf diag;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf sqrt;
      base = ldf sqrt in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3, r4):
      r6 = `/`(r3, r4);
      return r6;
    L1():
      Psi1 = ld Psi;
      Psi2 = force? Psi1;
      checkMissing(Psi2);
      r5 = sqrt(Psi2);
      goto L0(1.0, r5);
    L2():
      r2 = dyn base(<sym Psi>);
      goto L0(1.0, r2);
    };
    r8 = dyn diag(p);
    check L2() else D1();
  D1():
    deopt 3 [r8];
  L2():
    st sc = r8;
    sc = ld sc;
    check L3() else D2();
  D2():
    deopt 7 [sc];
  L3():
    sc1 = force? sc;
    checkMissing(sc1);
    S1 = ld S;
    check L4() else D3();
  D3():
    deopt 9 [S1];
  L4():
    S2 = force? S1;
    checkMissing(S2);
    ___ = ldf `%*%` in base;
    r9 = dyn ___(sc1, S2);
    check L5() else D4();
  D4():
    deopt 12 [r9];
  L5():
    sc2 = ld sc;
    check L6() else D5();
  D5():
    deopt 13 [sc2];
  L6():
    sc3 = force? sc2;
    checkMissing(sc3);
    ___1 = ldf `%*%` in base;
    r10 = dyn ___1(r9, sc3);
    check L7() else D6();
  D6():
    deopt 16 [r10];
  L7():
    st Sstar = r10;
    eigen = ldf eigen;
    check L8() else D7();
  D7():
    deopt 19 [];
  L8():
    p1 = prom<V +>{
      Sstar = ld Sstar;
      Sstar1 = force? Sstar;
      checkMissing(Sstar1);
      return Sstar1;
    };
    r12 = dyn eigen[, symmetric](p1, TRUE);
    check L9() else D8();
  D8():
    deopt 23 [r12];
  L9():
    st E = r12;
    E = ld E;
    check L10() else D9();
  D9():
    deopt 25 [E];
  L10():
    E1 = force? E;
    checkMissing(E1);
    c = `is.object`(E1);
    if c then L12() else L13(E1);
  L11(dx1):
    c1 = `is.object`(dx1);
    if c1 then L15() else L16(dx1);
  L12():
    dr = tryDispatchBuiltin.1("$", E1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(E3):
    r13 = `$`(E3, <sym vectors>);
    goto L11(r13);
  L0(dx5):
    st L = dx5;
    L = ld L;
    check L19() else D11();
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L15():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(dr2);
  L16(dx3):
    q1 = ld q;
    check L18() else D10();
  D10():
    deopt 30 [dx3, 1, q1];
  D11():
    deopt 39 [L];
  L17():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx4);
  L18():
    q2 = force? q1;
    checkMissing(q2);
    r14 = `:`(1, q2);
    __ = ldf `[` in base;
    r15 = dyn __(dx1, <missing>, r14, FALSE);
    goto L0(r15);
  L19():
    L1 = force? L;
    checkMissing(L1);
    diag1 = ldf diag;
    check L20() else D12();
  D12():
    deopt 42 [];
  L20():
    p3 = prom<V +>{
      sym1 = ldf sqrt;
      base1 = ldf sqrt in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      pmax = ldf pmax;
      p2 = prom<V +>{
        E4 = ld E;
        E5 = force? E4;
        checkMissing(E5);
        c2 = `is.object`(E5);
        if c2 then L2() else L3(E5);
      L1(dx7):
        c3 = `is.object`(dx7);
        if c3 then L5() else L6(dx7);
      L2():
        dr4 = tryDispatchBuiltin.1("$", E5);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L4() else L3(dr4);
      L3(E7):
        r18 = `$`(E7, <sym values>);
        goto L1(r18);
      L0(dx11):
        r21 = `-`(dx11, 1.0);
        return r21;
      L4():
        dx6 = getTryDispatchBuiltinValue(dr4);
        goto L1(dx6);
      L5():
        dr6 = tryDispatchBuiltin.1("[", dx7);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L7() else L6(dr6);
      L6(dx9):
        q3 = ld q;
        q4 = force? q3;
        checkMissing(q4);
        r19 = `:`(1, q4);
        __1 = ldf `[` in base;
        r20 = dyn __1(dx9, r19);
        goto L0(r20);
      L7():
        dx10 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx10);
      };
      r23 = dyn pmax(p2, 0.0);
      r24 = sqrt(r23);
      goto L0(r24);
    L2():
      r16 = dyn base1(<lang pmax(`-`(`[`(`$`(E, values), `:`(1, q)), 1.0), 0.0)>);
      goto L0(r16);
    };
    p4 = prom<V +>{
      q5 = ld q;
      q6 = force? q5;
      checkMissing(q6);
      return q6;
    };
    r27 = dyn diag1(p3, p4);
    check L21() else D13();
  D13():
    deopt 45 [r27];
  L21():
    ___2 = ldf `%*%` in base;
    r28 = dyn ___2(L1, r27);
    check L22() else D14();
  D14():
    deopt 47 [r28];
  L22():
    st load = r28;
    diag2 = ldf diag;
    check L23() else D15();
  D15():
    deopt 51 [];
  L23():
    p5 = prom<V +>{
      sym2 = ldf sqrt;
      base2 = ldf sqrt in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      Psi3 = ld Psi;
      Psi4 = force? Psi3;
      checkMissing(Psi4);
      r31 = sqrt(Psi4);
      goto L0(r31);
    L2():
      r29 = dyn base2(<sym Psi>);
      goto L0(r29);
    };
    r33 = dyn diag2(p5);
    check L24() else D16();
  D16():
    deopt 53 [r33];
  L24():
    load = ld load;
    check L25() else D17();
  D17():
    deopt 54 [load];
  L25():
    load1 = force? load;
    checkMissing(load1);
    ___3 = ldf `%*%` in base;
    r34 = dyn ___3(r33, load1);
    check L26() else D18();
  D18():
    deopt 57 [r34];
  L26():
    popenv;
    return r34;
  }
}