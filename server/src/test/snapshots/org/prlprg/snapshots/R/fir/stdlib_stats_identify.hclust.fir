fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1153303525;
    st `identify.hclust` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1153303525(x, FUN, N, MAXCLUSTER, `DEV.FUN`, `...`) {
  (reg x:*, reg FUN:*, reg N:*, reg MAXCLUSTER:*, reg DEV_FUN:*, reg ddd:dots) -+> V { var x:*, var FUN:*, reg FUN_isMissing:L, reg FUN_orDefault:*, var N:*, reg N_isMissing:L, reg N_orDefault:*, var MAXCLUSTER:*, reg MAXCLUSTER_isMissing:L, reg MAXCLUSTER_orDefault:*, var `DEV.FUN`:*, reg DEV_FUN_isMissing:L, reg DEV_FUN_orDefault:*, var `...`:dots?, reg cutree:cls, reg x1:*, reg x2:V, reg p:p(V +), reg MAXCLUSTER1:*, reg MAXCLUSTER2:V, reg r1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg list:cls, reg r6:V, reg dev_cur:cls, reg r7:V, reg N1:*, reg N2:V, reg r8:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x3:V, reg dev_set:cls, reg DEV_x:*, reg DEV_x1:V, reg p2:p(V +), reg r10:V, reg locator:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg i7:I, reg r13:V, reg X:*, reg X1:V, reg c1:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg i15:I, reg r16:V, reg which:cls, reg rev:cls, reg x4:*, reg x5:V, reg c3:L, reg x7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r17:V, reg p3:p(V +), reg r19:V, reg X2:*, reg X3:V, reg c4:L, reg r21:V, reg X5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r23:V, reg dx3:V, reg r24:V, reg r25:V, reg p4:p(V +), reg r27:V, reg MAXCLUSTER3:*, reg MAXCLUSTER4:V, reg min:cls, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg i18:I, reg r30:V, reg k:*, reg k1:V, reg max:cls, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg i21:I, reg r33:V, reg oldx:*, reg oldx1:V, reg c5:V, reg r34:V, reg c6:L, reg rect_hclust:cls, reg x8:*, reg x9:V, reg p5:p(V +), reg oldk:*, reg oldk1:V, reg p6:p(V +), reg oldx2:*, reg oldx3:V, reg p7:p(V +), reg cluster:*, reg cluster1:V, reg c7:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg oldk2:*, reg oldk3:V, reg r38:V, reg __:cls, reg r39:V, reg p8:p(V +), reg r41:V, reg i24:I, reg unlist:cls, reg rect_hclust1:cls, reg x10:*, reg x11:V, reg p9:p(V +), reg k2:*, reg k3:V, reg p10:p(V +), reg X6:*, reg X7:V, reg c8:L, reg X9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r45:V, reg p11:p(V +), reg cluster4:*, reg cluster5:V, reg c9:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg k4:*, reg k5:V, reg r47:V, reg __1:cls, reg r48:V, reg p12:p(V +), reg r50:V, reg p13:p(V +), reg r52:V, reg l1:*, reg c10:L, reg i26:I, reg r54:V, reg l3:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i28:I, reg dx11:V, reg n:*, reg n1:V, reg ____:cls, reg r57:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg i31:I, reg r59:V, reg FUN1:*, reg FUN2:V, reg c11:V, reg r60:V, reg c12:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r61:V, reg i36:I, reg r62:V, reg DEV_FUN1:*, reg DEV_FUN2:V, reg c13:V, reg r63:V, reg c14:L, reg dev_set1:cls, reg DEV_FUN3:*, reg DEV_FUN4:V, reg p14:p(V +), reg r65:V, reg i39:I, reg FUN3:cls, reg retval:*, reg retval1:V, reg c15:L, reg retval3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg n2:*, reg n3:V, reg __2:cls, reg r67:V, reg p15:p(V +), reg ddd1:dots?, reg r69:V, reg l4:*, reg c16:L, reg i41:I, reg r71:V, reg l6:*, reg dr14:V, reg dc7:L, reg dx14:V, reg i43:I, reg r73:V, reg dx15:V, reg n4:*, reg n5:V, reg ____1:cls, reg r74:V, reg i44:I, reg X10:*, reg X11:V, reg c17:L, reg i46:I, reg X13:V, reg dr16:V, reg dc8:L, reg dx16:V, reg i48:I, reg dx17:V, reg r76:V, reg k6:*, reg k7:V, reg dev_set2:cls, reg DEV_x2:*, reg DEV_x3:V, reg p16:p(V +), reg r78:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r79:V, reg r80:V, reg retval4:*, reg retval5:V, reg invisible:cls, reg r81:V |
    mkenv;
    st x = x;
    FUN_isMissing = missing.0(FUN);
    if FUN_isMissing then L0(NULL) else L0(FUN);
  L0(FUN_orDefault):
    st FUN = FUN_orDefault;
    N_isMissing = missing.0(N);
    if N_isMissing then L1(20.0) else L1(N);
  L1(N_orDefault):
    st N = N_orDefault;
    MAXCLUSTER_isMissing = missing.0(MAXCLUSTER);
    if MAXCLUSTER_isMissing then L2(20.0) else L2(MAXCLUSTER);
  L2(MAXCLUSTER_orDefault):
    st MAXCLUSTER = MAXCLUSTER_orDefault;
    DEV_FUN_isMissing = missing.0(DEV_FUN);
    if DEV_FUN_isMissing then L3(NULL) else L3(DEV_FUN);
  L3(DEV_FUN_orDefault):
    st `DEV.FUN` = DEV_FUN_orDefault;
    st `...` = ddd;
    cutree = ldf cutree;
    check L25() else D0();
  D0():
    deopt 1 [];
  L25():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      MAXCLUSTER1 = ld MAXCLUSTER;
      MAXCLUSTER2 = force? MAXCLUSTER1;
      checkMissing(MAXCLUSTER2);
      r1 = `:`(2.0, MAXCLUSTER2);
      return r1;
    };
    r3 = dyn cutree[, k](p, p1);
    check L26() else D1();
  D1():
    deopt 5 [r3];
  L26():
    st cluster = r3;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L4(r5):
    st retval = r5;
    st oldk = NULL;
    st oldx = NULL;
    dev_cur = ldf `dev.cur`;
    check L30() else D3();
  L27():
    list = ldf list in base;
    r6 = dyn list();
    check L29() else D2();
  L28():
    r4 = dyn base();
    goto L4(r4);
  D2():
    deopt 10 [r6];
  D3():
    deopt 19 [];
  L29():
    goto L4(r6);
  L30():
    r7 = dyn dev_cur();
    check L31() else D4();
  D4():
    deopt 20 [r7];
  L31():
    st `DEV.x` = r7;
    N1 = ld N;
    check L32() else D5();
  D5():
    deopt 23 [1, N1];
  L32():
    N2 = force? N1;
    checkMissing(N2);
    r8 = `:`(1, N2);
    s = toForSeq(r8);
    l = length(s);
    i = 0;
    goto L5(i);
  L5(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L33() else L23();
  L8():
    dev_set2 = ldf `dev.set`;
    check L91() else D32();
  L23():
    x3 = `[[`(s, i2, NULL, TRUE);
    st n = x3;
    dev_set = ldf `dev.set`;
    check L34() else D6();
  L33():
    goto L8();
  D6():
    deopt 27 [i2];
  D32():
    deopt 129 [];
  L34():
    p2 = prom<V +>{
      DEV_x = ld `DEV.x`;
      DEV_x1 = force? DEV_x;
      checkMissing(DEV_x1);
      return DEV_x1;
    };
    r10 = dyn dev_set(p2);
    check L35() else D7();
  L91():
    p16 = prom<V +>{
      DEV_x2 = ld `DEV.x`;
      DEV_x3 = force? DEV_x2;
      checkMissing(DEV_x3);
      return DEV_x3;
    };
    r78 = dyn dev_set2(p16);
    check L92() else D33();
  D7():
    deopt 29 [i2, r10];
  D33():
    deopt 131 [r78];
  L35():
    locator = ldf locator;
    check L36() else D8();
  L92():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L93() else L94();
  D8():
    deopt 31 [i2];
  L24(r80):
    popenv;
    return r80;
  L36():
    r11 = dyn locator(1.0);
    check L37() else D9();
  L93():
    retval4 = ld retval;
    check L95() else D34();
  L94():
    r79 = dyn base7(<sym retval>);
    goto L24(r79);
  D9():
    deopt 33 [i2, r11];
  D34():
    deopt 134 [retval4];
  L37():
    st X = r11;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L95():
    retval5 = force? retval4;
    checkMissing(retval5);
    invisible = ldf invisible in base;
    r81 = dyn invisible(retval5);
    check L96() else D35();
  D35():
    deopt 137 [r81];
  L6(i7, r13):
    c2 = `as.logical`(r13);
    if c2 then L41() else L7();
  L38():
    X = ld X;
    check L40() else D10();
  L39():
    r12 = dyn base1(<sym X>);
    goto L6(i2, r12);
  L96():
    goto L24(r81);
  D10():
    deopt 36 [i2, X];
  L7():
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L40():
    X1 = force? X;
    checkMissing(X1);
    c1 = `==`(X1, NULL);
    goto L6(i2, c1);
  L41():
    goto L8();
  L10(i15, r16):
    st k = r16;
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L44():
    which = ldf which;
    check L46() else D11();
  L45():
    r15 = dyn base2(<lang which(`<`(rev(`$`(x, height)), `$`(X, y)))>, <sym MAXCLUSTER>);
    goto L10(i7, r15);
  D11():
    deopt 46 [i7];
  L11(i18, r30):
    st k = r30;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L46():
    p4 = prom<V +>{
      rev = ldf rev;
      p3 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        c3 = `is.object`(x5);
        if c3 then L1() else L2(x5);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", x5);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x7):
        r17 = `$`(x7, <sym height>);
        goto L0(r17);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r19 = dyn rev(p3);
      X2 = ld X;
      X3 = force? X2;
      checkMissing(X3);
      c4 = `is.object`(X3);
      if c4 then L1() else L2(r19, X3);
    L0(r23, dx3):
      r25 = `<`(r23, dx3);
      return r25;
    L1():
      dr2 = tryDispatchBuiltin.1("$", X3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(r19, dr2);
    L2(r21, X5):
      r24 = `$`(X5, <sym y>);
      goto L0(r21, r24);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(r19, dx2);
    };
    r27 = dyn which(p4);
    check L47() else D12();
  L50():
    k = ld k;
    check L52() else D15();
  L51():
    r29 = dyn base3(<sym k>, 2.0);
    goto L11(i15, r29);
  D12():
    deopt 48 [i7, r27];
  D15():
    deopt 56 [i15, k];
  L12(i21, r33):
    r34 = `!`(r33);
    c6 = `as.logical`(r34);
    if c6 then L57() else L13();
  L47():
    MAXCLUSTER3 = ld MAXCLUSTER;
    check L48() else D13();
  L52():
    k1 = force? k;
    checkMissing(k1);
    max = ldf max in base;
    r31 = dyn max(k1, 2.0);
    check L53() else D16();
  L54():
    oldx = ld oldx;
    check L56() else D17();
  L55():
    r32 = dyn base4(<sym oldx>);
    goto L12(i18, r32);
  D13():
    deopt 49 [i7, MAXCLUSTER3];
  D16():
    deopt 60 [i15, r31];
  D17():
    deopt 63 [i18, oldx];
  L13():
    goto L14(i21);
  L14(i24):
    unlist = ldf unlist;
    check L61() else D20();
  L48():
    MAXCLUSTER4 = force? MAXCLUSTER3;
    checkMissing(MAXCLUSTER4);
    min = ldf min in base;
    r28 = dyn min(r27, MAXCLUSTER4);
    check L49() else D14();
  L53():
    goto L11(i15, r31);
  L56():
    oldx1 = force? oldx;
    checkMissing(oldx1);
    c5 = `==`(oldx1, NULL);
    goto L12(i18, c5);
  L57():
    rect_hclust = ldf `rect.hclust`;
    check L58() else D18();
  D14():
    deopt 52 [i7, r28];
  D18():
    deopt 68 [i21];
  D20():
    deopt 82 [i24];
  L49():
    goto L10(i7, r28);
  L58():
    p5 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    p6 = prom<V +>{
      oldk = ld oldk;
      oldk1 = force? oldk;
      checkMissing(oldk1);
      return oldk1;
    };
    p7 = prom<V +>{
      oldx2 = ld oldx;
      oldx3 = force? oldx2;
      checkMissing(oldx3);
      return oldx3;
    };
    p8 = prom<V +>{
      cluster = ld cluster;
      cluster1 = force? cluster;
      checkMissing(cluster1);
      c7 = `is.object`(cluster1);
      if c7 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", cluster1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      oldk2 = ld oldk;
      oldk3 = force? oldk2;
      checkMissing(oldk3);
      r38 = `-`(oldk3, 1.0);
      __ = ldf `[` in base;
      r39 = dyn __(cluster1, <missing>, r38);
      goto L0(r39);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r41 = dyn rect_hclust[, k, x, cluster, border](p5, p6, p7, p8, "grey");
    check L59() else D19();
  L61():
    p13 = prom<V +>{
      rect_hclust1 = ldf `rect.hclust`;
      p9 = prom<V +>{
        x10 = ld x;
        x11 = force? x10;
        checkMissing(x11);
        return x11;
      };
      p10 = prom<V +>{
        k2 = ld k;
        k3 = force? k2;
        checkMissing(k3);
        return k3;
      };
      p11 = prom<V +>{
        X6 = ld X;
        X7 = force? X6;
        checkMissing(X7);
        c8 = `is.object`(X7);
        if c8 then L1() else L2(X7);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", X7);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(X9):
        r45 = `$`(X9, <sym x>);
        goto L0(r45);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p12 = prom<V +>{
        cluster4 = ld cluster;
        cluster5 = force? cluster4;
        checkMissing(cluster5);
        c9 = `is.object`(cluster5);
        if c9 then L1() else L2();
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[", cluster5);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2();
      L2():
        k4 = ld k;
        k5 = force? k4;
        checkMissing(k5);
        r47 = `-`(k5, 1.0);
        __1 = ldf `[` in base;
        r48 = dyn __1(cluster5, <missing>, r47);
        goto L0(r48);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r50 = dyn rect_hclust1[, k, x, cluster, border](p9, p10, p11, p12, "red");
      return r50;
    };
    r52 = dyn unlist(p13);
    check L62() else D21();
  D19():
    deopt 78 [i21, r41];
  D21():
    deopt 84 [i24, r52];
  L59():
    goto L14(i21);
  L62():
    l1 = ld retval;
    c10 = `is.object`(l1);
    if c10 then L63() else L64(i24, r52, l1);
  L15(i28, dx11):
    st retval = dx11;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L67() else L68();
  L63():
    dr10 = tryDispatchBuiltin.0("[[<-", l1, r52);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L65() else L64(i24, r52, dr10);
  L64(i26, r54, l3):
    n = ld n;
    check L66() else D22();
  D22():
    deopt 86 [i26, r54, l3, r52, n];
  L16(i31, r59):
    r60 = `!`(r59);
    c12 = `as.logical`(r60);
    if c12 then L70() else L17();
  L65():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L15(i24, dx10);
  L66():
    n1 = force? n;
    ____ = ldf `[[<-` in base;
    r57 = dyn ____(l3, r52, n1);
    goto L15(i26, r57);
  L67():
    FUN1 = ld FUN;
    check L69() else D23();
  L68():
    r58 = dyn base5(<sym FUN>);
    goto L16(i28, r58);
  D23():
    deopt 91 [i28, FUN1];
  L17():
    goto L22(i31);
  L22(i44):
    X10 = ld X;
    check L85() else D30();
  L69():
    FUN2 = force? FUN1;
    checkMissing(FUN2);
    c11 = `==`(FUN2, NULL);
    goto L16(i28, c11);
  L70():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  D30():
    deopt 118 [i44, X10];
  L18(i36, r62):
    r63 = `!`(r62);
    c14 = `as.logical`(r63);
    if c14 then L74() else L19();
  L71():
    DEV_FUN1 = ld `DEV.FUN`;
    check L73() else D24();
  L72():
    r61 = dyn base6(<sym DEV.FUN>);
    goto L18(i31, r61);
  L85():
    X11 = force? X10;
    checkMissing(X11);
    c17 = `is.object`(X11);
    if c17 then L87() else L88(i44, X11);
  D24():
    deopt 96 [i31, DEV_FUN1];
  L19():
    goto L20(i36);
  L20(i39):
    FUN3 = ldf FUN;
    check L78() else D27();
  L73():
    DEV_FUN2 = force? DEV_FUN1;
    checkMissing(DEV_FUN2);
    c13 = `==`(DEV_FUN2, NULL);
    goto L18(i31, c13);
  L74():
    dev_set1 = ldf `dev.set`;
    check L75() else D25();
  L86(i48, dx17):
    st oldx = dx17;
    k6 = ld k;
    check L90() else D31();
  L87():
    dr16 = tryDispatchBuiltin.1("$", X11);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L89() else L88(i44, dr16);
  L88(i46, X13):
    r76 = `$`(X13, <sym x>);
    goto L86(i46, r76);
  D25():
    deopt 101 [i36];
  D27():
    deopt 107 [i39];
  D31():
    deopt 122 [i48, k6];
  L75():
    p14 = prom<V +>{
      DEV_FUN3 = ld `DEV.FUN`;
      DEV_FUN4 = force? DEV_FUN3;
      checkMissing(DEV_FUN4);
      return DEV_FUN4;
    };
    r65 = dyn dev_set1(p14);
    check L76() else D26();
  L78():
    p15 = prom<V +>{
      retval = ld retval;
      retval1 = force? retval;
      checkMissing(retval1);
      c15 = `is.object`(retval1);
      if c15 then L1() else L2(retval1);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", retval1);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(retval3):
      n2 = ld n;
      n3 = force? n2;
      __2 = ldf `[[` in base;
      r67 = dyn __2(retval3, n3);
      goto L0(r67);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    ddd1 = ld `...`;
    r69 = dyn FUN3[, `...`](p15, ddd1);
    check L79() else D28();
  L89():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L86(i44, dx16);
  L90():
    k7 = force? k6;
    checkMissing(k7);
    st oldk = k7;
    goto L5(i48);
  D26():
    deopt 103 [i36, r65];
  D28():
    deopt 110 [i39, r69];
  L76():
    goto L20(i36);
  L79():
    l4 = ld retval;
    c16 = `is.object`(l4);
    if c16 then L80() else L81(i39, r69, l4);
  L21(i43, r73, dx15):
    st retval = dx15;
    goto L22(i43);
  L80():
    dr14 = tryDispatchBuiltin.0("[[<-", l4, r69);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L82() else L81(i39, r69, dr14);
  L81(i41, r71, l6):
    n4 = ld n;
    check L83() else D29();
  D29():
    deopt 112 [i41, r71, l6, r69, n4];
  L82():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L21(i39, r69, dx14);
  L83():
    n5 = force? n4;
    ____1 = ldf `[[<-` in base;
    r74 = dyn ____1(l6, r69, n5);
    goto L21(i41, r71, r74);
  }
}