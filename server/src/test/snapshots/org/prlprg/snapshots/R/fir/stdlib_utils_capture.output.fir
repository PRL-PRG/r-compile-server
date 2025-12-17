fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg capture_output:cls, reg summary:cls, reg glm:cls, reg __:cls, reg r5:V, reg p1:p(V +), reg infert:*, reg infert1:V, reg p2:p(V +), reg binomial:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg glmout:*, reg glmout1:V, reg c:L, reg glmout3:V, reg dr:V, reg dc:L, reg dx:V, reg __1:cls, reg r15:V, reg capture_output1:cls, reg p6:p(V +), reg p7:p(V +), reg r18:V, reg capture_output2:cls, reg p8:p(V +), reg r20:V |
    mkenv;
    r = clos inner2598485171;
    st `capture.output` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    capture_output = ldf `capture.output`;
    check L6() else D2();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L4():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L5() else D1();
  L6():
    p5 = prom<V +>{
      summary = ldf summary;
      p4 = prom<V +>{
        glm = ldf glm;
        p1 = prom<V +>{
          __ = ldf `~` in base;
          r5 = dyn __(<sym case>, <lang `+`(spontaneous, induced)>);
          return r5;
        };
        p2 = prom<V +>{
          infert = ld infert;
          infert1 = force? infert;
          checkMissing(infert1);
          return infert1;
        };
        p3 = prom<V +>{
          binomial = ldf binomial;
          r8 = dyn binomial();
          return r8;
        };
        r10 = dyn glm[, data, family](p1, p2, p3);
        return r10;
      };
      r12 = dyn summary(p4);
      return r12;
    };
    r14 = dyn capture_output(p5);
    check L7() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r14];
  L5():
    goto L0();
  L7():
    st glmout = r14;
    glmout = ld glmout;
    check L8() else D4();
  D4():
    deopt 13 [glmout];
  L8():
    glmout1 = force? glmout;
    checkMissing(glmout1);
    c = `is.object`(glmout1);
    if c then L9() else L10(glmout1);
  L1():
    capture_output1 = ldf `capture.output`;
    check L12() else D5();
  L9():
    dr = tryDispatchBuiltin.1("[", glmout1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(glmout3):
    __1 = ldf `[` in base;
    r15 = dyn __1(glmout3, <int 1, 2, 3, 4, 5>);
    goto L1();
  D5():
    deopt 19 [];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1();
  L12():
    p6 = prom<V +>{
      return 2.0;
    };
    p7 = prom<V +>{
      return 4.0;
    };
    r18 = dyn capture_output1(p6, p7);
    check L13() else D6();
  D6():
    deopt 22 [r18];
  L13():
    capture_output2 = ldf `capture.output`;
    check L14() else D7();
  D7():
    deopt 24 [];
  L14():
    p8 = prom<V +>{
      return 4.0;
    };
    r20 = dyn capture_output2(p8);
    check L15() else D8();
  D8():
    deopt 26 [r20];
  L15():
    popenv;
    return r20;
  }
}
fun inner2598485171(`...`, file, append, type, split) {
  (reg ddd:dots, reg file:*, reg append:*, reg type:*, reg split:*) -+> V { var `...`:dots?, var file:*, reg file_isMissing:L, reg file_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var split:*, reg split_isMissing:L, reg split_orDefault:*, reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg file1:*, reg file2:V, reg c1:V, reg c2:L, reg textConnection:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg file3:*, reg file4:V, reg c3:L, reg c4:L, reg file5:cls, reg file6:*, reg file7:V, reg p2:p(V +), reg append1:*, reg append2:V, reg c5:L, reg p3:p(V +), reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg file8:*, reg file9:V, reg inherits:cls, reg r17:V, reg c6:L, reg isOpen:cls, reg file10:*, reg file11:V, reg p4:p(V +), reg r19:V, reg r20:V, reg c7:L, reg open:cls, reg file12:*, reg file13:V, reg p5:p(V +), reg append3:*, reg append4:V, reg c8:L, reg p6:p(V +), reg r23:V, reg r24:V, reg stop:cls, reg r25:V, reg sink:cls, reg file14:*, reg file15:V, reg p7:p(V +), reg type3:*, reg type4:V, reg p8:p(V +), reg split1:*, reg split2:V, reg p9:p(V +), reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg on_exit:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg ___length:cls, reg r37:V, reg r38:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c9:L, reg x:V, reg withVisible:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg i5:*, reg i6:V, reg ___elt:cls, reg r41:V, reg p10:p(V +), reg r43:V, reg out:*, reg out1:V, reg c10:L, reg i8:I, reg out3:V, reg dr:V, reg dc:L, reg dx:V, reg i10:I, reg dx1:V, reg r44:V, reg c11:L, reg print:cls, reg out4:*, reg out5:V, reg c12:L, reg out7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r45:V, reg p11:p(V +), reg r47:V, reg i13:I, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg on_exit1:cls, reg r51:V, reg sink1:cls, reg type5:*, reg type6:V, reg p12:p(V +), reg split3:*, reg split4:V, reg p13:p(V +), reg r54:V, reg closeit:*, reg closeit1:V, reg c13:L, reg close:cls, reg file16:*, reg file17:V, reg p14:p(V +), reg r56:V, reg ____:cls, reg rval:*, reg rval1:V, reg p15:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg invisible:cls, reg r61:V, reg p16:p(V +), reg r63:V |
    mkenv;
    st `...` = ddd;
    file_isMissing = missing.0(file);
    if file_isMissing then L0(NULL) else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L1(FALSE) else L1(append);
  L1(append_orDefault):
    st append = append_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L2() else L3(type);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("output", "message");
      goto L0(r2);
    L2():
      r = dyn base("output", "message");
      goto L0(r);
    };
    goto L3(p);
  L3(type_orDefault):
    st type = type_orDefault;
    split_isMissing = missing.0(split);
    if split_isMissing then L4(FALSE) else L4(split);
  L4(split_orDefault):
    st split = split_orDefault;
    match_arg = ldf `match.arg`;
    check L24() else D0();
  D0():
    deopt 1 [];
  L24():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r5 = dyn match_arg(p1);
    check L25() else D1();
  D1():
    deopt 3 [r5];
  L25():
    st type = r5;
    st rval = NULL;
    st closeit = TRUE;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L5(r7):
    c2 = `as.logical`(r7);
    if c2 then L29() else L6();
  L26():
    file1 = ld file;
    check L28() else D2();
  L27():
    r6 = dyn base1(<sym file>);
    goto L5(r6);
  D2():
    deopt 12 [file1];
  L6():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L7():
    sink = ldf sink;
    check L54() else D16();
  L28():
    file2 = force? file1;
    checkMissing(file2);
    c1 = `==`(file2, NULL);
    goto L5(c1);
  L29():
    textConnection = ldf textConnection;
    check L30() else D3();
  D3():
    deopt 16 [];
  D16():
    deopt 59 [];
  L8(r11):
    c4 = `as.logical`(r11);
    if c4 then L36() else L9();
  L30():
    r8 = dyn textConnection[, , local]("rval", "w", TRUE);
    check L31() else D4();
  L33():
    file3 = ld file;
    check L35() else D5();
  L34():
    r10 = dyn base2(<sym file>);
    goto L8(r10);
  L54():
    p7 = prom<V +>{
      file14 = ld file;
      file15 = force? file14;
      checkMissing(file15);
      return file15;
    };
    p8 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    p9 = prom<V +>{
      split1 = ld split;
      split2 = force? split1;
      checkMissing(split2);
      return split2;
    };
    r29 = dyn sink[, type, split](p7, p8, p9);
    check L55() else D17();
  D4():
    deopt 21 [r8];
  D5():
    deopt 24 [file3];
  D17():
    deopt 65 [r29];
  L9():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L31():
    st file = r8;
    goto L7();
  L35():
    file4 = force? file3;
    checkMissing(file4);
    c3 = `is.character`(file4);
    goto L8(c3);
  L36():
    file5 = ldf file;
    check L37() else D6();
  L55():
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  D6():
    deopt 28 [];
  L10(r16):
    c6 = `as.logical`(r16);
    if c6 then L44() else L11();
  L14():
    sym5 = ldf seq_len;
    base5 = ldf seq_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L37():
    p2 = prom<V +>{
      file6 = ld file;
      file7 = force? file6;
      checkMissing(file7);
      return file7;
    };
    p3 = prom<V +>{
      append1 = ld append;
      append2 = force? append1;
      checkMissing(append2);
      c5 = `as.logical`(append2);
      if c5 then L1() else L0();
    L0():
      return "w";
    L1():
      return "a";
    };
    r14 = dyn file5(p2, p3);
    check L38() else D7();
  L40():
    file8 = ld file;
    check L42() else D8();
  L41():
    r15 = dyn base3(<sym file>, "connection");
    goto L10(r15);
  L56():
    on_exit = ldf `on.exit` in base;
    r32 = dyn on_exit(<lang {
      sink(type=type, split=split);
      if(closeit, close(file))
    }>);
    goto L14();
  L57():
    r30 = dyn base4(<lang {
      sink(type=type, split=split);
      if(closeit, close(file))
    }>);
    goto L14();
  D7():
    deopt 31 [r14];
  D8():
    deopt 35 [file8];
  L11():
    stop = ldf stop;
    check L52() else D14();
  L15(r34):
    s = toForSeq(r34);
    l = length(s);
    i = 0;
    goto L17(i);
  L38():
    st file = r14;
    goto L7();
  L42():
    file9 = force? file8;
    checkMissing(file9);
    inherits = ldf inherits in base;
    r17 = dyn inherits(file9, "connection", FALSE);
    check L43() else D9();
  L44():
    isOpen = ldf isOpen;
    check L45() else D10();
  L58():
    sym6 = ldf `...length`;
    base6 = ldf `...length` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L60() else L61();
  L59():
    r33 = dyn base5(<lang ...length()>);
    goto L15(r33);
  D9():
    deopt 40 [r17];
  D10():
    deopt 42 [];
  D14():
    deopt 55 [];
  L16(r36):
    r38 = seq_len(r36);
    goto L15(r38);
  L17(i1):
    i2 = `+`.1(i1, 1);
    c9 = `<`.1(l, i2);
    if c9 then L63() else L20();
  L43():
    goto L10(r17);
  L45():
    p4 = prom<V +>{
      file10 = ld file;
      file11 = force? file10;
      checkMissing(file11);
      return file11;
    };
    r19 = dyn isOpen(p4);
    check L46() else D11();
  L52():
    r25 = dyn stop("'file' must be NULL, a character string or a connection");
    check L53() else D15();
  L60():
    ___length = ldf `...length` in base;
    r37 = dyn ___length();
    check L62() else D18();
  L61():
    r35 = dyn base6();
    goto L16(r35);
  D11():
    deopt 44 [r19];
  D15():
    deopt 57 [r25];
  D18():
    deopt 73 [r37];
  L20():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    withVisible = ldf withVisible;
    check L64() else D19();
  L46():
    r20 = `!`(r19);
    c7 = `as.logical`(r20);
    if c7 then L47() else L12();
  L53():
    goto L7();
  L62():
    goto L16(r37);
  L63():
    sym8 = ldf `on.exit`;
    base8 = ldf `on.exit` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L75() else L76();
  D19():
    deopt 76 [i2];
  L12():
    st closeit = FALSE;
    goto L13(FALSE);
  L13(r24):
    goto L7();
  L21():
    sink1 = ldf sink;
    check L77() else D24();
  L47():
    open = ldf open;
    check L48() else D12();
  L64():
    p10 = prom<V +>{
      sym7 = ldf `...elt`;
      base7 = ldf `...elt` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      ___elt = ldf `...elt` in base;
      r41 = dyn ___elt(i6);
      goto L0(r41);
    L2():
      r39 = dyn base7(<sym i>);
      goto L0(r39);
    };
    r43 = dyn withVisible(p10);
    check L65() else D20();
  L75():
    on_exit1 = ldf `on.exit` in base;
    r51 = dyn on_exit1();
    goto L21();
  L76():
    r49 = dyn base8();
    goto L21();
  D12():
    deopt 47 [];
  D20():
    deopt 78 [i2, r43];
  D24():
    deopt 96 [];
  L48():
    p5 = prom<V +>{
      file12 = ld file;
      file13 = force? file12;
      checkMissing(file13);
      return file13;
    };
    p6 = prom<V +>{
      append3 = ld append;
      append4 = force? append3;
      checkMissing(append4);
      c8 = `as.logical`(append4);
      if c8 then L1() else L0();
    L0():
      return "w";
    L1():
      return "a";
    };
    r23 = dyn open(p5, p6);
    check L49() else D13();
  L65():
    st out = r43;
    out = ld out;
    check L66() else D21();
  L77():
    p12 = prom<V +>{
      type5 = ld type;
      type6 = force? type5;
      checkMissing(type6);
      return type6;
    };
    p13 = prom<V +>{
      split3 = ld split;
      split4 = force? split3;
      checkMissing(split4);
      return split4;
    };
    r54 = dyn sink1[type, split](p12, p13);
    check L78() else D25();
  D13():
    deopt 50 [r23];
  D21():
    deopt 80 [i2, out];
  D25():
    deopt 101 [r54];
  L49():
    goto L13(r23);
  L66():
    out1 = force? out;
    checkMissing(out1);
    c10 = `is.object`(out1);
    if c10 then L68() else L69(i2, out1);
  L78():
    closeit = ld closeit;
    check L79() else D26();
  D26():
    deopt 102 [closeit];
  L67(i10, dx1):
    c11 = `as.logical`(dx1);
    if c11 then L71() else L18();
  L68():
    dr = tryDispatchBuiltin.1("$", out1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L70() else L69(i2, dr);
  L69(i8, out3):
    r44 = `$`(out3, <sym visible>);
    goto L67(i8, r44);
  L79():
    closeit1 = force? closeit;
    checkMissing(closeit1);
    c13 = `as.logical`(closeit1);
    if c13 then L80() else L22();
  L18():
    goto L19(i10);
  L19(i13):
    goto L17(i13);
  L22():
    goto L23();
  L23():
    ____ = ldf `%||%`;
    check L84() else D29();
  L70():
    dx = getTryDispatchBuiltinValue(dr);
    goto L67(i2, dx);
  L71():
    print = ldf print;
    check L72() else D22();
  L80():
    close = ldf close;
    check L81() else D27();
  D22():
    deopt 84 [i10];
  D27():
    deopt 105 [];
  D29():
    deopt 111 [];
  L72():
    p11 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      c12 = `is.object`(out5);
      if c12 then L1() else L2(out5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", out5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(out7):
      r45 = `$`(out7, <sym value>);
      goto L0(r45);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r47 = dyn print(p11);
    check L73() else D23();
  L81():
    p14 = prom<V +>{
      file16 = ld file;
      file17 = force? file16;
      checkMissing(file17);
      return file17;
    };
    r56 = dyn close(p14);
    check L82() else D28();
  L84():
    p15 = prom<V +>{
      rval = ld rval;
      rval1 = force? rval;
      checkMissing(rval1);
      return rval1;
    };
    p16 = prom<V +>{
      sym9 = ldf invisible;
      base9 = ldf invisible in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r60):
      return r60;
    L1():
      invisible = ldf invisible in base;
      r61 = dyn invisible(NULL);
      goto L0(r61);
    L2():
      r59 = dyn base9(NULL);
      goto L0(r59);
    };
    r63 = dyn ____(p15, p16);
    check L85() else D30();
  D23():
    deopt 86 [i10, r47];
  D28():
    deopt 107 [r56];
  D30():
    deopt 114 [r63];
  L73():
    goto L19(i10);
  L82():
    goto L23();
  L85():
    popenv;
    return r63;
  }
}