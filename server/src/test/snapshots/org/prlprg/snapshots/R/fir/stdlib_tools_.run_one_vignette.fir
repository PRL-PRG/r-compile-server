fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4093015592;
    st `.run_one_vignette` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4093015592(vig_name, docDir, encoding, pkgdir) {
  (reg vig_name:*, reg docDir:*, reg encoding:*, reg pkgdir:*) -+> V { var vig_name:*, var docDir:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var pkgdir:*, reg tempfile:cls, reg r:V, reg dir_create:cls, reg td:*, reg td1:V, reg p:p(V +), reg r2:V, reg file_copy:cls, reg docDir1:*, reg docDir2:V, reg p1:p(V +), reg td2:*, reg td3:V, reg p2:p(V +), reg r5:V, reg setwd:cls, reg file_path:cls, reg td4:*, reg td5:V, reg p3:p(V +), reg basename:cls, reg docDir3:*, reg docDir4:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg r10:V, reg p6:p(V +), reg r12:V, reg gsub:cls, reg pkgdir1:*, reg pkgdir2:V, reg p7:p(V +), reg docDir5:*, reg docDir6:V, reg p8:p(V +), reg r15:V, reg pkgVignettes:cls, reg pkgdir3:*, reg pkgdir4:V, reg p9:p(V +), reg subdir:*, reg subdir1:V, reg p10:p(V +), reg r18:V, reg sym:cls, reg base:cls, reg guard:L, reg r19:V, reg r20:V, reg vigns:*, reg vigns1:V, reg c:V, reg c1:L, reg cat:cls, reg sQuote:cls, reg vig_name1:*, reg vig_name2:V, reg p11:p(V +), reg r22:V, reg p12:p(V +), reg r24:V, reg stop:cls, reg r25:V, reg which:cls, reg basename1:cls, reg vigns2:*, reg vigns3:V, reg c2:L, reg vigns5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r27:V, reg p13:p(V +), reg r29:V, reg vig_name3:*, reg vig_name4:V, reg r30:V, reg p14:p(V +), reg r32:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r33:V, reg r34:V, reg i:*, reg i1:V, reg length:cls, reg r35:V, reg r36:V, reg c3:L, reg cat1:cls, reg sQuote1:cls, reg vig_name5:*, reg vig_name6:V, reg p15:p(V +), reg r38:V, reg p16:p(V +), reg r40:V, reg stop1:cls, reg sQuote2:cls, reg vig_name7:*, reg vig_name8:V, reg p17:p(V +), reg r42:V, reg p18:p(V +), reg r44:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r46:V, reg r47:V, reg i2:*, reg i3:V, reg length1:cls, reg r48:V, reg r49:V, reg p19:p(V +), reg r51:V, reg loadVignetteBuilder:cls, reg pkgdir5:*, reg pkgdir6:V, reg p20:p(V +), reg r53:V, reg basename2:cls, reg vigns6:*, reg vigns7:V, reg c4:L, reg vigns9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r54:V, reg c5:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg i4:*, reg i5:V, reg __:cls, reg r55:V, reg p21:p(V +), reg r57:V, reg vigns10:*, reg vigns11:V, reg c6:L, reg vigns13:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r58:V, reg c7:L, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg i6:*, reg i7:V, reg __1:cls, reg r59:V, reg vignetteEngine:cls, reg vigns14:*, reg vigns15:V, reg c8:L, reg vigns17:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r60:V, reg c9:L, reg dx17:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg i8:*, reg i9:V, reg __2:cls, reg r61:V, reg p22:p(V +), reg r63:V, reg tryCatch:cls, reg engine:*, reg engine1:V, reg c10:L, reg engine3:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg r64:V, reg dx22:cls, reg file:*, reg file1:V, reg p23:p(V +), reg encoding1:*, reg encoding2:V, reg p24:p(V +), reg find_vignette_product:cls, reg name:*, reg name1:V, reg p25:p(V +), reg engine4:*, reg engine5:V, reg p26:p(V +), reg r70:V, reg p27:p(V +), reg r72:cls, reg p28:p(V +), reg r74:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r75:V, reg r76:V, reg output:*, reg output1:V, reg length2:cls, reg r77:V, reg r78:V, reg c11:L, reg tryCatch1:cls, reg source:cls, reg output2:*, reg output3:V, reg p29:p(V +), reg r80:V, reg p30:p(V +), reg r82:cls, reg p31:p(V +), reg r84:V, reg cat2:cls, reg r86:V |
    mkenv;
    st vig_name = vig_name;
    st docDir = docDir;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    st pkgdir = pkgdir;
    tempfile = ldf tempfile;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    r = dyn tempfile();
    check L12() else D1();
  D1():
    deopt 2 [r];
  L12():
    st td = r;
    dir_create = ldf `dir.create`;
    check L13() else D2();
  D2():
    deopt 5 [];
  L13():
    p = prom<V +>{
      td = ld td;
      td1 = force? td;
      checkMissing(td1);
      return td1;
    };
    r2 = dyn dir_create(p);
    check L14() else D3();
  D3():
    deopt 7 [r2];
  L14():
    file_copy = ldf `file.copy`;
    check L15() else D4();
  D4():
    deopt 9 [];
  L15():
    p1 = prom<V +>{
      docDir1 = ld docDir;
      docDir2 = force? docDir1;
      checkMissing(docDir2);
      return docDir2;
    };
    p2 = prom<V +>{
      td2 = ld td;
      td3 = force? td2;
      checkMissing(td3);
      return td3;
    };
    r5 = dyn file_copy[, , recursive](p1, p2, TRUE);
    check L16() else D5();
  D5():
    deopt 14 [r5];
  L16():
    setwd = ldf setwd;
    check L17() else D6();
  D6():
    deopt 16 [];
  L17():
    p6 = prom<V +>{
      file_path = ldf `file.path`;
      p3 = prom<V +>{
        td4 = ld td;
        td5 = force? td4;
        checkMissing(td5);
        return td5;
      };
      p5 = prom<V +>{
        basename = ldf basename;
        p4 = prom<V +>{
          docDir3 = ld docDir;
          docDir4 = force? docDir3;
          checkMissing(docDir4);
          return docDir4;
        };
        r8 = dyn basename(p4);
        return r8;
      };
      r10 = dyn file_path(p3, p5);
      return r10;
    };
    r12 = dyn setwd(p6);
    check L18() else D7();
  D7():
    deopt 18 [r12];
  L18():
    gsub = ldf gsub;
    check L19() else D8();
  D8():
    deopt 20 [];
  L19():
    p7 = prom<V +>{
      pkgdir1 = ld pkgdir;
      pkgdir2 = force? pkgdir1;
      checkMissing(pkgdir2);
      return pkgdir2;
    };
    p8 = prom<V +>{
      docDir5 = ld docDir;
      docDir6 = force? docDir5;
      checkMissing(docDir6);
      return docDir6;
    };
    r15 = dyn gsub[, , , fixed](p7, "", p8, TRUE);
    check L20() else D9();
  D9():
    deopt 26 [r15];
  L20():
    st subdir = r15;
    pkgVignettes = ldf pkgVignettes;
    check L21() else D10();
  D10():
    deopt 29 [];
  L21():
    p9 = prom<V +>{
      pkgdir3 = ld pkgdir;
      pkgdir4 = force? pkgdir3;
      checkMissing(pkgdir4);
      return pkgdir4;
    };
    p10 = prom<V +>{
      subdir = ld subdir;
      subdir1 = force? subdir;
      checkMissing(subdir1);
      return subdir1;
    };
    r18 = dyn pkgVignettes[dir, subdirs](p9, p10);
    check L22() else D11();
  D11():
    deopt 34 [r18];
  L22():
    st vigns = r18;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L1(r20):
    c1 = `as.logical`(r20);
    if c1 then L26() else L2();
  L23():
    vigns = ld vigns;
    check L25() else D12();
  L24():
    r19 = dyn base(<sym vigns>);
    goto L1(r19);
  D12():
    deopt 37 [vigns];
  L2():
    goto L3();
  L3():
    which = ldf which;
    check L32() else D17();
  L25():
    vigns1 = force? vigns;
    checkMissing(vigns1);
    c = `==`(vigns1, NULL);
    goto L1(c);
  L26():
    cat = ldf cat;
    check L27() else D13();
  D13():
    deopt 41 [];
  D17():
    deopt 59 [];
  L27():
    p12 = prom<V +>{
      sQuote = ldf sQuote;
      p11 = prom<V +>{
        vig_name1 = ld vig_name;
        vig_name2 = force? vig_name1;
        checkMissing(vig_name2);
        return vig_name2;
      };
      r22 = dyn sQuote(p11);
      return r22;
    };
    r24 = dyn cat[, , , sep]("\n  When running vignette ", p12, ":\n", "");
    check L28() else D14();
  L32():
    p14 = prom<V +>{
      basename1 = ldf basename;
      p13 = prom<V +>{
        vigns2 = ld vigns;
        vigns3 = force? vigns2;
        checkMissing(vigns3);
        c2 = `is.object`(vigns3);
        if c2 then L1() else L2(vigns3);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", vigns3);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(vigns5):
        r27 = `$`(vigns5, <sym docs>);
        goto L0(r27);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r29 = dyn basename1(p13);
      vig_name3 = ld vig_name;
      vig_name4 = force? vig_name3;
      checkMissing(vig_name4);
      r30 = `==`(r29, vig_name4);
      return r30;
    };
    r32 = dyn which(p14);
    check L33() else D18();
  D14():
    deopt 47 [r24];
  D18():
    deopt 61 [r32];
  L28():
    stop = ldf stop;
    check L29() else D15();
  L33():
    st i = r32;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  D15():
    deopt 49 [];
  L4(r34):
    r36 = `==`(r34, 0);
    c3 = `as.logical`(r36);
    if c3 then L38() else L5();
  L29():
    r25 = dyn stop[, `call.`, domain]("No vignettes available", FALSE, NA_LGL);
    check L30() else D16();
  L34():
    i = ld i;
    check L36() else D19();
  L35():
    r33 = dyn base1(<sym i>);
    goto L4(r33);
  D16():
    deopt 55 [r25];
  D19():
    deopt 65 [i];
  L5():
    goto L6();
  L6():
    stopifnot = ldf stopifnot;
    check L44() else D25();
  L30():
    goto L3();
  L36():
    i1 = force? i;
    checkMissing(i1);
    length = ldf length in base;
    r35 = dyn length(i1);
    check L37() else D20();
  L38():
    cat1 = ldf cat;
    check L39() else D21();
  D20():
    deopt 68 [r35];
  D21():
    deopt 72 [];
  D25():
    deopt 91 [];
  L37():
    goto L4(r35);
  L39():
    p16 = prom<V +>{
      sQuote1 = ldf sQuote;
      p15 = prom<V +>{
        vig_name5 = ld vig_name;
        vig_name6 = force? vig_name5;
        checkMissing(vig_name6);
        return vig_name6;
      };
      r38 = dyn sQuote1(p15);
      return r38;
    };
    r40 = dyn cat1[, , , sep]("\n  When running vignette ", p16, ":\n", "");
    check L40() else D22();
  L44():
    p19 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r47):
      r49 = `==`(r47, 1);
      return r49;
    L1():
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      length1 = ldf length in base;
      r48 = dyn length1(i3);
      goto L0(r48);
    L2():
      r46 = dyn base2(<sym i>);
      goto L0(r46);
    };
    r51 = dyn stopifnot(p19);
    check L45() else D26();
  D22():
    deopt 78 [r40];
  D26():
    deopt 93 [r51];
  L40():
    stop1 = ldf stop;
    check L41() else D23();
  L45():
    loadVignetteBuilder = ldf loadVignetteBuilder;
    check L46() else D27();
  D23():
    deopt 80 [];
  D27():
    deopt 95 [];
  L41():
    p18 = prom<V +>{
      sQuote2 = ldf sQuote;
      p17 = prom<V +>{
        vig_name7 = ld vig_name;
        vig_name8 = force? vig_name7;
        checkMissing(vig_name8);
        return vig_name8;
      };
      r42 = dyn sQuote2(p17);
      return r42;
    };
    r44 = dyn stop1[, , `call.`, domain]("No such vignette ", p18, FALSE, NA_LGL);
    check L42() else D24();
  L46():
    p20 = prom<V +>{
      pkgdir5 = ld pkgdir;
      pkgdir6 = force? pkgdir5;
      checkMissing(pkgdir6);
      return pkgdir6;
    };
    r53 = dyn loadVignetteBuilder(p20);
    check L47() else D28();
  D24():
    deopt 87 [r44];
  D28():
    deopt 97 [r53];
  L42():
    goto L6();
  L47():
    basename2 = ldf basename;
    check L48() else D29();
  D29():
    deopt 99 [];
  L48():
    p21 = prom<V +>{
      vigns6 = ld vigns;
      vigns7 = force? vigns6;
      checkMissing(vigns7);
      c4 = `is.object`(vigns7);
      if c4 then L2() else L3(vigns7);
    L1(dx3):
      c5 = `is.object`(dx3);
      if c5 then L5() else L6(dx3);
    L2():
      dr2 = tryDispatchBuiltin.1("$", vigns7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(vigns9):
      r54 = `$`(vigns9, <sym docs>);
      goto L1(r54);
    L0(dx7):
      return dx7;
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    L5():
      dr4 = tryDispatchBuiltin.1("[", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dx5):
      i4 = ld i;
      i5 = force? i4;
      __ = ldf `[` in base;
      r55 = dyn __(dx5, i5);
      goto L0(r55);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    };
    r57 = dyn basename2(p21);
    check L49() else D30();
  D30():
    deopt 101 [r57];
  L49():
    st file = r57;
    vigns10 = ld vigns;
    check L50() else D31();
  D31():
    deopt 103 [vigns10];
  L50():
    vigns11 = force? vigns10;
    checkMissing(vigns11);
    c6 = `is.object`(vigns11);
    if c6 then L52() else L53(vigns11);
  L51(dx9):
    c7 = `is.object`(dx9);
    if c7 then L55() else L56(dx9);
  L52():
    dr6 = tryDispatchBuiltin.1("$", vigns11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L54() else L53(dr6);
  L53(vigns13):
    r58 = `$`(vigns13, <sym names>);
    goto L51(r58);
  L7(dx13):
    st name = dx13;
    vignetteEngine = ldf vignetteEngine;
    check L59() else D33();
  L54():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L51(dx8);
  L55():
    dr8 = tryDispatchBuiltin.1("[", dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L57() else L56(dr8);
  L56(dx11):
    i6 = ld i;
    check L58() else D32();
  D32():
    deopt 106 [dx11, i6];
  D33():
    deopt 111 [];
  L57():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L7(dx12);
  L58():
    i7 = force? i6;
    __1 = ldf `[` in base;
    r59 = dyn __1(dx11, i7);
    goto L7(r59);
  L59():
    p22 = prom<V +>{
      vigns14 = ld vigns;
      vigns15 = force? vigns14;
      checkMissing(vigns15);
      c8 = `is.object`(vigns15);
      if c8 then L2() else L3(vigns15);
    L1(dx15):
      c9 = `is.object`(dx15);
      if c9 then L5() else L6(dx15);
    L2():
      dr10 = tryDispatchBuiltin.1("$", vigns15);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(vigns17):
      r60 = `$`(vigns17, <sym engines>);
      goto L1(r60);
    L0(dx19):
      return dx19;
    L4():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx14);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx15);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx17):
      i8 = ld i;
      i9 = force? i8;
      __2 = ldf `[` in base;
      r61 = dyn __2(dx17, i9);
      goto L0(r61);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx18);
    };
    r63 = dyn vignetteEngine(p22);
    check L60() else D34();
  D34():
    deopt 113 [r63];
  L60():
    st engine = r63;
    tryCatch = ldf tryCatch;
    check L61() else D35();
  D35():
    deopt 116 [];
  L61():
    p27 = prom<V +>{
      engine = ld engine;
      engine1 = force? engine;
      checkMissing(engine1);
      c10 = `is.object`(engine1);
      if c10 then L1() else L2(engine1);
    L0(dx21):
      checkFun.0(dx21);
      dx22 = dx21 as cls;
      p23 = prom<V +>{
        file = ld file;
        file1 = force? file;
        checkMissing(file1);
        return file1;
      };
      p24 = prom<V +>{
        encoding1 = ld encoding;
        encoding2 = force? encoding1;
        checkMissing(encoding2);
        return encoding2;
      };
      dyn dx22[, quiet, encoding](p23, TRUE, p24);
      find_vignette_product = ldf find_vignette_product;
      p25 = prom<V +>{
        name = ld name;
        name1 = force? name;
        checkMissing(name1);
        return name1;
      };
      p26 = prom<V +>{
        engine4 = ld engine;
        engine5 = force? engine4;
        checkMissing(engine5);
        return engine5;
      };
      r70 = dyn find_vignette_product[, by, engine](p25, "tangle", p26);
      return r70;
    L1():
      dr14 = tryDispatchBuiltin.1("$", engine1);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(engine3):
      r64 = `$`(engine3, <sym tangle>);
      goto L0(r64);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx20);
    };
    p28 = prom<V +>{
      r72 = clos inner3708401697;
      return r72;
    };
    r74 = dyn tryCatch[, error](p27, p28);
    check L62() else D36();
  D36():
    deopt 120 [r74];
  L62():
    st output = r74;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L63() else L64();
  L8(r76):
    r78 = `==`(r76, 1);
    c11 = `as.logical`(r78);
    if c11 then L67() else L9();
  L63():
    output = ld output;
    check L65() else D37();
  L64():
    r75 = dyn base3(<sym output>);
    goto L8(r75);
  D37():
    deopt 124 [output];
  L9():
    goto L10();
  L10():
    cat2 = ldf cat;
    check L71() else D41();
  L65():
    output1 = force? output;
    checkMissing(output1);
    length2 = ldf length in base;
    r77 = dyn length2(output1);
    check L66() else D38();
  L67():
    tryCatch1 = ldf tryCatch;
    check L68() else D39();
  D38():
    deopt 127 [r77];
  D39():
    deopt 131 [];
  D41():
    deopt 139 [];
  L66():
    goto L8(r77);
  L68():
    p30 = prom<V +>{
      source = ldf source;
      p29 = prom<V +>{
        output2 = ld output;
        output3 = force? output2;
        checkMissing(output3);
        return output3;
      };
      r80 = dyn source[, echo](p29, TRUE);
      return r80;
    };
    p31 = prom<V +>{
      r82 = clos inner3708401697;
      return r82;
    };
    r84 = dyn tryCatch1[, error](p30, p31);
    check L69() else D40();
  L71():
    r86 = dyn cat2("\n *** Run successfully completed ***\n");
    check L72() else D42();
  D40():
    deopt 135 [r84];
  D42():
    deopt 141 [r86];
  L69():
    goto L10();
  L72():
    popenv;
    return r86;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg cat:cls, reg sQuote:cls, reg file:*, reg file1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg stop:cls, reg conditionMessage:cls, reg e1:*, reg e2:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V |
    mkenv;
    st e = e;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      sQuote = ldf sQuote;
      p = prom<V +>{
        file = ld file;
        file1 = force? file;
        checkMissing(file1);
        return file1;
      };
      r1 = dyn sQuote(p);
      return r1;
    };
    r3 = dyn cat[, , , sep]("\n  When tangling ", p1, ":\n", "");
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    stop = ldf stop;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p3 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p2 = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      r5 = dyn conditionMessage(p2);
      return r5;
    };
    r7 = dyn stop[, `call.`, domain](p3, FALSE, NA_LGL);
    check L3() else D3();
  D3():
    deopt 15 [r7];
  L3():
    popenv;
    return r7;
  }
}