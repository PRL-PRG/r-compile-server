fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2046023802;
    st psmirnov = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2046023802(q, sizes, z, alternative, exact, simulate, B, `lower.tail`, `log.p`) {
  (reg q:*, reg sizes:*, reg z:*, reg alternative:*, reg exact:*, reg simulate:*, reg B:*, reg lower_tail:*, reg log_p:*) -+> V { var q:*, var sizes:*, var z:*, reg z_isMissing:L, reg z_orDefault:*, var alternative:*, reg alternative_isMissing:L, reg alternative_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var exact:*, reg exact_isMissing:L, reg exact_orDefault:*, var simulate:*, reg simulate_isMissing:L, reg simulate_orDefault:*, var B:*, reg B_isMissing:L, reg B_orDefault:*, var `lower.tail`:*, reg lower_tail_isMissing:L, reg lower_tail_orDefault:*, var `log.p`:*, reg log_p_isMissing:L, reg log_p_orDefault:*, reg match_arg:cls, reg alternative1:*, reg alternative2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg q1:*, reg q2:V, reg is_numeric:cls, reg r8:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg q3:*, reg q4:V, reg c2:L, reg r11:V, reg c3:L, reg l:*, reg storage_mode__:cls, reg r12:V, reg r13:V, reg stop:cls, reg r15:V, reg q5:*, reg q6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg q7:*, reg q8:V, reg is_na:cls, reg r18:V, reg l1:*, reg c4:L, reg r20:R, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg ___:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg q9:*, reg q10:V, reg r26:V, reg any:cls, reg r27:V, reg c5:L, reg lower_tail1:*, reg lower_tail2:V, reg r28:V, reg log_p1:*, reg log_p2:V, reg c6:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg p2:*, reg p3:V, reg r31:V, reg p4:*, reg p5:V, reg l4:*, reg c7:L, reg p7:V, reg l6:*, reg dr2:V, reg dc1:L, reg dx2:V, reg p9:V, reg dx3:V, reg i3:*, reg i4:V, reg ___1:cls, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg q11:*, reg q12:V, reg r36:V, reg any1:cls, reg r37:V, reg c8:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg lower_tail3:*, reg lower_tail4:V, reg as_numeric:cls, reg r40:V, reg log_p3:*, reg log_p4:V, reg c9:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg p11:*, reg p12:V, reg r43:V, reg p13:*, reg p14:V, reg l7:*, reg c10:L, reg p16:V, reg l9:*, reg dr4:V, reg dc2:L, reg dx4:V, reg p18:V, reg dx5:V, reg i5:*, reg i6:V, reg ___2:cls, reg r45:V, reg which:cls, reg i7:*, reg i8:V, reg i9:*, reg i10:V, reg r46:V, reg i11:*, reg i12:V, reg r47:V, reg r48:V, reg p20:p(V +), reg r50:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r51:V, reg r52:V, reg IND:*, reg IND1:V, reg length:cls, reg r53:V, reg r54:V, reg c11:L, reg ret:*, reg ret1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r57:V, reg r58:V, reg sizes1:*, reg sizes2:V, reg length1:cls, reg r59:V, reg r60:V, reg c12:L, reg stop1:cls, reg r61:V, reg sizes3:*, reg sizes4:V, reg c13:L, reg sizes6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __:cls, reg r63:V, reg sizes7:*, reg sizes8:V, reg c14:L, reg sizes10:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __1:cls, reg r64:V, reg n_x:*, reg n_x1:V, reg r65:V, reg c15:L, reg stop2:cls, reg r66:V, reg n_y:*, reg n_y1:V, reg r68:V, reg c16:L, reg stop3:cls, reg r69:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r71:V, reg r72:V, reg n_x2:*, reg n_x3:V, reg r73:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r74:V, reg r75:V, reg n_y2:*, reg n_y3:V, reg r76:V, reg n_x4:*, reg n_x5:V, reg n_y4:*, reg n_y5:V, reg r77:V, reg n_x6:*, reg n_x7:V, reg n_y6:*, reg n_y7:V, reg r78:V, reg n_x8:*, reg n_x9:V, reg n_y8:*, reg n_y9:V, reg r79:V, reg r80:V, reg exact1:*, reg exact2:V, reg c17:L, reg c19:V, reg simulate1:*, reg simulate2:V, reg r81:V, reg c20:L, reg c21:V, reg exact3:*, reg exact4:V, reg r82:V, reg c23:L, reg simulate3:*, reg simulate4:V, reg c24:L, reg psmirnov_simul:cls, reg q13:*, reg q14:V, reg c25:L, reg q16:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg IND2:*, reg IND3:V, reg __2:cls, reg r83:V, reg p21:p(V +), reg sizes11:*, reg sizes12:V, reg p22:p(V +), reg z1:*, reg z2:V, reg p23:p(V +), reg alternative3:*, reg alternative4:V, reg p24:p(V +), reg lower_tail5:*, reg lower_tail6:V, reg p25:p(V +), reg log_p5:*, reg log_p6:V, reg p26:p(V +), reg B1:*, reg B2:V, reg p27:p(V +), reg r91:V, reg r92:V, reg psmirnov_asymp:cls, reg q17:*, reg q18:V, reg c26:L, reg q20:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg IND4:*, reg IND5:V, reg __3:cls, reg r93:V, reg p28:p(V +), reg sizes13:*, reg sizes14:V, reg p29:p(V +), reg alternative5:*, reg alternative6:V, reg p30:p(V +), reg lower_tail7:*, reg lower_tail8:V, reg p31:p(V +), reg log_p7:*, reg log_p8:V, reg p32:p(V +), reg r99:V, reg l10:*, reg c27:L, reg r101:V, reg l12:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg IND6:*, reg IND7:V, reg ___3:cls, reg r104:V, reg ret2:*, reg ret3:V, reg psmirnov_exact:cls, reg q21:*, reg q22:V, reg c28:L, reg q24:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg IND8:*, reg IND9:V, reg __4:cls, reg r107:V, reg p33:p(V +), reg sizes15:*, reg sizes16:V, reg p34:p(V +), reg z3:*, reg z4:V, reg p35:p(V +), reg alternative7:*, reg alternative8:V, reg p36:p(V +), reg lower_tail9:*, reg lower_tail10:V, reg p37:p(V +), reg log_p9:*, reg log_p10:V, reg p38:p(V +), reg r114:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r115:V, reg r116:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r117:V, reg r118:V, reg r119:*, reg r120:V, reg is_finite:cls, reg r121:V, reg all:cls, reg r122:V, reg c29:L, reg r123:*, reg r124:V, reg r125:V, reg warning:cls, reg r126:V, reg psmirnov_simul1:cls, reg q25:*, reg q26:V, reg c30:L, reg q28:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg IND10:*, reg IND11:V, reg __5:cls, reg r127:V, reg p39:p(V +), reg sizes17:*, reg sizes18:V, reg p40:p(V +), reg z5:*, reg z6:V, reg p41:p(V +), reg alternative9:*, reg alternative10:V, reg p42:p(V +), reg lower_tail11:*, reg lower_tail12:V, reg p43:p(V +), reg log_p11:*, reg log_p12:V, reg p44:p(V +), reg B3:*, reg B4:V, reg p45:p(V +), reg r135:V, reg l13:*, reg c31:L, reg r137:V, reg l15:*, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg IND12:*, reg IND13:V, reg ___4:cls, reg r140:V, reg ret4:*, reg ret5:V |
    mkenv;
    st q = q;
    st sizes = sizes;
    z_isMissing = missing.0(z);
    if z_isMissing then L0(NULL) else L0(z);
  L0(z_orDefault):
    st z = z_orDefault;
    alternative_isMissing = missing.0(alternative);
    if alternative_isMissing then L1() else L2(alternative);
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
      r2 = dyn c("two.sided", "less", "greater");
      goto L0(r2);
    L2():
      r = dyn base("two.sided", "less", "greater");
      goto L0(r);
    };
    goto L2(p);
  L2(alternative_orDefault):
    st alternative = alternative_orDefault;
    exact_isMissing = missing.0(exact);
    if exact_isMissing then L3(TRUE) else L3(exact);
  L3(exact_orDefault):
    st exact = exact_orDefault;
    simulate_isMissing = missing.0(simulate);
    if simulate_isMissing then L4(FALSE) else L4(simulate);
  L4(simulate_orDefault):
    st simulate = simulate_orDefault;
    B_isMissing = missing.0(B);
    if B_isMissing then L5(2000.0) else L5(B);
  L5(B_orDefault):
    st B = B_orDefault;
    lower_tail_isMissing = missing.0(lower_tail);
    if lower_tail_isMissing then L6(TRUE) else L6(lower_tail);
  L6(lower_tail_orDefault):
    st `lower.tail` = lower_tail_orDefault;
    log_p_isMissing = missing.0(log_p);
    if log_p_isMissing then L7(FALSE) else L7(log_p);
  L7(log_p_orDefault):
    st `log.p` = log_p_orDefault;
    match_arg = ldf `match.arg`;
    check L56() else D0();
  D0():
    deopt 1 [];
  L56():
    p1 = prom<V +>{
      alternative1 = ld alternative;
      alternative2 = force? alternative1;
      checkMissing(alternative2);
      return alternative2;
    };
    r5 = dyn match_arg(p1);
    check L57() else D1();
  D1():
    deopt 3 [r5];
  L57():
    st alternative = r5;
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L58() else L59();
  L8(r7):
    c1 = `as.logical`(r7);
    if c1 then L62() else L9();
  L58():
    q1 = ld q;
    check L60() else D2();
  L59():
    r6 = dyn base1(<sym q>);
    goto L8(r6);
  D2():
    deopt 7 [q1];
  L9():
    stop = ldf stop;
    check L71() else D7();
  L13():
    q5 = ld q;
    check L73() else D9();
  L60():
    q2 = force? q1;
    checkMissing(q2);
    is_numeric = ldf `is.numeric` in base;
    r8 = dyn is_numeric(q2);
    check L61() else D3();
  L62():
    sym2 = ldf `is.double`;
    base2 = ldf `is.double` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L63() else L64();
  D3():
    deopt 10 [r8];
  D7():
    deopt 26 [];
  D9():
    deopt 29 [q5];
  L10(r10):
    r11 = `!`(r10);
    c3 = `as.logical`(r11);
    if c3 then L66() else L11();
  L61():
    goto L8(r8);
  L63():
    q3 = ld q;
    check L65() else D4();
  L64():
    r9 = dyn base2(<sym q>);
    goto L10(r9);
  L71():
    r15 = dyn stop("argument 'q' must be numeric");
    check L72() else D8();
  L73():
    q6 = force? q5;
    checkMissing(q6);
    st ret = q6;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L74() else L75();
  D4():
    deopt 12 [q3];
  D8():
    deopt 28 [r15];
  L11():
    goto L12(NULL);
  L12(r13):
    goto L13();
  L14(r17):
    st i1 = r17;
    l1 = ld ret;
    c4 = `is.object`(l1);
    if c4 then L78() else L79(NA_REAL, l1);
  L65():
    q4 = force? q3;
    checkMissing(q4);
    c2 = `is.double`(q4);
    goto L10(c2);
  L66():
    l = ld q;
    storage_mode__ = ldf `storage.mode<-`;
    check L67() else D5();
  L72():
    goto L13();
  L74():
    q7 = ld q;
    check L76() else D10();
  L75():
    r16 = dyn base3(<sym q>);
    goto L14(r16);
  D5():
    deopt 19 ["double", l, "double"];
  D10():
    deopt 34 [q7];
  L15(dx1):
    st ret = dx1;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L82() else L83();
  L67():
    r12 = dyn storage_mode__(l, NULL, "double");
    check L68() else D6();
  L76():
    q8 = force? q7;
    checkMissing(q8);
    is_na = ldf `is.na` in base;
    r18 = dyn is_na(q8);
    check L77() else D11();
  L78():
    dr = tryDispatchBuiltin.0("[<-", l1, NA_REAL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L80() else L79(NA_REAL, dr);
  L79(r20, l3):
    i1 = ld i1;
    check L81() else D12();
  D6():
    deopt 21 ["double", r12];
  D11():
    deopt 37 [r18];
  D12():
    deopt 42 [r20, l3, NA_REAL, i1];
  L16(r25):
    c5 = `as.logical`(r25);
    if c5 then L86() else L17();
  L68():
    st q = r12;
    goto L12("double");
  L77():
    goto L14(r18);
  L80():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L81():
    i2 = force? i1;
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l3, NA_REAL, i2);
    goto L15(r23);
  L82():
    q9 = ld q;
    check L84() else D13();
  L83():
    r24 = dyn base4(<lang `<-`(i2, `(`(`<=`(q, 0.0)))>);
    goto L16(r24);
  D13():
    deopt 48 [q9];
  L17():
    goto L22();
  L22():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L100() else L101();
  L84():
    q10 = force? q9;
    checkMissing(q10);
    r26 = `<=`(q10, 0.0);
    st i2 = r26;
    any = ldf any in base;
    r27 = dyn any(r26);
    check L85() else D14();
  L86():
    lower_tail1 = ld `lower.tail`;
    check L87() else D15();
  D14():
    deopt 54 [r27];
  D15():
    deopt 56 [1.0, lower_tail1];
  L23(r35):
    c8 = `as.logical`(r35);
    if c8 then L104() else L24();
  L85():
    goto L16(r27);
  L87():
    lower_tail2 = force? lower_tail1;
    checkMissing(lower_tail2);
    r28 = `-`(1.0, lower_tail2);
    st p = r28;
    log_p1 = ld `log.p`;
    check L88() else D16();
  L100():
    q11 = ld q;
    check L102() else D20();
  L101():
    r34 = dyn base6(<lang `<-`(i3, `(`(`>`(q, 1.0)))>);
    goto L23(r34);
  D16():
    deopt 60 [log_p1];
  D20():
    deopt 80 [q11];
  L24():
    goto L30();
  L30():
    which = ldf which;
    check L121() else D28();
  L88():
    log_p2 = force? log_p1;
    checkMissing(log_p2);
    c6 = `as.logical`(log_p2);
    if c6 then L89() else L18();
  L102():
    q12 = force? q11;
    checkMissing(q12);
    r36 = `>`(q12, 1.0);
    st i3 = r36;
    any1 = ldf any in base;
    r37 = dyn any1(r36);
    check L103() else D21();
  L104():
    sym7 = ldf `as.numeric`;
    base7 = ldf `as.numeric` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L105() else L106();
  D21():
    deopt 86 [r37];
  D28():
    deopt 113 [];
  L18():
    goto L20();
  L20():
    p4 = ld p;
    check L94() else D18();
  L25(r39):
    st p = r39;
    log_p3 = ld `log.p`;
    check L109() else D24();
  L89():
    sym5 = ldf log;
    base5 = ldf log in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L90() else L91();
  L103():
    goto L23(r37);
  L105():
    lower_tail3 = ld `lower.tail`;
    check L107() else D22();
  L106():
    r38 = dyn base7(<sym lower.tail>);
    goto L25(r38);
  L121():
    p20 = prom<V +>{
      i7 = ld i1;
      i8 = force? i7;
      checkMissing(i8);
      i9 = ld i2;
      i10 = force? i9;
      checkMissing(i10);
      r46 = `||`(i8, i10);
      i11 = ld i3;
      i12 = force? i11;
      checkMissing(i12);
      r47 = `||`(r46, i12);
      r48 = `!`(r47);
      return r48;
    };
    r50 = dyn which(p20);
    check L122() else D29();
  D18():
    deopt 69 [p4];
  D22():
    deopt 89 [lower_tail3];
  D24():
    deopt 94 [log_p3];
  D29():
    deopt 115 [r50];
  L19(r30):
    st p = r30;
    goto L20();
  L90():
    p2 = ld p;
    check L92() else D17();
  L91():
    r29 = dyn base5(<sym p>);
    goto L19(r29);
  L94():
    p5 = force? p4;
    checkMissing(p5);
    l4 = ld ret;
    c7 = `is.object`(l4);
    if c7 then L95() else L96(p5, l4);
  L107():
    lower_tail4 = force? lower_tail3;
    checkMissing(lower_tail4);
    as_numeric = ldf `as.numeric` in base;
    r40 = dyn as_numeric(lower_tail4);
    check L108() else D23();
  L109():
    log_p4 = force? log_p3;
    checkMissing(log_p4);
    c9 = `as.logical`(log_p4);
    if c9 then L110() else L26();
  L122():
    st IND = r50;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L123() else L124();
  D17():
    deopt 63 [p2];
  D23():
    deopt 92 [r40];
  L21(p9, dx3):
    st ret = dx3;
    goto L22();
  L26():
    goto L28();
  L28():
    p13 = ld p;
    check L115() else D26();
  L31(r52):
    r54 = `!`(r52);
    c11 = `as.logical`(r54);
    if c11 then L127() else L32();
  L92():
    p3 = force? p2;
    checkMissing(p3);
    r31 = log(p3, 2.718281828459045);
    goto L19(r31);
  L95():
    dr2 = tryDispatchBuiltin.0("[<-", l4, p5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L97() else L96(p5, dr2);
  L96(p7, l6):
    i3 = ld i2;
    check L98() else D19();
  L108():
    goto L25(r40);
  L110():
    sym8 = ldf log;
    base8 = ldf log in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L111() else L112();
  L123():
    IND = ld IND;
    check L125() else D30();
  L124():
    r51 = dyn base9(<sym IND>);
    goto L31(r51);
  D19():
    deopt 72 [p7, l6, p5, i3];
  D26():
    deopt 103 [p13];
  D30():
    deopt 119 [IND];
  L27(r42):
    st p = r42;
    goto L28();
  L32():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L131() else L132();
  L97():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L21(p5, dx2);
  L98():
    i4 = force? i3;
    ___1 = ldf `[<-` in base;
    r33 = dyn ___1(l6, p5, i4);
    goto L21(p7, r33);
  L111():
    p11 = ld p;
    check L113() else D25();
  L112():
    r41 = dyn base8(<sym p>);
    goto L27(r41);
  L115():
    p14 = force? p13;
    checkMissing(p14);
    l7 = ld ret;
    c10 = `is.object`(l7);
    if c10 then L116() else L117(p14, l7);
  L125():
    IND1 = force? IND;
    checkMissing(IND1);
    length = ldf length in base;
    r53 = dyn length(IND1);
    check L126() else D31();
  L127():
    ret = ld ret;
    check L128() else D32();
  D25():
    deopt 97 [p11];
  D31():
    deopt 122 [r53];
  D32():
    deopt 124 [ret];
  L29(p18, dx5):
    st ret = dx5;
    goto L30();
  L34(r58):
    r60 = `!=`(r58, 2);
    c12 = `as.logical`(r60);
    if c12 then L135() else L35();
  L113():
    p12 = force? p11;
    checkMissing(p12);
    r43 = log(p12, 2.718281828459045);
    goto L27(r43);
  L116():
    dr4 = tryDispatchBuiltin.0("[<-", l7, p14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L118() else L117(p14, dr4);
  L117(p16, l9):
    i5 = ld i3;
    check L119() else D27();
  L126():
    goto L31(r53);
  L128():
    ret1 = force? ret;
    checkMissing(ret1);
    popenv;
    return ret1;
  L131():
    sizes1 = ld sizes;
    check L133() else D33();
  L132():
    r57 = dyn base10(<sym sizes>);
    goto L34(r57);
  D27():
    deopt 106 [p16, l9, p14, i5];
  D33():
    deopt 131 [sizes1];
  L35():
    goto L36();
  L36():
    sizes3 = ld sizes;
    check L139() else D37();
  L118():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L29(p14, dx4);
  L119():
    i6 = force? i5;
    ___2 = ldf `[<-` in base;
    r45 = dyn ___2(l9, p14, i6);
    goto L29(p16, r45);
  L133():
    sizes2 = force? sizes1;
    checkMissing(sizes2);
    length1 = ldf length in base;
    r59 = dyn length1(sizes2);
    check L134() else D34();
  L135():
    stop1 = ldf stop;
    check L136() else D35();
  D34():
    deopt 134 [r59];
  D35():
    deopt 138 [];
  D37():
    deopt 143 [sizes3];
  L134():
    goto L34(r59);
  L136():
    r61 = dyn stop1("argument 'sizes' must be a vector of length 2");
    check L137() else D36();
  L139():
    sizes4 = force? sizes3;
    checkMissing(sizes4);
    c13 = `is.object`(sizes4);
    if c13 then L140() else L141(sizes4);
  D36():
    deopt 140 [r61];
  L37(dx7):
    st `n.x` = dx7;
    sizes7 = ld sizes;
    check L143() else D38();
  L137():
    goto L36();
  L140():
    dr6 = tryDispatchBuiltin.1("[", sizes4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L142() else L141(dr6);
  L141(sizes6):
    __ = ldf `[` in base;
    r63 = dyn __(sizes6, 1);
    goto L37(r63);
  D38():
    deopt 149 [sizes7];
  L142():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L37(dx6);
  L143():
    sizes8 = force? sizes7;
    checkMissing(sizes8);
    c14 = `is.object`(sizes8);
    if c14 then L144() else L145(sizes8);
  L38(dx9):
    st `n.y` = dx9;
    n_x = ld `n.x`;
    check L147() else D39();
  L144():
    dr8 = tryDispatchBuiltin.1("[", sizes8);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L146() else L145(dr8);
  L145(sizes10):
    __1 = ldf `[` in base;
    r64 = dyn __1(sizes10, 2);
    goto L38(r64);
  D39():
    deopt 155 [n_x];
  L146():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L38(dx8);
  L147():
    n_x1 = force? n_x;
    checkMissing(n_x1);
    r65 = `<`(n_x1, 1.0);
    c15 = `as.logical`(r65);
    if c15 then L148() else L39();
  L39():
    goto L40();
  L40():
    n_y = ld `n.y`;
    check L152() else D42();
  L148():
    stop2 = ldf stop;
    check L149() else D40();
  D40():
    deopt 160 [];
  D42():
    deopt 165 [n_y];
  L149():
    r66 = dyn stop2("not enough 'x' data");
    check L150() else D41();
  L152():
    n_y1 = force? n_y;
    checkMissing(n_y1);
    r68 = `<`(n_y1, 1.0);
    c16 = `as.logical`(r68);
    if c16 then L153() else L41();
  D41():
    deopt 162 [r66];
  L41():
    goto L42();
  L42():
    sym11 = ldf floor;
    base11 = ldf floor in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L157() else L158();
  L150():
    goto L40();
  L153():
    stop3 = ldf stop;
    check L154() else D43();
  D43():
    deopt 170 [];
  L43(r72):
    st `n.x` = r72;
    sym12 = ldf floor;
    base12 = ldf floor in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L160() else L161();
  L154():
    r69 = dyn stop3("not enough 'y' data");
    check L155() else D44();
  L157():
    n_x2 = ld `n.x`;
    check L159() else D45();
  L158():
    r71 = dyn base11(<sym n.x>);
    goto L43(r71);
  D44():
    deopt 172 [r69];
  D45():
    deopt 176 [n_x2];
  L44(r75):
    st `n.y` = r75;
    n_x4 = ld `n.x`;
    check L163() else D47();
  L155():
    goto L42();
  L159():
    n_x3 = force? n_x2;
    checkMissing(n_x3);
    r73 = floor(n_x3);
    goto L43(r73);
  L160():
    n_y2 = ld `n.y`;
    check L162() else D46();
  L161():
    r74 = dyn base12(<sym n.y>);
    goto L44(r74);
  D46():
    deopt 181 [n_y2];
  D47():
    deopt 185 [n_x4];
  L162():
    n_y3 = force? n_y2;
    checkMissing(n_y3);
    r76 = floor(n_y3);
    goto L44(r76);
  L163():
    n_x5 = force? n_x4;
    checkMissing(n_x5);
    n_y4 = ld `n.y`;
    check L164() else D48();
  D48():
    deopt 186 [n_x5, n_y4];
  L164():
    n_y5 = force? n_y4;
    checkMissing(n_y5);
    r77 = `+`(n_x5, n_y5);
    st N = r77;
    n_x6 = ld `n.x`;
    check L165() else D49();
  D49():
    deopt 190 [n_x6];
  L165():
    n_x7 = force? n_x6;
    checkMissing(n_x7);
    n_y6 = ld `n.y`;
    check L166() else D50();
  D50():
    deopt 191 [n_x7, n_y6];
  L166():
    n_y7 = force? n_y6;
    checkMissing(n_y7);
    r78 = `*`(n_x7, n_y7);
    n_x8 = ld `n.x`;
    check L167() else D51();
  D51():
    deopt 193 [r78, n_x8];
  L167():
    n_x9 = force? n_x8;
    checkMissing(n_x9);
    n_y8 = ld `n.y`;
    check L168() else D52();
  D52():
    deopt 194 [r78, n_x9, n_y8];
  L168():
    n_y9 = force? n_y8;
    checkMissing(n_y9);
    r79 = `+`(n_x9, n_y9);
    r80 = `/`(r78, r79);
    st n = r80;
    exact1 = ld exact;
    check L169() else D53();
  D53():
    deopt 199 [exact1];
  L169():
    exact2 = force? exact1;
    checkMissing(exact2);
    c17 = `as.logical`(exact2);
    if c17 then L170() else L45(c17);
  L45(c19):
    st exact = c19;
    exact3 = ld exact;
    check L173() else D55();
  L170():
    simulate1 = ld simulate;
    check L171() else D54();
  D54():
    deopt 201 [c17, simulate1];
  D55():
    deopt 206 [exact3];
  L171():
    simulate2 = force? simulate1;
    checkMissing(simulate2);
    r81 = `!`(simulate2);
    c20 = `as.logical`(r81);
    c21 = `&&`(c17, c20);
    goto L45(c21);
  L173():
    exact4 = force? exact3;
    checkMissing(exact4);
    r82 = `!`(exact4);
    c23 = `as.logical`(r82);
    if c23 then L174() else L46();
  L46():
    psmirnov_exact = ldf psmirnov_exact;
    check L189() else D63();
  L174():
    simulate3 = ld simulate;
    check L175() else D56();
  D56():
    deopt 209 [simulate3];
  D63():
    deopt 240 [];
  L175():
    simulate4 = force? simulate3;
    checkMissing(simulate4);
    c24 = `as.logical`(simulate4);
    if c24 then L176() else L47();
  L189():
    p33 = prom<V +>{
      q21 = ld q;
      q22 = force? q21;
      checkMissing(q22);
      c28 = `is.object`(q22);
      if c28 then L1() else L2(q22);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", q22);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(q24):
      IND8 = ld IND;
      IND9 = force? IND8;
      __4 = ldf `[` in base;
      r107 = dyn __4(q24, IND9);
      goto L0(r107);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p34 = prom<V +>{
      sizes15 = ld sizes;
      sizes16 = force? sizes15;
      checkMissing(sizes16);
      return sizes16;
    };
    p35 = prom<V +>{
      z3 = ld z;
      z4 = force? z3;
      checkMissing(z4);
      return z4;
    };
    p36 = prom<V +>{
      alternative7 = ld alternative;
      alternative8 = force? alternative7;
      checkMissing(alternative8);
      return alternative8;
    };
    p37 = prom<V +>{
      lower_tail9 = ld `lower.tail`;
      lower_tail10 = force? lower_tail9;
      checkMissing(lower_tail10);
      return lower_tail10;
    };
    p38 = prom<V +>{
      log_p9 = ld `log.p`;
      log_p10 = force? log_p9;
      checkMissing(log_p10);
      return log_p10;
    };
    r114 = dyn psmirnov_exact(p33, p34, p35, p36, p37, p38);
    check L190() else D64();
  D64():
    deopt 247 [r114];
  L47():
    psmirnov_asymp = ldf psmirnov_asymp;
    check L180() else D59();
  L48(r92):
    l10 = ld ret;
    c27 = `is.object`(l10);
    if c27 then L182() else L183(r92, l10);
  L176():
    psmirnov_simul = ldf psmirnov_simul;
    check L177() else D57();
  L190():
    st r = r114;
    sym13 = ldf all;
    base13 = ldf all in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L191() else L192();
  D57():
    deopt 212 [];
  D59():
    deopt 222 [];
  L49(dx15):
    st ret = dx15;
    ret2 = ld ret;
    check L186() else D62();
  L51(r116):
    c29 = `as.logical`(r116);
    if c29 then L198() else L53();
  L177():
    p21 = prom<V +>{
      q13 = ld q;
      q14 = force? q13;
      checkMissing(q14);
      c25 = `is.object`(q14);
      if c25 then L1() else L2(q14);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", q14);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(q16):
      IND2 = ld IND;
      IND3 = force? IND2;
      __2 = ldf `[` in base;
      r83 = dyn __2(q16, IND3);
      goto L0(r83);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p22 = prom<V +>{
      sizes11 = ld sizes;
      sizes12 = force? sizes11;
      checkMissing(sizes12);
      return sizes12;
    };
    p23 = prom<V +>{
      z1 = ld z;
      z2 = force? z1;
      checkMissing(z2);
      return z2;
    };
    p24 = prom<V +>{
      alternative3 = ld alternative;
      alternative4 = force? alternative3;
      checkMissing(alternative4);
      return alternative4;
    };
    p25 = prom<V +>{
      lower_tail5 = ld `lower.tail`;
      lower_tail6 = force? lower_tail5;
      checkMissing(lower_tail6);
      return lower_tail6;
    };
    p26 = prom<V +>{
      log_p5 = ld `log.p`;
      log_p6 = force? log_p5;
      checkMissing(log_p6);
      return log_p6;
    };
    p27 = prom<V +>{
      B1 = ld B;
      B2 = force? B1;
      checkMissing(B2);
      return B2;
    };
    r91 = dyn psmirnov_simul(p21, p22, p23, p24, p25, p26, p27);
    check L178() else D58();
  L180():
    p28 = prom<V +>{
      q17 = ld q;
      q18 = force? q17;
      checkMissing(q18);
      c26 = `is.object`(q18);
      if c26 then L1() else L2(q18);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", q18);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(q20):
      IND4 = ld IND;
      IND5 = force? IND4;
      __3 = ldf `[` in base;
      r93 = dyn __3(q20, IND5);
      goto L0(r93);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p29 = prom<V +>{
      sizes13 = ld sizes;
      sizes14 = force? sizes13;
      checkMissing(sizes14);
      return sizes14;
    };
    p30 = prom<V +>{
      alternative5 = ld alternative;
      alternative6 = force? alternative5;
      checkMissing(alternative6);
      return alternative6;
    };
    p31 = prom<V +>{
      lower_tail7 = ld `lower.tail`;
      lower_tail8 = force? lower_tail7;
      checkMissing(lower_tail8);
      return lower_tail8;
    };
    p32 = prom<V +>{
      log_p7 = ld `log.p`;
      log_p8 = force? log_p7;
      checkMissing(log_p8);
      return log_p8;
    };
    r99 = dyn psmirnov_asymp(p28, p29, p30, p31, p32);
    check L181() else D60();
  L182():
    dr14 = tryDispatchBuiltin.0("[<-", l10, r92);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L184() else L183(r92, dr14);
  L183(r101, l12):
    IND6 = ld IND;
    check L185() else D61();
  L191():
    sym14 = ldf `is.finite`;
    base14 = ldf `is.finite` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L193() else L194();
  L192():
    r115 = dyn base13(<lang is.finite(r)>);
    goto L51(r115);
  D58():
    deopt 220 [r91];
  D60():
    deopt 228 [r99];
  D61():
    deopt 230 [r101, l12, r92, IND6];
  D62():
    deopt 234 [ret2];
  L52(r118):
    all = ldf all in base;
    r122 = dyn all(r118);
    check L197() else D67();
  L53():
    warning = ldf warning;
    check L201() else D69();
  L54(r125):
    l13 = ld ret;
    c31 = `is.object`(l13);
    if c31 then L205() else L206(r125, l13);
  L178():
    goto L48(r91);
  L181():
    goto L48(r99);
  L184():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L49(dx14);
  L185():
    IND7 = force? IND6;
    ___3 = ldf `[<-` in base;
    r104 = dyn ___3(l12, r92, IND7);
    goto L49(r104);
  L186():
    ret3 = force? ret2;
    checkMissing(ret3);
    popenv;
    return ret3;
  L193():
    r119 = ld r;
    check L195() else D65();
  L194():
    r117 = dyn base14(<sym r>);
    goto L52(r117);
  L198():
    r123 = ld r;
    check L199() else D68();
  D65():
    deopt 253 [r119];
  D67():
    deopt 258 [r122];
  D68():
    deopt 259 [r123];
  D69():
    deopt 262 [];
  L55(dx21):
    st ret = dx21;
    ret4 = ld ret;
    check L209() else D74();
  L195():
    r120 = force? r119;
    checkMissing(r120);
    is_finite = ldf `is.finite` in base;
    r121 = dyn is_finite(r120);
    check L196() else D66();
  L197():
    goto L51(r122);
  L199():
    r124 = force? r123;
    checkMissing(r124);
    goto L54(r124);
  L201():
    r126 = dyn warning("computation of exact probability failed, returning Monte Carlo approximation");
    check L202() else D70();
  L205():
    dr20 = tryDispatchBuiltin.0("[<-", l13, r125);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L207() else L206(r125, dr20);
  L206(r137, l15):
    IND12 = ld IND;
    check L208() else D73();
  D66():
    deopt 256 [r121];
  D70():
    deopt 264 [r126];
  D73():
    deopt 276 [r137, l15, r125, IND12];
  D74():
    deopt 280 [ret4];
  L196():
    goto L52(r121);
  L202():
    psmirnov_simul1 = ldf psmirnov_simul;
    check L203() else D71();
  L207():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L55(dx20);
  L208():
    IND13 = force? IND12;
    ___4 = ldf `[<-` in base;
    r140 = dyn ___4(l15, r125, IND13);
    goto L55(r140);
  L209():
    ret5 = force? ret4;
    checkMissing(ret5);
    popenv;
    return ret5;
  D71():
    deopt 266 [];
  L203():
    p39 = prom<V +>{
      q25 = ld q;
      q26 = force? q25;
      checkMissing(q26);
      c30 = `is.object`(q26);
      if c30 then L1() else L2(q26);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", q26);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(q28):
      IND10 = ld IND;
      IND11 = force? IND10;
      __5 = ldf `[` in base;
      r127 = dyn __5(q28, IND11);
      goto L0(r127);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p40 = prom<V +>{
      sizes17 = ld sizes;
      sizes18 = force? sizes17;
      checkMissing(sizes18);
      return sizes18;
    };
    p41 = prom<V +>{
      z5 = ld z;
      z6 = force? z5;
      checkMissing(z6);
      return z6;
    };
    p42 = prom<V +>{
      alternative9 = ld alternative;
      alternative10 = force? alternative9;
      checkMissing(alternative10);
      return alternative10;
    };
    p43 = prom<V +>{
      lower_tail11 = ld `lower.tail`;
      lower_tail12 = force? lower_tail11;
      checkMissing(lower_tail12);
      return lower_tail12;
    };
    p44 = prom<V +>{
      log_p11 = ld `log.p`;
      log_p12 = force? log_p11;
      checkMissing(log_p12);
      return log_p12;
    };
    p45 = prom<V +>{
      B3 = ld B;
      B4 = force? B3;
      checkMissing(B4);
      return B4;
    };
    r135 = dyn psmirnov_simul1(p39, p40, p41, p42, p43, p44, p45);
    check L204() else D72();
  D72():
    deopt 274 [r135];
  L204():
    goto L54(r135);
  }
}