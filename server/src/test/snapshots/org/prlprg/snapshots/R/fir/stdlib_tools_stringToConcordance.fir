fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1236783023;
    st stringToConcordance = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg strsplit:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg _Platform:*, reg _Platform1:V, reg c1:L, reg _Platform3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg r6:V, reg c2:L, reg fixWindowsConcordancePaths:cls, reg split:*, reg split1:V, reg p1:p(V +), reg r8:V, reg split2:*, reg split3:V, reg c3:L, reg split5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r10:V, reg split6:*, reg split7:V, reg c4:L, reg split9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg split10:*, reg split11:V, reg length:cls, reg r14:V, reg r15:V, reg c5:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg sub:cls, reg split12:*, reg split13:V, reg c6:L, reg split15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r19:V, reg p2:p(V +), reg r21:V, reg as_integer:cls, reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg strsplit1:cls, reg split16:*, reg split17:V, reg c7:L, reg split19:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg vi:*, reg vi1:V, reg __4:cls, reg r25:V, reg p3:p(V +), reg r27:V, reg c8:L, reg r29:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r30:V, reg as_integer1:cls, reg r31:V, reg values:*, reg values1:V, reg c9:L, reg values3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __6:cls, reg r32:V, reg matrix:cls, reg values4:*, reg values5:V, reg c10:L, reg values7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __7:cls, reg r33:V, reg p4:p(V +), reg r35:V, reg structure:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg rledata:*, reg rledata1:V, reg c11:L, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __8:cls, reg r38:V, reg rledata4:*, reg rledata5:V, reg c12:L, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __9:cls, reg r39:V, reg list:cls, reg r40:V, reg p5:p(V +), reg r42:V, reg inverse_rle:cls, reg rle:*, reg rle1:V, reg p6:p(V +), reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg firstline:*, reg firstline1:V, reg firstline2:*, reg firstline3:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r47:V, reg firstline6:V, reg r48:V, reg diffs:*, reg diffs1:V, reg cumsum:cls, reg r49:V, reg r50:V, reg c13:cls, reg r51:V, reg structure1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg ofs:*, reg ofs1:V, reg srcFile:*, reg srcFile1:V, reg srcLines:*, reg srcLines1:V, reg list1:cls, reg r54:V, reg p7:p(V +), reg r56:V |
    mkenv;
    st s = s;
    strsplit = ldf strsplit;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn strsplit(p, ":");
    check L15() else D1();
  D1():
    deopt 4 [r1];
  L15():
    c = `is.object`(r1);
    if c then L16() else L17(r1);
  L0(dx1):
    st split = dx1;
    _Platform = ld `.Platform`;
    check L19() else D2();
  L16():
    dr = tryDispatchBuiltin.1("[[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(r3):
    __ = ldf `[[` in base;
    r4 = dyn __(r3, 1.0);
    goto L0(r4);
  D2():
    deopt 9 [_Platform];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L19():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c1 = `is.object`(_Platform1);
    if c1 then L21() else L22(_Platform1);
  L20(dx3):
    r6 = `==`(dx3, "windows");
    c2 = `as.logical`(r6);
    if c2 then L24() else L1();
  L21():
    dr2 = tryDispatchBuiltin.1("$", _Platform1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(dr2);
  L22(_Platform3):
    r5 = `$`(_Platform3, <sym OS.type>);
    goto L20(r5);
  L1():
    goto L2();
  L2():
    split2 = ld split;
    check L28() else D5();
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(dx2);
  L24():
    fixWindowsConcordancePaths = ldf fixWindowsConcordancePaths;
    check L25() else D3();
  D3():
    deopt 15 [];
  D5():
    deopt 21 [split2];
  L25():
    p1 = prom<V +>{
      split = ld split;
      split1 = force? split;
      checkMissing(split1);
      return split1;
    };
    r8 = dyn fixWindowsConcordancePaths(p1);
    check L26() else D4();
  L28():
    split3 = force? split2;
    checkMissing(split3);
    c3 = `is.object`(split3);
    if c3 then L29() else L30(split3);
  D4():
    deopt 17 [r8];
  L3(dx5):
    st targetfile = dx5;
    split6 = ld split;
    check L32() else D6();
  L26():
    st split = r8;
    goto L2();
  L29():
    dr4 = tryDispatchBuiltin.1("[", split3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L31() else L30(dr4);
  L30(split5):
    __1 = ldf `[` in base;
    r10 = dyn __1(split5, 2.0);
    goto L3(r10);
  D6():
    deopt 27 [split6];
  L31():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx4);
  L32():
    split7 = force? split6;
    checkMissing(split7);
    c4 = `is.object`(split7);
    if c4 then L33() else L34(split7);
  L4(dx7):
    st srcFile = dx7;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L33():
    dr6 = tryDispatchBuiltin.1("[", split7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L35() else L34(dr6);
  L34(split9):
    __2 = ldf `[` in base;
    r11 = dyn __2(split9, 3.0);
    goto L4(r11);
  L5(r13):
    r15 = `==`(r13, 4.0);
    c5 = `as.logical`(r15);
    if c5 then L40() else L6();
  L35():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L4(dx6);
  L36():
    split10 = ld split;
    check L38() else D7();
  L37():
    r12 = dyn base(<sym split>);
    goto L5(r12);
  D7():
    deopt 35 [split10];
  L6():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L42() else L43();
  L7():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L38():
    split11 = force? split10;
    checkMissing(split11);
    length = ldf length in base;
    r14 = dyn length(split11);
    check L39() else D8();
  L40():
    st ofs = 0.0;
    st vi = 4.0;
    goto L7();
  D8():
    deopt 38 [r14];
  L8(r18):
    st ofs = r18;
    st vi = 5.0;
    goto L7();
  L9(r24):
    st values = r24;
    values = ld values;
    check L55() else D15();
  L39():
    goto L5(r14);
  L42():
    sub = ldf sub;
    check L44() else D9();
  L43():
    r17 = dyn base1(<lang sub("^ofs ([0-9]+)", "\\1", `[`(split, 4.0))>);
    goto L8(r17);
  L47():
    strsplit1 = ldf strsplit;
    check L49() else D12();
  L48():
    r23 = dyn base2(<lang `[[`(strsplit(`[`(split, vi), " "), 1.0)>);
    goto L9(r23);
  D9():
    deopt 50 [];
  D12():
    deopt 64 [];
  D15():
    deopt 74 [values];
  L44():
    p2 = prom<V +>{
      split12 = ld split;
      split13 = force? split12;
      checkMissing(split13);
      c6 = `is.object`(split13);
      if c6 then L1() else L2(split13);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", split13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(split15):
      __3 = ldf `[` in base;
      r19 = dyn __3(split15, 4.0);
      goto L0(r19);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r21 = dyn sub("^ofs ([0-9]+)", "\\1", p2);
    check L45() else D10();
  L49():
    p3 = prom<V +>{
      split16 = ld split;
      split17 = force? split16;
      checkMissing(split17);
      c7 = `is.object`(split17);
      if c7 then L1() else L2(split17);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", split17);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(split19):
      vi = ld vi;
      vi1 = force? vi;
      __4 = ldf `[` in base;
      r25 = dyn __4(split19, vi1);
      goto L0(r25);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r27 = dyn strsplit1(p3, " ");
    check L50() else D13();
  L55():
    values1 = force? values;
    checkMissing(values1);
    c9 = `is.object`(values1);
    if c9 then L56() else L57(values1);
  D10():
    deopt 54 [r21];
  D13():
    deopt 67 [r27];
  L11(dx15):
    st firstline = dx15;
    matrix = ldf matrix;
    check L59() else D16();
  L45():
    as_integer = ldf `as.integer` in base;
    r22 = dyn as_integer(r21);
    check L46() else D11();
  L50():
    c8 = `is.object`(r27);
    if c8 then L51() else L52(r27);
  L56():
    dr14 = tryDispatchBuiltin.1("[", values1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L58() else L57(dr14);
  L57(values3):
    __6 = ldf `[` in base;
    r32 = dyn __6(values3, 1.0);
    goto L11(r32);
  D11():
    deopt 56 [r22];
  D16():
    deopt 81 [];
  L10(dx13):
    as_integer1 = ldf `as.integer` in base;
    r31 = dyn as_integer1(dx13);
    check L54() else D14();
  L46():
    goto L8(r22);
  L51():
    dr12 = tryDispatchBuiltin.1("[[", r27);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L53() else L52(dr12);
  L52(r29):
    __5 = ldf `[[` in base;
    r30 = dyn __5(r29, 1.0);
    goto L10(r30);
  L58():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L11(dx14);
  L59():
    p4 = prom<V +>{
      values4 = ld values;
      values5 = force? values4;
      checkMissing(values5);
      c10 = `is.object`(values5);
      if c10 then L1() else L2(values5);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", values5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(values7):
      __7 = ldf `[` in base;
      r33 = dyn __7(values7, -1.0);
      goto L0(r33);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r35 = dyn matrix[, nrow](p4, 2.0);
    check L60() else D17();
  D14():
    deopt 72 [r31];
  D17():
    deopt 85 [r35];
  L53():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L10(dx12);
  L54():
    goto L9(r31);
  L60():
    st rledata = r35;
    structure = ldf structure;
    check L61() else D18();
  D18():
    deopt 88 [];
  L61():
    p5 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L0(r37):
      return r37;
    L3():
      rledata = ld rledata;
      rledata1 = force? rledata;
      checkMissing(rledata1);
      c11 = `is.object`(rledata1);
      if c11 then L5() else L6();
    L4():
      r36 = dyn base3[lengths, values](<lang `[`(rledata, 1.0, )>, <lang `[`(rledata, 2.0, )>);
      goto L0(r36);
    L1(dx19):
      rledata4 = ld rledata;
      rledata5 = force? rledata4;
      checkMissing(rledata5);
      c12 = `is.object`(rledata5);
      if c12 then L8() else L9();
    L5():
      dr18 = tryDispatchBuiltin.1("[", rledata1);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6();
    L6():
      __8 = ldf `[` in base;
      r38 = dyn __8(rledata1, 1.0, <missing>);
      goto L1(r38);
    L2(dx21):
      list = ldf list in base;
      r40 = dyn list(dx19, dx21);
      goto L0(r40);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L1(dx18);
    L8():
      dr20 = tryDispatchBuiltin.1("[", rledata5);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L10() else L9();
    L9():
      __9 = ldf `[` in base;
      r39 = dyn __9(rledata5, 2.0, <missing>);
      goto L2(r39);
    L10():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L2(dx20);
    };
    r42 = dyn structure[, class](p5, "rle");
    check L62() else D19();
  D19():
    deopt 92 [r42];
  L62():
    st rle = r42;
    inverse_rle = ldf `inverse.rle`;
    check L63() else D20();
  D20():
    deopt 95 [];
  L63():
    p6 = prom<V +>{
      rle = ld rle;
      rle1 = force? rle;
      checkMissing(rle1);
      return rle1;
    };
    r44 = dyn inverse_rle(p6);
    check L64() else D21();
  D21():
    deopt 97 [r44];
  L64():
    st diffs = r44;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L65() else L66();
  L12(r46):
    st srcLines = r46;
    structure1 = ldf structure;
    check L74() else D27();
  L65():
    firstline = ld firstline;
    check L67() else D22();
  L66():
    r45 = dyn base4(<sym firstline>, <lang `+`(firstline, cumsum(diffs))>);
    goto L12(r45);
  D22():
    deopt 101 [firstline];
  D27():
    deopt 115 [];
  L67():
    firstline1 = force? firstline;
    checkMissing(firstline1);
    firstline2 = ld firstline;
    check L68() else D23();
  L74():
    p7 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      ofs = ld ofs;
      ofs1 = force? ofs;
      checkMissing(ofs1);
      srcFile = ld srcFile;
      srcFile1 = force? srcFile;
      checkMissing(srcFile1);
      srcLines = ld srcLines;
      srcLines1 = force? srcLines;
      checkMissing(srcLines1);
      list1 = ldf list in base;
      r54 = dyn list1(ofs1, srcFile1, srcLines1);
      goto L0(r54);
    L2():
      r52 = dyn base6[offset, srcFile, srcLine](<sym ofs>, <sym srcFile>, <sym srcLines>);
      goto L0(r52);
    };
    r56 = dyn structure1[, class](p7, "Rconcordance");
    check L75() else D28();
  D23():
    deopt 103 [firstline2];
  D28():
    deopt 119 [r56];
  L68():
    firstline3 = force? firstline2;
    checkMissing(firstline3);
    sym5 = ldf cumsum;
    base5 = ldf cumsum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  L75():
    popenv;
    return r56;
  L13(firstline6, r48):
    r50 = `+`(firstline6, r48);
    c13 = ldf c in base;
    r51 = dyn c13(firstline1, r50);
    check L73() else D26();
  L69():
    diffs = ld diffs;
    check L71() else D24();
  L70():
    r47 = dyn base5(<sym diffs>);
    goto L13(firstline3, r47);
  D24():
    deopt 106 [firstline3, diffs];
  D26():
    deopt 112 [r51];
  L71():
    diffs1 = force? diffs;
    checkMissing(diffs1);
    cumsum = ldf cumsum in base;
    r49 = dyn cumsum(diffs1);
    check L72() else D25();
  L73():
    goto L12(r51);
  D25():
    deopt 109 [firstline3, r49];
  L72():
    goto L13(firstline3, r49);
  }
}