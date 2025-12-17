fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4169359922;
    st dmultinom = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4169359922(x, size, prob, log) {
  (reg x:*, reg size:*, reg prob:*, reg log:*) -+> V { var x:*, var size:*, reg size_isMissing:L, reg size_orDefault:*, var prob:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg prob1:*, reg prob2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg length1:cls, reg r5:V, reg K:*, reg K1:V, reg r6:V, reg c:L, reg stop:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg prob3:*, reg prob4:V, reg is_finite:cls, reg r13:V, reg r14:V, reg any:cls, reg r15:V, reg c1:L, reg c2:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg c6:L, reg r17:V, reg prob5:*, reg prob6:V, reg r18:V, reg any1:cls, reg r19:V, reg c7:L, reg c8:V, reg c10:L, reg c11:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg c15:L, reg r21:V, reg prob7:*, reg prob8:V, reg sum:cls, reg r22:V, reg r23:V, reg c16:L, reg c17:V, reg c19:L, reg stop1:cls, reg r24:V, reg prob9:*, reg prob10:V, reg s:*, reg s1:V, reg r26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg x3:*, reg x4:V, reg r29:V, reg as_integer:cls, reg r30:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg x5:*, reg x6:V, reg r33:V, reg any2:cls, reg r34:V, reg c20:L, reg stop2:cls, reg r35:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg r38:V, reg x7:*, reg x8:V, reg sum1:cls, reg r39:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg size1:*, reg size2:V, reg c21:V, reg c22:L, reg N:*, reg N1:V, reg size3:*, reg size4:V, reg N3:*, reg N4:V, reg r42:V, reg c23:L, reg stop3:cls, reg r43:V, reg prob11:*, reg prob12:V, reg r44:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r45:V, reg r46:V, reg i0:*, reg i1:V, reg any3:cls, reg r47:V, reg c24:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r48:V, reg r49:V, reg x9:*, reg x10:V, reg c25:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i2:*, reg i3:V, reg __:cls, reg r50:V, reg r51:V, reg any4:cls, reg r52:V, reg c26:L, reg log1:*, reg log2:V, reg c27:L, reg r53:R, reg sym12:cls, reg base12:cls, reg guard12:L, reg r56:V, reg r57:V, reg i4:*, reg i5:V, reg all:cls, reg r58:V, reg c28:L, reg log3:*, reg log4:V, reg c29:L, reg r59:R, reg x13:*, reg x14:V, reg c30:L, reg x16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i6:*, reg i7:V, reg r62:V, reg __1:cls, reg r63:V, reg prob13:*, reg prob14:V, reg c31:L, reg prob16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i8:*, reg i9:V, reg r64:V, reg __2:cls, reg r65:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r66:V, reg r67:V, reg size5:*, reg size6:V, reg r68:V, reg r69:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r72:V, reg r73:V, reg r74:V, reg x17:*, reg x18:V, reg log5:cls, reg prob17:*, reg prob18:V, reg p:p(V +), reg r76:V, reg r77:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r82:V, reg r83:V, reg r84:V, reg r85:V, reg x19:*, reg x20:V, reg r86:V, reg r87:V, reg r88:V, reg sum2:cls, reg r89:V, reg r90:V, reg log6:*, reg log7:V, reg c32:L, reg r91:*, reg r92:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r93:V, reg r94:V, reg r95:*, reg r96:V, reg r97:V |
    mkenv;
    st x = x;
    size_isMissing = missing.0(size);
    if size_isMissing then L0(NULL) else L0(size);
  L0(size_orDefault):
    st size = size_orDefault;
    st prob = prob;
    log_isMissing = missing.0(log);
    if log_isMissing then L1(FALSE) else L1(log);
  L1(log_orDefault):
    st log = log_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L2(r1):
    st K = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L48() else L49();
  L44():
    prob1 = ld prob;
    check L46() else D0();
  L45():
    r = dyn base(<sym prob>);
    goto L2(r);
  D0():
    deopt 2 [prob1];
  L3(r4):
    K = ld K;
    check L52() else D4();
  L46():
    prob2 = force? prob1;
    checkMissing(prob2);
    length = ldf length in base;
    r2 = dyn length(prob2);
    check L47() else D1();
  L48():
    x1 = ld x;
    check L50() else D2();
  L49():
    r3 = dyn base1(<sym x>);
    goto L3(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [x1];
  D4():
    deopt 12 [r4, K];
  L47():
    goto L2(r2);
  L50():
    x2 = force? x1;
    checkMissing(x2);
    length1 = ldf length in base;
    r5 = dyn length1(x2);
    check L51() else D3();
  L52():
    K1 = force? K;
    checkMissing(K1);
    r6 = `!=`(r4, K1);
    c = `as.logical`(r6);
    if c then L53() else L4();
  D3():
    deopt 12 [r5];
  L4():
    goto L5();
  L5():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L57() else L58();
  L51():
    goto L3(r5);
  L53():
    stop = ldf stop;
    check L54() else D5();
  D5():
    deopt 16 [];
  L6(r10):
    c1 = `as.logical`(r10);
    if c1 then L8(c1) else L64();
  L54():
    r7 = dyn stop("x[] and prob[] must be equal length vectors.");
    check L55() else D6();
  L57():
    sym3 = ldf `is.finite`;
    base3 = ldf `is.finite` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L58():
    r9 = dyn base2(<lang `!`(is.finite(prob))>);
    goto L6(r9);
  D6():
    deopt 18 [r7];
  L7(r12):
    r14 = `!`(r12);
    any = ldf any in base;
    r15 = dyn any(r14);
    check L63() else D9();
  L8(c2):
    c10 = `as.logical`(c2);
    if c10 then L10(c10) else L70();
  L55():
    goto L5();
  L59():
    prob3 = ld prob;
    check L61() else D7();
  L60():
    r11 = dyn base3(<sym prob>);
    goto L7(r11);
  L64():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  D7():
    deopt 25 [prob3];
  D9():
    deopt 31 [r15];
  L9(c6, r17):
    c7 = `as.logical`(r17);
    c8 = `||`(c6, c7);
    goto L8(c8);
  L10(c11):
    c19 = `as.logical`(c11);
    if c19 then L76() else L12();
  L61():
    prob4 = force? prob3;
    checkMissing(prob4);
    is_finite = ldf `is.finite` in base;
    r13 = dyn is_finite(prob4);
    check L62() else D8();
  L63():
    goto L6(r15);
  L65():
    prob5 = ld prob;
    check L67() else D10();
  L66():
    r16 = dyn base4(<lang `<`(prob, 0.0)>);
    goto L9(c1, r16);
  L70():
    sym5 = ldf sum;
    base5 = ldf sum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  D8():
    deopt 28 [r13];
  D10():
    deopt 34 [c1, prob5];
  L11(c15, r21):
    st s = r21;
    r23 = `==`(r21, 0.0);
    c16 = `as.logical`(r23);
    c17 = `||`(c15, c16);
    goto L10(c17);
  L12():
    goto L13();
  L13():
    prob9 = ld prob;
    check L80() else D16();
  L62():
    goto L7(r13);
  L67():
    prob6 = force? prob5;
    checkMissing(prob6);
    r18 = `<`(prob6, 0.0);
    any1 = ldf any in base;
    r19 = dyn any1(r18);
    check L68() else D11();
  L71():
    prob7 = ld prob;
    check L73() else D12();
  L72():
    r20 = dyn base5(<sym prob>);
    goto L11(c10, r20);
  L76():
    stop1 = ldf stop;
    check L77() else D14();
  D11():
    deopt 39 [c1, r19];
  D12():
    deopt 43 [c10, prob7];
  D14():
    deopt 52 [];
  D16():
    deopt 57 [prob9];
  L68():
    goto L9(c1, r19);
  L73():
    prob8 = force? prob7;
    checkMissing(prob8);
    sum = ldf sum in base;
    r22 = dyn sum(prob8);
    check L74() else D13();
  L77():
    r24 = dyn stop1("probabilities must be finite, non-negative and not all 0");
    check L78() else D15();
  L80():
    prob10 = force? prob9;
    checkMissing(prob10);
    s = ld s;
    check L81() else D17();
  D13():
    deopt 46 [c10, r22];
  D15():
    deopt 54 [r24];
  D17():
    deopt 58 [prob10, s];
  L74():
    goto L11(c10, r22);
  L78():
    goto L13();
  L81():
    s1 = force? s;
    checkMissing(s1);
    r26 = `/`(prob10, s1);
    st prob = r26;
    sym6 = ldf `as.integer`;
    base6 = ldf `as.integer` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L82() else L83();
  L14(r28):
    st x = r28;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L86() else L87();
  L82():
    x3 = ld x;
    check L84() else D18();
  L83():
    r27 = dyn base6(<lang `+`(x, 0.5)>);
    goto L14(r27);
  D18():
    deopt 64 [x3];
  L15(r32):
    c20 = `as.logical`(r32);
    if c20 then L90() else L16();
  L84():
    x4 = force? x3;
    checkMissing(x4);
    r29 = `+`(x4, 0.5);
    as_integer = ldf `as.integer` in base;
    r30 = dyn as_integer(r29);
    check L85() else D19();
  L86():
    x5 = ld x;
    check L88() else D20();
  L87():
    r31 = dyn base7(<lang `<`(x, 0.0)>);
    goto L15(r31);
  D19():
    deopt 69 [r30];
  D20():
    deopt 73 [x5];
  L16():
    goto L17();
  L17():
    sym8 = ldf sum;
    base8 = ldf sum in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L94() else L95();
  L85():
    goto L14(r30);
  L88():
    x6 = force? x5;
    checkMissing(x6);
    r33 = `<`(x6, 0.0);
    any2 = ldf any in base;
    r34 = dyn any2(r33);
    check L89() else D21();
  L90():
    stop2 = ldf stop;
    check L91() else D22();
  D21():
    deopt 78 [r34];
  D22():
    deopt 80 [];
  L18(r38):
    st N = r38;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L98() else L99();
  L89():
    goto L15(r34);
  L91():
    r35 = dyn stop2("'x' must be non-negative");
    check L92() else D23();
  L94():
    x7 = ld x;
    check L96() else D24();
  L95():
    r37 = dyn base8(<sym x>);
    goto L18(r37);
  D23():
    deopt 82 [r35];
  D24():
    deopt 87 [x7];
  L19(r41):
    c22 = `as.logical`(r41);
    if c22 then L101() else L20();
  L92():
    goto L17();
  L96():
    x8 = force? x7;
    checkMissing(x8);
    sum1 = ldf sum in base;
    r39 = dyn sum1(x8);
    check L97() else D25();
  L98():
    size1 = ld size;
    check L100() else D26();
  L99():
    r40 = dyn base9(<sym size>);
    goto L19(r40);
  D25():
    deopt 90 [r39];
  D26():
    deopt 93 [size1];
  L20():
    size3 = ld size;
    check L104() else D28();
  L21():
    prob11 = ld prob;
    check L110() else D32();
  L97():
    goto L18(r39);
  L100():
    size2 = force? size1;
    checkMissing(size2);
    c21 = `==`(size2, NULL);
    goto L19(c21);
  L101():
    N = ld N;
    check L102() else D27();
  D27():
    deopt 96 [N];
  D28():
    deopt 99 [size3];
  D32():
    deopt 109 [prob11];
  L102():
    N1 = force? N;
    checkMissing(N1);
    st size = N1;
    goto L21();
  L104():
    size4 = force? size3;
    checkMissing(size4);
    N3 = ld N;
    check L105() else D29();
  L110():
    prob12 = force? prob11;
    checkMissing(prob12);
    r44 = `==`(prob12, 0.0);
    st i0 = r44;
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L111() else L112();
  D29():
    deopt 100 [size4, N3];
  L23(r46):
    c24 = `as.logical`(r46);
    if c24 then L115() else L24();
  L105():
    N4 = force? N3;
    checkMissing(N4);
    r42 = `!=`(size4, N4);
    c23 = `as.logical`(r42);
    if c23 then L106() else L22();
  L111():
    i0 = ld i0;
    check L113() else D33();
  L112():
    r45 = dyn base10(<sym i0>);
    goto L23(r45);
  D33():
    deopt 116 [i0];
  L22():
    goto L21();
  L24():
    goto L38();
  L38():
    sym13 = ldf lgamma;
    base13 = ldf lgamma in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L151() else L152();
  L106():
    stop3 = ldf stop;
    check L107() else D30();
  L113():
    i1 = force? i0;
    checkMissing(i1);
    any3 = ldf any in base;
    r47 = dyn any3(i1);
    check L114() else D34();
  L115():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L116() else L117();
  D30():
    deopt 104 [];
  D34():
    deopt 119 [r47];
  L25(r49):
    c26 = `as.logical`(r49);
    if c26 then L124() else L27();
  L39(r67):
    sym14 = ldf sum;
    base14 = ldf sum in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L154() else L155();
  L107():
    r43 = dyn stop3("size != sum(x), i.e. one is wrong");
    check L108() else D31();
  L114():
    goto L23(r47);
  L116():
    x9 = ld x;
    check L118() else D35();
  L117():
    r48 = dyn base11(<lang `!=`(`[`(x, i0), 0.0)>);
    goto L25(r48);
  L151():
    size5 = ld size;
    check L153() else D46();
  L152():
    r66 = dyn base13(<lang `+`(size, 1.0)>);
    goto L39(r66);
  D31():
    deopt 106 [r43];
  D35():
    deopt 122 [x9];
  D46():
    deopt 172 [size5];
  L27():
    sym12 = ldf all;
    base12 = ldf all in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L130() else L131();
  L40(r73, r74):
    r90 = `+`(r73, r74);
    st r = r90;
    log6 = ld log;
    check L163() else D52();
  L108():
    goto L21();
  L118():
    x10 = force? x9;
    checkMissing(x10);
    c25 = `is.object`(x10);
    if c25 then L119() else L120(x10);
  L124():
    log1 = ld log;
    check L125() else D38();
  L153():
    size6 = force? size5;
    checkMissing(size6);
    r68 = `+`(size6, 1.0);
    r69 = lgamma(r68);
    goto L39(r69);
  L154():
    x17 = ld x;
    check L156() else D47();
  L155():
    r72 = dyn base14(<lang `-`(`*`(x, log(prob)), lgamma(`+`(x, 1.0)))>);
    goto L40(r67, r72);
  D38():
    deopt 131 [log1];
  D47():
    deopt 178 [r67, x17];
  D52():
    deopt 194 [log6];
  L26(dx1):
    r51 = `!=`(dx1, 0.0);
    any4 = ldf any in base;
    r52 = dyn any4(r51);
    check L123() else D37();
  L31(r57):
    c28 = `as.logical`(r57);
    if c28 then L134() else L32();
  L119():
    dr = tryDispatchBuiltin.1("[", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L121() else L120(dr);
  L120(x12):
    i2 = ld i0;
    check L122() else D36();
  L125():
    log2 = force? log1;
    checkMissing(log2);
    c27 = `as.logical`(log2);
    if c27 then L126() else L28();
  L130():
    i4 = ld i0;
    check L132() else D39();
  L131():
    r56 = dyn base12(<sym i0>);
    goto L31(r56);
  L156():
    x18 = force? x17;
    checkMissing(x18);
    log5 = ldf log;
    check L157() else D48();
  L163():
    log7 = force? log6;
    checkMissing(log7);
    c32 = `as.logical`(log7);
    if c32 then L164() else L42();
  D36():
    deopt 124 [x12, i2];
  D37():
    deopt 130 [r52];
  D39():
    deopt 142 [i4];
  D48():
    deopt 180 [r67, x18];
  L28():
    goto L29(0.0);
  L29(r53):
    popenv;
    return r53;
  L32():
    x13 = ld x;
    check L140() else D42();
  L42():
    sym16 = ldf exp;
    base16 = ldf exp in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L167() else L168();
  L121():
    dx = getTryDispatchBuiltinValue(dr);
    goto L26(dx);
  L122():
    i3 = force? i2;
    __ = ldf `[` in base;
    r50 = dyn __(x12, i3);
    goto L26(r50);
  L123():
    goto L25(r52);
  L126():
    goto L29(-Infinity);
  L132():
    i5 = force? i4;
    checkMissing(i5);
    all = ldf all in base;
    r58 = dyn all(i5);
    check L133() else D40();
  L134():
    log3 = ld log;
    check L135() else D41();
  L157():
    p = prom<V +>{
      prob17 = ld prob;
      prob18 = force? prob17;
      checkMissing(prob18);
      return prob18;
    };
    r76 = dyn log5(p);
    check L158() else D49();
  L164():
    r91 = ld r;
    check L165() else D53();
  D40():
    deopt 145 [r58];
  D41():
    deopt 146 [log3];
  D42():
    deopt 155 [x13];
  D49():
    deopt 182 [r67, x18, r76];
  D53():
    deopt 196 [r91];
  L43(r94):
    popenv;
    return r94;
  L133():
    goto L31(r58);
  L135():
    log4 = force? log3;
    checkMissing(log4);
    c29 = `as.logical`(log4);
    if c29 then L136() else L33();
  L140():
    x14 = force? x13;
    checkMissing(x14);
    c30 = `is.object`(x14);
    if c30 then L141() else L142(x14);
  L158():
    r77 = `*`(x18, r76);
    sym15 = ldf lgamma;
    base15 = ldf lgamma in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L159() else L160();
  L165():
    r92 = force? r91;
    checkMissing(r92);
    popenv;
    return r92;
  L167():
    r95 = ld r;
    check L169() else D54();
  L168():
    r93 = dyn base16(<sym r>);
    goto L43(r93);
  D54():
    deopt 199 [r95];
  L33():
    goto L34(1.0);
  L34(r59):
    popenv;
    return r59;
  L36(dx3):
    st x = dx3;
    prob13 = ld prob;
    check L145() else D44();
  L41(r83, r84, r85):
    r88 = `-`(r84, r85);
    sum2 = ldf sum in base;
    r89 = dyn sum2(r88);
    check L162() else D51();
  L136():
    goto L34(0.0);
  L141():
    dr2 = tryDispatchBuiltin.1("[", x14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L143() else L142(dr2);
  L142(x16):
    i6 = ld i0;
    check L144() else D43();
  L159():
    x19 = ld x;
    check L161() else D50();
  L160():
    r82 = dyn base15(<lang `+`(x, 1.0)>);
    goto L41(r67, r77, r82);
  L169():
    r96 = force? r95;
    checkMissing(r96);
    r97 = exp(r96);
    goto L43(r97);
  D43():
    deopt 157 [x16, i6];
  D44():
    deopt 162 [prob13];
  D50():
    deopt 184 [r67, r77, x19];
  D51():
    deopt 191 [r83, r89];
  L143():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L36(dx2);
  L144():
    i7 = force? i6;
    checkMissing(i7);
    r62 = `!`(i7);
    __1 = ldf `[` in base;
    r63 = dyn __1(x16, r62);
    goto L36(r63);
  L145():
    prob14 = force? prob13;
    checkMissing(prob14);
    c31 = `is.object`(prob14);
    if c31 then L146() else L147(prob14);
  L161():
    x20 = force? x19;
    checkMissing(x20);
    r86 = `+`(x20, 1.0);
    r87 = lgamma(r86);
    goto L41(r67, r77, r87);
  L162():
    goto L40(r83, r89);
  L37(dx5):
    st prob = dx5;
    goto L38();
  L146():
    dr4 = tryDispatchBuiltin.1("[", prob14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L148() else L147(dr4);
  L147(prob16):
    i8 = ld i0;
    check L149() else D45();
  D45():
    deopt 164 [prob16, i8];
  L148():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L37(dx4);
  L149():
    i9 = force? i8;
    checkMissing(i9);
    r64 = `!`(i9);
    __2 = ldf `[` in base;
    r65 = dyn __2(prob16, r64);
    goto L37(r65);
  }
}