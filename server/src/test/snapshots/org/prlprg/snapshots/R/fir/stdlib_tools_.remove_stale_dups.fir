fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner972780175;
    st `.remove_stale_dups` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner972780175(ap) {
  (reg ap:*) -+> V { var ap:*, reg ap1:*, reg ap2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg pkgs:*, reg pkgs1:V, reg c1:L, reg pkgs3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg duplicated:cls, reg pkgs4:*, reg pkgs5:V, reg p:p(V +), reg r2:V, reg __1:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg dup_pkgs:*, reg dup_pkgs1:V, reg length:cls, reg r6:V, reg r7:V, reg c2:L, reg ap5:*, reg ap6:V, reg c3:L, reg ap8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg duplicated1:cls, reg ap9:*, reg ap10:V, reg c4:L, reg ap12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg c5:cls, reg r10:V, reg __2:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg r14:V, reg __3:cls, reg r15:V, reg ap16:*, reg ap17:V, reg c6:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r16:V, reg pkgs6:*, reg pkgs7:V, reg c7:L, reg pkgs9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg duplicated2:cls, reg pkgs10:*, reg pkgs11:V, reg p2:p(V +), reg r18:V, reg __5:cls, reg r19:V, reg integer:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg dup_pkgs2:*, reg dup_pkgs3:V, reg length1:cls, reg r22:V, reg p3:p(V +), reg r24:V, reg dup_pkgs4:*, reg dup_pkgs5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg which:cls, reg dp:*, reg dp1:V, reg pkgs12:*, reg pkgs13:V, reg r25:V, reg p4:p(V +), reg r27:V, reg package_version:cls, reg ap20:*, reg ap21:V, reg c9:L, reg ap23:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg wh:*, reg wh1:V, reg __6:cls, reg r28:V, reg p5:p(V +), reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg i7:I, reg r32:V, reg vers:*, reg vers1:V, reg max:cls, reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg i10:I, reg r35:V, reg vers2:*, reg vers3:V, reg keep_ver:*, reg keep_ver1:V, reg r36:V, reg which_max:cls, reg r37:V, reg wh2:*, reg wh3:V, reg c10:L, reg i12:I, reg wh5:V, reg dr14:V, reg dc7:L, reg dx15:V, reg i14:I, reg dx16:V, reg keep_idx:*, reg keep_idx1:V, reg r38:V, reg __7:cls, reg r39:V, reg i15:*, reg i16:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg i21:I, reg i22:V, reg r41:V, reg wh6:*, reg wh7:V, reg length2:cls, reg r42:V, reg r43:V, reg r44:V, reg wh8:*, reg wh9:V, reg l1:*, reg c11:L, reg i24:I, reg wh11:V, reg l3:*, reg dr16:V, reg dc8:L, reg dx17:V, reg i26:I, reg dx18:V, reg i27:*, reg i28:V, reg end_i:*, reg end_i1:V, reg r45:V, reg ___:cls, reg r46:V, reg end_i2:*, reg end_i3:V, reg r47:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg stale_dups:*, reg stale_dups1:V, reg length3:cls, reg r50:V, reg c12:L, reg ap24:*, reg ap25:V, reg c13:L, reg ap27:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg stale_dups2:*, reg stale_dups3:V, reg r51:V, reg __8:cls, reg r52:V, reg ap28:*, reg ap29:V |
    mkenv;
    st ap = ap;
    ap1 = ld ap;
    check L18() else D0();
  D0():
    deopt 0 [ap1];
  L18():
    ap2 = force? ap1;
    checkMissing(ap2);
    c = `is.object`(ap2);
    if c then L19() else L20();
  L0(dx1):
    st pkgs = dx1;
    pkgs = ld pkgs;
    check L22() else D1();
  L19():
    dr = tryDispatchBuiltin.1("[", ap2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20();
  L20():
    __ = ldf `[` in base;
    r = dyn __(ap2, <missing>, "Package");
    goto L0(r);
  D1():
    deopt 7 [pkgs];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L22():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    c1 = `is.object`(pkgs1);
    if c1 then L23() else L24(pkgs1);
  L1(dx3):
    st dup_pkgs = dx3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L23():
    dr2 = tryDispatchBuiltin.1("[", pkgs1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(pkgs3):
    duplicated = ldf duplicated;
    check L26() else D2();
  D2():
    deopt 10 [pkgs3];
  L2(r5):
    r7 = `>`(r5, 100.0);
    c2 = `as.logical`(r7);
    if c2 then L32() else L3();
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L26():
    p = prom<V +>{
      pkgs4 = ld pkgs;
      pkgs5 = force? pkgs4;
      checkMissing(pkgs5);
      return pkgs5;
    };
    r2 = dyn duplicated(p);
    check L27() else D3();
  L28():
    dup_pkgs = ld dup_pkgs;
    check L30() else D4();
  L29():
    r4 = dyn base(<sym dup_pkgs>);
    goto L2(r4);
  D3():
    deopt 12 [pkgs3, r2];
  D4():
    deopt 17 [dup_pkgs];
  L3():
    goto L7();
  L7():
    integer = ldf integer;
    check L50() else D13();
  L27():
    __1 = ldf `[` in base;
    r3 = dyn __1(pkgs3, r2);
    goto L1(r3);
  L30():
    dup_pkgs1 = force? dup_pkgs;
    checkMissing(dup_pkgs1);
    length = ldf length in base;
    r6 = dyn length(dup_pkgs1);
    check L31() else D5();
  L32():
    ap5 = ld ap;
    check L33() else D6();
  D5():
    deopt 20 [r6];
  D6():
    deopt 23 [ap5];
  D13():
    deopt 54 [];
  L31():
    goto L2(r6);
  L33():
    ap6 = force? ap5;
    checkMissing(ap6);
    c3 = `is.object`(ap6);
    if c3 then L34() else L35(ap6);
  L50():
    p3 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      dup_pkgs2 = ld dup_pkgs;
      dup_pkgs3 = force? dup_pkgs2;
      checkMissing(dup_pkgs3);
      length1 = ldf length in base;
      r22 = dyn length1(dup_pkgs3);
      goto L0(r22);
    L2():
      r20 = dyn base2(<sym dup_pkgs>);
      goto L0(r20);
    };
    r24 = dyn integer(p3);
    check L51() else D14();
  D14():
    deopt 56 [r24];
  L4(dx5):
    st ap = dx5;
    ap16 = ld ap;
    check L39() else D9();
  L34():
    dr4 = tryDispatchBuiltin.1("[", ap6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L36() else L35(dr4);
  L35(ap8):
    duplicated1 = ldf duplicated;
    check L37() else D7();
  L51():
    st stale_dups = r24;
    st i = 1;
    dup_pkgs4 = ld dup_pkgs;
    check L52() else D15();
  D7():
    deopt 26 [ap8];
  D9():
    deopt 36 [ap16];
  D15():
    deopt 61 [dup_pkgs4];
  L36():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx4);
  L37():
    p1 = prom<V +>{
      ap9 = ld ap;
      ap10 = force? ap9;
      checkMissing(ap10);
      c4 = `is.object`(ap10);
      if c4 then L2() else L3(ap10);
    L0(dx7):
      return dx7;
    L2():
      dr6 = tryDispatchBuiltin.1("[", ap10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(ap12):
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L1(r9):
      __2 = ldf `[` in base;
      r11 = dyn __2(ap10, <missing>, r9);
      goto L0(r11);
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L5():
      c5 = ldf c in base;
      r10 = dyn c5("Package", "Version");
      goto L1(r10);
    L6():
      r8 = dyn base1("Package", "Version");
      goto L1(r8);
    };
    r13 = dyn duplicated1(p1);
    check L38() else D8();
  L39():
    ap17 = force? ap16;
    checkMissing(ap17);
    c6 = `is.object`(ap17);
    if c6 then L40() else L41();
  L52():
    dup_pkgs5 = force? dup_pkgs4;
    checkMissing(dup_pkgs5);
    s = toForSeq(dup_pkgs5);
    l = length(s);
    i = 0;
    goto L8(i);
  D8():
    deopt 28 [ap8, r13];
  L5(dx9):
    st pkgs = dx9;
    pkgs6 = ld pkgs;
    check L43() else D10();
  L8(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L53() else L14();
  L38():
    r14 = `!`(r13);
    __3 = ldf `[` in base;
    r15 = dyn __3(ap6, r14, <missing>, FALSE);
    goto L4(r15);
  L40():
    dr8 = tryDispatchBuiltin.1("[", ap17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L42() else L41();
  L41():
    __4 = ldf `[` in base;
    r16 = dyn __4(ap17, <missing>, "Package");
    goto L5(r16);
  D10():
    deopt 43 [pkgs6];
  L14():
    x = `[[`(s, i2, NULL, TRUE);
    st dp = x;
    which = ldf which;
    check L54() else D16();
  L42():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L5(dx8);
  L43():
    pkgs7 = force? pkgs6;
    checkMissing(pkgs7);
    c7 = `is.object`(pkgs7);
    if c7 then L44() else L45(pkgs7);
  L53():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  D16():
    deopt 64 [i2];
  L6(dx11):
    st dup_pkgs = dx11;
    goto L7();
  L15(r49):
    c12 = `as.logical`(r49);
    if c12 then L88() else L16();
  L44():
    dr10 = tryDispatchBuiltin.1("[", pkgs7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L46() else L45(dr10);
  L45(pkgs9):
    duplicated2 = ldf duplicated;
    check L47() else D11();
  L54():
    p4 = prom<V +>{
      dp = ld dp;
      dp1 = force? dp;
      checkMissing(dp1);
      pkgs12 = ld pkgs;
      pkgs13 = force? pkgs12;
      checkMissing(pkgs13);
      r25 = `==`(dp1, pkgs13);
      return r25;
    };
    r27 = dyn which(p4);
    check L55() else D17();
  L84():
    stale_dups = ld stale_dups;
    check L86() else D34();
  L85():
    r48 = dyn base6(<sym stale_dups>);
    goto L15(r48);
  D11():
    deopt 46 [pkgs9];
  D17():
    deopt 66 [i2, r27];
  D34():
    deopt 126 [stale_dups];
  L16():
    ap28 = ld ap;
    check L95() else D38();
  L46():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L6(dx10);
  L47():
    p2 = prom<V +>{
      pkgs10 = ld pkgs;
      pkgs11 = force? pkgs10;
      checkMissing(pkgs11);
      return pkgs11;
    };
    r18 = dyn duplicated2(p2);
    check L48() else D12();
  L55():
    st wh = r27;
    package_version = ldf package_version;
    check L56() else D18();
  L86():
    stale_dups1 = force? stale_dups;
    checkMissing(stale_dups1);
    length3 = ldf length in base;
    r50 = dyn length3(stale_dups1);
    check L87() else D35();
  L88():
    ap24 = ld ap;
    check L89() else D36();
  D12():
    deopt 48 [pkgs9, r18];
  D18():
    deopt 69 [i2];
  D35():
    deopt 129 [r50];
  D36():
    deopt 130 [ap24];
  D38():
    deopt 140 [ap28];
  L48():
    __5 = ldf `[` in base;
    r19 = dyn __5(pkgs9, r18);
    goto L6(r19);
  L56():
    p5 = prom<V +>{
      ap20 = ld ap;
      ap21 = force? ap20;
      checkMissing(ap21);
      c9 = `is.object`(ap21);
      if c9 then L1() else L2(ap21);
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("[", ap21);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(ap23):
      wh = ld wh;
      wh1 = force? wh;
      __6 = ldf `[` in base;
      r28 = dyn __6(ap23, wh1, "Version");
      goto L0(r28);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    r30 = dyn package_version(p5);
    check L57() else D19();
  L87():
    goto L15(r50);
  L89():
    ap25 = force? ap24;
    checkMissing(ap25);
    c13 = `is.object`(ap25);
    if c13 then L90() else L91(ap25);
  L95():
    ap29 = force? ap28;
    checkMissing(ap29);
    popenv;
    return ap29;
  D19():
    deopt 71 [i2, r30];
  L17(dx20):
    popenv;
    return dx20;
  L57():
    st vers = r30;
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  L90():
    dr18 = tryDispatchBuiltin.1("[", ap25);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L92() else L91(dr18);
  L91(ap27):
    stale_dups2 = ld stale_dups;
    check L93() else D37();
  D37():
    deopt 132 [ap27, stale_dups2];
  L9(i7, r32):
    st keep_ver = r32;
    sym4 = ldf `which.max`;
    base4 = ldf `which.max` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L58():
    vers = ld vers;
    check L60() else D20();
  L59():
    r31 = dyn base3(<sym vers>);
    goto L9(i2, r31);
  L92():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L17(dx19);
  L93():
    stale_dups3 = force? stale_dups2;
    checkMissing(stale_dups3);
    r51 = `-`(<missing>, stale_dups3);
    __8 = ldf `[` in base;
    r52 = dyn __8(ap25, r51, <missing>, FALSE);
    goto L17(r52);
  D20():
    deopt 75 [i2, vers];
  L10(i10, r35):
    st keep_idx = r35;
    wh2 = ld wh;
    check L67() else D25();
  L60():
    vers1 = force? vers;
    checkMissing(vers1);
    max = ldf max in base;
    r33 = dyn max(vers1);
    check L61() else D21();
  L62():
    vers2 = ld vers;
    check L64() else D22();
  L63():
    r34 = dyn base4(<lang `==`(vers, keep_ver)>);
    goto L10(i7, r34);
  D21():
    deopt 78 [i2, r33];
  D22():
    deopt 82 [i7, vers2];
  D25():
    deopt 89 [i10, wh2];
  L61():
    goto L9(i2, r33);
  L64():
    vers3 = force? vers2;
    checkMissing(vers3);
    keep_ver = ld keep_ver;
    check L65() else D23();
  L67():
    wh3 = force? wh2;
    checkMissing(wh3);
    c10 = `is.object`(wh3);
    if c10 then L68() else L69(i10, wh3);
  D23():
    deopt 83 [i7, vers3, keep_ver];
  L11(i14, dx16):
    st wh = dx16;
    i15 = ld i;
    check L72() else D27();
  L65():
    keep_ver1 = force? keep_ver;
    checkMissing(keep_ver1);
    r36 = `==`(vers3, keep_ver1);
    which_max = ldf `which.max` in base;
    r37 = dyn which_max(r36);
    check L66() else D24();
  L68():
    dr14 = tryDispatchBuiltin.1("[", wh3);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L70() else L69(i10, dr14);
  L69(i12, wh5):
    keep_idx = ld keep_idx;
    check L71() else D26();
  D24():
    deopt 87 [i7, r37];
  D26():
    deopt 91 [i12, wh5, keep_idx];
  D27():
    deopt 96 [i14, i15];
  L66():
    goto L10(i7, r37);
  L70():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L11(i10, dx15);
  L71():
    keep_idx1 = force? keep_idx;
    checkMissing(keep_idx1);
    r38 = `-`(<missing>, keep_idx1);
    __7 = ldf `[` in base;
    r39 = dyn __7(wh5, r38);
    goto L11(i12, r39);
  L72():
    i16 = force? i15;
    checkMissing(i16);
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  L12(i21, i22, r41):
    r43 = `+`(i22, r41);
    r44 = `-`(r43, 1);
    st end_i = r44;
    wh8 = ld wh;
    check L77() else D30();
  L73():
    wh6 = ld wh;
    check L75() else D28();
  L74():
    r40 = dyn base5(<sym wh>);
    goto L12(i14, i16, r40);
  D28():
    deopt 99 [i14, i16, wh6];
  D30():
    deopt 107 [i21, wh8];
  L75():
    wh7 = force? wh6;
    checkMissing(wh7);
    length2 = ldf length in base;
    r42 = dyn length2(wh7);
    check L76() else D29();
  L77():
    wh9 = force? wh8;
    checkMissing(wh9);
    l1 = ld stale_dups;
    c11 = `is.object`(l1);
    if c11 then L78() else L79(i21, wh9, l1);
  D29():
    deopt 102 [i14, i16, r42];
  L13(i26, dx18):
    st stale_dups = dx18;
    end_i2 = ld end_i;
    check L83() else D33();
  L76():
    goto L12(i14, i16, r42);
  L78():
    dr16 = tryDispatchBuiltin.0("[<-", l1, wh9);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L80() else L79(i21, wh9, dr16);
  L79(i24, wh11, l3):
    i27 = ld i;
    check L81() else D31();
  D31():
    deopt 110 [i24, wh11, l3, wh9, i27];
  D33():
    deopt 116 [i26, end_i2];
  L80():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L13(i21, dx17);
  L81():
    i28 = force? i27;
    checkMissing(i28);
    end_i = ld end_i;
    check L82() else D32();
  L83():
    end_i3 = force? end_i2;
    checkMissing(end_i3);
    r47 = `+`(end_i3, 1);
    st i = r47;
    goto L8(i26);
  D32():
    deopt 111 [i24, wh11, l3, wh9, i28, end_i];
  L82():
    end_i1 = force? end_i;
    checkMissing(end_i1);
    r45 = `:`(i28, end_i1);
    ___ = ldf `[<-` in base;
    r46 = dyn ___(l3, wh9, r45);
    goto L13(i24, r46);
  }
}