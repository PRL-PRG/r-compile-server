fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner382071165;
    st `.makeMessageRd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner382071165(block, Rdfile, `...`, showSource) {
  (reg block:*, reg Rdfile:*, reg ddd:dots, reg showSource:*) -+> V { var block:*, var Rdfile:*, var `...`:dots?, var showSource:*, reg showSource_isMissing:L, reg showSource_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg block1:*, reg block2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c5:L, reg r7:V, reg srcref:*, reg srcref1:V, reg c6:V, reg r8:V, reg c7:L, reg c8:V, reg c10:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg srcref2:*, reg srcref3:V, reg attr1:cls, reg r11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r12:V, reg r13:V, reg srcfile:*, reg srcfile1:V, reg is_environment:cls, reg r14:V, reg c11:L, reg srcfile2:*, reg srcfile3:V, reg c12:L, reg srcfile5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg dx2:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r16:V, reg r17:V, reg missing1:cls, reg r18:V, reg c13:L, reg c14:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r19:V, reg c18:L, reg r20:V, reg Rdfile1:*, reg Rdfile2:V, reg c19:V, reg c20:L, reg c21:V, reg c23:L, reg r21:V, reg intersect:cls, reg basename:cls, reg dirname:cls, reg Rdfile3:*, reg Rdfile4:V, reg p:p(V +), reg r23:V, reg p1:p(V +), reg r25:V, reg p2:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg c24:cls, reg r29:V, reg p3:p(V +), reg r31:V, reg paste0:cls, reg paste1:cls, reg OS_subdir:*, reg OS_subdir1:V, reg p4:p(V +), reg r33:V, reg p5:p(V +), reg basename1:cls, reg Rdfile5:*, reg Rdfile6:V, reg p6:p(V +), reg r36:V, reg p7:p(V +), reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg srcref4:*, reg srcref5:V, reg c25:V, reg c26:L, reg paste2:cls, reg Rdfile7:*, reg Rdfile8:V, reg p8:p(V +), reg ddd1:dots?, reg r42:V, reg srcref6:*, reg srcref7:V, reg c27:L, reg srcref9:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r43:V, reg paste3:cls, reg Rdfile9:*, reg Rdfile10:V, reg p9:p(V +), reg from:*, reg from1:V, reg p10:p(V +), reg from2:*, reg from3:V, reg srcref10:*, reg srcref11:V, reg c28:L, reg from5:V, reg srcref13:V, reg dr4:V, reg dc2:L, reg dx6:V, reg from7:V, reg dx7:V, reg __1:cls, reg r46:V, reg r47:V, reg c29:L, reg paste4:cls, reg srcref14:*, reg srcref15:V, reg c30:L, reg srcref17:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r48:V, reg p11:p(V +), reg r50:V, reg p12:p(V +), reg r52:V, reg showSource1:*, reg showSource2:V, reg c31:L, reg tryCatch:cls, reg r53:cls, reg p13:p(V +), reg getSrcLines:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg srcref18:*, reg srcref19:V, reg attr2:cls, reg r57:V, reg p14:p(V +), reg from8:*, reg from9:V, reg p15:p(V +), reg from10:*, reg from11:V, reg p16:p(V +), reg r61:V, reg sprintf:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r62:V, reg r63:V, reg from12:*, reg from13:V, reg c32:cls, reg r64:V, reg p17:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r66:V, reg r67:V, reg tabExpand:cls, reg line:*, reg line1:V, reg p18:p(V +), reg r69:V, reg paste5:cls, reg strrep:cls, reg srcref20:*, reg srcref21:V, reg c33:L, reg srcref23:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r70:V, reg r71:V, reg p19:p(V +), reg r73:V, reg p20:p(V +), reg r75:V, reg c34:cls, reg r76:V, reg p21:p(V +), reg r78:V, reg p22:p(V +), reg r80:V, reg r81:V, reg paste6:cls, reg loc:*, reg loc1:V, reg p23:p(V +), reg ddd2:dots?, reg paste7:cls, reg src:*, reg src1:V, reg p24:p(V +), reg r84:V, reg p25:p(V +), reg r86:V |
    mkenv;
    st block = block;
    st Rdfile = Rdfile;
    st `...` = ddd;
    showSource_isMissing = missing.0(showSource);
    if showSource_isMissing then L0(FALSE) else L0(showSource);
  L0(showSource_orDefault):
    st showSource = showSource_orDefault;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L1(r1):
    st srcref = r1;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L21():
    block1 = ld block;
    check L23() else D0();
  L22():
    r = dyn base(<sym block>, "srcref");
    goto L1(r);
  D0():
    deopt 2 [block1];
  L2(r4):
    c = `as.logical`(r4);
    if c then L27() else L3(c);
  L23():
    block2 = force? block1;
    checkMissing(block2);
    attr = ldf attr in base;
    r2 = dyn attr(block2, "srcref");
    check L24() else D1();
  L25():
    missing = ldf missing in base;
    r5 = dyn missing(<sym Rdfile>);
    goto L2(r5);
  L26():
    r3 = dyn base1(<sym Rdfile>);
    goto L2(r3);
  D1():
    deopt 6 [r2];
  L3(c2):
    c10 = `as.logical`(c2);
    if c10 then L32() else L5();
  L24():
    goto L1(r2);
  L27():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L4(c5, r7):
    r8 = `!`(r7);
    c7 = `as.logical`(r8);
    c8 = `&&`(c5, c7);
    goto L3(c8);
  L5():
    goto L10();
  L10():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  L28():
    srcref = ld srcref;
    check L30() else D2();
  L29():
    r6 = dyn base2(<sym srcref>);
    goto L4(c, r6);
  L32():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  D2():
    deopt 12 [c, srcref];
  L6(r10):
    st srcfile = r10;
    sym4 = ldf `is.environment`;
    base4 = ldf `is.environment` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L11(r17):
    c13 = `as.logical`(r17);
    if c13 then L12(c13) else L51();
  L30():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    c6 = `==`(srcref1, NULL);
    goto L4(c, c6);
  L33():
    srcref2 = ld srcref;
    check L35() else D3();
  L34():
    r9 = dyn base3(<sym srcref>, "srcfile");
    goto L6(r9);
  L49():
    missing1 = ldf missing in base;
    r18 = dyn missing1(<sym Rdfile>);
    goto L11(r18);
  L50():
    r16 = dyn base5(<sym Rdfile>);
    goto L11(r16);
  D3():
    deopt 19 [srcref2];
  L7(r13):
    c11 = `as.logical`(r13);
    if c11 then L41() else L8();
  L12(c14):
    c23 = `as.logical`(c14);
    if c23 then L56() else L14();
  L35():
    srcref3 = force? srcref2;
    checkMissing(srcref3);
    attr1 = ldf attr in base;
    r11 = dyn attr1(srcref3, "srcfile");
    check L36() else D4();
  L37():
    srcfile = ld srcfile;
    check L39() else D5();
  L38():
    r12 = dyn base4(<sym srcfile>);
    goto L7(r12);
  L51():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  D4():
    deopt 23 [r11];
  D5():
    deopt 27 [srcfile];
  L8():
    goto L9(NULL);
  L9(dx2):
    goto L10();
  L13(c18, r20):
    c20 = `as.logical`(r20);
    c21 = `||`(c18, c20);
    goto L12(c21);
  L14():
    intersect = ldf intersect;
    check L58() else D9();
  L15(r21):
    st Rdfile = r21;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L62() else L63();
  L36():
    goto L6(r11);
  L39():
    srcfile1 = force? srcfile;
    checkMissing(srcfile1);
    is_environment = ldf `is.environment` in base;
    r14 = dyn is_environment(srcfile1);
    check L40() else D6();
  L41():
    srcfile2 = ld srcfile;
    check L42() else D7();
  L52():
    Rdfile1 = ld Rdfile;
    check L54() else D8();
  L53():
    r19 = dyn base6(<sym Rdfile>);
    goto L13(c13, r19);
  L56():
    goto L15("");
  D6():
    deopt 30 [r14];
  D7():
    deopt 31 [srcfile2];
  D8():
    deopt 43 [c13, Rdfile1];
  D9():
    deopt 50 [];
  L16(r40):
    c26 = `as.logical`(r40);
    if c26 then L65() else L17();
  L40():
    goto L7(r14);
  L42():
    srcfile3 = force? srcfile2;
    checkMissing(srcfile3);
    c12 = `is.object`(srcfile3);
    if c12 then L44() else L45(srcfile3);
  L54():
    Rdfile2 = force? Rdfile1;
    checkMissing(Rdfile2);
    c19 = `==`(Rdfile2, NULL);
    goto L13(c13, c19);
  L58():
    p2 = prom<V +>{
      basename = ldf basename;
      p1 = prom<V +>{
        dirname = ldf dirname;
        p = prom<V +>{
          Rdfile3 = ld Rdfile;
          Rdfile4 = force? Rdfile3;
          checkMissing(Rdfile4);
          return Rdfile4;
        };
        r23 = dyn dirname(p);
        return r23;
      };
      r25 = dyn basename(p1);
      return r25;
    };
    p3 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c24 = ldf c in base;
      r29 = dyn c24("unix", "windows");
      goto L0(r29);
    L2():
      r27 = dyn base7("unix", "windows");
      goto L0(r27);
    };
    r31 = dyn intersect(p2, p3);
    check L59() else D10();
  L62():
    srcref4 = ld srcref;
    check L64() else D13();
  L63():
    r39 = dyn base8(<sym srcref>);
    goto L16(r39);
  D10():
    deopt 53 [r31];
  D13():
    deopt 65 [srcref4];
  L17():
    srcref6 = ld srcref;
    check L69() else D16();
  L43(dx1):
    st Rdfile = dx1;
    goto L9(dx1);
  L44():
    dr = tryDispatchBuiltin.1("$", srcfile3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(srcfile5):
    r15 = `$`(srcfile5, <sym filename>);
    goto L43(r15);
  L59():
    st OS_subdir = r31;
    paste0 = ldf paste0;
    check L60() else D11();
  L64():
    srcref5 = force? srcref4;
    checkMissing(srcref5);
    c25 = `==`(srcref5, NULL);
    goto L16(c25);
  L65():
    paste2 = ldf paste0;
    check L66() else D14();
  D11():
    deopt 56 [];
  D14():
    deopt 69 [];
  D16():
    deopt 74 [srcref6];
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L43(dx);
  L60():
    p5 = prom<V +>{
      paste1 = ldf paste0;
      p4 = prom<V +>{
        OS_subdir = ld OS_subdir;
        OS_subdir1 = force? OS_subdir;
        checkMissing(OS_subdir1);
        return OS_subdir1;
      };
      r33 = dyn paste1[, , recycle0](p4, "/", TRUE);
      return r33;
    };
    p7 = prom<V +>{
      basename1 = ldf basename;
      p6 = prom<V +>{
        Rdfile5 = ld Rdfile;
        Rdfile6 = force? Rdfile5;
        checkMissing(Rdfile6);
        return Rdfile6;
      };
      r36 = dyn basename1(p6);
      return r36;
    };
    r38 = dyn paste0[, , , recycle0](p5, p7, ":", FALSE);
    check L61() else D12();
  L66():
    p8 = prom<V +>{
      Rdfile7 = ld Rdfile;
      Rdfile8 = force? Rdfile7;
      checkMissing(Rdfile8);
      return Rdfile8;
    };
    ddd1 = ld `...`;
    r42 = dyn paste2[, , `...`](p8, " ", ddd1);
    check L67() else D15();
  L69():
    srcref7 = force? srcref6;
    checkMissing(srcref7);
    c27 = `is.object`(srcref7);
    if c27 then L70() else L71(srcref7);
  D12():
    deopt 62 [r38];
  D15():
    deopt 73 [r42];
  L18(dx5):
    st from = dx5;
    paste3 = ldf paste0;
    check L73() else D17();
  L61():
    goto L15(r38);
  L67():
    popenv;
    return r42;
  L70():
    dr2 = tryDispatchBuiltin.1("[", srcref7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L72() else L71(dr2);
  L71(srcref9):
    __ = ldf `[` in base;
    r43 = dyn __(srcref9, 1);
    goto L18(r43);
  D17():
    deopt 81 [];
  L72():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L18(dx4);
  L73():
    p9 = prom<V +>{
      Rdfile9 = ld Rdfile;
      Rdfile10 = force? Rdfile9;
      checkMissing(Rdfile10);
      return Rdfile10;
    };
    p10 = prom<V +>{
      from = ld from;
      from1 = force? from;
      checkMissing(from1);
      return from1;
    };
    p12 = prom<V +>{
      from2 = ld from;
      from3 = force? from2;
      checkMissing(from3);
      srcref10 = ld srcref;
      srcref11 = force? srcref10;
      checkMissing(srcref11);
      c28 = `is.object`(srcref11);
      if c28 then L2() else L3(from3, srcref11);
    L0(from7, dx7):
      r47 = `!=`(from7, dx7);
      c29 = `as.logical`(r47);
      if c29 then L5() else L1();
    L2():
      dr4 = tryDispatchBuiltin.1("[", srcref11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(from3, dr4);
    L3(from5, srcref13):
      __1 = ldf `[` in base;
      r46 = dyn __1(srcref13, 3);
      goto L0(from5, r46);
    L1():
      invisible.0();
      return NULL;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(from3, dx6);
    L5():
      paste4 = ldf paste0;
      p11 = prom<V +>{
        srcref14 = ld srcref;
        srcref15 = force? srcref14;
        checkMissing(srcref15);
        c30 = `is.object`(srcref15);
        if c30 then L1() else L2(srcref15);
      L0(dx9):
        return dx9;
      L1():
        dr6 = tryDispatchBuiltin.1("[", srcref15);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(srcref17):
        __2 = ldf `[` in base;
        r48 = dyn __2(srcref17, 3);
        goto L0(r48);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx8);
      };
      r50 = dyn paste4("-", p11);
      return r50;
    };
    r52 = dyn paste3(p9, p10, p12);
    check L74() else D18();
  D18():
    deopt 85 [r52];
  L74():
    st loc = r52;
    showSource1 = ld showSource;
    check L75() else D19();
  D19():
    deopt 87 [showSource1];
  L75():
    showSource2 = force? showSource1;
    checkMissing(showSource2);
    c31 = `as.logical`(showSource2);
    if c31 then L76() else L19();
  L19():
    goto L20(NULL);
  L20(r81):
    st src = r81;
    paste6 = ldf paste0;
    check L80() else D22();
  L76():
    tryCatch = ldf tryCatch;
    check L77() else D20();
  D20():
    deopt 90 [];
  D22():
    deopt 99 [];
  L77():
    p13 = prom<V +>{
      r53 = clos inner3708401697;
      return r53;
    };
    p22 = prom<V +>{
      getSrcLines = ldf getSrcLines;
      p14 = prom<V +>{
        sym9 = ldf attr;
        base9 = ldf attr in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r56):
        return r56;
      L1():
        srcref18 = ld srcref;
        srcref19 = force? srcref18;
        checkMissing(srcref19);
        attr2 = ldf attr in base;
        r57 = dyn attr2(srcref19, "srcfile");
        goto L0(r57);
      L2():
        r55 = dyn base9(<sym srcref>, "srcfile");
        goto L0(r55);
      };
      p15 = prom<V +>{
        from8 = ld from;
        from9 = force? from8;
        checkMissing(from9);
        return from9;
      };
      p16 = prom<V +>{
        from10 = ld from;
        from11 = force? from10;
        checkMissing(from11);
        return from11;
      };
      r61 = dyn getSrcLines(p14, p15, p16);
      st line = r61;
      sprintf = ldf sprintf;
      p17 = prom<V +>{
        sym10 = ldf c;
        base10 = ldf c in base;
        guard10 = `==`.4(sym10, base10);
        if guard10 then L1() else L2();
      L0(r63):
        return r63;
      L1():
        from12 = ld from;
        from13 = force? from12;
        checkMissing(from13);
        c32 = ldf c in base;
        r64 = dyn c32(from13, "");
        goto L0(r64);
      L2():
        r62 = dyn base10(<sym from>, "");
        goto L0(r62);
      };
      p21 = prom<V +>{
        sym11 = ldf c;
        base11 = ldf c in base;
        guard11 = `==`.4(sym11, base11);
        if guard11 then L1() else L2();
      L0(r67):
        return r67;
      L1():
        tabExpand = ldf tabExpand;
        p18 = prom<V +>{
          line = ld line;
          line1 = force? line;
          checkMissing(line1);
          return line1;
        };
        r69 = dyn tabExpand(p18);
        paste5 = ldf paste0;
        p20 = prom<V +>{
          strrep = ldf strrep;
          p19 = prom<V +>{
            srcref20 = ld srcref;
            srcref21 = force? srcref20;
            checkMissing(srcref21);
            c33 = `is.object`(srcref21);
            if c33 then L1() else L2(srcref21);
          L0(dx11):
            r71 = `-`(dx11, 1);
            return r71;
          L1():
            dr8 = tryDispatchBuiltin.1("[", srcref21);
            dc4 = getTryDispatchBuiltinDispatched(dr8);
            if dc4 then L3() else L2(dr8);
          L2(srcref23):
            __3 = ldf `[` in base;
            r70 = dyn __3(srcref23, 5);
            goto L0(r70);
          L3():
            dx10 = getTryDispatchBuiltinValue(dr8);
            goto L0(dx10);
          };
          r73 = dyn strrep(" ", p19);
          return r73;
        };
        r75 = dyn paste5(p20, "^");
        c34 = ldf c in base;
        r76 = dyn c34(r69, r75);
        goto L0(r76);
      L2():
        r66 = dyn base11(<lang tabExpand(line)>, <lang paste0(strrep(" ", `-`(`[`(srcref, 5), 1)), "^")>);
        goto L0(r66);
      };
      r78 = dyn sprintf("\n  %4s | %s", p17, p21);
      return r78;
    };
    r80 = dyn tryCatch[error, ](p13, p22);
    check L78() else D21();
  L80():
    p23 = prom<V +>{
      loc = ld loc;
      loc1 = force? loc;
      checkMissing(loc1);
      return loc1;
    };
    ddd2 = ld `...`;
    p25 = prom<V +>{
      paste7 = ldf paste0;
      p24 = prom<V +>{
        src = ld src;
        src1 = force? src;
        checkMissing(src1);
        return src1;
      };
      r84 = dyn paste7[, collapse](p24, "");
      return r84;
    };
    r86 = dyn paste6[, , `...`, ](p23, ": ", ddd2, p25);
    check L81() else D23();
  D21():
    deopt 94 [r80];
  D23():
    deopt 104 [r86];
  L78():
    goto L20(r80);
  L81():
    popenv;
    return r86;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}