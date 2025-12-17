fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner568828708;
    st spline = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner568828708(x, y, n, method, xmin, xmax, xout, ties) {
  (reg x:*, reg y:*, reg n:*, reg method:*, reg xmin:*, reg xmax:*, reg xout:*, reg ties:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:R, reg r4:V, reg x1:*, reg x2:V, reg length:cls, reg r5:V, reg r6:V, reg p:p(V +), var method:*, reg method_isMissing:L, reg method_orDefault:*, var xmin:*, reg xmin_isMissing:L, reg xmin_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg min:cls, reg r10:V, reg p1:p(V +), var xmax:*, reg xmax_isMissing:L, reg xmax_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg x5:*, reg x6:V, reg max:cls, reg r14:V, reg p2:p(V +), var xout:*, var ties:*, reg ties_isMissing:L, reg ties_orDefault:*, reg mean:*, reg mean1:V, reg p3:p(V +), reg pmatch:cls, reg method1:*, reg method2:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg c:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg method3:*, reg method4:V, reg is_na:cls, reg r25:V, reg c1:L, reg stop:cls, reg r26:V, reg regularize_values:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg y1:*, reg y2:V, reg p7:p(V +), reg ties1:*, reg ties2:V, reg p8:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg missing:cls, reg r33:V, reg p9:p(V +), reg r35:V, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r36:V, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r37:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg x17:*, reg x18:V, reg length1:cls, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg nx:*, reg nx1:V, reg is_na1:cls, reg r43:V, reg c4:L, reg stop1:cls, reg gettextf:cls, reg r44:V, reg p10:p(V +), reg r46:V, reg nx2:*, reg nx3:V, reg r48:V, reg c5:L, reg stop2:cls, reg r49:V, reg method5:*, reg method6:V, reg r51:V, reg c6:L, reg c8:V, reg y3:*, reg y4:V, reg c9:L, reg c11:L, reg y6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c13:L, reg dx5:V, reg __:cls, reg r52:V, reg y7:*, reg y8:V, reg c14:L, reg c16:L, reg dx7:V, reg y10:V, reg dr6:V, reg dc3:L, reg dx9:V, reg c18:L, reg dx10:V, reg dx11:V, reg nx4:*, reg nx5:V, reg __1:cls, reg r53:V, reg r54:V, reg c19:L, reg c20:V, reg c22:L, reg warning:cls, reg r55:V, reg y11:*, reg y12:V, reg c23:L, reg y14:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg __2:cls, reg r56:V, reg l:*, reg c24:L, reg dx15:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx17:V, reg dx18:V, reg dx19:V, reg nx6:*, reg nx7:V, reg ___:cls, reg r57:V, reg method7:*, reg method8:V, reg r58:V, reg c25:L, reg diff:cls, reg y15:*, reg y16:V, reg p11:p(V +), reg r60:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r61:V, reg r62:V, reg dy:*, reg dy1:V, reg r63:V, reg all:cls, reg r64:V, reg c26:L, reg c27:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r65:V, reg c31:L, reg r66:V, reg dy2:*, reg dy3:V, reg r67:V, reg all1:cls, reg r68:V, reg c32:L, reg c33:V, reg r69:V, reg c35:L, reg stop3:cls, reg r70:V, reg r71:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r73:V, reg r74:V, reg missing1:cls, reg r75:V, reg c36:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r76:V, reg r77:V, reg xmin1:*, reg xmin2:V, reg xmax1:*, reg xmax2:V, reg n1:*, reg n2:V, reg seq_int:cls, reg r78:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r80:V, reg r81:V, reg xout1:*, reg xout2:V, reg length2:cls, reg r82:V, reg n3:*, reg n4:V, reg r83:V, reg c37:L, reg stop4:cls, reg r84:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r86:V, reg r87:V, reg xout3:*, reg xout4:V, reg as_double:cls, reg r88:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r89:V, reg r90:V, reg C_SplineCoef:*, reg C_SplineCoef1:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r91:V, reg C_SplineCoef4:V, reg r92:V, reg method9:*, reg method10:V, reg min1:cls, reg r93:V, reg x19:*, reg x20:V, reg y17:*, reg y18:V, reg vargs:dots, reg r94:V, reg method11:*, reg method12:V, reg r95:V, reg c38:L, reg spl_coef_conv:cls, reg hyman_filter:cls, reg z:*, reg z1:V, reg p12:p(V +), reg r97:V, reg p13:p(V +), reg r99:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r101:V, reg r102:V, reg xout5:*, reg xout6:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r103:V, reg r104:V, reg C_SplineEval:*, reg C_SplineEval1:V, reg xout7:*, reg xout8:V, reg z2:*, reg z3:V, reg vargs1:dots, reg r105:V, reg list:cls, reg r106:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    n_isMissing = missing.0(n);
    if n_isMissing then L1() else L2(n);
  L1():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3, r4):
      r6 = `*`(r3, r4);
      return r6;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      length = ldf length in base;
      r5 = dyn length(x2);
      goto L0(3.0, r5);
    L2():
      r2 = dyn base(<sym x>);
      goto L0(3.0, r2);
    };
    goto L2(p);
  L2(n_orDefault):
    st n = n_orDefault;
    method_isMissing = missing.0(method);
    if method_isMissing then L3("fmm") else L3(method);
  L3(method_orDefault):
    st method = method_orDefault;
    xmin_isMissing = missing.0(xmin);
    if xmin_isMissing then L4() else L5(xmin);
  L4():
    p1 = prom<V +>{
      sym1 = ldf min;
      base1 = ldf min in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      min = ldf min in base;
      r10 = dyn min(x4);
      goto L0(r10);
    L2():
      r8 = dyn base1(<sym x>);
      goto L0(r8);
    };
    goto L5(p1);
  L5(xmin_orDefault):
    st xmin = xmin_orDefault;
    xmax_isMissing = missing.0(xmax);
    if xmax_isMissing then L6() else L7(xmax);
  L6():
    p2 = prom<V +>{
      sym2 = ldf max;
      base2 = ldf max in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      max = ldf max in base;
      r14 = dyn max(x6);
      goto L0(r14);
    L2():
      r12 = dyn base2(<sym x>);
      goto L0(r12);
    };
    goto L7(p2);
  L7(xmax_orDefault):
    st xmax = xmax_orDefault;
    st xout = xout;
    ties_isMissing = missing.0(ties);
    if ties_isMissing then L8() else L9(ties);
  L8():
    p3 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    goto L9(p3);
  L9(ties_orDefault):
    st ties = ties_orDefault;
    pmatch = ldf pmatch;
    check L47() else D0();
  D0():
    deopt 1 [];
  L47():
    p4 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c = ldf c in base;
      r20 = dyn c("periodic", "natural", "fmm", "hyman");
      goto L0(r20);
    L2():
      r18 = dyn base3("periodic", "natural", "fmm", "hyman");
      goto L0(r18);
    };
    r22 = dyn pmatch(p4, p5);
    check L48() else D1();
  D1():
    deopt 4 [r22];
  L48():
    st method = r22;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L10(r24):
    c1 = `as.logical`(r24);
    if c1 then L53() else L11();
  L49():
    method3 = ld method;
    check L51() else D2();
  L50():
    r23 = dyn base4(<sym method>);
    goto L10(r23);
  D2():
    deopt 8 [method3];
  L11():
    goto L12();
  L12():
    regularize_values = ldf `regularize.values`;
    check L57() else D6();
  L51():
    method4 = force? method3;
    checkMissing(method4);
    is_na = ldf `is.na` in base;
    r25 = dyn is_na(method4);
    check L52() else D3();
  L53():
    stop = ldf stop;
    check L54() else D4();
  D3():
    deopt 11 [r25];
  D4():
    deopt 13 [];
  D6():
    deopt 19 [];
  L52():
    goto L10(r25);
  L54():
    r26 = dyn stop("invalid interpolation method");
    check L55() else D5();
  L57():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
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
    L0(r32):
      return r32;
    L1():
      missing = ldf missing in base;
      r33 = dyn missing(<sym ties>);
      goto L0(r33);
    L2():
      r31 = dyn base5(<sym ties>);
      goto L0(r31);
    };
    r35 = dyn regularize_values(p6, p7, p8, p9);
    check L58() else D7();
  D5():
    deopt 15 [r26];
  D7():
    deopt 24 [r35];
  L55():
    goto L12();
  L58():
    st x = r35;
    x9 = ld x;
    check L59() else D8();
  D8():
    deopt 26 [x9];
  L59():
    x10 = force? x9;
    checkMissing(x10);
    c2 = `is.object`(x10);
    if c2 then L61() else L62(x10);
  L60(dx1):
    st y = dx1;
    x13 = ld x;
    check L64() else D9();
  L61():
    dr = tryDispatchBuiltin.1("$", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L63() else L62(dr);
  L62(x12):
    r36 = `$`(x12, <sym y>);
    goto L60(r36);
  D9():
    deopt 30 [x13];
  L63():
    dx = getTryDispatchBuiltinValue(dr);
    goto L60(dx);
  L64():
    x14 = force? x13;
    checkMissing(x14);
    c3 = `is.object`(x14);
    if c3 then L66() else L67(x14);
  L65(dx3):
    st x = dx3;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L66():
    dr2 = tryDispatchBuiltin.1("$", x14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L68() else L67(dr2);
  L67(x16):
    r37 = `$`(x16, <sym x>);
    goto L65(r37);
  L13(r39):
    st nx = r39;
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L73() else L74();
  L68():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L65(dx2);
  L69():
    x17 = ld x;
    check L71() else D10();
  L70():
    r38 = dyn base6(<sym x>);
    goto L13(r38);
  D10():
    deopt 36 [x17];
  L14(r42):
    c4 = `as.logical`(r42);
    if c4 then L77() else L15();
  L71():
    x18 = force? x17;
    checkMissing(x18);
    length1 = ldf length in base;
    r40 = dyn length1(x18);
    check L72() else D11();
  L73():
    nx = ld nx;
    check L75() else D12();
  L74():
    r41 = dyn base7(<sym nx>);
    goto L14(r41);
  D11():
    deopt 39 [r40];
  D12():
    deopt 43 [nx];
  L15():
    goto L16();
  L16():
    nx2 = ld nx;
    check L81() else D16();
  L72():
    goto L13(r40);
  L75():
    nx1 = force? nx;
    checkMissing(nx1);
    is_na1 = ldf `is.na` in base;
    r43 = dyn is_na1(nx1);
    check L76() else D13();
  L77():
    stop1 = ldf stop;
    check L78() else D14();
  D13():
    deopt 46 [r43];
  D14():
    deopt 48 [];
  D16():
    deopt 55 [nx2];
  L76():
    goto L14(r43);
  L78():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      r44 = dyn gettextf("invalid value of %s", "length(x)");
      return r44;
    };
    r46 = dyn stop1[, domain](p10, NA_LGL);
    check L79() else D15();
  L81():
    nx3 = force? nx2;
    checkMissing(nx3);
    r48 = `==`(nx3, 0.0);
    c5 = `as.logical`(r48);
    if c5 then L82() else L17();
  D15():
    deopt 52 [r46];
  L17():
    goto L18();
  L18():
    method5 = ld method;
    check L86() else D19();
  L79():
    goto L16();
  L82():
    stop2 = ldf stop;
    check L83() else D17();
  D17():
    deopt 60 [];
  D19():
    deopt 65 [method5];
  L83():
    r49 = dyn stop2("zero non-NA points");
    check L84() else D18();
  L86():
    method6 = force? method5;
    checkMissing(method6);
    r51 = `==`(method6, 1);
    c6 = `as.logical`(r51);
    if c6 then L87() else L19(c6);
  D18():
    deopt 62 [r49];
  L19(c8):
    c22 = `as.logical`(c8);
    if c22 then L98() else L22();
  L84():
    goto L18();
  L87():
    y3 = ld y;
    check L88() else D20();
  D20():
    deopt 69 [c6, y3];
  L22():
    goto L25();
  L25():
    method7 = ld method;
    check L110() else D27();
  L88():
    y4 = force? y3;
    checkMissing(y4);
    c9 = `is.object`(y4);
    if c9 then L89() else L90(c6, y4);
  L98():
    warning = ldf warning;
    check L99() else D23();
  D23():
    deopt 81 [];
  D27():
    deopt 96 [method7];
  L20(c13, dx5):
    y7 = ld y;
    check L92() else D21();
  L89():
    dr4 = tryDispatchBuiltin.1("[", y4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L91() else L90(c6, dr4);
  L90(c11, y6):
    __ = ldf `[` in base;
    r52 = dyn __(y6, 1);
    goto L20(c11, r52);
  L99():
    r55 = dyn warning("spline: first and last y values differ - using y[1] for both");
    check L100() else D24();
  L110():
    method8 = force? method7;
    checkMissing(method8);
    r58 = `==`(method8, 4);
    c25 = `as.logical`(r58);
    if c25 then L111() else L26();
  D21():
    deopt 73 [c13, dx5, y7];
  D24():
    deopt 83 [r55];
  L26():
    goto L32();
  L32():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L129() else L130();
  L91():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L20(c6, dx4);
  L92():
    y8 = force? y7;
    checkMissing(y8);
    c14 = `is.object`(y8);
    if c14 then L93() else L94(c13, dx5, y8);
  L100():
    y11 = ld y;
    check L101() else D25();
  L111():
    diff = ldf diff;
    check L112() else D28();
  D25():
    deopt 84 [y11];
  D28():
    deopt 101 [];
  L21(c18, dx10, dx11):
    r54 = `!=`(dx10, dx11);
    c19 = `as.logical`(r54);
    c20 = `&&`(c18, c19);
    goto L19(c20);
  L33(r74):
    c36 = `as.logical`(r74);
    if c36 then L131() else L34();
  L93():
    dr6 = tryDispatchBuiltin.1("[", y8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L95() else L94(c13, dx5, dr6);
  L94(c16, dx7, y10):
    nx4 = ld nx;
    check L96() else D22();
  L101():
    y12 = force? y11;
    checkMissing(y12);
    c23 = `is.object`(y12);
    if c23 then L102() else L103(y12);
  L112():
    p11 = prom<V +>{
      y15 = ld y;
      y16 = force? y15;
      checkMissing(y16);
      return y16;
    };
    r60 = dyn diff(p11);
    check L113() else D29();
  L129():
    missing1 = ldf missing in base;
    r75 = dyn missing1(<sym xout>);
    goto L33(r75);
  L130():
    r73 = dyn base10(<sym xout>);
    goto L33(r73);
  D22():
    deopt 75 [c16, dx7, y10, nx4];
  D29():
    deopt 103 [r60];
  L23(dx13):
    l = ld y;
    c24 = `is.object`(l);
    if c24 then L105() else L106(dx13, l);
  L34():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L139() else L140();
  L36():
    n3 = ld n;
    check L143() else D42();
  L95():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L21(c13, dx5, dx9);
  L96():
    nx5 = force? nx4;
    __1 = ldf `[` in base;
    r53 = dyn __1(y10, nx5);
    goto L21(c16, dx7, r53);
  L102():
    dr8 = tryDispatchBuiltin.1("[", y12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L104() else L103(dr8);
  L103(y14):
    __2 = ldf `[` in base;
    r56 = dyn __2(y14, 1);
    goto L23(r56);
  L113():
    st dy = r60;
    sym8 = ldf all;
    base8 = ldf all in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L114() else L115();
  L131():
    sym11 = ldf `seq.int`;
    base11 = ldf `seq.int` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L132() else L133();
  D42():
    deopt 153 [n3];
  L24(dx18, dx19):
    st y = dx19;
    goto L25();
  L27(r62):
    c26 = `as.logical`(r62);
    if c26 then L28(c26) else L118();
  L35(r77):
    st xout = r77;
    goto L36();
  L37(r81):
    st n = r81;
    goto L36();
  L104():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L23(dx12);
  L105():
    dr10 = tryDispatchBuiltin.0("[<-", l, dx13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L107() else L106(dx13, dr10);
  L106(dx15, l2):
    nx6 = ld nx;
    check L108() else D26();
  L114():
    dy = ld dy;
    check L116() else D30();
  L115():
    r61 = dyn base8(<lang `>=`(dy, 0.0)>);
    goto L27(r61);
  L132():
    xmin1 = ld xmin;
    check L134() else D36();
  L133():
    r76 = dyn base11[, , `length.out`](<sym xmin>, <sym xmax>, <sym n>);
    goto L35(r76);
  L139():
    xout1 = ld xout;
    check L141() else D40();
  L140():
    r80 = dyn base12(<sym xout>);
    goto L37(r80);
  L143():
    n4 = force? n3;
    checkMissing(n4);
    r83 = `<=`(n4, 0);
    c37 = `as.logical`(r83);
    if c37 then L144() else L38();
  D26():
    deopt 90 [dx15, l2, dx13, nx6];
  D30():
    deopt 107 [dy];
  D36():
    deopt 136 [xmin1];
  D40():
    deopt 148 [xout1];
  L28(c27):
    r69 = `!`(c27);
    c35 = `as.logical`(r69);
    if c35 then L124() else L30();
  L38():
    goto L39();
  L39():
    sym13 = ldf `as.double`;
    base13 = ldf `as.double` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L148() else L149();
  L107():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L24(dx13, dx17);
  L108():
    nx7 = force? nx6;
    ___ = ldf `[<-` in base;
    r57 = dyn ___(l2, dx13, nx7);
    goto L24(dx15, r57);
  L116():
    dy1 = force? dy;
    checkMissing(dy1);
    r63 = `>=`(dy1, 0.0);
    all = ldf all in base;
    r64 = dyn all(r63);
    check L117() else D31();
  L118():
    sym9 = ldf all;
    base9 = ldf all in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L119() else L120();
  L134():
    xmin2 = force? xmin1;
    checkMissing(xmin2);
    xmax1 = ld xmax;
    check L135() else D37();
  L141():
    xout2 = force? xout1;
    checkMissing(xout2);
    length2 = ldf length in base;
    r82 = dyn length2(xout2);
    check L142() else D41();
  L144():
    stop4 = ldf stop;
    check L145() else D43();
  D31():
    deopt 112 [r64];
  D37():
    deopt 138 [xmax1];
  D41():
    deopt 151 [r82];
  D43():
    deopt 158 [];
  L29(c31, r66):
    c32 = `as.logical`(r66);
    c33 = `||`(c31, c32);
    goto L28(c33);
  L30():
    goto L31(NULL);
  L31(r71):
    goto L32();
  L40(r87):
    st xout = r87;
    sym14 = ldf `.Call`;
    base14 = ldf `.Call` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L152() else L153();
  L117():
    goto L27(r64);
  L119():
    dy2 = ld dy;
    check L121() else D32();
  L120():
    r65 = dyn base9(<lang `<=`(dy, 0.0)>);
    goto L29(c26, r65);
  L124():
    stop3 = ldf stop;
    check L125() else D34();
  L135():
    xmax2 = force? xmax1;
    checkMissing(xmax2);
    n1 = ld n;
    check L136() else D38();
  L142():
    goto L37(r82);
  L145():
    r84 = dyn stop4("'spline' requires n >= 1");
    check L146() else D44();
  L148():
    xout3 = ld xout;
    check L150() else D45();
  L149():
    r86 = dyn base13(<sym xout>);
    goto L40(r86);
  D32():
    deopt 115 [c26, dy2];
  D34():
    deopt 124 [];
  D38():
    deopt 140 [n1];
  D44():
    deopt 160 [r84];
  D45():
    deopt 165 [xout3];
  L41(r90):
    st z = r90;
    method11 = ld method;
    check L161() else D52();
  L121():
    dy3 = force? dy2;
    checkMissing(dy3);
    r67 = `<=`(dy3, 0.0);
    all1 = ldf all in base;
    r68 = dyn all1(r67);
    check L122() else D33();
  L125():
    r70 = dyn stop3("'y' must be increasing or decreasing");
    check L126() else D35();
  L136():
    n2 = force? n1;
    checkMissing(n2);
    seq_int = ldf `seq.int` in base;
    r78 = dyn seq_int(xmin2, xmax2, n2);
    check L137() else D39();
  L146():
    goto L39();
  L150():
    xout4 = force? xout3;
    checkMissing(xout4);
    as_double = ldf `as.double` in base;
    r88 = dyn as_double(xout4);
    check L151() else D46();
  L152():
    C_SplineCoef = ld C_SplineCoef;
    check L154() else D47();
  L153():
    r89 = dyn base14(<sym C_SplineCoef>, <lang min(3, method)>, <sym x>, <sym y>);
    goto L41(r89);
  D33():
    deopt 120 [c26, r68];
  D35():
    deopt 126 [r70];
  D39():
    deopt 144 [r78];
  D46():
    deopt 168 [r88];
  D47():
    deopt 171 [C_SplineCoef];
  D52():
    deopt 183 [method11];
  L122():
    goto L29(c26, r68);
  L126():
    goto L31(r70);
  L137():
    goto L35(r78);
  L151():
    goto L40(r88);
  L154():
    C_SplineCoef1 = force? C_SplineCoef;
    checkMissing(C_SplineCoef1);
    sym15 = ldf min;
    base15 = ldf min in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L155() else L156();
  L161():
    method12 = force? method11;
    checkMissing(method12);
    r95 = `==`(method12, 4);
    c38 = `as.logical`(r95);
    if c38 then L162() else L43();
  L42(C_SplineCoef4, r92):
    x19 = ld x;
    check L159() else D50();
  L43():
    goto L44();
  L44():
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L166() else L167();
  L155():
    method9 = ld method;
    check L157() else D48();
  L156():
    r91 = dyn base15(3, <sym method>);
    goto L42(C_SplineCoef1, r91);
  L162():
    spl_coef_conv = ldf spl_coef_conv;
    check L163() else D53();
  D48():
    deopt 175 [C_SplineCoef1, method9];
  D50():
    deopt 178 [C_SplineCoef4, r92, x19];
  D53():
    deopt 188 [];
  L45(r102):
    popenv;
    return r102;
  L157():
    method10 = force? method9;
    checkMissing(method10);
    min1 = ldf min in base;
    r93 = dyn min1(3, method10);
    check L158() else D49();
  L159():
    x20 = force? x19;
    checkMissing(x20);
    y17 = ld y;
    check L160() else D51();
  L163():
    p13 = prom<V +>{
      hyman_filter = ldf hyman_filter;
      p12 = prom<V +>{
        z = ld z;
        z1 = force? z;
        checkMissing(z1);
        return z1;
      };
      r97 = dyn hyman_filter(p12);
      return r97;
    };
    r99 = dyn spl_coef_conv(p13);
    check L164() else D54();
  L166():
    xout5 = ld xout;
    check L168() else D55();
  L167():
    r101 = dyn base16[x, y](<sym xout>, <lang .Call(C_SplineEval, xout, z)>);
    goto L45(r101);
  D49():
    deopt 178 [C_SplineCoef1, r93];
  D51():
    deopt 179 [C_SplineCoef4, r92, x20, y17];
  D54():
    deopt 190 [r99];
  D55():
    deopt 196 [xout5];
  L158():
    goto L42(C_SplineCoef1, r93);
  L160():
    y18 = force? y17;
    checkMissing(y18);
    vargs = dots[r92, x20, y18];
    r94 = `.Call`(C_SplineCoef4, vargs, <missing>);
    goto L41(r94);
  L164():
    st z = r99;
    goto L44();
  L168():
    xout6 = force? xout5;
    checkMissing(xout6);
    sym17 = ldf `.Call`;
    base17 = ldf `.Call` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L169() else L170();
  L46(r104):
    list = ldf list in base;
    r106 = dyn list(xout6, r104);
    check L174() else D59();
  L169():
    C_SplineEval = ld C_SplineEval;
    check L171() else D56();
  L170():
    r103 = dyn base17(<sym C_SplineEval>, <sym xout>, <sym z>);
    goto L46(r103);
  D56():
    deopt 200 [C_SplineEval];
  D59():
    deopt 207 [r106];
  L171():
    C_SplineEval1 = force? C_SplineEval;
    checkMissing(C_SplineEval1);
    xout7 = ld xout;
    check L172() else D57();
  L174():
    goto L45(r106);
  D57():
    deopt 201 [C_SplineEval1, xout7];
  L172():
    xout8 = force? xout7;
    checkMissing(xout8);
    z2 = ld z;
    check L173() else D58();
  D58():
    deopt 202 [C_SplineEval1, xout8, z2];
  L173():
    z3 = force? z2;
    checkMissing(z3);
    vargs1 = dots[xout8, z3];
    r105 = `.Call`(C_SplineEval1, vargs1, <missing>);
    goto L46(r105);
  }
}