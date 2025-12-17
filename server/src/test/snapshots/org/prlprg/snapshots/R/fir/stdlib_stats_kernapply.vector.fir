fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4205033918;
    st `kernapply.vector` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4205033918(x, k, circular, `...`) {
  (reg x:*, reg k:*, reg circular:*, reg ddd:dots) -+> V { var x:*, var k:*, var circular:*, reg circular_isMissing:L, reg circular_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_vector:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg is_tskernel:cls, reg k1:*, reg k2:V, reg p:p(V +), reg r7:V, reg r8:V, reg c1:L, reg stop1:cls, reg r9:V, reg k3:*, reg k4:V, reg c2:L, reg k6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg x3:*, reg x4:V, reg length:cls, reg r14:V, reg m:*, reg m1:V, reg r15:V, reg r16:V, reg c3:L, reg stop2:cls, reg r17:V, reg m2:*, reg m3:V, reg r19:V, reg c4:L, reg x5:*, reg x6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg x7:*, reg x8:V, reg length1:cls, reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg k7:*, reg k8:V, reg c5:L, reg k10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg m4:*, reg m5:V, reg r25:V, reg __:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg n:*, reg n1:V, reg m6:*, reg m7:V, reg r29:V, reg r30:V, reg r31:V, reg rep_len:cls, reg r32:V, reg k11:*, reg k12:V, reg c6:L, reg k14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg m8:*, reg m9:V, reg r33:V, reg r34:V, reg __1:cls, reg r35:V, reg c7:cls, reg r36:V, reg fft:cls, reg fft1:cls, reg x9:*, reg x10:V, reg p1:p(V +), reg r38:V, reg fft2:cls, reg w:*, reg w1:V, reg p2:p(V +), reg r40:V, reg r41:V, reg p3:p(V +), reg r43:V, reg n2:*, reg n3:V, reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg x11:*, reg x12:V, reg is_numeric:cls, reg r47:V, reg c8:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg y:*, reg y1:V, reg Re:cls, reg r50:V, reg circular1:*, reg circular2:V, reg c9:L, reg y2:*, reg y3:V, reg y4:*, reg y5:V, reg c10:L, reg y7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg m10:*, reg m11:V, reg r52:V, reg n4:*, reg n5:V, reg m12:*, reg m13:V, reg r53:V, reg r54:V, reg __2:cls, reg r55:V |
    mkenv;
    st x = x;
    st k = k;
    circular_isMissing = missing.0(circular);
    if circular_isMissing then L0(FALSE) else L0(circular);
  L0(circular_orDefault):
    st circular = circular_orDefault;
    st `...` = ddd;
    sym = ldf `is.vector`;
    base = ldf `is.vector` in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L25() else L2();
  L21():
    x1 = ld x;
    check L23() else D0();
  L22():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    goto L3();
  L3():
    is_tskernel = ldf `is.tskernel`;
    check L29() else D4();
  L23():
    x2 = force? x1;
    checkMissing(x2);
    is_vector = ldf `is.vector` in base;
    r2 = dyn is_vector(x2, "any");
    check L24() else D1();
  L25():
    stop = ldf stop;
    check L26() else D2();
  D1():
    deopt 6 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 15 [];
  L24():
    goto L1(r2);
  L26():
    r4 = dyn stop("'x' is not a vector");
    check L27() else D3();
  L29():
    p = prom<V +>{
      k1 = ld k;
      k2 = force? k1;
      checkMissing(k2);
      return k2;
    };
    r7 = dyn is_tskernel(p);
    check L30() else D5();
  D3():
    deopt 11 [r4];
  D5():
    deopt 17 [r7];
  L27():
    goto L3();
  L30():
    r8 = `!`(r7);
    c1 = `as.logical`(r8);
    if c1 then L31() else L4();
  L4():
    goto L5();
  L5():
    k3 = ld k;
    check L35() else D8();
  L31():
    stop1 = ldf stop;
    check L32() else D6();
  D6():
    deopt 20 [];
  D8():
    deopt 25 [k3];
  L32():
    r9 = dyn stop1("'k' is not a kernel");
    check L33() else D7();
  L35():
    k4 = force? k3;
    checkMissing(k4);
    c2 = `is.object`(k4);
    if c2 then L37() else L38(k4);
  D7():
    deopt 22 [r9];
  L33():
    goto L5();
  L36(dx1):
    st m = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L37():
    dr = tryDispatchBuiltin.1("$", k4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(k6):
    r11 = `$`(k6, <sym m>);
    goto L36(r11);
  L6(r13):
    m = ld m;
    check L44() else D11();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L36(dx);
  L40():
    x3 = ld x;
    check L42() else D9();
  L41():
    r12 = dyn base1(<sym x>);
    goto L6(r12);
  D9():
    deopt 31 [x3];
  D11():
    deopt 35 [r13, 2, m];
  L42():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r14 = dyn length(x4);
    check L43() else D10();
  L44():
    m1 = force? m;
    checkMissing(m1);
    r15 = `*`(2, m1);
    r16 = `<=`(r13, r15);
    c3 = `as.logical`(r16);
    if c3 then L45() else L7();
  D10():
    deopt 34 [r14];
  L7():
    goto L8();
  L8():
    m2 = ld m;
    check L49() else D14();
  L43():
    goto L6(r14);
  L45():
    stop2 = ldf stop;
    check L46() else D12();
  D12():
    deopt 40 [];
  D14():
    deopt 45 [m2];
  L46():
    r17 = dyn stop2("'x' is shorter than kernel 'k'");
    check L47() else D13();
  L49():
    m3 = force? m2;
    checkMissing(m3);
    r19 = `==`(m3, 0);
    c4 = `as.logical`(r19);
    if c4 then L50() else L9();
  D13():
    deopt 42 [r17];
  L9():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L53() else L54();
  L47():
    goto L8();
  L50():
    x5 = ld x;
    check L51() else D15();
  D15():
    deopt 49 [x5];
  L10(r21):
    st n = r21;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L51():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  L53():
    x7 = ld x;
    check L55() else D16();
  L54():
    r20 = dyn base2(<sym x>);
    goto L10(r20);
  D16():
    deopt 53 [x7];
  L11(r24):
    st w = r24;
    fft = ldf fft;
    check L75() else D26();
  L55():
    x8 = force? x7;
    checkMissing(x8);
    length1 = ldf length in base;
    r22 = dyn length1(x8);
    check L56() else D17();
  L57():
    k7 = ld k;
    check L59() else D18();
  L58():
    r23 = dyn base3(<lang `[`(k, `:`(0, m))>, <lang rep_len(0.0, `-`(`-`(n, `*`(2, m)), 1))>, <lang `[`(k, `:`(`-`(m), `-`(1)))>);
    goto L11(r23);
  D17():
    deopt 56 [r22];
  D18():
    deopt 60 [k7];
  D26():
    deopt 92 [];
  L56():
    goto L10(r22);
  L59():
    k8 = force? k7;
    checkMissing(k8);
    c5 = `is.object`(k8);
    if c5 then L60() else L61(k8);
  L75():
    p3 = prom<V +>{
      fft1 = ldf fft;
      p1 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        return x10;
      };
      r38 = dyn fft1(p1);
      fft2 = ldf fft;
      p2 = prom<V +>{
        w = ld w;
        w1 = force? w;
        checkMissing(w1);
        return w1;
      };
      r40 = dyn fft2(p2);
      r41 = `*`(r38, r40);
      return r41;
    };
    r43 = dyn fft[, inverse](p3, TRUE);
    check L76() else D27();
  D27():
    deopt 96 [r43];
  L12(dx3):
    sym4 = ldf rep_len;
    base4 = ldf rep_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L64() else L65();
  L60():
    dr2 = tryDispatchBuiltin.1("[", k8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L62() else L61(dr2);
  L61(k10):
    m4 = ld m;
    check L63() else D19();
  L76():
    n2 = ld n;
    check L77() else D28();
  D19():
    deopt 63 [k10, 0, m4];
  D28():
    deopt 96 [r43, n2];
  L13(r28):
    k11 = ld k;
    check L69() else D23();
  L62():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L63():
    m5 = force? m4;
    checkMissing(m5);
    r25 = `:`(0, m5);
    __ = ldf `[` in base;
    r26 = dyn __(k10, r25);
    goto L12(r26);
  L64():
    n = ld n;
    check L66() else D20();
  L65():
    r27 = dyn base4(0.0, <lang `-`(`-`(n, `*`(2, m)), 1)>);
    goto L13(r27);
  L77():
    n3 = force? n2;
    checkMissing(n3);
    r44 = `/`(r43, n3);
    st y = r44;
    sym5 = ldf `is.numeric`;
    base5 = ldf `is.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L78() else L79();
  D20():
    deopt 70 [n];
  D23():
    deopt 80 [k11];
  L15(r46):
    c8 = `as.logical`(r46);
    if c8 then L82() else L16();
  L66():
    n1 = force? n;
    checkMissing(n1);
    m6 = ld m;
    check L67() else D21();
  L69():
    k12 = force? k11;
    checkMissing(k12);
    c6 = `is.object`(k12);
    if c6 then L70() else L71(k12);
  L78():
    x11 = ld x;
    check L80() else D29();
  L79():
    r45 = dyn base5(<sym x>);
    goto L15(r45);
  D21():
    deopt 72 [n1, 2, m6];
  D29():
    deopt 102 [x11];
  L14(dx5):
    c7 = ldf c in base;
    r36 = dyn c7(dx3, r28, dx5);
    check L74() else D25();
  L16():
    goto L18();
  L18():
    circular1 = ld circular;
    check L88() else D33();
  L67():
    m7 = force? m6;
    checkMissing(m7);
    r29 = `*`(2, m7);
    r30 = `-`(n1, r29);
    r31 = `-`(r30, 1);
    rep_len = ldf rep_len in base;
    r32 = dyn rep_len(0.0, r31);
    check L68() else D22();
  L70():
    dr4 = tryDispatchBuiltin.1("[", k12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L72() else L71(dr4);
  L71(k14):
    m8 = ld m;
    check L73() else D24();
  L80():
    x12 = force? x11;
    checkMissing(x12);
    is_numeric = ldf `is.numeric` in base;
    r47 = dyn is_numeric(x12);
    check L81() else D30();
  L82():
    sym6 = ldf Re;
    base6 = ldf Re in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L83() else L84();
  D22():
    deopt 79 [r32];
  D24():
    deopt 82 [k14, m8];
  D25():
    deopt 89 [r36];
  D30():
    deopt 105 [r47];
  D33():
    deopt 115 [circular1];
  L17(r49):
    st y = r49;
    goto L18();
  L68():
    goto L13(r32);
  L72():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx4);
  L73():
    m9 = force? m8;
    checkMissing(m9);
    r33 = `-`(<missing>, m9);
    r34 = `:`(r33, -1);
    __1 = ldf `[` in base;
    r35 = dyn __1(k14, r34);
    goto L14(r35);
  L74():
    goto L11(r36);
  L81():
    goto L15(r47);
  L83():
    y = ld y;
    check L85() else D31();
  L84():
    r48 = dyn base6(<sym y>);
    goto L17(r48);
  L88():
    circular2 = force? circular1;
    checkMissing(circular2);
    c9 = `as.logical`(circular2);
    if c9 then L89() else L19();
  D31():
    deopt 108 [y];
  L19():
    y4 = ld y;
    check L92() else D35();
  L85():
    y1 = force? y;
    checkMissing(y1);
    Re = ldf Re in base;
    r50 = dyn Re(y1);
    check L86() else D32();
  L89():
    y2 = ld y;
    check L90() else D34();
  D32():
    deopt 111 [r50];
  D34():
    deopt 117 [y2];
  D35():
    deopt 119 [y4];
  L86():
    goto L17(r50);
  L90():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  L92():
    y5 = force? y4;
    checkMissing(y5);
    c10 = `is.object`(y5);
    if c10 then L93() else L94(y5);
  L20(dx7):
    popenv;
    return dx7;
  L93():
    dr6 = tryDispatchBuiltin.1("[", y5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L95() else L94(dr6);
  L94(y7):
    m10 = ld m;
    check L96() else D36();
  D36():
    deopt 122 [y7, 1, m10];
  L95():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L20(dx6);
  L96():
    m11 = force? m10;
    checkMissing(m11);
    r52 = `+`(1, m11);
    n4 = ld n;
    check L97() else D37();
  D37():
    deopt 124 [y7, r52, n4];
  L97():
    n5 = force? n4;
    checkMissing(n5);
    m12 = ld m;
    check L98() else D38();
  D38():
    deopt 125 [y7, r52, n5, m12];
  L98():
    m13 = force? m12;
    checkMissing(m13);
    r53 = `-`(n5, m13);
    r54 = `:`(r52, r53);
    __2 = ldf `[` in base;
    r55 = dyn __2(y7, r54);
    goto L20(r55);
  }
}