fun main() {
  () -+> V { reg r:cls, reg embed:cls, reg x:*, reg x1:V, reg p:p(V +), reg r2:V |
    mkenv;
    r = clos inner3264053104;
    st embed = r;
    st x = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    embed = ldf embed;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r2 = dyn embed(p, 3.0);
    check L1() else D1();
  D1():
    deopt 10 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner3264053104(x, dimension) {
  (reg x:*, reg dimension:*) -+> V { var x:*, var dimension:*, reg dimension_isMissing:L, reg dimension_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_matrix:cls, reg r2:V, reg c:L, reg nrow:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r4:V, reg ncol:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r6:V, reg dimension1:*, reg dimension2:V, reg r7:V, reg c1:L, reg c2:V, reg dimension3:*, reg dimension4:V, reg n:*, reg n1:V, reg r8:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg r9:V, reg matrix:cls, reg n2:*, reg n3:V, reg dimension5:*, reg dimension6:V, reg r11:V, reg r12:V, reg p2:p(V +), reg dimension7:*, reg dimension8:V, reg m:*, reg m1:V, reg r14:V, reg p3:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg m2:*, reg m3:V, reg r19:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x7:V, reg Recall:cls, reg as_vector:cls, reg x8:*, reg x9:V, reg c9:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r20:V, reg p4:p(V +), reg r22:V, reg p5:p(V +), reg dimension9:*, reg dimension10:V, reg p6:p(V +), reg r25:V, reg l1:*, reg c10:L, reg i8:I, reg r27:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg i13:I, reg r35:V, reg r36:V, reg r37:V, reg i14:*, reg i15:V, reg m4:*, reg m5:V, reg dimension11:*, reg dimension12:V, reg seq_int:cls, reg r38:V, reg ___:cls, reg r39:V, reg y:*, reg y1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg x12:*, reg x13:V, reg is_vector:cls, reg r42:V, reg c11:L, reg c12:V, reg is_ts:cls, reg x14:*, reg x15:V, reg p7:p(V +), reg r44:V, reg c14:L, reg c15:V, reg c17:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg x16:*, reg x17:V, reg length:cls, reg r47:V, reg dimension13:*, reg dimension14:V, reg r48:V, reg c18:L, reg c19:V, reg dimension15:*, reg dimension16:V, reg n4:*, reg n5:V, reg r49:V, reg c21:L, reg c22:V, reg c24:L, reg stop1:cls, reg r50:V, reg n6:*, reg n7:V, reg dimension17:*, reg dimension18:V, reg r52:V, reg r53:V, reg x18:*, reg x19:V, reg c25:L, reg x21:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg m6:*, reg m7:V, reg r54:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg x24:V, reg r58:V, reg r59:V, reg dimension19:*, reg dimension20:V, reg r60:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r63:V, reg x27:V, reg r64:V, reg r65:V, reg m8:*, reg m9:V, reg dimension21:*, reg dimension22:V, reg rep_int:cls, reg r66:V, reg rep_int1:cls, reg r67:V, reg r68:V, reg r69:V, reg __1:cls, reg r70:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r71:V, reg r72:V, reg m10:*, reg m11:V, reg dimension23:*, reg dimension24:V, reg c26:cls, reg r73:V, reg l7:*, reg dim__:cls, reg r74:V, reg data:*, reg data1:V, reg stop2:cls, reg r75:V |
    mkenv;
    st x = x;
    dimension_isMissing = missing.0(dimension);
    if dimension_isMissing then L0(1.0) else L0(dimension);
  L0(dimension_orDefault):
    st dimension = dimension_orDefault;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L1(r1):
    c = `as.logical`(r1);
    if c then L26() else L2();
  L22():
    x1 = ld x;
    check L24() else D0();
  L23():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    sym3 = ldf `is.vector`;
    base3 = ldf `is.vector` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L24():
    x2 = force? x1;
    checkMissing(x2);
    is_matrix = ldf `is.matrix` in base;
    r2 = dyn is_matrix(x2);
    check L25() else D1();
  L26():
    nrow = ldf nrow;
    check L27() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L11(r41):
    c11 = `as.logical`(r41);
    if c11 then L12(c11) else L63();
  L25():
    goto L1(r2);
  L27():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn nrow(p);
    check L28() else D3();
  L59():
    x12 = ld x;
    check L61() else D21();
  L60():
    r40 = dyn base3(<sym x>);
    goto L11(r40);
  D3():
    deopt 9 [r4];
  D21():
    deopt 71 [x12];
  L12(c12):
    c17 = `as.logical`(c12);
    if c17 then L67() else L13();
  L28():
    st n = r4;
    ncol = ldf ncol;
    check L29() else D4();
  L61():
    x13 = force? x12;
    checkMissing(x13);
    is_vector = ldf `is.vector` in base;
    r42 = dyn is_vector(x13, "any");
    check L62() else D22();
  L63():
    is_ts = ldf `is.ts`;
    check L64() else D23();
  D4():
    deopt 12 [];
  D22():
    deopt 75 [r42];
  D23():
    deopt 77 [c11];
  L13():
    stop2 = ldf stop;
    check L106() else D47();
  L29():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r6 = dyn ncol(p1);
    check L30() else D5();
  L62():
    goto L11(r42);
  L64():
    p7 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    r44 = dyn is_ts(p7);
    check L65() else D24();
  L67():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L68() else L69();
  D5():
    deopt 14 [r6];
  D24():
    deopt 79 [c11, r44];
  D47():
    deopt 152 [];
  L14(r46):
    st n = r46;
    dimension13 = ld dimension;
    check L72() else D27();
  L30():
    st m = r6;
    dimension1 = ld dimension;
    check L31() else D6();
  L65():
    c14 = `as.logical`(r44);
    c15 = `||`(c11, c14);
    goto L12(c15);
  L68():
    x16 = ld x;
    check L70() else D25();
  L69():
    r45 = dyn base4(<sym x>);
    goto L14(r45);
  L106():
    r75 = dyn stop2("'x' is not a vector or matrix");
    check L107() else D48();
  D6():
    deopt 16 [dimension1];
  D25():
    deopt 83 [x16];
  D27():
    deopt 88 [dimension13];
  D48():
    deopt 154 [r75];
  L31():
    dimension2 = force? dimension1;
    checkMissing(dimension2);
    r7 = `<`(dimension2, 1.0);
    c1 = `as.logical`(r7);
    if c1 then L3(c1) else L32();
  L70():
    x17 = force? x16;
    checkMissing(x17);
    length = ldf length in base;
    r47 = dyn length(x17);
    check L71() else D26();
  L72():
    dimension14 = force? dimension13;
    checkMissing(dimension14);
    r48 = `<`(dimension14, 1.0);
    c18 = `as.logical`(r48);
    if c18 then L15(c18) else L73();
  L107():
    popenv;
    return r75;
  D26():
    deopt 86 [r47];
  L3(c2):
    c7 = `as.logical`(c2);
    if c7 then L36() else L4();
  L15(c19):
    c24 = `as.logical`(c19);
    if c24 then L77() else L16();
  L32():
    dimension3 = ld dimension;
    check L33() else D7();
  L71():
    goto L14(r47);
  L73():
    dimension15 = ld dimension;
    check L74() else D28();
  D7():
    deopt 20 [c1, dimension3];
  D28():
    deopt 92 [c18, dimension15];
  L4():
    goto L5();
  L5():
    matrix = ldf matrix;
    check L40() else D11();
  L16():
    goto L17();
  L17():
    n6 = ld n;
    check L81() else D32();
  L33():
    dimension4 = force? dimension3;
    checkMissing(dimension4);
    n = ld n;
    check L34() else D8();
  L36():
    stop = ldf stop;
    check L37() else D9();
  L74():
    dimension16 = force? dimension15;
    checkMissing(dimension16);
    n4 = ld n;
    check L75() else D29();
  L77():
    stop1 = ldf stop;
    check L78() else D30();
  D8():
    deopt 21 [c1, dimension4, n];
  D9():
    deopt 26 [];
  D11():
    deopt 32 [];
  D29():
    deopt 93 [c18, dimension16, n4];
  D30():
    deopt 98 [];
  D32():
    deopt 103 [n6];
  L34():
    n1 = force? n;
    checkMissing(n1);
    r8 = `>`(dimension4, n1);
    c4 = `as.logical`(r8);
    c5 = `||`(c1, c4);
    goto L3(c5);
  L37():
    r9 = dyn stop("wrong embedding dimension");
    check L38() else D10();
  L40():
    p2 = prom<V +>{
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      dimension5 = ld dimension;
      dimension6 = force? dimension5;
      checkMissing(dimension6);
      r11 = `-`(n3, dimension6);
      r12 = `+`(r11, 1);
      return r12;
    };
    p3 = prom<V +>{
      dimension7 = ld dimension;
      dimension8 = force? dimension7;
      checkMissing(dimension8);
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      r14 = `*`(dimension8, m1);
      return r14;
    };
    r16 = dyn matrix(0.0, p2, p3);
    check L41() else D12();
  L75():
    n5 = force? n4;
    checkMissing(n5);
    r49 = `>`(dimension16, n5);
    c21 = `as.logical`(r49);
    c22 = `||`(c18, c21);
    goto L15(c22);
  L78():
    r50 = dyn stop1("wrong embedding dimension");
    check L79() else D31();
  L81():
    n7 = force? n6;
    checkMissing(n7);
    dimension17 = ld dimension;
    check L82() else D33();
  D10():
    deopt 28 [r9];
  D12():
    deopt 36 [r16];
  D31():
    deopt 100 [r50];
  D33():
    deopt 104 [n7, dimension17];
  L38():
    goto L5();
  L41():
    st y = r16;
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L42() else L43();
  L79():
    goto L17();
  L82():
    dimension18 = force? dimension17;
    checkMissing(dimension18);
    r52 = `-`(n7, dimension18);
    r53 = `+`(r52, 1);
    st m = r53;
    x18 = ld x;
    check L83() else D34();
  D34():
    deopt 110 [x18];
  L6(r18):
    s = toForSeq(r18);
    l = length(s);
    i = 0;
    goto L7(i);
  L42():
    m2 = ld m;
    check L44() else D13();
  L43():
    r17 = dyn base1(<sym m>);
    goto L6(r17);
  L83():
    x19 = force? x18;
    checkMissing(x19);
    c25 = `is.object`(x19);
    if c25 then L84() else L85(x19);
  D13():
    deopt 39 [m2];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L45() else L10();
  L18(dx5):
    st data = dx5;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L97() else L98();
  L44():
    m3 = force? m2;
    checkMissing(m3);
    r19 = seq_len(m3);
    goto L6(r19);
  L84():
    dr4 = tryDispatchBuiltin.1("[", x19);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L86() else L85(dr4);
  L85(x21):
    m6 = ld m;
    check L87() else D35();
  D35():
    deopt 113 [x21, 1, m6];
  L10():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    Recall = ldf Recall;
    check L46() else D14();
  L21(r72):
    l7 = ld data;
    dim__ = ldf `dim<-`;
    check L102() else D44();
  L45():
    y = ld y;
    check L57() else D20();
  L86():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx4);
  L87():
    m7 = force? m6;
    checkMissing(m7);
    r54 = `:`(1, m7);
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L88() else L89();
  L97():
    m10 = ld m;
    check L99() else D41();
  L98():
    r71 = dyn base7(<sym m>, <sym dimension>);
    goto L21(r71);
  D14():
    deopt 43 [i2];
  D20():
    deopt 67 [y];
  D41():
    deopt 138 [m10];
  D44():
    deopt 145 [r72, l7, r72];
  L19(x24, r58, r59):
    r68 = `+`(r58, r59);
    r69 = `-`(r68, 1);
    __1 = ldf `[` in base;
    r70 = dyn __1(x24, r69);
    goto L18(r70);
  L46():
    p5 = prom<V +>{
      as_vector = ldf `as.vector`;
      p4 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        c9 = `is.object`(x9);
        if c9 then L1() else L2();
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", x9);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2();
      L2():
        i5 = ld i;
        i6 = force? i5;
        __ = ldf `[` in base;
        r20 = dyn __(x9, <missing>, i6);
        goto L0(r20);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r22 = dyn as_vector(p4);
      return r22;
    };
    p6 = prom<V +>{
      dimension9 = ld dimension;
      dimension10 = force? dimension9;
      checkMissing(dimension10);
      return dimension10;
    };
    r25 = dyn Recall(p5, p6);
    check L47() else D15();
  L57():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  L88():
    dimension19 = ld dimension;
    check L90() else D36();
  L89():
    r57 = dyn base5(<lang `:`(dimension, 1)>, <lang rep.int(m, dimension)>);
    goto L19(x21, r54, r57);
  L99():
    m11 = force? m10;
    checkMissing(m11);
    dimension23 = ld dimension;
    check L100() else D42();
  L102():
    r74 = dyn dim__(l7, NULL, r72);
    check L103() else D45();
  D15():
    deopt 46 [i2, r25];
  D36():
    deopt 117 [x21, r54, dimension19];
  D42():
    deopt 140 [dimension23];
  D45():
    deopt 147 [r72, r74];
  L47():
    l1 = ld y;
    c10 = `is.object`(l1);
    if c10 then L48() else L49(i2, r25, l1);
  L90():
    dimension20 = force? dimension19;
    checkMissing(dimension20);
    r60 = `:`(dimension20, 1);
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L91() else L92();
  L100():
    dimension24 = force? dimension23;
    checkMissing(dimension24);
    c26 = ldf c in base;
    r73 = dyn c26(m11, dimension24);
    check L101() else D43();
  L103():
    st data = r74;
    data = ld data;
    check L104() else D46();
  D43():
    deopt 143 [r73];
  D46():
    deopt 149 [data];
  L8(i10, dx3):
    st y = dx3;
    goto L7(i10);
  L20(x27, r64, r65):
    rep_int1 = ldf `rep.int` in base;
    r67 = dyn rep_int1(r60, r65);
    check L96() else D40();
  L48():
    dr2 = tryDispatchBuiltin.0("[<-", l1, r25);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(i2, r25, dr2);
  L49(i8, r27, l3):
    sym2 = ldf `seq.int`;
    base2 = ldf `seq.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L91():
    m8 = ld m;
    check L93() else D37();
  L92():
    r63 = dyn base6(<sym m>, <sym dimension>);
    goto L20(x21, r54, r63);
  L101():
    goto L21(r73);
  L104():
    data1 = force? data;
    checkMissing(data1);
    popenv;
    return data1;
  D37():
    deopt 123 [x21, r54, m8];
  D40():
    deopt 130 [x27, r64, r67];
  L9(i13, r35, r36, r37):
    ___ = ldf `[<-` in base;
    r39 = dyn ___(l1, <missing>, r37, r36);
    goto L8(i13, r39);
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(i2, dx2);
  L51():
    i14 = ld i;
    check L53() else D16();
  L52():
    r34 = dyn base2[, by, `length.out`](<sym i>, <sym m>, <sym dimension>);
    goto L9(i8, r27, r25, r34);
  L93():
    m9 = force? m8;
    checkMissing(m9);
    dimension21 = ld dimension;
    check L94() else D38();
  L96():
    goto L19(x27, r64, r67);
  D16():
    deopt 51 [i8, r27, l3, r25, i14];
  D38():
    deopt 125 [x21, r54, dimension21];
  L53():
    i15 = force? i14;
    checkMissing(i15);
    m4 = ld m;
    check L54() else D17();
  L94():
    dimension22 = force? dimension21;
    checkMissing(dimension22);
    rep_int = ldf `rep.int` in base;
    r66 = dyn rep_int(m9, dimension22);
    check L95() else D39();
  D17():
    deopt 53 [i8, r27, l3, r25, m4];
  D39():
    deopt 128 [x21, r54, r66];
  L54():
    m5 = force? m4;
    checkMissing(m5);
    dimension11 = ld dimension;
    check L55() else D18();
  L95():
    goto L20(x21, r54, r66);
  D18():
    deopt 56 [i8, r27, l3, r25, dimension11];
  L55():
    dimension12 = force? dimension11;
    checkMissing(dimension12);
    seq_int = ldf `seq.int` in base;
    r38 = dyn seq_int(i15, m5, dimension12);
    check L56() else D19();
  D19():
    deopt 60 [i8, r27, l3, r25, r38];
  L56():
    goto L9(i8, r27, r25, r38);
  }
}