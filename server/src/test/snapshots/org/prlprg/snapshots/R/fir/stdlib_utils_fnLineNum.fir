fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner216271886;
    st fnLineNum = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner216271886(f, srcfile, line, nameonly) {
  (reg f:*, reg srcfile:*, reg line:*, reg nameonly:*) -+> V { var f:*, var srcfile:*, var line:*, var nameonly:*, reg nameonly_isMissing:L, reg nameonly_orDefault:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg line1:*, reg line2:V, reg length:cls, reg r2:V, reg r3:V, reg p:p(V +), reg r5:V, reg _normalizePath:cls, reg srcfile1:*, reg srcfile2:V, reg c:L, reg srcfile4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg ____:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg f1:*, reg f2:V, reg attr:cls, reg r13:V, reg p2:p(V +), reg body:cls, reg f3:*, reg f4:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg attr1:cls, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg fnsrc:*, reg fnsrc1:V, reg c1:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg missing:cls, reg r26:V, reg c3:L, reg fnsrc2:*, reg fnsrc3:V, reg r27:cls, reg r28:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg _normalizePath1:cls, reg fnsrc5:*, reg fnsrc6:V, reg c4:L, reg fnsrc8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r31:V, reg p5:p(V +), reg fnsrc9:*, reg fnsrc10:V, reg c5:L, reg fnsrc12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r33:V, reg p6:p(V +), reg r35:V, reg targetfilename:*, reg targetfilename1:V, reg identical:cls, reg r36:V, reg perfectMatch:*, reg perfectMatch1:V, reg c6:L, reg c7:V, reg nameonly1:*, reg nameonly2:V, reg c9:L, reg c12:L, reg c13:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg c18:L, reg c19:L, reg r38:V, reg fnsrc13:*, reg fnsrc14:V, reg c20:L, reg c23:L, reg c24:L, reg fnsrc16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c27:L, reg c28:L, reg dx7:V, reg r39:V, reg c29:V, reg r40:V, reg c30:L, reg c31:V, reg c34:L, reg c37:L, reg c38:V, reg basename:cls, reg fnsrc17:*, reg fnsrc18:V, reg c39:L, reg fnsrc20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r41:V, reg p7:p(V +), reg r43:V, reg basename1:cls, reg targetfilename2:*, reg targetfilename3:V, reg p8:p(V +), reg r45:V, reg r46:V, reg c40:L, reg c41:V, reg c44:L, reg c45:V, reg c47:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg srcfile5:*, reg srcfile6:V, reg c48:L, reg srcfile8:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r49:V, reg is_na:cls, reg r50:V, reg r51:V, reg c49:L, reg c51:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg c54:L, reg r53:V, reg fnsrc21:*, reg fnsrc22:V, reg c55:L, reg c57:L, reg fnsrc24:V, reg dr12:V, reg dc6:L, reg dx12:V, reg c59:L, reg dx13:V, reg r54:V, reg c60:V, reg r55:V, reg c61:L, reg c62:V, reg c64:L, reg c66:V, reg fnsrc25:*, reg fnsrc26:V, reg c67:L, reg c69:L, reg fnsrc28:V, reg dr14:V, reg dc7:L, reg dx14:V, reg c71:L, reg dx15:V, reg r56:V, reg srcfile9:*, reg srcfile10:V, reg c72:L, reg c74:L, reg dx17:V, reg srcfile12:V, reg dr16:V, reg dc8:L, reg dx19:V, reg c76:L, reg dx20:V, reg dx21:V, reg r57:V, reg r58:V, reg c77:L, reg c78:V, reg c80:L, reg fnsrc29:*, reg fnsrc30:V, reg c81:L, reg fnsrc32:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r59:V, reg srcfile13:*, reg srcfile14:V, reg c82:L, reg dx25:V, reg srcfile16:V, reg dr20:V, reg dc10:L, reg dx27:V, reg dx28:V, reg dx29:V, reg r60:V, reg r61:V, reg r62:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r63:V, reg r64:V, reg lineNumInExpr:cls, reg body1:cls, reg f5:*, reg f6:V, reg p9:p(V +), reg r66:V, reg p10:p(V +), reg r68:V, reg c83:V, reg r69:V, reg c84:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r70:V, reg r71:V, reg at:*, reg at1:V, reg _normalizePath2:cls, reg fnsrc33:*, reg fnsrc34:V, reg c85:L, reg fnsrc36:V, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg r72:V, reg p11:p(V +), reg fnsrc37:*, reg fnsrc38:V, reg c86:L, reg fnsrc40:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg r74:V, reg p12:p(V +), reg r76:V, reg line3:*, reg line4:V, reg timediff:*, reg timediff1:V, reg list:cls, reg r77:V |
    mkenv;
    st f = f;
    st srcfile = srcfile;
    st line = line;
    nameonly_isMissing = missing.0(nameonly);
    if nameonly_isMissing then L0(TRUE) else L0(nameonly);
  L0(nameonly_orDefault):
    st nameonly = nameonly_orDefault;
    stopifnot = ldf stopifnot;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r3 = `==`(r1, 1.0);
      return r3;
    L1():
      line1 = ld line;
      line2 = force? line1;
      checkMissing(line2);
      length = ldf length in base;
      r2 = dyn length(line2);
      goto L0(r2);
    L2():
      r = dyn base(<sym line>);
      goto L0(r);
    };
    r5 = dyn stopifnot(p);
    check L24() else D1();
  D1():
    deopt 3 [r5];
  L24():
    _normalizePath = ldf `.normalizePath`;
    check L25() else D2();
  D2():
    deopt 5 [];
  L25():
    p1 = prom<V +>{
      srcfile1 = ld srcfile;
      srcfile2 = force? srcfile1;
      checkMissing(srcfile2);
      c = `is.object`(srcfile2);
      if c then L1() else L2(srcfile2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", srcfile2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(srcfile4):
      r6 = `$`(srcfile4, <sym filename>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn _normalizePath(p1);
    check L26() else D3();
  D3():
    deopt 7 [r8];
  L26():
    st targetfilename = r8;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L1(r10):
    st fnsrc = r10;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L27():
    ____ = ldf `%||%`;
    check L29() else D4();
  L28():
    r9 = dyn base1(<lang `%||%`(attr(f, "srcref"), body(f))>, "srcfile");
    goto L1(r9);
  D4():
    deopt 12 [];
  L2(r21):
    c2 = `as.logical`(r21);
    if c2 then L35() else L3();
  L29():
    p2 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      attr = ldf attr in base;
      r13 = dyn attr(f2, "srcref");
      goto L0(r13);
    L2():
      r11 = dyn base2(<sym f>, "srcref");
      goto L0(r11);
    };
    p4 = prom<V +>{
      body = ldf body;
      p3 = prom<V +>{
        f3 = ld f;
        f4 = force? f3;
        checkMissing(f4);
        return f4;
      };
      r16 = dyn body(p3);
      return r16;
    };
    r18 = dyn ____(p2, p4);
    check L30() else D5();
  L32():
    fnsrc = ld fnsrc;
    check L34() else D7();
  L33():
    r20 = dyn base3(<sym fnsrc>);
    goto L2(r20);
  D5():
    deopt 15 [r18];
  D7():
    deopt 21 [fnsrc];
  L3():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L30():
    attr1 = ldf attr in base;
    r19 = dyn attr1(r18, "srcfile");
    check L31() else D6();
  L34():
    fnsrc1 = force? fnsrc;
    checkMissing(fnsrc1);
    c1 = `==`(fnsrc1, NULL);
    goto L2(c1);
  L35():
    popenv;
    return NULL;
  D6():
    deopt 18 [r19];
  L5(r25):
    c3 = `as.logical`(r25);
    if c3 then L40() else L6();
  L31():
    goto L1(r19);
  L38():
    missing = ldf missing in base;
    r26 = dyn missing(<sym srcfile>);
    goto L5(r26);
  L39():
    r24 = dyn base4(<sym srcfile>);
    goto L5(r24);
  L6():
    goto L7();
  L7():
    r27 = clos inner4125524309;
    st isBrace = r27;
    r28 = clos inner2125232309;
    st lineNumInExpr = r28;
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  L40():
    fnsrc2 = ld fnsrc;
    check L41() else D8();
  D8():
    deopt 32 [fnsrc2];
  L8(r30):
    st perfectMatch = r30;
    perfectMatch = ld perfectMatch;
    check L49() else D13();
  L41():
    fnsrc3 = force? fnsrc2;
    checkMissing(fnsrc3);
    st srcfile = fnsrc3;
    goto L7();
  L43():
    _normalizePath1 = ldf `.normalizePath`;
    check L45() else D9();
  L44():
    r29 = dyn base5(<lang .normalizePath(`$`(fnsrc, filename), `$`(fnsrc, wd))>, <sym targetfilename>);
    goto L8(r29);
  D9():
    deopt 46 [];
  D13():
    deopt 62 [perfectMatch];
  L45():
    p5 = prom<V +>{
      fnsrc5 = ld fnsrc;
      fnsrc6 = force? fnsrc5;
      checkMissing(fnsrc6);
      c4 = `is.object`(fnsrc6);
      if c4 then L1() else L2(fnsrc6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", fnsrc6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(fnsrc8):
      r31 = `$`(fnsrc8, <sym filename>);
      goto L0(r31);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      fnsrc9 = ld fnsrc;
      fnsrc10 = force? fnsrc9;
      checkMissing(fnsrc10);
      c5 = `is.object`(fnsrc10);
      if c5 then L1() else L2(fnsrc10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", fnsrc10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(fnsrc12):
      r33 = `$`(fnsrc12, <sym wd>);
      goto L0(r33);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r35 = dyn _normalizePath1(p5, p6);
    check L46() else D10();
  L49():
    perfectMatch1 = force? perfectMatch;
    checkMissing(perfectMatch1);
    c6 = `as.logical`(perfectMatch1);
    if c6 then L9(c6) else L50();
  D10():
    deopt 49 [r35];
  L9(c7):
    c47 = `as.logical`(c7);
    if c47 then L68() else L13();
  L46():
    targetfilename = ld targetfilename;
    check L47() else D11();
  L50():
    nameonly1 = ld nameonly;
    check L51() else D14();
  D11():
    deopt 50 [targetfilename];
  D14():
    deopt 64 [c6, nameonly1];
  L13():
    invisible.0();
    popenv;
    return NULL;
  L47():
    targetfilename1 = force? targetfilename;
    checkMissing(targetfilename1);
    identical = ldf identical in base;
    r36 = dyn identical(r35, targetfilename1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L48() else D12();
  L51():
    nameonly2 = force? nameonly1;
    checkMissing(nameonly2);
    c9 = `as.logical`(nameonly2);
    if c9 then L52() else L10(c6, c9);
  L68():
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L69() else L70();
  D12():
    deopt 60 [r36];
  L10(c12, c13):
    c34 = `as.logical`(c13);
    if c34 then L61() else L12(c12, c34);
  L14(r48):
    r51 = `!`(r48);
    c49 = `as.logical`(r51);
    if c49 then L77() else L15(c49);
  L48():
    goto L8(r36);
  L52():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L53() else L54();
  L69():
    srcfile5 = ld srcfile;
    check L71() else D20();
  L70():
    r47 = dyn base7(<lang `$`(srcfile, timestamp)>);
    goto L14(r47);
  D20():
    deopt 85 [srcfile5];
  L11(c18, c19, r38):
    r40 = `!`(r38);
    c30 = `as.logical`(r40);
    c31 = `&&`(c19, c30);
    goto L10(c18, c31);
  L12(c37, c38):
    c44 = `as.logical`(c38);
    c45 = `||`(c37, c44);
    goto L9(c45);
  L15(c51):
    c64 = `as.logical`(c51);
    if c64 then L86() else L17(c64);
  L53():
    fnsrc13 = ld fnsrc;
    check L55() else D15();
  L54():
    r37 = dyn base6(<lang `$`(fnsrc, filename)>);
    goto L11(c6, c9, r37);
  L61():
    basename = ldf basename;
    check L62() else D16();
  L71():
    srcfile6 = force? srcfile5;
    checkMissing(srcfile6);
    c48 = `is.object`(srcfile6);
    if c48 then L73() else L74(srcfile6);
  L77():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L78() else L79();
  D15():
    deopt 67 [c6, c9, fnsrc13];
  D16():
    deopt 74 [c12, c34];
  L16(c54, r53):
    r55 = `!`(r53);
    c61 = `as.logical`(r55);
    c62 = `&&`(c54, c61);
    goto L15(c62);
  L17(c66):
    c80 = `as.logical`(c66);
    if c80 then L98() else L18();
  L55():
    fnsrc14 = force? fnsrc13;
    checkMissing(fnsrc14);
    c20 = `is.object`(fnsrc14);
    if c20 then L57() else L58(c6, c9, fnsrc14);
  L62():
    p7 = prom<V +>{
      fnsrc17 = ld fnsrc;
      fnsrc18 = force? fnsrc17;
      checkMissing(fnsrc18);
      c39 = `is.object`(fnsrc18);
      if c39 then L1() else L2(fnsrc18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", fnsrc18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(fnsrc20):
      r41 = `$`(fnsrc20, <sym filename>);
      goto L0(r41);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r43 = dyn basename(p7);
    check L63() else D17();
  L72(dx11):
    is_na = ldf `is.na` in base;
    r50 = dyn is_na(dx11);
    check L76() else D21();
  L73():
    dr10 = tryDispatchBuiltin.1("$", srcfile6);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L75() else L74(dr10);
  L74(srcfile8):
    r49 = `$`(srcfile8, <sym timestamp>);
    goto L72(r49);
  L78():
    fnsrc21 = ld fnsrc;
    check L80() else D22();
  L79():
    r52 = dyn base8(<lang `$`(fnsrc, timestamp)>);
    goto L16(c49, r52);
  L86():
    fnsrc25 = ld fnsrc;
    check L87() else D23();
  D17():
    deopt 76 [c12, c34, r43];
  D21():
    deopt 89 [r50];
  D22():
    deopt 92 [c49, fnsrc21];
  D23():
    deopt 98 [c64, fnsrc25];
  L18():
    goto L19(0.0);
  L19(r62):
    st timediff = r62;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L110() else L111();
  L56(c27, c28, dx7):
    c29 = `==`(dx7, NULL);
    goto L11(c27, c28, c29);
  L57():
    dr6 = tryDispatchBuiltin.1("$", fnsrc14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L59() else L58(c6, c9, dr6);
  L58(c23, c24, fnsrc16):
    r39 = `$`(fnsrc16, <sym filename>);
    goto L56(c23, c24, r39);
  L63():
    basename1 = ldf basename;
    check L64() else D18();
  L75():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L72(dx10);
  L76():
    goto L14(r50);
  L80():
    fnsrc22 = force? fnsrc21;
    checkMissing(fnsrc22);
    c55 = `is.object`(fnsrc22);
    if c55 then L82() else L83(c49, fnsrc22);
  L87():
    fnsrc26 = force? fnsrc25;
    checkMissing(fnsrc26);
    c67 = `is.object`(fnsrc26);
    if c67 then L89() else L90(c64, fnsrc26);
  L98():
    fnsrc29 = ld fnsrc;
    check L99() else D25();
  D18():
    deopt 77 [c12, c34, r43];
  D25():
    deopt 105 [fnsrc29];
  L20(r64):
    r69 = `!`(r64);
    c84 = `as.logical`(r69);
    if c84 then L114() else L21();
  L59():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L56(c6, c9, dx6);
  L64():
    p8 = prom<V +>{
      targetfilename2 = ld targetfilename;
      targetfilename3 = force? targetfilename2;
      checkMissing(targetfilename3);
      return targetfilename3;
    };
    r45 = dyn basename1(p8);
    check L65() else D19();
  L81(c59, dx13):
    c60 = `==`(dx13, NULL);
    goto L16(c59, c60);
  L82():
    dr12 = tryDispatchBuiltin.1("$", fnsrc22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L84() else L83(c49, dr12);
  L83(c57, fnsrc24):
    r54 = `$`(fnsrc24, <sym timestamp>);
    goto L81(c57, r54);
  L88(c71, dx15):
    srcfile9 = ld srcfile;
    check L92() else D24();
  L89():
    dr14 = tryDispatchBuiltin.1("$", fnsrc26);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L91() else L90(c64, dr14);
  L90(c69, fnsrc28):
    r56 = `$`(fnsrc28, <sym timestamp>);
    goto L88(c69, r56);
  L99():
    fnsrc30 = force? fnsrc29;
    checkMissing(fnsrc30);
    c81 = `is.object`(fnsrc30);
    if c81 then L101() else L102(fnsrc30);
  L110():
    lineNumInExpr = ldf lineNumInExpr;
    check L112() else D27();
  L111():
    r63 = dyn base9(<lang `<-`(at, lineNumInExpr(body(f)))>);
    goto L20(r63);
  D19():
    deopt 79 [c12, c34, r43, r45];
  D24():
    deopt 100 [c71, dx15, srcfile9];
  D27():
    deopt 116 [];
  L21():
    invisible.0();
    popenv;
    return NULL;
  L65():
    r46 = `==`(r43, r45);
    c40 = `as.logical`(r46);
    c41 = `&&`(c34, c40);
    goto L12(c12, c41);
  L84():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L81(c49, dx12);
  L91():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L88(c64, dx14);
  L92():
    srcfile10 = force? srcfile9;
    checkMissing(srcfile10);
    c72 = `is.object`(srcfile10);
    if c72 then L94() else L95(c71, dx15, srcfile10);
  L100(dx23):
    srcfile13 = ld srcfile;
    check L104() else D26();
  L101():
    dr18 = tryDispatchBuiltin.1("$", fnsrc30);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L103() else L102(dr18);
  L102(fnsrc32):
    r59 = `$`(fnsrc32, <sym timestamp>);
    goto L100(r59);
  L112():
    p10 = prom<V +>{
      body1 = ldf body;
      p9 = prom<V +>{
        f5 = ld f;
        f6 = force? f5;
        checkMissing(f6);
        return f6;
      };
      r66 = dyn body1(p9);
      return r66;
    };
    r68 = dyn lineNumInExpr(p10);
    check L113() else D28();
  L114():
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L115() else L116();
  D26():
    deopt 107 [dx23, srcfile13];
  D28():
    deopt 118 [r68];
  L22(r71):
    popenv;
    return r71;
  L93(c76, dx20, dx21):
    r58 = `!=`(dx20, dx21);
    c77 = `as.logical`(r58);
    c78 = `&&`(c76, c77);
    goto L17(c78);
  L94():
    dr16 = tryDispatchBuiltin.1("$", srcfile10);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L96() else L95(c71, dx15, dr16);
  L95(c74, dx17, srcfile12):
    r57 = `$`(srcfile12, <sym timestamp>);
    goto L93(c74, dx17, r57);
  L103():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L100(dx22);
  L104():
    srcfile14 = force? srcfile13;
    checkMissing(srcfile14);
    c82 = `is.object`(srcfile14);
    if c82 then L106() else L107(dx23, srcfile14);
  L113():
    st at = r68;
    c83 = `==`(r68, NULL);
    goto L20(c83);
  L115():
    at = ld at;
    check L117() else D29();
  L116():
    r70 = dyn base10[at, filename, line, timediff](<sym at>, <lang .normalizePath(`$`(fnsrc, filename), `$`(fnsrc, wd))>, <sym line>, <sym timediff>);
    goto L22(r70);
  D29():
    deopt 124 [at];
  L96():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L93(c71, dx15, dx19);
  L105(dx28, dx29):
    r61 = `-`(dx28, dx29);
    goto L19(r61);
  L106():
    dr20 = tryDispatchBuiltin.1("$", srcfile14);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L108() else L107(dx23, dr20);
  L107(dx25, srcfile16):
    r60 = `$`(srcfile16, <sym timestamp>);
    goto L105(dx25, r60);
  L117():
    at1 = force? at;
    checkMissing(at1);
    _normalizePath2 = ldf `.normalizePath`;
    check L118() else D30();
  D30():
    deopt 128 [];
  L108():
    dx27 = getTryDispatchBuiltinValue(dr20);
    goto L105(dx23, dx27);
  L118():
    p11 = prom<V +>{
      fnsrc33 = ld fnsrc;
      fnsrc34 = force? fnsrc33;
      checkMissing(fnsrc34);
      c85 = `is.object`(fnsrc34);
      if c85 then L1() else L2(fnsrc34);
    L0(dx31):
      return dx31;
    L1():
      dr22 = tryDispatchBuiltin.1("$", fnsrc34);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(fnsrc36):
      r72 = `$`(fnsrc36, <sym filename>);
      goto L0(r72);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx30);
    };
    p12 = prom<V +>{
      fnsrc37 = ld fnsrc;
      fnsrc38 = force? fnsrc37;
      checkMissing(fnsrc38);
      c86 = `is.object`(fnsrc38);
      if c86 then L1() else L2(fnsrc38);
    L0(dx33):
      return dx33;
    L1():
      dr24 = tryDispatchBuiltin.1("$", fnsrc38);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(fnsrc40):
      r74 = `$`(fnsrc40, <sym wd>);
      goto L0(r74);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx32);
    };
    r76 = dyn _normalizePath2(p11, p12);
    check L119() else D31();
  D31():
    deopt 131 [r76];
  L119():
    line3 = ld line;
    check L120() else D32();
  D32():
    deopt 133 [line3];
  L120():
    line4 = force? line3;
    checkMissing(line4);
    timediff = ld timediff;
    check L121() else D33();
  D33():
    deopt 136 [timediff];
  L121():
    timediff1 = force? timediff;
    checkMissing(timediff1);
    list = ldf list in base;
    r77 = dyn list(at1, r76, line4, timediff1);
    check L122() else D34();
  D34():
    deopt 140 [r77];
  L122():
    goto L22(r77);
  }
}
fun inner4125524309(expr) {
  (reg expr:*) -+> V { var expr:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg expr1:*, reg expr2:V, reg c:L, reg c1:L, reg c3:V, reg expr3:*, reg expr4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg expr7:V, reg r3:V, reg quote:cls, reg r4:V, reg r5:V, reg c7:L, reg c8:V |
    mkenv;
    st expr = expr;
    sym = ldf `is.symbol`;
    base = ldf `is.symbol` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L6() else L1(c1);
  L3():
    expr1 = ld expr;
    check L5() else D0();
  L4():
    r = dyn base(<sym expr>);
    goto L0(r);
  D0():
    deopt 1 [expr1];
  L1(c3):
    popenv;
    return c3;
  L5():
    expr2 = force? expr1;
    checkMissing(expr2);
    c = `is.symbol`(expr2);
    goto L0(c);
  L6():
    expr3 = ld expr;
    check L7() else D1();
  D1():
    deopt 4 [c1, expr3];
  L7():
    expr4 = force? expr3;
    checkMissing(expr4);
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L2(c6, expr7, r3):
    r5 = `==`(expr7, r3);
    c7 = `as.logical`(r5);
    c8 = `&&`(c6, c7);
    goto L1(c8);
  L8():
    quote = ldf quote in base;
    r4 = dyn quote(<sym `{`>);
    goto L2(c1, expr4, r4);
  L9():
    r2 = dyn base1(<sym `{`>);
    goto L2(c1, expr4, r2);
  }
}
fun inner2125232309(expr, haveSrcrefs) {
  (reg expr:*, reg haveSrcrefs:*) -+> V { var expr:*, var haveSrcrefs:*, reg haveSrcrefs_isMissing:L, reg haveSrcrefs_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg expr1:*, reg expr2:V, reg typeof:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg expr3:*, reg expr4:V, reg attr:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg expr5:*, reg expr6:V, reg r9:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg srcrefs:*, reg srcrefs1:V, reg c2:L, reg i6:I, reg srcrefs3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg i13:I, reg r12:V, reg srcref:*, reg srcref1:V, reg c3:V, reg r13:V, reg c4:L, reg i15:I, reg c6:V, reg srcref2:*, reg srcref3:V, reg c7:L, reg i17:I, reg c9:L, reg srcref5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg c11:L, reg dx3:V, reg __1:cls, reg r14:V, reg line:*, reg line1:V, reg r15:V, reg c12:L, reg i20:I, reg c13:L, reg c14:V, reg line2:*, reg line3:V, reg srcref6:*, reg srcref7:V, reg c17:L, reg i23:I, reg c20:L, reg c21:L, reg line5:V, reg srcref9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i25:I, reg c24:L, reg c25:L, reg line7:V, reg dx5:V, reg __2:cls, reg r16:V, reg r17:V, reg c26:L, reg c27:V, reg c30:L, reg c31:V, reg c33:L, reg lineNumInExpr:cls, reg expr7:*, reg expr8:V, reg c34:L, reg expr10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i32:*, reg i33:V, reg __3:cls, reg r19:V, reg p:p(V +), reg haveSrcrefs1:*, reg haveSrcrefs2:V, reg c35:L, reg c36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg c40:L, reg r22:V, reg srcrefs4:*, reg srcrefs5:V, reg c41:V, reg r23:V, reg c42:L, reg c43:V, reg p1:p(V +), reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg i36:I, reg r27:V, reg finer:*, reg finer1:V, reg c45:V, reg r28:V, reg c46:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg i42:*, reg i43:V, reg finer2:*, reg finer3:V, reg c47:cls, reg r31:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg i48:I, reg r35:V, reg srcref10:*, reg srcref11:V, reg c48:V, reg c49:L, reg i49:I, reg c50:V, reg haveSrcrefs3:*, reg haveSrcrefs4:V, reg c52:L, reg i52:I, reg c55:L, reg c56:V, reg isBrace:cls, reg expr11:*, reg expr12:V, reg c57:L, reg expr14:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i53:*, reg i54:V, reg __4:cls, reg r36:V, reg p2:p(V +), reg r38:V, reg c58:L, reg c59:V, reg c62:L, reg c63:V, reg r39:V, reg c65:L, reg i59:*, reg i60:V |
    mkenv;
    st expr = expr;
    haveSrcrefs_isMissing = missing.0(haveSrcrefs);
    if haveSrcrefs_isMissing then L0(FALSE) else L0(haveSrcrefs);
  L0(haveSrcrefs_orDefault):
    st haveSrcrefs = haveSrcrefs_orDefault;
    sym = ldf typeof;
    base = ldf typeof in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L1(r1):
    r3 = `==`(r1, "language");
    c = `as.logical`(r3);
    if c then L29() else L2();
  L25():
    expr1 = ld expr;
    check L27() else D0();
  L26():
    r = dyn base(<sym expr>);
    goto L1(r);
  D0():
    deopt 2 [expr1];
  L2():
    goto L24();
  L24():
    popenv;
    return NULL;
  L27():
    expr2 = force? expr1;
    checkMissing(expr2);
    typeof = ldf typeof in base;
    r2 = dyn typeof(expr2);
    check L28() else D1();
  L29():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  D1():
    deopt 5 [r2];
  L3(r5):
    st srcrefs = r5;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L28():
    goto L1(r2);
  L30():
    expr3 = ld expr;
    check L32() else D2();
  L31():
    r4 = dyn base1(<sym expr>, "srcref");
    goto L3(r4);
  D2():
    deopt 10 [expr3];
  L4(r8):
    s = toForSeq(r8);
    l = length(s);
    i = 0;
    goto L5(i);
  L32():
    expr4 = force? expr3;
    checkMissing(expr4);
    attr = ldf attr in base;
    r6 = dyn attr(expr4, "srcref");
    check L33() else D3();
  L34():
    expr5 = ld expr;
    check L36() else D4();
  L35():
    r7 = dyn base2(<sym expr>);
    goto L4(r7);
  D3():
    deopt 14 [r6];
  D4():
    deopt 17 [expr5];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L37() else L23();
  L33():
    goto L3(r6);
  L36():
    expr6 = force? expr5;
    checkMissing(expr6);
    r9 = seq_along(expr6);
    goto L4(r9);
  L23():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    srcrefs = ld srcrefs;
    check L38() else D5();
  L37():
    goto L24();
  D5():
    deopt 20 [i2, srcrefs];
  L38():
    srcrefs1 = force? srcrefs;
    checkMissing(srcrefs1);
    c2 = `is.object`(srcrefs1);
    if c2 then L39() else L40(i2, srcrefs1);
  L6(i8, dx1):
    st srcref = dx1;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L39():
    dr = tryDispatchBuiltin.1("[[", srcrefs1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40(i2, dr);
  L40(i6, srcrefs3):
    i9 = ld i;
    check L42() else D6();
  D6():
    deopt 22 [i6, srcrefs3, i9];
  L7(i13, r12):
    r13 = `!`(r12);
    c4 = `as.logical`(r13);
    if c4 then L46() else L8(i13, c4);
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(i2, dx);
  L42():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r10 = dyn __(srcrefs3, i10);
    goto L6(i6, r10);
  L43():
    srcref = ld srcref;
    check L45() else D7();
  L44():
    r11 = dyn base3(<sym srcref>);
    goto L7(i8, r11);
  D7():
    deopt 27 [i8, srcref];
  L8(i15, c6):
    c33 = `as.logical`(c6);
    if c33 then L60() else L12();
  L45():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    c3 = `==`(srcref1, NULL);
    goto L7(i8, c3);
  L46():
    srcref2 = ld srcref;
    check L47() else D8();
  D8():
    deopt 31 [i13, c4, srcref2];
  L12():
    lineNumInExpr = ldf lineNumInExpr;
    check L63() else D12();
  L47():
    srcref3 = force? srcref2;
    checkMissing(srcref3);
    c7 = `is.object`(srcref3);
    if c7 then L48() else L49(i13, c4, srcref3);
  L60():
    goto L5(i15);
  D12():
    deopt 52 [i15];
  L9(i19, c11, dx3):
    line = ld line;
    check L51() else D9();
  L48():
    dr2 = tryDispatchBuiltin.1("[", srcref3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(i13, c4, dr2);
  L49(i17, c9, srcref5):
    __1 = ldf `[` in base;
    r14 = dyn __1(srcref5, 1.0);
    goto L9(i17, c9, r14);
  L63():
    p = prom<V +>{
      expr7 = ld expr;
      expr8 = force? expr7;
      checkMissing(expr8);
      c34 = `is.object`(expr8);
      if c34 then L1() else L2(expr8);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", expr8);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(expr10):
      i32 = ld i;
      i33 = force? i32;
      __3 = ldf `[[` in base;
      r19 = dyn __3(expr10, i33);
      goto L0(r19);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p1 = prom<V +>{
      haveSrcrefs1 = ld haveSrcrefs;
      haveSrcrefs2 = force? haveSrcrefs1;
      checkMissing(haveSrcrefs2);
      c35 = `as.logical`(haveSrcrefs2);
      if c35 then L0(c35) else L2();
    L0(c36):
      return c36;
    L2():
      sym4 = ldf `is.null`;
      base4 = ldf `is.null` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L3() else L4();
    L1(c40, r22):
      r23 = `!`(r22);
      c42 = `as.logical`(r23);
      c43 = `||`(c40, c42);
      goto L0(c43);
    L3():
      srcrefs4 = ld srcrefs;
      srcrefs5 = force? srcrefs4;
      checkMissing(srcrefs5);
      c41 = `==`(srcrefs5, NULL);
      goto L1(c35, c41);
    L4():
      r21 = dyn base4(<sym srcrefs>);
      goto L1(c35, r21);
    };
    r25 = dyn lineNumInExpr(p, p1);
    check L64() else D13();
  D9():
    deopt 35 [i19, c11, dx3, line];
  D13():
    deopt 55 [i15, r25];
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(i13, c4, dx2);
  L51():
    line1 = force? line;
    checkMissing(line1);
    r15 = `>`(dx3, line1);
    c12 = `as.logical`(r15);
    if c12 then L10(i19, c11, c12) else L52();
  L64():
    st finer = r25;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L65() else L66();
  L10(i20, c13, c14):
    c30 = `as.logical`(c14);
    c31 = `&&`(c13, c30);
    goto L8(i20, c31);
  L14(i36, r27):
    r28 = `!`(r27);
    c46 = `as.logical`(r28);
    if c46 then L68() else L15();
  L52():
    line2 = ld line;
    check L53() else D10();
  L65():
    finer = ld finer;
    check L67() else D14();
  L66():
    r26 = dyn base5(<sym finer>);
    goto L14(i15, r26);
  D10():
    deopt 38 [i19, c11, c12, line2];
  D14():
    deopt 58 [i15, finer];
  L15():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L53():
    line3 = force? line2;
    checkMissing(line3);
    srcref6 = ld srcref;
    check L54() else D11();
  L67():
    finer1 = force? finer;
    checkMissing(finer1);
    c45 = `==`(finer1, NULL);
    goto L14(i15, c45);
  L68():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  D11():
    deopt 39 [i19, c11, c12, line3, srcref6];
  L16(r30):
    popenv;
    return r30;
  L18(i48, r35):
    c49 = `as.logical`(r35);
    if c49 then L19(i48, c49) else L79();
  L54():
    srcref7 = force? srcref6;
    checkMissing(srcref7);
    c17 = `is.object`(srcref7);
    if c17 then L55() else L56(i19, c11, c12, line3, srcref7);
  L69():
    i42 = ld i;
    check L71() else D15();
  L70():
    r29 = dyn base6(<sym i>, <sym finer>);
    goto L16(r29);
  L76():
    srcref10 = ld srcref;
    check L78() else D18();
  L77():
    r34 = dyn base7(<sym srcref>);
    goto L18(i36, r34);
  D15():
    deopt 64 [i36, i42];
  D18():
    deopt 74 [i36, srcref10];
  L11(i25, c24, c25, line7, dx5):
    r17 = `>`(line7, dx5);
    c26 = `as.logical`(r17);
    c27 = `||`(c25, c26);
    goto L10(i25, c24, c27);
  L19(i49, c50):
    r39 = `!`(c50);
    c65 = `as.logical`(r39);
    if c65 then L86() else L21();
  L55():
    dr4 = tryDispatchBuiltin.1("[", srcref7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L57() else L56(i19, c11, c12, line3, dr4);
  L56(i23, c20, c21, line5, srcref9):
    __2 = ldf `[` in base;
    r16 = dyn __2(srcref9, 3.0);
    goto L11(i23, c20, c21, line5, r16);
  L71():
    i43 = force? i42;
    checkMissing(i43);
    finer2 = ld finer;
    check L72() else D16();
  L78():
    srcref11 = force? srcref10;
    checkMissing(srcref11);
    c48 = `==`(srcref11, NULL);
    goto L18(i36, c48);
  L79():
    haveSrcrefs3 = ld haveSrcrefs;
    check L80() else D19();
  D16():
    deopt 66 [i36, finer2];
  D19():
    deopt 77 [i48, c49, haveSrcrefs3];
  L21():
    goto L5(i49);
  L57():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(i19, c11, c12, line3, dx4);
  L72():
    finer3 = force? finer2;
    checkMissing(finer3);
    c47 = ldf c in base;
    r31 = dyn c47(i43, finer3);
    check L73() else D17();
  L80():
    haveSrcrefs4 = force? haveSrcrefs3;
    checkMissing(haveSrcrefs4);
    c52 = `as.logical`(haveSrcrefs4);
    if c52 then L81() else L20(i48, c49, c52);
  L86():
    i59 = ld i;
    check L87() else D22();
  D17():
    deopt 69 [i36, r31];
  D22():
    deopt 86 [i49, i59];
  L20(i52, c55, c56):
    c62 = `as.logical`(c56);
    c63 = `||`(c55, c62);
    goto L19(i52, c63);
  L73():
    goto L16(r31);
  L81():
    isBrace = ldf isBrace;
    check L82() else D20();
  L87():
    i60 = force? i59;
    checkMissing(i60);
    popenv;
    return i60;
  D20():
    deopt 80 [i48, c49, c52];
  L82():
    p2 = prom<V +>{
      expr11 = ld expr;
      expr12 = force? expr11;
      checkMissing(expr12);
      c57 = `is.object`(expr12);
      if c57 then L1() else L2(expr12);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", expr12);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(expr14):
      i53 = ld i;
      i54 = force? i53;
      __4 = ldf `[[` in base;
      r36 = dyn __4(expr14, i54);
      goto L0(r36);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r38 = dyn isBrace(p2);
    check L83() else D21();
  D21():
    deopt 82 [i48, c49, c52, r38];
  L83():
    c58 = `as.logical`(r38);
    c59 = `&&`(c52, c58);
    goto L20(i48, c49, c59);
  }
}