fun main() {
  () -+> V { reg r:cls, reg array:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg d:*, reg d1:V, reg prod:cls, reg r5:V, reg r6:I, reg p:p(V +), reg d2:*, reg d3:V, reg p1:p(V +), reg r9:V, reg x:*, reg x1:V, reg asplit:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg r11:V, reg asplit1:cls, reg x4:*, reg x5:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg c:cls, reg r15:V, reg p4:p(V +), reg r17:V, reg split:cls, reg x6:*, reg x7:V, reg p5:p(V +), reg slice_index:cls, reg x8:*, reg x9:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg c1:cls, reg r22:V, reg p7:p(V +), reg r24:V, reg p8:p(V +), reg r26:V, reg matrix:cls, reg p9:p(V +), reg r28:V, reg asplit2:cls, reg x10:*, reg x11:V, reg p10:p(V +), reg r30:V, reg split1:cls, reg x12:*, reg x13:V, reg p11:p(V +), reg slice_index1:cls, reg x14:*, reg x15:V, reg p12:p(V +), reg r33:V, reg p13:p(V +), reg r35:V, reg split2:cls, reg x16:*, reg x17:V, reg p14:p(V +), reg row:cls, reg x18:*, reg x19:V, reg p15:p(V +), reg r38:V, reg p16:p(V +), reg r40:V |
    mkenv;
    r = clos inner2186253718;
    st asplit = r;
    st d = <int 2, 3, 4>;
    array = ldf array;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p = prom<V +>{
      sym = ldf seq_len;
      base = ldf seq_len in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r2):
      return r2;
    L2():
      sym1 = ldf prod;
      base1 = ldf prod in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r1 = dyn base(<lang prod(d)>);
      goto L0(r1);
    L1(r4):
      r6 = seq_len(r4);
      goto L0(r6);
    L4():
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      prod = ldf prod in base;
      r5 = dyn prod(d1);
      goto L1(r5);
    L5():
      r3 = dyn base1(<sym d>);
      goto L1(r3);
    };
    p1 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      return d3;
    };
    r9 = dyn array(p, p1);
    check L1() else D1();
  D1():
    deopt 10 [r9];
  L1():
    st x = r9;
    x = ld x;
    check L2() else D2();
  D2():
    deopt 12 [x];
  L2():
    x1 = force? x;
    checkMissing(x1);
    asplit = ldf asplit;
    check L3() else D3();
  D3():
    deopt 15 [];
  L3():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r11 = dyn asplit(p2, 2.0);
    check L4() else D4();
  D4():
    deopt 18 [r11];
  L4():
    asplit1 = ldf asplit;
    check L5() else D5();
  D5():
    deopt 20 [];
  L5():
    p3 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c = ldf c in base;
      r15 = dyn c(1.0, 2.0);
      goto L0(r15);
    L2():
      r13 = dyn base2(1.0, 2.0);
      goto L0(r13);
    };
    r17 = dyn asplit1(p3, p4);
    check L6() else D6();
  D6():
    deopt 23 [r17];
  L6():
    split = ldf split;
    check L7() else D7();
  D7():
    deopt 25 [];
  L7():
    p5 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p8 = prom<V +>{
      slice_index = ldf `slice.index`;
      p6 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      p7 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r21):
        return r21;
      L1():
        c1 = ldf c in base;
        r22 = dyn c1(1.0, 2.0);
        goto L0(r22);
      L2():
        r20 = dyn base3(1.0, 2.0);
        goto L0(r20);
      };
      r24 = dyn slice_index(p6, p7);
      return r24;
    };
    r26 = dyn split(p5, p8);
    check L8() else D8();
  D8():
    deopt 28 [r26];
  L8():
    matrix = ldf matrix;
    check L9() else D9();
  D9():
    deopt 30 [];
  L9():
    p9 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6>;
    };
    r28 = dyn matrix(p9, 2.0, 3.0);
    check L10() else D10();
  D10():
    deopt 34 [r28];
  L10():
    st x = r28;
    asplit2 = ldf asplit;
    check L11() else D11();
  D11():
    deopt 37 [];
  L11():
    p10 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r30 = dyn asplit2(p10, 1.0);
    check L12() else D12();
  D12():
    deopt 40 [r30];
  L12():
    split1 = ldf split;
    check L13() else D13();
  D13():
    deopt 42 [];
  L13():
    p11 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    p13 = prom<V +>{
      slice_index1 = ldf `slice.index`;
      p12 = prom<V +>{
        x14 = ld x;
        x15 = force? x14;
        checkMissing(x15);
        return x15;
      };
      r33 = dyn slice_index1(p12, 1.0);
      return r33;
    };
    r35 = dyn split1(p11, p13);
    check L14() else D14();
  D14():
    deopt 45 [r35];
  L14():
    split2 = ldf split;
    check L15() else D15();
  D15():
    deopt 47 [];
  L15():
    p14 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    p16 = prom<V +>{
      row = ldf row;
      p15 = prom<V +>{
        x18 = ld x;
        x19 = force? x18;
        checkMissing(x19);
        return x19;
      };
      r38 = dyn row(p15);
      return r38;
    };
    r40 = dyn split2(p14, p16);
    check L16() else D16();
  D16():
    deopt 50 [r40];
  L16():
    popenv;
    return r40;
  }
}
fun inner2186253718(x, MARGIN) {
  (reg x:*, reg MARGIN:*) -+> V { var x:*, var MARGIN:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg dim:cls, reg r4:V, reg length:cls, reg r5:V, reg dl:*, reg dl1:V, reg r6:V, reg c:L, reg stop:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg c1:L, reg c2:L, reg dl2:*, reg dl3:V, reg r11:V, reg c3:L, reg as_matrix:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r13:V, reg r14:V, reg as_array:cls, reg x7:*, reg x8:V, reg p1:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg x9:*, reg x10:V, reg dim1:cls, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg x11:*, reg x12:V, reg dimnames:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg dl4:*, reg dl5:V, reg r26:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg MARGIN1:*, reg MARGIN2:V, reg c4:L, reg c5:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r31:V, reg r32:V, reg dn:*, reg dn1:V, reg names:cls, reg r33:V, reg c6:V, reg c7:L, reg stop1:cls, reg r34:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r36:V, reg r37:V, reg MARGIN3:*, reg MARGIN4:V, reg dnn:*, reg dnn1:V, reg match:cls, reg r38:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r39:V, reg r40:V, reg MARGIN5:*, reg MARGIN6:V, reg anyNA:cls, reg r41:V, reg c8:L, reg stop2:cls, reg r42:V, reg r43:V, reg d:*, reg d1:V, reg c9:L, reg d3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg MARGIN7:*, reg MARGIN8:V, reg r45:V, reg __:cls, reg r46:V, reg d4:*, reg d5:V, reg c10:L, reg d7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg MARGIN9:*, reg MARGIN10:V, reg __1:cls, reg r47:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r48:V, reg r49:V, reg d_call:*, reg d_call1:V, reg anyNA1:cls, reg r50:V, reg c11:L, reg c12:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r51:V, reg c16:L, reg r52:V, reg d_ans:*, reg d_ans1:V, reg anyNA2:cls, reg r53:V, reg c17:L, reg c18:V, reg c20:L, reg stop3:cls, reg r54:V, reg ds:*, reg ds1:V, reg c21:L, reg ds3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg MARGIN11:*, reg MARGIN12:V, reg r56:V, reg __2:cls, reg r57:V, reg ds4:*, reg ds5:V, reg c22:L, reg ds7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg MARGIN13:*, reg MARGIN14:V, reg __3:cls, reg r58:V, reg dn2:*, reg dn3:V, reg c23:L, reg dn5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg MARGIN15:*, reg MARGIN16:V, reg r59:V, reg __4:cls, reg r60:V, reg dn6:*, reg dn7:V, reg c24:L, reg dn9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg MARGIN17:*, reg MARGIN18:V, reg __5:cls, reg r61:V, reg l:*, reg dimnames__:cls, reg r62:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r63:V, reg r64:V, reg d_ans2:*, reg d_ans3:V, reg prod:cls, reg r65:V, reg aperm:cls, reg x13:*, reg x14:V, reg p2:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r67:V, reg r68:V, reg s_call:*, reg s_call1:V, reg s_ans:*, reg s_ans1:V, reg c25:cls, reg r69:V, reg p3:p(V +), reg r71:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r72:V, reg r73:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r74:V, reg r75:V, reg d_call2:*, reg d_call3:V, reg prod1:cls, reg r76:V, reg d8:*, reg d9:V, reg c26:cls, reg r77:V, reg l1:*, reg dim__:cls, reg r78:V, reg lapply:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r79:V, reg r80:V, reg d10:*, reg d11:V, reg r81:I, reg p4:p(V +), reg r83:cls, reg p5:p(V +), reg r85:V, reg array:cls, reg ans:*, reg ans1:V, reg p6:p(V +), reg d_ans4:*, reg d_ans5:V, reg p7:p(V +), reg dn_ans:*, reg dn_ans1:V, reg p8:p(V +), reg r89:V |
    mkenv;
    st x = x;
    st MARGIN = MARGIN;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L37() else L38();
  L0(r1):
    st dl = r1;
    dl = ld dl;
    check L44() else D3();
  L37():
    sym1 = ldf dim;
    base1 = ldf dim in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L38():
    r = dyn base(<lang dim(x)>);
    goto L0(r);
  D3():
    deopt 11 [dl];
  L1(r3):
    length = ldf length in base;
    r5 = dyn length(r3);
    check L43() else D2();
  L39():
    x1 = ld x;
    check L41() else D0();
  L40():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  L44():
    dl1 = force? dl;
    checkMissing(dl1);
    r6 = `!`(dl1);
    c = `as.logical`(r6);
    if c then L45() else L2();
  D0():
    deopt 4 [x1];
  D2():
    deopt 9 [r5];
  L2():
    goto L3();
  L3():
    sym2 = ldf `is.object`;
    base2 = ldf `is.object` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L41():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r4 = dyn dim(x2);
    check L42() else D1();
  L43():
    goto L0(r5);
  L45():
    stop = ldf stop;
    check L46() else D4();
  D1():
    deopt 7 [r4];
  D4():
    deopt 15 [];
  L4(r10):
    c2 = `as.logical`(r10);
    if c2 then L52() else L5();
  L42():
    goto L1(r4);
  L46():
    r7 = dyn stop("dim(x) must have a positive length");
    check L47() else D5();
  L49():
    x3 = ld x;
    check L51() else D6();
  L50():
    r9 = dyn base2(<sym x>);
    goto L4(r9);
  D5():
    deopt 17 [r7];
  D6():
    deopt 21 [x3];
  L5():
    goto L8();
  L8():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L47():
    goto L3();
  L51():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    goto L4(c1);
  L52():
    dl2 = ld dl;
    check L53() else D7();
  D7():
    deopt 24 [dl2];
  L9(r19):
    st d = r19;
    sym4 = ldf dimnames;
    base4 = ldf dimnames in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  L53():
    dl3 = force? dl2;
    checkMissing(dl3);
    r11 = `==`(dl3, 2);
    c3 = `as.logical`(r11);
    if c3 then L54() else L6();
  L61():
    x9 = ld x;
    check L63() else D12();
  L62():
    r18 = dyn base3(<sym x>);
    goto L9(r18);
  D12():
    deopt 41 [x9];
  L6():
    as_array = ldf `as.array`;
    check L58() else D10();
  L7(r14):
    st x = r14;
    goto L8();
  L10(r22):
    st dn = r22;
    sym5 = ldf seq_len;
    base5 = ldf seq_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  L54():
    as_matrix = ldf `as.matrix`;
    check L55() else D8();
  L63():
    x10 = force? x9;
    checkMissing(x10);
    dim1 = ldf dim in base;
    r20 = dyn dim1(x10);
    check L64() else D13();
  L65():
    x11 = ld x;
    check L67() else D14();
  L66():
    r21 = dyn base4(<sym x>);
    goto L10(r21);
  D8():
    deopt 29 [];
  D10():
    deopt 33 [];
  D13():
    deopt 44 [r20];
  D14():
    deopt 48 [x11];
  L11(r25):
    st ds = r25;
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L55():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r13 = dyn as_matrix(p);
    check L56() else D9();
  L58():
    p1 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r16 = dyn as_array(p1);
    check L59() else D11();
  L64():
    goto L9(r20);
  L67():
    x12 = force? x11;
    checkMissing(x12);
    dimnames = ldf dimnames in base;
    r23 = dyn dimnames(x12);
    check L68() else D15();
  L69():
    dl4 = ld dl;
    check L71() else D16();
  L70():
    r24 = dyn base5(<sym dl>);
    goto L11(r24);
  D9():
    deopt 31 [r13];
  D11():
    deopt 35 [r16];
  D15():
    deopt 51 [r23];
  D16():
    deopt 54 [dl4];
  L12(r28):
    c5 = `as.logical`(r28);
    if c5 then L75() else L13();
  L56():
    goto L7(r13);
  L59():
    goto L7(r16);
  L68():
    goto L10(r23);
  L71():
    dl5 = force? dl4;
    checkMissing(dl5);
    r26 = seq_len(dl5);
    goto L11(r26);
  L72():
    MARGIN1 = ld MARGIN;
    check L74() else D17();
  L73():
    r27 = dyn base6(<sym MARGIN>);
    goto L12(r27);
  D17():
    deopt 59 [MARGIN1];
  L13():
    goto L22();
  L22():
    d = ld d;
    check L100() else D29();
  L74():
    MARGIN2 = force? MARGIN1;
    checkMissing(MARGIN2);
    c4 = `is.character`(MARGIN2);
    goto L12(c4);
  L75():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  D29():
    deopt 102 [d];
  L14(r30):
    c7 = `as.logical`(r30);
    if c7 then L82() else L16();
  L76():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L78() else L79();
  L77():
    r29 = dyn base7(<lang `<-`(dnn, names(dn))>);
    goto L14(r29);
  L100():
    d1 = force? d;
    checkMissing(d1);
    c9 = `is.object`(d1);
    if c9 then L101() else L102(d1);
  L15(r32):
    st dnn = r32;
    c6 = `==`(r32, NULL);
    goto L14(c6);
  L16():
    goto L17();
  L17():
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L86() else L87();
  L23(dx1):
    st `d.call` = dx1;
    d4 = ld d;
    check L105() else D31();
  L78():
    dn = ld dn;
    check L80() else D18();
  L79():
    r31 = dyn base8(<sym dn>);
    goto L15(r31);
  L82():
    stop1 = ldf stop;
    check L83() else D20();
  L101():
    dr = tryDispatchBuiltin.1("[", d1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L103() else L102(dr);
  L102(d3):
    MARGIN7 = ld MARGIN;
    check L104() else D30();
  D18():
    deopt 65 [dn];
  D20():
    deopt 72 [];
  D30():
    deopt 104 [d3, MARGIN7];
  D31():
    deopt 109 [d4];
  L18(r37):
    st MARGIN = r37;
    sym10 = ldf anyNA;
    base10 = ldf anyNA in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L91() else L92();
  L80():
    dn1 = force? dn;
    checkMissing(dn1);
    names = ldf names in base;
    r33 = dyn names(dn1);
    check L81() else D19();
  L83():
    r34 = dyn stop1("'x' must have named dimnames");
    check L84() else D21();
  L86():
    MARGIN3 = ld MARGIN;
    check L88() else D22();
  L87():
    r36 = dyn base9(<sym MARGIN>, <sym dnn>);
    goto L18(r36);
  L103():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L104():
    MARGIN8 = force? MARGIN7;
    checkMissing(MARGIN8);
    r45 = `-`(<missing>, MARGIN8);
    __ = ldf `[` in base;
    r46 = dyn __(d3, r45);
    goto L23(r46);
  L105():
    d5 = force? d4;
    checkMissing(d5);
    c10 = `is.object`(d5);
    if c10 then L106() else L107(d5);
  D19():
    deopt 68 [r33];
  D21():
    deopt 74 [r34];
  D22():
    deopt 79 [MARGIN3];
  L19(r40):
    c8 = `as.logical`(r40);
    if c8 then L95() else L20();
  L24(dx3):
    st `d.ans` = dx3;
    sym11 = ldf anyNA;
    base11 = ldf anyNA in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L110() else L111();
  L81():
    goto L15(r33);
  L84():
    goto L17();
  L88():
    MARGIN4 = force? MARGIN3;
    checkMissing(MARGIN4);
    dnn = ld dnn;
    check L89() else D23();
  L91():
    MARGIN5 = ld MARGIN;
    check L93() else D25();
  L92():
    r39 = dyn base10(<sym MARGIN>);
    goto L19(r39);
  L106():
    dr2 = tryDispatchBuiltin.1("[", d5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L108() else L107(dr2);
  L107(d7):
    MARGIN9 = ld MARGIN;
    check L109() else D32();
  D23():
    deopt 81 [dnn];
  D25():
    deopt 90 [MARGIN5];
  D32():
    deopt 111 [d7, MARGIN9];
  L20():
    goto L21(NULL);
  L21(r43):
    goto L22();
  L25(r49):
    c11 = `as.logical`(r49);
    if c11 then L26(c11) else L114();
  L89():
    dnn1 = force? dnn;
    checkMissing(dnn1);
    match = ldf match in base;
    r38 = dyn match(MARGIN4, dnn1, NA_INT, NULL);
    check L90() else D24();
  L93():
    MARGIN6 = force? MARGIN5;
    checkMissing(MARGIN6);
    anyNA = ldf anyNA in base;
    r41 = dyn anyNA(MARGIN6);
    check L94() else D26();
  L95():
    stop2 = ldf stop;
    check L96() else D27();
  L108():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L109():
    MARGIN10 = force? MARGIN9;
    __1 = ldf `[` in base;
    r47 = dyn __1(d7, MARGIN10);
    goto L24(r47);
  L110():
    d_call = ld `d.call`;
    check L112() else D33();
  L111():
    r48 = dyn base11(<sym d.call>);
    goto L25(r48);
  D24():
    deopt 86 [r38];
  D26():
    deopt 93 [r41];
  D27():
    deopt 95 [];
  D33():
    deopt 117 [d_call];
  L26(c12):
    c20 = `as.logical`(c12);
    if c20 then L120() else L28();
  L90():
    goto L18(r38);
  L94():
    goto L19(r41);
  L96():
    r42 = dyn stop2("not all elements of 'MARGIN' are names of dimensions");
    check L97() else D28();
  L112():
    d_call1 = force? d_call;
    checkMissing(d_call1);
    anyNA1 = ldf anyNA in base;
    r50 = dyn anyNA1(d_call1);
    check L113() else D34();
  L114():
    sym12 = ldf anyNA;
    base12 = ldf anyNA in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L115() else L116();
  D28():
    deopt 97 [r42];
  D34():
    deopt 120 [r50];
  L27(c16, r52):
    c17 = `as.logical`(r52);
    c18 = `||`(c16, c17);
    goto L26(c18);
  L28():
    goto L29();
  L29():
    ds = ld ds;
    check L124() else D39();
  L97():
    goto L21(r42);
  L113():
    goto L25(r50);
  L115():
    d_ans = ld `d.ans`;
    check L117() else D35();
  L116():
    r51 = dyn base12(<sym d.ans>);
    goto L27(c11, r51);
  L120():
    stop3 = ldf stop;
    check L121() else D37();
  D35():
    deopt 123 [c11, d_ans];
  D37():
    deopt 129 [];
  D39():
    deopt 134 [ds];
  L117():
    d_ans1 = force? d_ans;
    checkMissing(d_ans1);
    anyNA2 = ldf anyNA in base;
    r53 = dyn anyNA2(d_ans1);
    check L118() else D36();
  L121():
    r54 = dyn stop3("'MARGIN' does not match dim(X)");
    check L122() else D38();
  L124():
    ds1 = force? ds;
    checkMissing(ds1);
    c21 = `is.object`(ds1);
    if c21 then L125() else L126(ds1);
  D36():
    deopt 126 [c11, r53];
  D38():
    deopt 131 [r54];
  L30(dx5):
    st `s.call` = dx5;
    ds4 = ld ds;
    check L129() else D41();
  L118():
    goto L27(c11, r53);
  L122():
    goto L29();
  L125():
    dr4 = tryDispatchBuiltin.1("[", ds1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L127() else L126(dr4);
  L126(ds3):
    MARGIN11 = ld MARGIN;
    check L128() else D40();
  D40():
    deopt 136 [ds3, MARGIN11];
  D41():
    deopt 141 [ds4];
  L127():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx4);
  L128():
    MARGIN12 = force? MARGIN11;
    checkMissing(MARGIN12);
    r56 = `-`(<missing>, MARGIN12);
    __2 = ldf `[` in base;
    r57 = dyn __2(ds3, r56);
    goto L30(r57);
  L129():
    ds5 = force? ds4;
    checkMissing(ds5);
    c22 = `is.object`(ds5);
    if c22 then L130() else L131(ds5);
  L31(dx7):
    st `s.ans` = dx7;
    dn2 = ld dn;
    check L134() else D43();
  L130():
    dr6 = tryDispatchBuiltin.1("[", ds5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L132() else L131(dr6);
  L131(ds7):
    MARGIN13 = ld MARGIN;
    check L133() else D42();
  D42():
    deopt 143 [ds7, MARGIN13];
  D43():
    deopt 147 [dn2];
  L132():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L31(dx6);
  L133():
    MARGIN14 = force? MARGIN13;
    __3 = ldf `[` in base;
    r58 = dyn __3(ds7, MARGIN14);
    goto L31(r58);
  L134():
    dn3 = force? dn2;
    checkMissing(dn3);
    c23 = `is.object`(dn3);
    if c23 then L135() else L136(dn3);
  L32(dx9):
    st `dn.call` = dx9;
    dn6 = ld dn;
    check L139() else D45();
  L135():
    dr8 = tryDispatchBuiltin.1("[", dn3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L137() else L136(dr8);
  L136(dn5):
    MARGIN15 = ld MARGIN;
    check L138() else D44();
  D44():
    deopt 149 [dn5, MARGIN15];
  D45():
    deopt 154 [dn6];
  L137():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L32(dx8);
  L138():
    MARGIN16 = force? MARGIN15;
    checkMissing(MARGIN16);
    r59 = `-`(<missing>, MARGIN16);
    __4 = ldf `[` in base;
    r60 = dyn __4(dn5, r59);
    goto L32(r60);
  L139():
    dn7 = force? dn6;
    checkMissing(dn7);
    c24 = `is.object`(dn7);
    if c24 then L140() else L141(dn7);
  L33(dx11):
    st `dn.ans` = dx11;
    l = ld x;
    dimnames__ = ldf `dimnames<-`;
    check L144() else D47();
  L140():
    dr10 = tryDispatchBuiltin.1("[", dn7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L142() else L141(dr10);
  L141(dn9):
    MARGIN17 = ld MARGIN;
    check L143() else D46();
  D46():
    deopt 156 [dn9, MARGIN17];
  D47():
    deopt 163 [NULL, l, NULL];
  L142():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L33(dx10);
  L143():
    MARGIN18 = force? MARGIN17;
    __5 = ldf `[` in base;
    r61 = dyn __5(dn9, MARGIN18);
    goto L33(r61);
  L144():
    r62 = dyn dimnames__(l, NULL, NULL);
    check L145() else D48();
  D48():
    deopt 165 [NULL, r62];
  L145():
    st x = r62;
    sym13 = ldf prod;
    base13 = ldf prod in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L146() else L147();
  L34(r64):
    st d2 = r64;
    aperm = ldf aperm;
    check L150() else D51();
  L146():
    d_ans2 = ld `d.ans`;
    check L148() else D49();
  L147():
    r63 = dyn base13(<sym d.ans>);
    goto L34(r63);
  D49():
    deopt 169 [d_ans2];
  D51():
    deopt 175 [];
  L148():
    d_ans3 = force? d_ans2;
    checkMissing(d_ans3);
    prod = ldf prod in base;
    r65 = dyn prod(d_ans3);
    check L149() else D50();
  L150():
    p2 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p3 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r68):
      return r68;
    L1():
      s_call = ld `s.call`;
      s_call1 = force? s_call;
      checkMissing(s_call1);
      s_ans = ld `s.ans`;
      s_ans1 = force? s_ans;
      checkMissing(s_ans1);
      c25 = ldf c in base;
      r69 = dyn c25(s_call1, s_ans1);
      goto L0(r69);
    L2():
      r67 = dyn base14(<sym s.call>, <sym s.ans>);
      goto L0(r67);
    };
    r71 = dyn aperm(p2, p3);
    check L151() else D52();
  D50():
    deopt 172 [r65];
  D52():
    deopt 178 [r71];
  L149():
    goto L34(r65);
  L151():
    st newx = r71;
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L152() else L153();
  L35(r73):
    l1 = ld newx;
    dim__ = ldf `dim<-`;
    check L160() else D57();
  L152():
    sym16 = ldf prod;
    base16 = ldf prod in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L154() else L155();
  L153():
    r72 = dyn base15(<lang prod(d.call)>, <sym d2>);
    goto L35(r72);
  D57():
    deopt 193 [r73, l1, r73];
  L36(r75):
    d8 = ld d2;
    check L158() else D55();
  L154():
    d_call2 = ld `d.call`;
    check L156() else D53();
  L155():
    r74 = dyn base16(<sym d.call>);
    goto L36(r74);
  L160():
    r78 = dyn dim__(l1, NULL, r73);
    check L161() else D58();
  D53():
    deopt 184 [d_call2];
  D55():
    deopt 188 [d8];
  D58():
    deopt 195 [r73, r78];
  L156():
    d_call3 = force? d_call2;
    checkMissing(d_call3);
    prod1 = ldf prod in base;
    r76 = dyn prod1(d_call3);
    check L157() else D54();
  L158():
    d9 = force? d8;
    checkMissing(d9);
    c26 = ldf c in base;
    r77 = dyn c26(r75, d9);
    check L159() else D56();
  L161():
    st newx = r78;
    lapply = ldf lapply;
    check L162() else D59();
  D54():
    deopt 187 [r76];
  D56():
    deopt 191 [r77];
  D59():
    deopt 198 [];
  L157():
    goto L36(r76);
  L159():
    goto L35(r77);
  L162():
    p4 = prom<V +>{
      sym17 = ldf seq_len;
      base17 = ldf seq_len in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r80):
      return r80;
    L1():
      d10 = ld d2;
      d11 = force? d10;
      checkMissing(d11);
      r81 = seq_len(d11);
      goto L0(r81);
    L2():
      r79 = dyn base17(<sym d2>);
      goto L0(r79);
    };
    p5 = prom<V +>{
      r83 = clos inner3002224933;
      return r83;
    };
    r85 = dyn lapply(p4, p5);
    check L163() else D60();
  D60():
    deopt 201 [r85];
  L163():
    st ans = r85;
    array = ldf array;
    check L164() else D61();
  D61():
    deopt 204 [];
  L164():
    p6 = prom<V +>{
      ans = ld ans;
      ans1 = force? ans;
      checkMissing(ans1);
      return ans1;
    };
    p7 = prom<V +>{
      d_ans4 = ld `d.ans`;
      d_ans5 = force? d_ans4;
      checkMissing(d_ans5);
      return d_ans5;
    };
    p8 = prom<V +>{
      dn_ans = ld `dn.ans`;
      dn_ans1 = force? dn_ans;
      checkMissing(dn_ans1);
      return dn_ans1;
    };
    r89 = dyn array(p6, p7, p8);
    check L165() else D62();
  D62():
    deopt 208 [r89];
  L165():
    popenv;
    return r89;
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg array:cls, reg newx:*, reg newx1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg p:p(V +), reg d_call:*, reg d_call1:V, reg p1:p(V +), reg dn_call:*, reg dn_call1:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st i = i;
    array = ldf array;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      newx = ld newx;
      newx1 = force? newx;
      checkMissing(newx1);
      c = `is.object`(newx1);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", newx1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      i1 = ld i;
      i2 = force? i1;
      __ = ldf `[` in base;
      r = dyn __(newx1, <missing>, i2);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      d_call = ld `d.call`;
      d_call1 = force? d_call;
      checkMissing(d_call1);
      return d_call1;
    };
    p2 = prom<V +>{
      dn_call = ld `dn.call`;
      dn_call1 = force? dn_call;
      checkMissing(dn_call1);
      return dn_call1;
    };
    r4 = dyn array(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}