fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3971855856;
    st `rtags.file` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3971855856(src, ofile, append, `write.fun`) {
  (reg src:*, reg ofile:*, reg append:*, reg write_fun:*) -+> V { var src:*, var ofile:*, reg ofile_isMissing:L, reg ofile_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, var `write.fun`:*, reg write_fun_isMissing:L, reg write_fun_orDefault:*, reg write_etags:*, reg write_etags1:V, reg p:p(V +), reg parse:cls, reg src1:*, reg src2:V, reg p1:p(V +), reg srcfile:cls, reg src3:*, reg src4:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg elist:*, reg elist1:V, reg length:cls, reg r8:V, reg r9:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg invisible:cls, reg r12:V, reg readLines:cls, reg src5:*, reg src6:V, reg p4:p(V +), reg r16:V, reg lapply:cls, reg elist2:*, reg elist3:V, reg p5:p(V +), reg expr2token:*, reg expr2token1:V, reg p6:p(V +), reg r19:V, reg sapply:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg elist4:*, reg elist5:V, reg attr:cls, reg r22:V, reg p7:p(V +), reg __:*, reg __1:V, reg p8:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg tokens:*, reg tokens1:V, reg length1:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg r33:V, reg startlines:*, reg startlines1:V, reg length2:cls, reg r34:V, reg r35:V, reg c1:L, reg stop:cls, reg r36:V, reg lengths:cls, reg tokens2:*, reg tokens3:V, reg p9:p(V +), reg r39:V, reg r40:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg keep:*, reg keep1:V, reg any:cls, reg r43:V, reg r44:V, reg c2:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg invisible1:cls, reg r47:V, reg unlist:cls, reg tokens4:*, reg tokens5:V, reg c3:L, reg tokens7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg keep2:*, reg keep3:V, reg __2:cls, reg r50:V, reg p10:p(V +), reg r52:V, reg startlines2:*, reg startlines3:V, reg c4:L, reg startlines5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg keep4:*, reg keep5:V, reg __3:cls, reg r53:V, reg write_fun1:cls, reg src7:*, reg src8:V, reg p11:p(V +), reg tokens8:*, reg tokens9:V, reg p12:p(V +), reg startlines6:*, reg startlines7:V, reg p13:p(V +), reg lines:*, reg lines1:V, reg c5:L, reg lines3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg startlines8:*, reg startlines9:V, reg __4:cls, reg r57:V, reg p14:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg lines4:*, reg lines5:V, reg nchar:cls, reg r61:V, reg p15:p(V +), reg ofile1:*, reg ofile2:V, reg p16:p(V +), reg append1:*, reg append2:V, reg p17:p(V +), reg r65:V |
    mkenv;
    st src = src;
    ofile_isMissing = missing.0(ofile);
    if ofile_isMissing then L0("") else L0(ofile);
  L0(ofile_orDefault):
    st ofile = ofile_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L1(FALSE) else L1(append);
  L1(append_orDefault):
    st append = append_orDefault;
    write_fun_isMissing = missing.0(write_fun);
    if write_fun_isMissing then L2() else L3(write_fun);
  L2():
    p = prom<V +>{
      write_etags = ld `write.etags`;
      write_etags1 = force? write_etags;
      checkMissing(write_etags1);
      return write_etags1;
    };
    goto L3(p);
  L3(write_fun_orDefault):
    st `write.fun` = write_fun_orDefault;
    parse = ldf parse;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p1 = prom<V +>{
      src1 = ld src;
      src2 = force? src1;
      checkMissing(src2);
      return src2;
    };
    p3 = prom<V +>{
      srcfile = ldf srcfile;
      p2 = prom<V +>{
        src3 = ld src;
        src4 = force? src3;
        checkMissing(src4);
        return src4;
      };
      r3 = dyn srcfile(p2);
      return r3;
    };
    r5 = dyn parse[, srcfile](p1, p3);
    check L18() else D1();
  D1():
    deopt 5 [r5];
  L18():
    st elist = r5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L4(r7):
    r9 = `==`(r7, 0.0);
    c = `as.logical`(r9);
    if c then L23() else L5();
  L19():
    elist = ld elist;
    check L21() else D2();
  L20():
    r6 = dyn base(<sym elist>);
    goto L4(r6);
  D2():
    deopt 9 [elist];
  L5():
    readLines = ldf readLines;
    check L29() else D5();
  L21():
    elist1 = force? elist;
    checkMissing(elist1);
    length = ldf length in base;
    r8 = dyn length(elist1);
    check L22() else D3();
  L23():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  D3():
    deopt 12 [r8];
  D5():
    deopt 23 [];
  L6(r11):
    popenv;
    return r11;
  L22():
    goto L4(r8);
  L24():
    invisible = ldf invisible in base;
    r12 = dyn invisible();
    check L26() else D4();
  L25():
    r10 = dyn base1();
    goto L6(r10);
  L29():
    p4 = prom<V +>{
      src5 = ld src;
      src6 = force? src5;
      checkMissing(src6);
      return src6;
    };
    r16 = dyn readLines(p4);
    check L30() else D6();
  D4():
    deopt 18 [r12];
  D6():
    deopt 25 [r16];
  L26():
    goto L6(r12);
  L30():
    st lines = r16;
    lapply = ldf lapply;
    check L31() else D7();
  D7():
    deopt 28 [];
  L31():
    p5 = prom<V +>{
      elist2 = ld elist;
      elist3 = force? elist2;
      checkMissing(elist3);
      return elist3;
    };
    p6 = prom<V +>{
      expr2token = ld expr2token;
      expr2token1 = force? expr2token;
      checkMissing(expr2token1);
      return expr2token1;
    };
    r19 = dyn lapply(p5, p6);
    check L32() else D8();
  D8():
    deopt 31 [r19];
  L32():
    st tokens = r19;
    sapply = ldf sapply;
    check L33() else D9();
  D9():
    deopt 34 [];
  L33():
    p7 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      elist4 = ld elist;
      elist5 = force? elist4;
      checkMissing(elist5);
      attr = ldf attr in base;
      r22 = dyn attr(elist5, "srcref");
      goto L0(r22);
    L2():
      r20 = dyn base2(<sym elist>, "srcref");
      goto L0(r20);
    };
    p8 = prom<V +>{
      __ = ld `[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r25 = dyn sapply(p7, p8, 1);
    check L34() else D10();
  D10():
    deopt 38 [r25];
  L34():
    st startlines = r25;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L8(r27):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L35():
    tokens = ld tokens;
    check L37() else D11();
  L36():
    r26 = dyn base3(<sym tokens>);
    goto L8(r26);
  D11():
    deopt 42 [tokens];
  L9(r32, r33):
    r35 = `!=`(r32, r33);
    c1 = `as.logical`(r35);
    if c1 then L43() else L10();
  L37():
    tokens1 = force? tokens;
    checkMissing(tokens1);
    length1 = ldf length in base;
    r28 = dyn length1(tokens1);
    check L38() else D12();
  L39():
    startlines = ld startlines;
    check L41() else D13();
  L40():
    r31 = dyn base4(<sym startlines>);
    goto L9(r27, r31);
  D12():
    deopt 45 [r28];
  D13():
    deopt 47 [r27, startlines];
  L10():
    goto L11();
  L11():
    lengths = ldf lengths;
    check L47() else D17();
  L38():
    goto L8(r28);
  L41():
    startlines1 = force? startlines;
    checkMissing(startlines1);
    length2 = ldf length in base;
    r34 = dyn length2(startlines1);
    check L42() else D14();
  L43():
    stop = ldf stop;
    check L44() else D15();
  D14():
    deopt 50 [r27, r34];
  D15():
    deopt 53 [];
  D17():
    deopt 61 [];
  L42():
    goto L9(r27, r34);
  L44():
    r36 = dyn stop[, domain]("length mismatch: bug in code!", NA_LGL);
    check L45() else D16();
  L47():
    p9 = prom<V +>{
      tokens2 = ld tokens;
      tokens3 = force? tokens2;
      checkMissing(tokens3);
      return tokens3;
    };
    r39 = dyn lengths(p9);
    check L48() else D18();
  D16():
    deopt 57 [r36];
  D18():
    deopt 63 [r39];
  L45():
    goto L11();
  L48():
    r40 = `==`(r39, 1);
    st keep = r40;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  L12(r42):
    r44 = `!`(r42);
    c2 = `as.logical`(r44);
    if c2 then L53() else L13();
  L49():
    keep = ld keep;
    check L51() else D19();
  L50():
    r41 = dyn base5(<sym keep>);
    goto L12(r41);
  D19():
    deopt 69 [keep];
  L13():
    unlist = ldf unlist;
    check L59() else D22();
  L51():
    keep1 = force? keep;
    checkMissing(keep1);
    any = ldf any in base;
    r43 = dyn any(keep1);
    check L52() else D20();
  L53():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  D20():
    deopt 72 [r43];
  D22():
    deopt 82 [];
  L14(r46):
    popenv;
    return r46;
  L52():
    goto L12(r43);
  L54():
    invisible1 = ldf invisible in base;
    r47 = dyn invisible1();
    check L56() else D21();
  L55():
    r45 = dyn base6();
    goto L14(r45);
  L59():
    p10 = prom<V +>{
      tokens4 = ld tokens;
      tokens5 = force? tokens4;
      checkMissing(tokens5);
      c3 = `is.object`(tokens5);
      if c3 then L1() else L2(tokens5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", tokens5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(tokens7):
      keep2 = ld keep;
      keep3 = force? keep2;
      __2 = ldf `[` in base;
      r50 = dyn __2(tokens7, keep3);
      goto L0(r50);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r52 = dyn unlist(p10);
    check L60() else D23();
  D21():
    deopt 77 [r47];
  D23():
    deopt 84 [r52];
  L56():
    goto L14(r47);
  L60():
    st tokens = r52;
    startlines2 = ld startlines;
    check L61() else D24();
  D24():
    deopt 86 [startlines2];
  L61():
    startlines3 = force? startlines2;
    checkMissing(startlines3);
    c4 = `is.object`(startlines3);
    if c4 then L62() else L63(startlines3);
  L16(dx3):
    st startlines = dx3;
    write_fun1 = ldf `write.fun`;
    check L66() else D26();
  L62():
    dr2 = tryDispatchBuiltin.1("[", startlines3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L64() else L63(dr2);
  L63(startlines5):
    keep4 = ld keep;
    check L65() else D25();
  D25():
    deopt 88 [startlines5, keep4];
  D26():
    deopt 93 [];
  L64():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(dx2);
  L65():
    keep5 = force? keep4;
    __3 = ldf `[` in base;
    r53 = dyn __3(startlines5, keep5);
    goto L16(r53);
  L66():
    p11 = prom<V +>{
      src7 = ld src;
      src8 = force? src7;
      checkMissing(src8);
      return src8;
    };
    p12 = prom<V +>{
      tokens8 = ld tokens;
      tokens9 = force? tokens8;
      checkMissing(tokens9);
      return tokens9;
    };
    p13 = prom<V +>{
      startlines6 = ld startlines;
      startlines7 = force? startlines6;
      checkMissing(startlines7);
      return startlines7;
    };
    p14 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      c5 = `is.object`(lines1);
      if c5 then L1() else L2(lines1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", lines1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(lines3):
      startlines8 = ld startlines;
      startlines9 = force? startlines8;
      __4 = ldf `[` in base;
      r57 = dyn __4(lines3, startlines9);
      goto L0(r57);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p15 = prom<V +>{
      sym7 = ldf nchar;
      base7 = ldf nchar in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r60):
      return r60;
    L1():
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      nchar = ldf nchar in base;
      r61 = dyn nchar(lines5, "bytes", FALSE, NA_LGL);
      goto L0(r61);
    L2():
      r59 = dyn base7[, type](<sym lines>, "bytes");
      goto L0(r59);
    };
    p16 = prom<V +>{
      ofile1 = ld ofile;
      ofile2 = force? ofile1;
      checkMissing(ofile2);
      return ofile2;
    };
    p17 = prom<V +>{
      append1 = ld append;
      append2 = force? append1;
      checkMissing(append2);
      return append2;
    };
    r65 = dyn write_fun1[src, tokens, startlines, lines, nchars, file, append](p11, p12, p13, p14, p15, p16, p17);
    check L67() else D27();
  D27():
    deopt 108 [r65];
  L67():
    popenv;
    return r65;
  }
}