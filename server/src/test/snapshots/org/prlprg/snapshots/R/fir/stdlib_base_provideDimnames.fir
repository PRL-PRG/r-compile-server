fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044439181;
    st provideDimnames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044439181(x, sep, base, unique) {
  (reg x:*, reg sep:*, reg base:*, reg unique:*) -+> V { var x:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var base:*, reg base_isMissing:L, reg base_orDefault:*, reg sym:cls, reg base1:cls, reg guard:L, reg r:V, reg r1:V, reg LETTERS:*, reg LETTERS1:V, reg list:cls, reg r2:V, reg p:p(V +), var unique:*, reg unique_isMissing:L, reg unique_orDefault:*, reg sym1:cls, reg base2:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg dim:cls, reg r6:V, reg sym2:cls, reg base3:cls, reg guard2:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg dimnames:cls, reg r9:V, reg sym3:cls, reg base4:cls, reg guard3:L, reg r10:V, reg r11:V, reg dnx:*, reg dnx1:V, reg c:V, reg c1:L, reg sym4:cls, reg base5:cls, reg guard4:L, reg r12:V, reg r13:V, reg sym5:cls, reg base6:cls, reg guard5:L, reg r14:V, reg r15:V, reg dx:*, reg dx1:V, reg length:cls, reg r16:V, reg vector:cls, reg r17:V, reg sym6:cls, reg base7:cls, reg guard6:L, reg r19:V, reg r20:V, reg lengths:cls, reg base8:*, reg base9:V, reg p1:p(V +), reg r22:V, reg length1:cls, reg r23:V, reg which:cls, reg vapply:cls, reg dnx2:*, reg dnx3:V, reg p2:p(V +), reg is_null:*, reg is_null1:V, reg p3:p(V +), reg r26:V, reg p4:p(V +), reg r28:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x5:V, reg i5:*, reg i6:V, reg r29:V, reg k:*, reg k1:V, reg __:cls, reg r30:V, reg r31:V, reg sym7:cls, reg base10:cls, reg guard7:L, reg r32:V, reg i9:I, reg r33:V, reg dx2:*, reg dx3:V, reg c3:L, reg i11:I, reg dx5:V, reg dr:V, reg dc:L, reg dx6:V, reg i13:I, reg dx7:V, reg i14:*, reg i15:V, reg __1:cls, reg r34:V, reg r35:I, reg r36:V, reg base11:*, reg base12:V, reg c4:L, reg i17:I, reg base14:V, reg dr2:V, reg dc1:L, reg dx8:V, reg i19:I, reg dx9:V, reg ii:*, reg ii1:V, reg __2:cls, reg r37:V, reg c5:L, reg i21:I, reg dx11:V, reg dr4:V, reg dc2:L, reg dx12:V, reg i23:I, reg dx13:V, reg ss:*, reg ss1:V, reg M:*, reg M1:V, reg c6:L, reg i25:I, reg dx15:V, reg r39:I, reg M3:V, reg dr6:V, reg dc3:L, reg dx17:V, reg i27:I, reg dx18:V, reg r41:I, reg dx19:V, reg ii2:*, reg ii3:V, reg __3:cls, reg r42:V, reg __4:cls, reg r43:V, reg r44:V, reg __5:cls, reg r45:V, reg unique1:*, reg unique2:V, reg c7:L, reg make_unique:cls, reg bi:*, reg bi1:V, reg p5:p(V +), reg sep1:*, reg sep2:V, reg p6:p(V +), reg r48:V, reg i30:I, reg r49:V, reg bi2:*, reg bi3:V, reg l1:*, reg c8:L, reg i32:I, reg r51:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx20:V, reg i34:I, reg dx21:V, reg i35:*, reg i36:V, reg ____:cls, reg r54:V, reg new:*, reg new1:V, reg c9:L, reg dnx4:*, reg dnx5:V, reg l4:*, reg dimnames__:cls, reg r55:V, reg x6:*, reg x7:V |
    mkenv;
    st x = x;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L0("") else L0(sep);
  L0(sep_orDefault):
    st sep = sep_orDefault;
    base_isMissing = missing.0(base);
    if base_isMissing then L1() else L2(base);
  L1():
    p = prom<V +>{
      sym = ldf list;
      base1 = ldf list in base;
      guard = `==`.4(sym, base1);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      list = ldf list in base;
      r2 = dyn list(LETTERS1);
      goto L0(r2);
    L2():
      r = dyn base1(<sym LETTERS>);
      goto L0(r);
    };
    goto L2(p);
  L2(base_orDefault):
    st base = base_orDefault;
    unique_isMissing = missing.0(unique);
    if unique_isMissing then L3(TRUE) else L3(unique);
  L3(unique_orDefault):
    st unique = unique_orDefault;
    sym1 = ldf dim;
    base2 = ldf dim in base;
    guard1 = `==`.4(sym1, base2);
    if guard1 then L24() else L25();
  L4(r5):
    st dx = r5;
    sym2 = ldf dimnames;
    base3 = ldf dimnames in base;
    guard2 = `==`.4(sym2, base3);
    if guard2 then L28() else L29();
  L24():
    x1 = ld x;
    check L26() else D0();
  L25():
    r4 = dyn base2(<sym x>);
    goto L4(r4);
  D0():
    deopt 2 [x1];
  L5(r8):
    st dnx = r8;
    sym3 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base4);
    if guard3 then L32() else L33();
  L26():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r6 = dyn dim(x2);
    check L27() else D1();
  L28():
    x3 = ld x;
    check L30() else D2();
  L29():
    r7 = dyn base3(<sym x>);
    goto L5(r7);
  D1():
    deopt 5 [r6];
  D2():
    deopt 9 [x3];
  L6(r11):
    st new = r11;
    c1 = `as.logical`(r11);
    if c1 then L35() else L7();
  L27():
    goto L4(r6);
  L30():
    x4 = force? x3;
    checkMissing(x4);
    dimnames = ldf dimnames in base;
    r9 = dyn dimnames(x4);
    check L31() else D3();
  L32():
    dnx = ld dnx;
    check L34() else D4();
  L33():
    r10 = dyn base4(<sym dnx>);
    goto L6(r10);
  D3():
    deopt 12 [r9];
  D4():
    deopt 15 [dnx];
  L7():
    goto L10();
  L10():
    sym6 = ldf length;
    base7 = ldf length in base;
    guard6 = `==`.4(sym6, base7);
    if guard6 then L44() else L45();
  L31():
    goto L5(r9);
  L34():
    dnx1 = force? dnx;
    checkMissing(dnx1);
    c = `==`(dnx1, NULL);
    goto L6(c);
  L35():
    sym4 = ldf vector;
    base5 = ldf vector in base;
    guard4 = `==`.4(sym4, base5);
    if guard4 then L36() else L37();
  L8(r13):
    st dnx = r13;
    goto L10();
  L11(r20):
    st k = r20;
    which = ldf which;
    check L49() else D11();
  L36():
    sym5 = ldf length;
    base6 = ldf length in base;
    guard5 = `==`.4(sym5, base6);
    if guard5 then L38() else L39();
  L37():
    r12 = dyn base5("list", <lang length(dx)>);
    goto L8(r12);
  L44():
    lengths = ldf lengths;
    check L46() else D8();
  L45():
    r19 = dyn base7(<lang `<-`(M, lengths(base))>);
    goto L11(r19);
  D8():
    deopt 36 [];
  D11():
    deopt 44 [];
  L9(r15):
    vector = ldf vector in base;
    r17 = dyn vector("list", r15);
    check L42() else D7();
  L38():
    dx = ld dx;
    check L40() else D5();
  L39():
    r14 = dyn base6(<sym dx>);
    goto L9(r14);
  L46():
    p1 = prom<V +>{
      base8 = ld base;
      base9 = force? base8;
      checkMissing(base9);
      return base9;
    };
    r22 = dyn lengths(p1);
    check L47() else D9();
  L49():
    p4 = prom<V +>{
      vapply = ldf vapply;
      p2 = prom<V +>{
        dnx2 = ld dnx;
        dnx3 = force? dnx2;
        checkMissing(dnx3);
        return dnx3;
      };
      p3 = prom<V +>{
        is_null = ld `is.null`;
        is_null1 = force? is_null;
        checkMissing(is_null1);
        return is_null1;
      };
      r26 = dyn vapply(p2, p3, NA_LGL);
      return r26;
    };
    r28 = dyn which(p4);
    check L50() else D12();
  D5():
    deopt 24 [dx];
  D7():
    deopt 29 [r17];
  D9():
    deopt 38 [r22];
  D12():
    deopt 46 [r28];
  L40():
    dx1 = force? dx;
    checkMissing(dx1);
    length = ldf length in base;
    r16 = dyn length(dx1);
    check L41() else D6();
  L42():
    goto L8(r17);
  L47():
    st M = r22;
    length1 = ldf length in base;
    r23 = dyn length1(r22);
    check L48() else D10();
  L50():
    s = toForSeq(r28);
    l = length(s);
    i = 0;
    goto L12(i);
  D6():
    deopt 27 [r16];
  D10():
    deopt 41 [r23];
  L12(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L51() else L21();
  L41():
    goto L9(r16);
  L48():
    goto L11(r23);
  L21():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    i5 = ld i;
    check L52() else D13();
  L51():
    new = ld new;
    check L87() else D29();
  D13():
    deopt 49 [i2, 1, i5];
  D29():
    deopt 109 [new];
  L52():
    i6 = force? i5;
    checkMissing(i6);
    r29 = `-`(i6, 1);
    k = ld k;
    check L53() else D14();
  L87():
    new1 = force? new;
    checkMissing(new1);
    c9 = `as.logical`(new1);
    if c9 then L88() else L22();
  D14():
    deopt 53 [i2, 1, k];
  L22():
    goto L23();
  L23():
    x6 = ld x;
    check L93() else D33();
  L53():
    k1 = force? k;
    checkMissing(k1);
    __ = ldf `%%` in base;
    r30 = dyn __(r29, k1);
    check L54() else D15();
  L88():
    dnx4 = ld dnx;
    check L89() else D30();
  D15():
    deopt 56 [i2, 1, r30];
  D30():
    deopt 111 [dnx4];
  D33():
    deopt 120 [x6];
  L54():
    r31 = `+`(1, r30);
    st ii = r31;
    sym7 = ldf seq_len;
    base10 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base10);
    if guard7 then L55() else L56();
  L89():
    dnx5 = force? dnx4;
    checkMissing(dnx5);
    l4 = ld x;
    dimnames__ = ldf `dimnames<-`;
    check L90() else D31();
  L93():
    x7 = force? x6;
    checkMissing(x7);
    popenv;
    return x7;
  D31():
    deopt 114 [dnx5, l4, dnx5];
  L13(i9, r33):
    r36 = `-`(r33, 1);
    st ss = r36;
    base11 = ld base;
    check L62() else D18();
  L55():
    dx2 = ld dx;
    check L57() else D16();
  L56():
    r32 = dyn base10(<lang `[`(dx, i)>);
    goto L13(i2, r32);
  L90():
    r55 = dyn dimnames__(l4, NULL, dnx5);
    check L91() else D32();
  D16():
    deopt 60 [i2, dx2];
  D18():
    deopt 69 [i9, base11];
  D32():
    deopt 116 [dnx5, r55];
  L57():
    dx3 = force? dx2;
    checkMissing(dx3);
    c3 = `is.object`(dx3);
    if c3 then L58() else L59(i2, dx3);
  L62():
    base12 = force? base11;
    checkMissing(base12);
    c4 = `is.object`(base12);
    if c4 then L63() else L64(i9, base12);
  L91():
    st x = r55;
    goto L23();
  L14(i13, dx7):
    r35 = seq_len(dx7);
    goto L13(i13, r35);
  L15(i19, dx9):
    c5 = `is.object`(dx9);
    if c5 then L67() else L68(i19, dx9);
  L58():
    dr = tryDispatchBuiltin.1("[", dx3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(i2, dr);
  L59(i11, dx5):
    i14 = ld i;
    check L61() else D17();
  L63():
    dr2 = tryDispatchBuiltin.1("[[", base12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L65() else L64(i9, dr2);
  L64(i17, base14):
    ii = ld ii;
    check L66() else D19();
  D17():
    deopt 62 [i11, dx5, i14];
  D19():
    deopt 71 [i17, base14, ii];
  L16(i23, dx13):
    st bi = dx13;
    unique1 = ld unique;
    check L77() else D24();
  L60():
    dx6 = getTryDispatchBuiltinValue(dr);
    goto L14(i2, dx6);
  L61():
    i15 = force? i14;
    __1 = ldf `[` in base;
    r34 = dyn __1(dx5, i15);
    goto L14(i11, r34);
  L65():
    dx8 = getTryDispatchBuiltinValue(dr2);
    goto L15(i9, dx8);
  L66():
    ii1 = force? ii;
    __2 = ldf `[[` in base;
    r37 = dyn __2(base14, ii1);
    goto L15(i17, r37);
  L67():
    dr4 = tryDispatchBuiltin.1("[", dx9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L69() else L68(i19, dr4);
  L68(i21, dx11):
    ss = ld ss;
    check L70() else D20();
  D20():
    deopt 76 [i21, dx11, 1, ss];
  D24():
    deopt 88 [i23, unique1];
  L69():
    dx12 = getTryDispatchBuiltinValue(dr4);
    goto L16(i19, dx12);
  L70():
    ss1 = force? ss;
    checkMissing(ss1);
    M = ld M;
    check L71() else D21();
  L77():
    unique2 = force? unique1;
    checkMissing(unique2);
    c7 = `as.logical`(unique2);
    if c7 then L78() else L18();
  D21():
    deopt 78 [i21, dx11, 1, M];
  L18():
    bi2 = ld bi;
    check L82() else D27();
  L19(i30, r49):
    l1 = ld dnx;
    c8 = `is.object`(l1);
    if c8 then L83() else L84(i30, r49, l1);
  L71():
    M1 = force? M;
    checkMissing(M1);
    c6 = `is.object`(M1);
    if c6 then L72() else L73(i21, dx11, 1, M1);
  L78():
    make_unique = ldf `make.unique`;
    check L79() else D25();
  D25():
    deopt 91 [i23];
  D27():
    deopt 96 [i23, bi2];
  L17(i27, dx18, r41, dx19):
    __4 = ldf `%%` in base;
    r43 = dyn __4(ss1, dx19);
    check L76() else D23();
  L20(i34, dx21):
    st dnx = dx21;
    st new = TRUE;
    goto L12(i34);
  L72():
    dr6 = tryDispatchBuiltin.1("[", M1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L74() else L73(i21, dx11, 1, dr6);
  L73(i25, dx15, r39, M3):
    ii2 = ld ii;
    check L75() else D22();
  L79():
    p5 = prom<V +>{
      bi = ld bi;
      bi1 = force? bi;
      checkMissing(bi1);
      return bi1;
    };
    p6 = prom<V +>{
      sep1 = ld sep;
      sep2 = force? sep1;
      checkMissing(sep2);
      return sep2;
    };
    r48 = dyn make_unique[, sep](p5, p6);
    check L80() else D26();
  L82():
    bi3 = force? bi2;
    checkMissing(bi3);
    goto L19(i23, bi3);
  L83():
    dr8 = tryDispatchBuiltin.0("[[<-", l1, r49);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L85() else L84(i30, r49, dr8);
  L84(i32, r51, l3):
    i35 = ld i;
    check L86() else D28();
  D22():
    deopt 80 [i25, dx15, r39, M3, ii2];
  D23():
    deopt 84 [i27, dx18, r41, r43];
  D26():
    deopt 95 [i23, r48];
  D28():
    deopt 99 [i32, r51, l3, r49, i35];
  L74():
    dx17 = getTryDispatchBuiltinValue(dr6);
    goto L17(i21, dx11, 1, dx17);
  L75():
    ii3 = force? ii2;
    __3 = ldf `[` in base;
    r42 = dyn __3(M3, ii3);
    goto L17(i25, dx15, r39, r42);
  L76():
    r44 = `+`(r41, r43);
    __5 = ldf `[` in base;
    r45 = dyn __5(dx18, r44);
    goto L16(i27, r45);
  L80():
    goto L19(i23, r48);
  L85():
    dx20 = getTryDispatchBuiltinValue(dr8);
    goto L20(i30, dx20);
  L86():
    i36 = force? i35;
    ____ = ldf `[[<-` in base;
    r54 = dyn ____(l3, r49, i36);
    goto L20(i32, r54);
  }
}