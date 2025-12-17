fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3081670869;
    st approx = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3081670869(x, y, xout, method, n, yleft, yright, rule, f, ties, `na.rm`) {
  (reg x:*, reg y:*, reg xout:*, reg method:*, reg n:*, reg yleft:*, reg yright:*, reg rule:*, reg f:*, reg ties:*, reg na_rm:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var xout:*, var method:*, reg method_isMissing:L, reg method_orDefault:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var yleft:*, var yright:*, var rule:*, reg rule_isMissing:L, reg rule_orDefault:*, var f:*, reg f_isMissing:L, reg f_orDefault:*, var ties:*, reg ties_isMissing:L, reg ties_orDefault:*, reg mean:*, reg mean1:V, reg p:p(V +), var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, reg pmatch:cls, reg method1:*, reg method2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg method3:*, reg method4:V, reg is_na:cls, reg r9:V, reg c1:L, reg stop:cls, reg r10:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg rule1:*, reg rule2:V, reg is_numeric:cls, reg r14:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg rule3:*, reg rule4:V, reg length:cls, reg r18:V, reg r19:V, reg p4:p(V +), reg lenR:*, reg lenR1:V, reg r21:V, reg p5:p(V +), reg r23:V, reg lenR2:*, reg lenR3:V, reg r24:V, reg c2:L, reg rule5:*, reg rule6:V, reg c3:L, reg rule8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg rule11:V, reg r26:V, reg c4:cls, reg r27:V, reg __:cls, reg r28:V, reg regularize_values:cls, reg x1:*, reg x2:V, reg p6:p(V +), reg y1:*, reg y2:V, reg p7:p(V +), reg ties1:*, reg ties2:V, reg p8:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg missing:cls, reg r34:V, reg p9:p(V +), reg na_rm1:*, reg na_rm2:V, reg p10:p(V +), reg r37:V, reg r38:*, reg r39:V, reg c5:L, reg r41:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r42:V, reg r43:*, reg r44:V, reg c6:L, reg r46:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r47:V, reg na_rm3:*, reg na_rm4:V, reg c7:L, reg c8:V, reg r48:*, reg r49:V, reg c10:L, reg c12:L, reg r51:V, reg dr6:V, reg dc3:L, reg dx7:V, reg c14:L, reg dx8:V, reg r52:V, reg r53:V, reg c15:L, reg c16:V, reg noNA:*, reg noNA1:V, reg c18:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg x3:*, reg x4:V, reg length1:cls, reg r56:V, reg r57:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r58:V, reg r59:*, reg r60:V, reg c19:L, reg r62:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r63:V, reg sum:cls, reg r64:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg r66:V, reg nx:*, reg nx1:V, reg is_na1:cls, reg r67:V, reg c20:L, reg stop1:cls, reg r68:V, reg nx2:*, reg nx3:V, reg r70:V, reg c21:L, reg method5:*, reg method6:V, reg r71:V, reg c22:L, reg stop2:cls, reg r72:V, reg nx4:*, reg nx5:V, reg r74:V, reg c23:L, reg stop3:cls, reg r75:V, reg r76:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r78:V, reg r79:V, reg missing1:cls, reg r80:V, reg c24:L, reg rule12:*, reg rule13:V, reg c25:L, reg rule15:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __1:cls, reg r81:V, reg r82:V, reg c26:L, reg r83:V, reg y3:*, reg y4:V, reg c27:L, reg y6:V, reg dr12:V, reg dc6:L, reg dx13:V, reg __2:cls, reg r84:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r86:V, reg r87:V, reg missing2:cls, reg r88:V, reg c28:L, reg rule16:*, reg rule17:V, reg c29:L, reg rule19:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __3:cls, reg r89:V, reg r90:V, reg c30:L, reg r91:V, reg y7:*, reg y8:V, reg c31:L, reg y10:V, reg dr16:V, reg dc8:L, reg dx16:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r92:V, reg y13:V, reg r93:V, reg y14:*, reg y15:V, reg length2:cls, reg r94:V, reg __4:cls, reg r95:V, reg stopifnot1:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r97:V, reg r98:V, reg yleft1:*, reg yleft2:V, reg length3:cls, reg r99:V, reg r100:V, reg p11:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r102:V, reg r103:V, reg yright1:*, reg yright2:V, reg length4:cls, reg r104:V, reg r105:V, reg p12:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r107:V, reg r108:V, reg f1:*, reg f2:V, reg length5:cls, reg r109:V, reg r110:V, reg p13:p(V +), reg r112:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r113:V, reg r114:V, reg missing3:cls, reg r115:V, reg c32:L, reg n1:*, reg n2:V, reg r116:V, reg c33:L, reg stop4:cls, reg r117:V, reg noNA2:*, reg noNA3:V, reg c34:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r119:V, reg r120:V, reg x5:*, reg x6:V, reg c35:L, reg x8:V, reg dr18:V, reg dc9:L, reg dx17:V, reg dx18:V, reg __5:cls, reg r121:V, reg x9:*, reg x10:V, reg c36:L, reg x12:V, reg dr20:V, reg dc10:L, reg dx19:V, reg dx20:V, reg nx6:*, reg nx7:V, reg __6:cls, reg r122:V, reg n3:*, reg n4:V, reg seq_int:cls, reg r123:V, reg r124:V, reg x13:*, reg x14:V, reg c37:L, reg x16:V, reg dr22:V, reg dc11:L, reg dx21:V, reg dx22:V, reg r125:*, reg r126:V, reg c38:L, reg x18:V, reg r128:V, reg dr24:V, reg dc12:L, reg dx23:V, reg x20:V, reg dx24:V, reg r129:V, reg __7:cls, reg r130:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r131:V, reg xout1:*, reg xout2:V, reg c39:L, reg xout4:V, reg dr26:V, reg dc13:L, reg dx25:V, reg dx26:V, reg __8:cls, reg r132:V, reg xout5:*, reg xout6:V, reg c40:L, reg xout8:V, reg dr28:V, reg dc14:L, reg dx27:V, reg dx28:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r133:V, reg xout11:V, reg r134:V, reg xout12:*, reg xout13:V, reg length6:cls, reg r135:V, reg __9:cls, reg r136:V, reg n5:*, reg n6:V, reg seq_int1:cls, reg r137:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r139:V, reg r140:V, reg x21:*, reg x22:V, reg as_double:cls, reg r141:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r142:V, reg r143:V, reg y16:*, reg y17:V, reg as_double1:cls, reg r144:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r145:V, reg C_ApproxTest:*, reg C_ApproxTest1:V, reg x23:*, reg x24:V, reg y18:*, reg y19:V, reg method7:*, reg method8:V, reg f3:*, reg f4:V, reg na_rm5:*, reg na_rm6:V, reg vargs:dots, reg r147:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r148:V, reg r149:V, reg C_Approx:*, reg C_Approx1:V, reg x25:*, reg x26:V, reg y20:*, reg y21:V, reg xout14:*, reg xout15:V, reg method9:*, reg method10:V, reg yleft3:*, reg yleft4:V, reg yright3:*, reg yright4:V, reg f5:*, reg f6:V, reg na_rm7:*, reg na_rm8:V, reg vargs1:dots, reg r150:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r151:V, reg r152:V, reg xout16:*, reg xout17:V, reg yout:*, reg yout1:V, reg list:cls, reg r153:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    st xout = xout;
    method_isMissing = missing.0(method);
    if method_isMissing then L1("linear") else L1(method);
  L1(method_orDefault):
    st method = method_orDefault;
    n_isMissing = missing.0(n);
    if n_isMissing then L2(50.0) else L2(n);
  L2(n_orDefault):
    st n = n_orDefault;
    st yleft = yleft;
    st yright = yright;
    rule_isMissing = missing.0(rule);
    if rule_isMissing then L3(1.0) else L3(rule);
  L3(rule_orDefault):
    st rule = rule_orDefault;
    f_isMissing = missing.0(f);
    if f_isMissing then L4(0.0) else L4(f);
  L4(f_orDefault):
    st f = f_orDefault;
    ties_isMissing = missing.0(ties);
    if ties_isMissing then L5() else L6(ties);
  L5():
    p = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    goto L6(p);
  L6(ties_orDefault):
    st ties = ties_orDefault;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L7(TRUE) else L7(na_rm);
  L7(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    pmatch = ldf pmatch;
    check L60() else D0();
  D0():
    deopt 1 [];
  L60():
    p1 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c("linear", "constant");
      goto L0(r4);
    L2():
      r2 = dyn base("linear", "constant");
      goto L0(r2);
    };
    r6 = dyn pmatch(p1, p2);
    check L61() else D1();
  D1():
    deopt 4 [r6];
  L61():
    st method = r6;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L62() else L63();
  L8(r8):
    c1 = `as.logical`(r8);
    if c1 then L66() else L9();
  L62():
    method3 = ld method;
    check L64() else D2();
  L63():
    r7 = dyn base1(<sym method>);
    goto L8(r7);
  D2():
    deopt 8 [method3];
  L9():
    goto L10();
  L10():
    stopifnot = ldf stopifnot;
    check L70() else D6();
  L64():
    method4 = force? method3;
    checkMissing(method4);
    is_na = ldf `is.na` in base;
    r9 = dyn is_na(method4);
    check L65() else D3();
  L66():
    stop = ldf stop;
    check L67() else D4();
  D3():
    deopt 11 [r9];
  D4():
    deopt 13 [];
  D6():
    deopt 19 [];
  L65():
    goto L8(r9);
  L67():
    r10 = dyn stop("invalid interpolation method");
    check L68() else D5();
  L70():
    p3 = prom<V +>{
      sym2 = ldf `is.numeric`;
      base2 = ldf `is.numeric` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      rule1 = ld rule;
      rule2 = force? rule1;
      checkMissing(rule2);
      is_numeric = ldf `is.numeric` in base;
      r14 = dyn is_numeric(rule2);
      goto L0(r14);
    L2():
      r12 = dyn base2(<sym rule>);
      goto L0(r12);
    };
    p4 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      st lenR = r17;
      r19 = `>=`(r17, 1);
      return r19;
    L1():
      rule3 = ld rule;
      rule4 = force? rule3;
      checkMissing(rule4);
      length = ldf length in base;
      r18 = dyn length(rule4);
      goto L0(r18);
    L2():
      r16 = dyn base3(<sym rule>);
      goto L0(r16);
    };
    p5 = prom<V +>{
      lenR = ld lenR;
      lenR1 = force? lenR;
      checkMissing(lenR1);
      r21 = `<=`(lenR1, 2);
      return r21;
    };
    r23 = dyn stopifnot(p3, p4, p5);
    check L71() else D7();
  D5():
    deopt 15 [r10];
  D7():
    deopt 23 [r23];
  L68():
    goto L10();
  L71():
    lenR2 = ld lenR;
    check L72() else D8();
  D8():
    deopt 24 [lenR2];
  L72():
    lenR3 = force? lenR2;
    checkMissing(lenR3);
    r24 = `==`(lenR3, 1.0);
    c2 = `as.logical`(r24);
    if c2 then L73() else L11();
  L11():
    goto L14();
  L14():
    regularize_values = ldf `regularize.values`;
    check L82() else D11();
  L73():
    rule5 = ld rule;
    check L74() else D9();
  D9():
    deopt 28 [rule5];
  D11():
    deopt 41 [];
  L74():
    rule6 = force? rule5;
    checkMissing(rule6);
    c3 = `is.object`(rule6);
    if c3 then L75() else L76(rule6);
  L82():
    p6 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p7 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p8 = prom<V +>{
      ties1 = ld ties;
      ties2 = force? ties1;
      checkMissing(ties2);
      return ties2;
    };
    p9 = prom<V +>{
      sym5 = ldf missing;
      base5 = ldf missing in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      missing = ldf missing in base;
      r34 = dyn missing(<sym ties>);
      goto L0(r34);
    L2():
      r32 = dyn base5(<sym ties>);
      goto L0(r32);
    };
    p10 = prom<V +>{
      na_rm1 = ld `na.rm`;
      na_rm2 = force? na_rm1;
      checkMissing(na_rm2);
      return na_rm2;
    };
    r37 = dyn regularize_values[, , , , `na.rm`](p6, p7, p8, p9, p10);
    check L83() else D12();
  D12():
    deopt 48 [r37];
  L12(dx1):
    st rule = dx1;
    goto L14();
  L75():
    dr = tryDispatchBuiltin.1("[", rule6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L77() else L76(dr);
  L76(rule8):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L78() else L79();
  L83():
    st r = r37;
    r38 = ld r;
    check L84() else D13();
  D13():
    deopt 50 [r38];
  L13(rule11, r26):
    __ = ldf `[` in base;
    r28 = dyn __(rule11, r26);
    goto L12(r28);
  L77():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L78():
    c4 = ldf c in base;
    r27 = dyn c4(1.0, 1.0);
    check L80() else D10();
  L79():
    r25 = dyn base4(1.0, 1.0);
    goto L13(rule8, r25);
  L84():
    r39 = force? r38;
    checkMissing(r39);
    c5 = `is.object`(r39);
    if c5 then L86() else L87(r39);
  D10():
    deopt 35 [rule8, r27];
  L80():
    goto L13(rule8, r27);
  L85(dx4):
    st y = dx4;
    r43 = ld r;
    check L89() else D14();
  L86():
    dr2 = tryDispatchBuiltin.1("$", r39);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L88() else L87(dr2);
  L87(r41):
    r42 = `$`(r41, <sym y>);
    goto L85(r42);
  D14():
    deopt 54 [r43];
  L88():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L85(dx3);
  L89():
    r44 = force? r43;
    checkMissing(r44);
    c6 = `is.object`(r44);
    if c6 then L91() else L92(r44);
  L90(dx6):
    st x = dx6;
    na_rm3 = ld `na.rm`;
    check L94() else D15();
  L91():
    dr4 = tryDispatchBuiltin.1("$", r44);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L93() else L92(dr4);
  L92(r46):
    r47 = `$`(r46, <sym x>);
    goto L90(r47);
  D15():
    deopt 58 [na_rm3];
  L93():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L90(dx5);
  L94():
    na_rm4 = force? na_rm3;
    checkMissing(na_rm4);
    c7 = `as.logical`(na_rm4);
    if c7 then L15(c7) else L95();
  L15(c8):
    st noNA = c8;
    noNA = ld noNA;
    check L102() else D17();
  L95():
    r48 = ld r;
    check L96() else D16();
  D16():
    deopt 60 [c7, r48];
  D17():
    deopt 66 [noNA];
  L96():
    r49 = force? r48;
    checkMissing(r49);
    c10 = `is.object`(r49);
    if c10 then L98() else L99(c7, r49);
  L102():
    noNA1 = force? noNA;
    checkMissing(noNA1);
    c18 = `as.logical`(noNA1);
    if c18 then L103() else L16();
  L16():
    sym7 = ldf sum;
    base7 = ldf sum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L109() else L110();
  L18(r57):
    st nx = r57;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L117() else L118();
  L97(c14, dx8):
    r53 = `!`(dx8);
    c15 = `as.logical`(r53);
    c16 = `||`(c14, c15);
    goto L15(c16);
  L98():
    dr6 = tryDispatchBuiltin.1("$", r49);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L100() else L99(c7, dr6);
  L99(c12, r51):
    r52 = `$`(r51, <sym keptNA>);
    goto L97(c12, r52);
  L103():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L104() else L105();
  L17(r55):
    goto L18(r55);
  L19(r66):
    c20 = `as.logical`(r66);
    if c20 then L121() else L20();
  L100():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L97(c7, dx7);
  L104():
    x3 = ld x;
    check L106() else D18();
  L105():
    r54 = dyn base6(<sym x>);
    goto L17(r54);
  L109():
    r59 = ld r;
    check L111() else D20();
  L110():
    r58 = dyn base7(<lang `$`(r, notNA)>);
    goto L18(r58);
  L117():
    nx = ld nx;
    check L119() else D22();
  L118():
    r65 = dyn base8(<sym nx>);
    goto L19(r65);
  D18():
    deopt 70 [x3];
  D20():
    deopt 76 [r59];
  D22():
    deopt 84 [nx];
  L20():
    goto L21();
  L21():
    nx2 = ld nx;
    check L125() else D26();
  L106():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r56 = dyn length1(x4);
    check L107() else D19();
  L111():
    r60 = force? r59;
    checkMissing(r60);
    c19 = `is.object`(r60);
    if c19 then L113() else L114(r60);
  L119():
    nx1 = force? nx;
    checkMissing(nx1);
    is_na1 = ldf `is.na` in base;
    r67 = dyn is_na1(nx1);
    check L120() else D23();
  L121():
    stop1 = ldf stop;
    check L122() else D24();
  D19():
    deopt 73 [r56];
  D23():
    deopt 87 [r67];
  D24():
    deopt 89 [];
  D26():
    deopt 94 [nx2];
  L107():
    goto L17(r56);
  L112(dx10):
    sum = ldf sum in base;
    r64 = dyn sum(dx10);
    check L116() else D21();
  L113():
    dr8 = tryDispatchBuiltin.1("$", r60);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L115() else L114(dr8);
  L114(r62):
    r63 = `$`(r62, <sym notNA>);
    goto L112(r63);
  L120():
    goto L19(r67);
  L122():
    r68 = dyn stop1("invalid length(x)");
    check L123() else D25();
  L125():
    nx3 = force? nx2;
    checkMissing(nx3);
    r70 = `<=`(nx3, 1.0);
    c21 = `as.logical`(r70);
    if c21 then L126() else L22();
  D21():
    deopt 80 [r64];
  D25():
    deopt 91 [r68];
  L22():
    goto L27();
  L27():
    sym9 = ldf missing;
    base9 = ldf missing in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L138() else L139();
  L115():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L112(dx9);
  L116():
    goto L18(r64);
  L123():
    goto L21();
  L126():
    method5 = ld method;
    check L127() else D27();
  D27():
    deopt 98 [method5];
  L28(r79):
    c24 = `as.logical`(r79);
    if c24 then L140() else L29();
  L127():
    method6 = force? method5;
    checkMissing(method6);
    r71 = `==`(method6, 1.0);
    c22 = `as.logical`(r71);
    if c22 then L128() else L23();
  L138():
    missing1 = ldf missing in base;
    r80 = dyn missing1(<sym yleft>);
    goto L28(r80);
  L139():
    r78 = dyn base9(<sym yleft>);
    goto L28(r78);
  L23():
    goto L24();
  L24():
    nx4 = ld nx;
    check L132() else D30();
  L29():
    goto L33();
  L33():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L152() else L153();
  L128():
    stop2 = ldf stop;
    check L129() else D28();
  L140():
    rule12 = ld rule;
    check L141() else D33();
  D28():
    deopt 103 [];
  D30():
    deopt 108 [nx4];
  D33():
    deopt 123 [rule12];
  L34(r87):
    c28 = `as.logical`(r87);
    if c28 then L154() else L35();
  L129():
    r72 = dyn stop2("need at least two non-NA values to interpolate");
    check L130() else D29();
  L132():
    nx5 = force? nx4;
    checkMissing(nx5);
    r74 = `==`(nx5, 0.0);
    c23 = `as.logical`(r74);
    if c23 then L133() else L25();
  L141():
    rule13 = force? rule12;
    checkMissing(rule13);
    c25 = `is.object`(rule13);
    if c25 then L142() else L143(rule13);
  L152():
    missing2 = ldf missing in base;
    r88 = dyn missing2(<sym yright>);
    goto L34(r88);
  L153():
    r86 = dyn base10(<sym yright>);
    goto L34(r86);
  D29():
    deopt 105 [r72];
  L25():
    goto L26(NULL);
  L26(r76):
    goto L27();
  L30(dx12):
    r82 = `==`(dx12, 1.0);
    c26 = `as.logical`(r82);
    if c26 then L145() else L31();
  L35():
    goto L40();
  L40():
    stopifnot1 = ldf stopifnot;
    check L170() else D39();
  L130():
    goto L24();
  L133():
    stop3 = ldf stop;
    check L134() else D31();
  L142():
    dr10 = tryDispatchBuiltin.1("[", rule13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L144() else L143(dr10);
  L143(rule15):
    __1 = ldf `[` in base;
    r81 = dyn __1(rule15, 1);
    goto L30(r81);
  L154():
    rule16 = ld rule;
    check L155() else D35();
  D31():
    deopt 113 [];
  D35():
    deopt 143 [rule16];
  D39():
    deopt 165 [];
  L31():
    y3 = ld y;
    check L147() else D34();
  L32(r83):
    st yleft = r83;
    goto L33();
  L134():
    r75 = dyn stop3("zero non-NA points");
    check L135() else D32();
  L144():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L30(dx11);
  L145():
    goto L32(NA_LGL);
  L155():
    rule17 = force? rule16;
    checkMissing(rule17);
    c29 = `is.object`(rule17);
    if c29 then L156() else L157(rule17);
  L170():
    p11 = prom<V +>{
      sym12 = ldf length;
      base12 = ldf length in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r98):
      r100 = `==`(r98, 1);
      return r100;
    L1():
      yleft1 = ld yleft;
      yleft2 = force? yleft1;
      checkMissing(yleft2);
      length3 = ldf length in base;
      r99 = dyn length3(yleft2);
      goto L0(r99);
    L2():
      r97 = dyn base12(<sym yleft>);
      goto L0(r97);
    };
    p12 = prom<V +>{
      sym13 = ldf length;
      base13 = ldf length in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r103):
      r105 = `==`(r103, 1);
      return r105;
    L1():
      yright1 = ld yright;
      yright2 = force? yright1;
      checkMissing(yright2);
      length4 = ldf length in base;
      r104 = dyn length4(yright2);
      goto L0(r104);
    L2():
      r102 = dyn base13(<sym yright>);
      goto L0(r102);
    };
    p13 = prom<V +>{
      sym14 = ldf length;
      base14 = ldf length in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r108):
      r110 = `==`(r108, 1);
      return r110;
    L1():
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      length5 = ldf length in base;
      r109 = dyn length5(f2);
      goto L0(r109);
    L2():
      r107 = dyn base14(<sym f>);
      goto L0(r107);
    };
    r112 = dyn stopifnot1(p11, p12, p13);
    check L171() else D40();
  D32():
    deopt 115 [r75];
  D34():
    deopt 132 [y3];
  D40():
    deopt 169 [r112];
  L36(dx15):
    r90 = `==`(dx15, 1.0);
    c30 = `as.logical`(r90);
    if c30 then L159() else L37();
  L135():
    goto L26(r75);
  L147():
    y4 = force? y3;
    checkMissing(y4);
    c27 = `is.object`(y4);
    if c27 then L148() else L149(y4);
  L156():
    dr14 = tryDispatchBuiltin.1("[", rule17);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L158() else L157(dr14);
  L157(rule19):
    __3 = ldf `[` in base;
    r89 = dyn __3(rule19, 2);
    goto L36(r89);
  L171():
    sym15 = ldf missing;
    base15 = ldf missing in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L172() else L173();
  L37():
    y7 = ld y;
    check L161() else D36();
  L38(r91):
    st yright = r91;
    goto L40();
  L41(r114):
    c32 = `as.logical`(r114);
    if c32 then L174() else L42();
  L148():
    dr12 = tryDispatchBuiltin.1("[", y4);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L150() else L149(dr12);
  L149(y6):
    __2 = ldf `[` in base;
    r84 = dyn __2(y6, 1);
    goto L32(r84);
  L158():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L36(dx14);
  L159():
    goto L38(NA_LGL);
  L172():
    missing3 = ldf missing in base;
    r115 = dyn missing3(<sym xout>);
    goto L41(r115);
  L173():
    r113 = dyn base15(<sym xout>);
    goto L41(r113);
  D36():
    deopt 152 [y7];
  L42():
    goto L54();
  L54():
    sym19 = ldf `as.double`;
    base19 = ldf `as.double` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L222() else L223();
  L150():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L32(dx13);
  L161():
    y8 = force? y7;
    checkMissing(y8);
    c31 = `is.object`(y8);
    if c31 then L162() else L163(y8);
  L174():
    n1 = ld n;
    check L175() else D41();
  D41():
    deopt 173 [n1];
  L55(r140):
    st x = r140;
    sym20 = ldf `as.double`;
    base20 = ldf `as.double` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L226() else L227();
  L162():
    dr16 = tryDispatchBuiltin.1("[", y8);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L164() else L163(dr16);
  L163(y10):
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L165() else L166();
  L175():
    n2 = force? n1;
    checkMissing(n2);
    r116 = `<=`(n2, 0.0);
    c33 = `as.logical`(r116);
    if c33 then L176() else L43();
  L222():
    x21 = ld x;
    check L224() else D58();
  L223():
    r139 = dyn base19(<sym x>);
    goto L55(r139);
  D58():
    deopt 235 [x21];
  L39(y13, r93):
    __4 = ldf `[` in base;
    r95 = dyn __4(y13, r93);
    goto L38(r95);
  L43():
    goto L44();
  L44():
    noNA2 = ld noNA;
    check L180() else D44();
  L56(r143):
    st y = r143;
    sym21 = ldf `.Call`;
    base21 = ldf `.Call` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L230() else L231();
  L164():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L38(dx16);
  L165():
    y14 = ld y;
    check L167() else D37();
  L166():
    r92 = dyn base11(<sym y>);
    goto L39(y10, r92);
  L176():
    stop4 = ldf stop;
    check L177() else D42();
  L224():
    x22 = force? x21;
    checkMissing(x22);
    as_double = ldf `as.double` in base;
    r141 = dyn as_double(x22);
    check L225() else D59();
  L226():
    y16 = ld y;
    check L228() else D60();
  L227():
    r142 = dyn base20(<sym y>);
    goto L56(r142);
  D37():
    deopt 156 [y10, y14];
  D42():
    deopt 178 [];
  D44():
    deopt 183 [noNA2];
  D59():
    deopt 238 [r141];
  D60():
    deopt 242 [y16];
  L57():
    sym22 = ldf `.Call`;
    base22 = ldf `.Call` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L238() else L239();
  L167():
    y15 = force? y14;
    checkMissing(y15);
    length2 = ldf length in base;
    r94 = dyn length2(y15);
    check L168() else D38();
  L177():
    r117 = dyn stop4("'approx' requires n >= 1");
    check L178() else D43();
  L180():
    noNA3 = force? noNA2;
    checkMissing(noNA3);
    c34 = `as.logical`(noNA3);
    if c34 then L181() else L45();
  L225():
    goto L55(r141);
  L228():
    y17 = force? y16;
    checkMissing(y17);
    as_double1 = ldf `as.double` in base;
    r144 = dyn as_double1(y17);
    check L229() else D61();
  L230():
    C_ApproxTest = ld C_ApproxTest;
    check L232() else D62();
  L231():
    r145 = dyn base21(<sym C_ApproxTest>, <sym x>, <sym y>, <sym method>, <sym f>, <sym na.rm>);
    goto L57();
  D38():
    deopt 159 [y10, r94];
  D43():
    deopt 180 [r117];
  D61():
    deopt 245 [r144];
  D62():
    deopt 248 [C_ApproxTest];
  L45():
    x13 = ld x;
    check L196() else D50();
  L49(r124):
    st xout = r124;
    goto L54();
  L58(r149):
    st yout = r149;
    sym23 = ldf list;
    base23 = ldf list in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L249() else L250();
  L168():
    goto L39(y10, r94);
  L178():
    goto L44();
  L181():
    sym16 = ldf `seq.int`;
    base16 = ldf `seq.int` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L182() else L183();
  L229():
    goto L56(r144);
  L232():
    C_ApproxTest1 = force? C_ApproxTest;
    checkMissing(C_ApproxTest1);
    x23 = ld x;
    check L233() else D63();
  L238():
    C_Approx = ld C_Approx;
    check L240() else D68();
  L239():
    r148 = dyn base22(<sym C_Approx>, <sym x>, <sym y>, <sym xout>, <sym method>, <sym yleft>, <sym yright>, <sym f>, <sym na.rm>);
    goto L58(r148);
  D50():
    deopt 202 [x13];
  D63():
    deopt 249 [C_ApproxTest1, x23];
  D68():
    deopt 257 [C_Approx];
  L46(r120):
    goto L49(r120);
  L59(r152):
    popenv;
    return r152;
  L182():
    x5 = ld x;
    check L184() else D45();
  L183():
    r119 = dyn base16[, , `length.out`](<lang `[`(x, 1)>, <lang `[`(x, nx)>, <sym n>);
    goto L46(r119);
  L196():
    x14 = force? x13;
    checkMissing(x14);
    c37 = `is.object`(x14);
    if c37 then L197() else L198(x14);
  L233():
    x24 = force? x23;
    checkMissing(x24);
    y18 = ld y;
    check L234() else D64();
  L240():
    C_Approx1 = force? C_Approx;
    checkMissing(C_Approx1);
    x25 = ld x;
    check L241() else D69();
  L249():
    xout16 = ld xout;
    check L251() else D77();
  L250():
    r151 = dyn base23[x, y](<sym xout>, <sym yout>);
    goto L59(r151);
  D45():
    deopt 187 [x5];
  D64():
    deopt 250 [C_ApproxTest1, x24, y18];
  D69():
    deopt 258 [C_Approx1, x25];
  D77():
    deopt 271 [xout16];
  L50(dx22):
    st xout = dx22;
    sym17 = ldf `seq.int`;
    base17 = ldf `seq.int` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L205() else L206();
  L184():
    x6 = force? x5;
    checkMissing(x6);
    c35 = `is.object`(x6);
    if c35 then L185() else L186(x6);
  L197():
    dr22 = tryDispatchBuiltin.1("[", x14);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L199() else L198(dr22);
  L198(x16):
    r125 = ld r;
    check L200() else D51();
  L234():
    y19 = force? y18;
    checkMissing(y19);
    method7 = ld method;
    check L235() else D65();
  L241():
    x26 = force? x25;
    checkMissing(x26);
    y20 = ld y;
    check L242() else D70();
  L251():
    xout17 = force? xout16;
    checkMissing(xout17);
    yout = ld yout;
    check L252() else D78();
  D51():
    deopt 204 [x16, r125];
  D65():
    deopt 251 [C_ApproxTest1, x24, y19, method7];
  D70():
    deopt 259 [C_Approx1, x26, y20];
  D78():
    deopt 274 [yout];
  L47(dx18):
    x9 = ld x;
    check L188() else D46();
  L185():
    dr18 = tryDispatchBuiltin.1("[", x6);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L187() else L186(dr18);
  L186(x8):
    __5 = ldf `[` in base;
    r121 = dyn __5(x8, 1);
    goto L47(r121);
  L199():
    dx21 = getTryDispatchBuiltinValue(dr22);
    goto L50(dx21);
  L200():
    r126 = force? r125;
    checkMissing(r126);
    c38 = `is.object`(r126);
    if c38 then L202() else L203(x16, r126);
  L205():
    xout1 = ld xout;
    check L207() else D52();
  L206():
    r131 = dyn base17[, , `length.out`](<lang `[`(xout, 1)>, <lang `[`(xout, length(xout))>, <sym n>);
    goto L49(r131);
  L235():
    method8 = force? method7;
    checkMissing(method8);
    f3 = ld f;
    check L236() else D66();
  L242():
    y21 = force? y20;
    checkMissing(y21);
    xout14 = ld xout;
    check L243() else D71();
  L252():
    yout1 = force? yout;
    checkMissing(yout1);
    list = ldf list in base;
    r153 = dyn list(xout17, yout1);
    check L253() else D79();
  D46():
    deopt 192 [x9];
  D52():
    deopt 211 [xout1];
  D66():
    deopt 252 [C_ApproxTest1, x24, y19, method8, f3];
  D71():
    deopt 260 [C_Approx1, x26, y21, xout14];
  D79():
    deopt 278 [r153];
  L187():
    dx17 = getTryDispatchBuiltinValue(dr18);
    goto L47(dx17);
  L188():
    x10 = force? x9;
    checkMissing(x10);
    c36 = `is.object`(x10);
    if c36 then L189() else L190(x10);
  L201(x20, dx24):
    __7 = ldf `[` in base;
    r130 = dyn __7(x20, dx24);
    goto L50(r130);
  L202():
    dr24 = tryDispatchBuiltin.1("$", r126);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L204() else L203(x16, dr24);
  L203(x18, r128):
    r129 = `$`(r128, <sym notNA>);
    goto L201(x18, r129);
  L207():
    xout2 = force? xout1;
    checkMissing(xout2);
    c39 = `is.object`(xout2);
    if c39 then L208() else L209(xout2);
  L236():
    f4 = force? f3;
    checkMissing(f4);
    na_rm5 = ld `na.rm`;
    check L237() else D67();
  L243():
    xout15 = force? xout14;
    checkMissing(xout15);
    method9 = ld method;
    check L244() else D72();
  L253():
    goto L59(r153);
  D67():
    deopt 253 [C_ApproxTest1, x24, y19, method8, f4, na_rm5];
  D72():
    deopt 261 [C_Approx1, x26, y21, xout15, method9];
  L48(dx20):
    n3 = ld n;
    check L193() else D48();
  L51(dx26):
    xout5 = ld xout;
    check L211() else D53();
  L189():
    dr20 = tryDispatchBuiltin.1("[", x10);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L191() else L190(dr20);
  L190(x12):
    nx6 = ld nx;
    check L192() else D47();
  L204():
    dx23 = getTryDispatchBuiltinValue(dr24);
    goto L201(x16, dx23);
  L208():
    dr26 = tryDispatchBuiltin.1("[", xout2);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L210() else L209(dr26);
  L209(xout4):
    __8 = ldf `[` in base;
    r132 = dyn __8(xout4, 1);
    goto L51(r132);
  L237():
    na_rm6 = force? na_rm5;
    checkMissing(na_rm6);
    vargs = dots[x24, y19, method8, f4, na_rm6];
    r147 = `.Call`(C_ApproxTest1, vargs, <missing>);
    goto L57();
  L244():
    method10 = force? method9;
    checkMissing(method10);
    yleft3 = ld yleft;
    check L245() else D73();
  D47():
    deopt 194 [x12, nx6];
  D48():
    deopt 197 [n3];
  D53():
    deopt 216 [xout5];
  D73():
    deopt 262 [C_Approx1, x26, y21, xout15, method10, yleft3];
  L191():
    dx19 = getTryDispatchBuiltinValue(dr20);
    goto L48(dx19);
  L192():
    nx7 = force? nx6;
    __6 = ldf `[` in base;
    r122 = dyn __6(x12, nx7);
    goto L48(r122);
  L193():
    n4 = force? n3;
    checkMissing(n4);
    seq_int = ldf `seq.int` in base;
    r123 = dyn seq_int(dx18, dx20, n4);
    check L194() else D49();
  L210():
    dx25 = getTryDispatchBuiltinValue(dr26);
    goto L51(dx25);
  L211():
    xout6 = force? xout5;
    checkMissing(xout6);
    c40 = `is.object`(xout6);
    if c40 then L212() else L213(xout6);
  L245():
    yleft4 = force? yleft3;
    checkMissing(yleft4);
    yright3 = ld yright;
    check L246() else D74();
  D49():
    deopt 201 [r123];
  D74():
    deopt 263 [C_Approx1, x26, y21, xout15, method10, yleft4, yright3];
  L52(dx28):
    n5 = ld n;
    check L219() else D56();
  L194():
    goto L46(r123);
  L212():
    dr28 = tryDispatchBuiltin.1("[", xout6);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L214() else L213(dr28);
  L213(xout8):
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L215() else L216();
  L246():
    yright4 = force? yright3;
    checkMissing(yright4);
    f5 = ld f;
    check L247() else D75();
  D56():
    deopt 225 [n5];
  D75():
    deopt 264 [C_Approx1, x26, y21, xout15, method10, yleft4, yright4, f5];
  L53(xout11, r134):
    __9 = ldf `[` in base;
    r136 = dyn __9(xout11, r134);
    goto L52(r136);
  L214():
    dx27 = getTryDispatchBuiltinValue(dr28);
    goto L52(dx27);
  L215():
    xout12 = ld xout;
    check L217() else D54();
  L216():
    r133 = dyn base18(<sym xout>);
    goto L53(xout8, r133);
  L219():
    n6 = force? n5;
    checkMissing(n6);
    seq_int1 = ldf `seq.int` in base;
    r137 = dyn seq_int1(dx26, dx28, n6);
    check L220() else D57();
  L247():
    f6 = force? f5;
    checkMissing(f6);
    na_rm7 = ld `na.rm`;
    check L248() else D76();
  D54():
    deopt 220 [xout8, xout12];
  D57():
    deopt 229 [r137];
  D76():
    deopt 265 [C_Approx1, x26, y21, xout15, method10, yleft4, yright4, f6, na_rm7];
  L217():
    xout13 = force? xout12;
    checkMissing(xout13);
    length6 = ldf length in base;
    r135 = dyn length6(xout13);
    check L218() else D55();
  L220():
    goto L49(r137);
  L248():
    na_rm8 = force? na_rm7;
    checkMissing(na_rm8);
    vargs1 = dots[x26, y21, xout15, method10, yleft4, yright4, f6, na_rm8];
    r150 = `.Call`(C_Approx1, vargs1, <missing>);
    goto L58(r150);
  D55():
    deopt 223 [xout8, r135];
  L218():
    goto L53(xout8, r135);
  }
}