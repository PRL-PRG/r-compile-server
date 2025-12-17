fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3078571953;
    st buildVignette = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3078571953(file, dir, weave, latex, tangle, quiet, clean, keep, engine, buildPkg, encoding, `...`) {
  (reg file:*, reg dir:*, reg weave:*, reg latex:*, reg tangle:*, reg quiet:*, reg clean:*, reg keep:*, reg engine:*, reg buildPkg:*, reg encoding:*, reg ddd:dots) -+> V { var file:*, var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, var weave:*, reg weave_isMissing:L, reg weave_orDefault:*, var latex:*, reg latex_isMissing:L, reg latex_orDefault:*, var tangle:*, reg tangle_isMissing:L, reg tangle_orDefault:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var clean:*, reg clean_isMissing:L, reg clean_orDefault:*, var keep:*, reg keep_isMissing:L, reg keep_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var engine:*, reg engine_isMissing:L, reg engine_orDefault:*, var buildPkg:*, reg buildPkg_isMissing:L, reg buildPkg_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg getVignetteEncoding:cls, reg file1:*, reg file2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), var `...`:dots?, reg file_test:cls, reg file3:*, reg file4:V, reg p3:p(V +), reg r6:V, reg r7:V, reg c:L, reg stop:cls, reg gettextf:cls, reg file5:*, reg file6:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg r11:V, reg dir_exists:cls, reg dir1:*, reg dir2:V, reg p6:p(V +), reg r14:V, reg r15:V, reg c1:L, reg stop1:cls, reg gettextf1:cls, reg dir3:*, reg dir4:V, reg p7:p(V +), reg r17:V, reg p8:p(V +), reg r19:V, reg sym:cls, reg base:cls, reg guard:L, reg r21:V, reg r22:V, reg buildPkg1:*, reg buildPkg2:V, reg c2:V, reg r23:V, reg c3:L, reg buildPkg3:*, reg buildPkg4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg suppressPackageStartupMessages:cls, reg loadNamespace:cls, reg pkg:*, reg pkg1:V, reg p9:p(V +), reg r25:V, reg p10:p(V +), reg r27:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg engine1:*, reg engine2:V, reg c5:V, reg c6:L, reg getVignetteEngine:cls, reg file7:*, reg file8:V, reg p11:p(V +), reg r31:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg engine3:*, reg engine4:V, reg c7:L, reg c8:L, reg vignetteEngine:cls, reg engine5:*, reg engine6:V, reg p12:p(V +), reg buildPkg5:*, reg buildPkg6:V, reg p13:p(V +), reg r37:V, reg sapply:cls, reg engine7:*, reg engine8:V, reg c9:L, reg engine10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r39:V, reg p14:p(V +), reg sub:*, reg sub1:V, reg p15:p(V +), reg file9:*, reg file10:V, reg p16:p(V +), reg r43:V, reg basename:cls, reg names:*, reg names1:V, reg c10:L, reg names3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg names4:*, reg names5:V, reg file11:*, reg file12:V, reg r44:V, reg __:cls, reg r45:V, reg c11:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r46:V, reg p17:p(V +), reg r48:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r49:V, reg r50:V, reg name:*, reg name1:V, reg is_na:cls, reg r51:V, reg c12:L, reg stop2:cls, reg gettextf2:cls, reg file13:*, reg file14:V, reg p18:p(V +), reg paste:cls, reg engine11:*, reg engine12:V, reg c13:L, reg engine14:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r53:V, reg p19:p(V +), reg engine15:*, reg engine16:V, reg c14:L, reg engine18:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r55:V, reg p20:p(V +), reg r57:V, reg p21:p(V +), reg r59:V, reg p22:p(V +), reg r61:V, reg encoding1:*, reg encoding2:V, reg r63:V, reg c15:L, reg stop3:cls, reg gettextf3:cls, reg name2:*, reg name3:V, reg p23:p(V +), reg r65:V, reg p24:p(V +), reg r67:V, reg file_path_as_absolute:cls, reg file15:*, reg file16:V, reg p25:p(V +), reg r70:V, reg setwd:cls, reg dir5:*, reg dir6:V, reg p26:p(V +), reg r72:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r73:V, reg r74:V, reg olddir:*, reg olddir1:V, reg c16:V, reg r75:V, reg c17:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r76:V, reg r77:V, reg on_exit:cls, reg r78:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r80:V, reg r81:V, reg clean1:*, reg clean2:V, reg is_na1:cls, reg r82:V, reg c18:L, reg c19:V, reg clean3:*, reg clean4:V, reg c21:L, reg c22:V, reg c24:L, reg list_files:cls, reg r83:V, reg getwd:cls, reg r85:V, reg weave1:*, reg weave2:V, reg c25:L, reg engine19:*, reg engine20:V, reg c26:L, reg engine22:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r86:V, reg dx14:cls, reg file17:*, reg file18:V, reg p27:p(V +), reg quiet1:*, reg quiet2:V, reg p28:p(V +), reg encoding3:*, reg encoding4:V, reg p29:p(V +), reg ddd1:dots?, reg r90:V, reg setwd1:cls, reg tdir:*, reg tdir1:V, reg p30:p(V +), reg r92:V, reg find_vignette_product:cls, reg name4:*, reg name5:V, reg p31:p(V +), reg engine23:*, reg engine24:V, reg p32:p(V +), reg r95:V, reg latex1:*, reg latex2:V, reg c27:L, reg c29:V, reg vignette_is_tex:cls, reg output:*, reg output1:V, reg p33:p(V +), reg r97:V, reg c30:L, reg c31:V, reg c33:L, reg texi2pdf:cls, reg output2:*, reg output3:V, reg p34:p(V +), reg quiet3:*, reg quiet4:V, reg p35:p(V +), reg r100:V, reg find_vignette_product1:cls, reg name6:*, reg name7:V, reg p36:p(V +), reg engine25:*, reg engine26:V, reg p37:p(V +), reg r103:V, reg r104:V, reg output4:*, reg output5:V, reg r105:V, reg tangle1:*, reg tangle2:V, reg c34:L, reg engine27:*, reg engine28:V, reg c35:L, reg engine30:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg r106:V, reg dx17:cls, reg file19:*, reg file20:V, reg p38:p(V +), reg quiet5:*, reg quiet6:V, reg p39:p(V +), reg encoding5:*, reg encoding6:V, reg p40:p(V +), reg ddd2:dots?, reg r110:V, reg setwd2:cls, reg tdir2:*, reg tdir3:V, reg p41:p(V +), reg r112:V, reg find_vignette_product2:cls, reg name8:*, reg name9:V, reg p42:p(V +), reg engine31:*, reg engine32:V, reg p43:p(V +), reg r115:V, reg r116:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r117:V, reg r118:V, reg sources:*, reg sources1:V, reg final:*, reg final1:V, reg keep1:*, reg keep2:V, reg c36:cls, reg r119:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r120:V, reg r121:V, reg clean5:*, reg clean6:V, reg is_na2:cls, reg r122:V, reg c37:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r123:V, reg r124:V, reg keep3:*, reg keep4:V, reg output6:*, reg output7:V, reg c38:cls, reg r125:V, reg clean7:*, reg clean8:V, reg c39:L, reg setdiff:cls, reg list_files1:cls, reg r127:V, reg p44:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r129:V, reg r130:V, reg keep5:*, reg keep6:V, reg origfiles:*, reg origfiles1:V, reg c40:cls, reg r131:V, reg p45:p(V +), reg r133:V, reg unlink:cls, reg f:*, reg f1:V, reg p46:p(V +), reg r135:V, reg unique:cls, reg keep7:*, reg keep8:V, reg p47:p(V +), reg r138:V |
    mkenv;
    st file = file;
    dir_isMissing = missing.0(dir);
    if dir_isMissing then L0(".") else L0(dir);
  L0(dir_orDefault):
    st dir = dir_orDefault;
    weave_isMissing = missing.0(weave);
    if weave_isMissing then L1(TRUE) else L1(weave);
  L1(weave_orDefault):
    st weave = weave_orDefault;
    latex_isMissing = missing.0(latex);
    if latex_isMissing then L2(TRUE) else L2(latex);
  L2(latex_orDefault):
    st latex = latex_orDefault;
    tangle_isMissing = missing.0(tangle);
    if tangle_isMissing then L3(TRUE) else L3(tangle);
  L3(tangle_orDefault):
    st tangle = tangle_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L4(TRUE) else L4(quiet);
  L4(quiet_orDefault):
    st quiet = quiet_orDefault;
    clean_isMissing = missing.0(clean);
    if clean_isMissing then L5(TRUE) else L5(clean);
  L5(clean_orDefault):
    st clean = clean_orDefault;
    keep_isMissing = missing.0(keep);
    if keep_isMissing then L6() else L7(keep);
  L6():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L7(p);
  L7(keep_orDefault):
    st keep = keep_orDefault;
    engine_isMissing = missing.0(engine);
    if engine_isMissing then L8(NULL) else L8(engine);
  L8(engine_orDefault):
    st engine = engine_orDefault;
    buildPkg_isMissing = missing.0(buildPkg);
    if buildPkg_isMissing then L9(NULL) else L9(buildPkg);
  L9(buildPkg_orDefault):
    st buildPkg = buildPkg_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L10() else L11(encoding);
  L10():
    p2 = prom<V +>{
      getVignetteEncoding = ldf getVignetteEncoding;
      p1 = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      r3 = dyn getVignetteEncoding(p1);
      return r3;
    };
    goto L11(p2);
  L11(encoding_orDefault):
    st encoding = encoding_orDefault;
    st `...` = ddd;
    file_test = ldf file_test;
    check L54() else D0();
  D0():
    deopt 1 [];
  L54():
    p3 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r6 = dyn file_test("-f", p3);
    check L55() else D1();
  D1():
    deopt 4 [r6];
  L55():
    r7 = `!`(r6);
    c = `as.logical`(r7);
    if c then L56() else L12();
  L12():
    goto L13();
  L13():
    dir_exists = ldf `dir.exists`;
    check L60() else D4();
  L56():
    stop = ldf stop;
    check L57() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 15 [];
  L57():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        file5 = ld file;
        file6 = force? file5;
        checkMissing(file6);
        return file6;
      };
      r9 = dyn gettextf("file '%s' not found", p4);
      return r9;
    };
    r11 = dyn stop[, domain](p5, NA_LGL);
    check L58() else D3();
  L60():
    p6 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r14 = dyn dir_exists(p6);
    check L61() else D5();
  D3():
    deopt 11 [r11];
  D5():
    deopt 17 [r14];
  L58():
    goto L13();
  L61():
    r15 = `!`(r14);
    c1 = `as.logical`(r15);
    if c1 then L62() else L14();
  L14():
    goto L15();
  L15():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L66() else L67();
  L62():
    stop1 = ldf stop;
    check L63() else D6();
  D6():
    deopt 20 [];
  L16(r22):
    r23 = `!`(r22);
    c3 = `as.logical`(r23);
    if c3 then L69() else L17();
  L63():
    p8 = prom<V +>{
      gettextf1 = ldf gettextf;
      p7 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r17 = dyn gettextf1("directory '%s' does not exist", p7);
      return r17;
    };
    r19 = dyn stop1[, domain](p8, NA_LGL);
    check L64() else D7();
  L66():
    buildPkg1 = ld buildPkg;
    check L68() else D8();
  L67():
    r21 = dyn base(<sym buildPkg>);
    goto L16(r21);
  D7():
    deopt 24 [r19];
  D8():
    deopt 28 [buildPkg1];
  L17():
    goto L20();
  L20():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L75() else L76();
  L64():
    goto L15();
  L68():
    buildPkg2 = force? buildPkg1;
    checkMissing(buildPkg2);
    c2 = `==`(buildPkg2, NULL);
    goto L16(c2);
  L69():
    buildPkg3 = ld buildPkg;
    check L70() else D9();
  D9():
    deopt 32 [buildPkg3];
  L21(r29):
    c6 = `as.logical`(r29);
    if c6 then L78() else L22();
  L70():
    buildPkg4 = force? buildPkg3;
    checkMissing(buildPkg4);
    s = toForSeq(buildPkg4);
    l = length(s);
    i = 0;
    goto L18(i);
  L75():
    engine1 = ld engine;
    check L77() else D12();
  L76():
    r28 = dyn base1(<sym engine>);
    goto L21(r28);
  D12():
    deopt 44 [engine1];
  L18(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L71() else L19();
  L22():
    goto L23();
  L23():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L82() else L83();
  L77():
    engine2 = force? engine1;
    checkMissing(engine2);
    c5 = `==`(engine2, NULL);
    goto L21(c5);
  L78():
    getVignetteEngine = ldf getVignetteEngine;
    check L79() else D13();
  D13():
    deopt 48 [];
  L19():
    x = `[[`(s, i2, NULL, TRUE);
    st pkg = x;
    suppressPackageStartupMessages = ldf suppressPackageStartupMessages;
    check L72() else D10();
  L24(r34):
    c8 = `as.logical`(r34);
    if c8 then L85() else L25();
  L71():
    goto L20();
  L79():
    p11 = prom<V +>{
      file7 = ld file;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    r31 = dyn getVignetteEngine(p11);
    check L80() else D14();
  L82():
    engine3 = ld engine;
    check L84() else D15();
  L83():
    r33 = dyn base2(<sym engine>);
    goto L24(r33);
  D10():
    deopt 35 [i2];
  D14():
    deopt 50 [r31];
  D15():
    deopt 55 [engine3];
  L25():
    goto L26();
  L26():
    sapply = ldf sapply;
    check L89() else D18();
  L72():
    p10 = prom<V +>{
      loadNamespace = ldf loadNamespace;
      p9 = prom<V +>{
        pkg = ld pkg;
        pkg1 = force? pkg;
        checkMissing(pkg1);
        return pkg1;
      };
      r25 = dyn loadNamespace(p9);
      return r25;
    };
    r27 = dyn suppressPackageStartupMessages(p10);
    check L73() else D11();
  L80():
    st engine = r31;
    goto L23();
  L84():
    engine4 = force? engine3;
    checkMissing(engine4);
    c7 = `is.character`(engine4);
    goto L24(c7);
  L85():
    vignetteEngine = ldf vignetteEngine;
    check L86() else D16();
  D11():
    deopt 37 [i2, r27];
  D16():
    deopt 59 [];
  D18():
    deopt 68 [];
  L73():
    goto L18(i2);
  L86():
    p12 = prom<V +>{
      engine5 = ld engine;
      engine6 = force? engine5;
      checkMissing(engine6);
      return engine6;
    };
    p13 = prom<V +>{
      buildPkg5 = ld buildPkg;
      buildPkg6 = force? buildPkg5;
      checkMissing(buildPkg6);
      return buildPkg6;
    };
    r37 = dyn vignetteEngine[, package](p12, p13);
    check L87() else D17();
  L89():
    p14 = prom<V +>{
      engine7 = ld engine;
      engine8 = force? engine7;
      checkMissing(engine8);
      c9 = `is.object`(engine8);
      if c9 then L1() else L2(engine8);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", engine8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(engine10):
      r39 = `$`(engine10, <sym pattern>);
      goto L0(r39);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p15 = prom<V +>{
      sub = ld sub;
      sub1 = force? sub;
      checkMissing(sub1);
      return sub1;
    };
    p16 = prom<V +>{
      file9 = ld file;
      file10 = force? file9;
      checkMissing(file10);
      return file10;
    };
    r43 = dyn sapply[, FUN, , ](p14, p15, "", p16);
    check L90() else D19();
  D17():
    deopt 63 [r37];
  D19():
    deopt 74 [r43];
  L87():
    st engine = r37;
    goto L26();
  L90():
    st names = r43;
    basename = ldf basename;
    check L91() else D20();
  D20():
    deopt 77 [];
  L91():
    p17 = prom<V +>{
      names = ld names;
      names1 = force? names;
      checkMissing(names1);
      c10 = `is.object`(names1);
      if c10 then L2() else L3(names1);
    L0(dx3):
      c11 = `is.object`(dx3);
      if c11 then L5() else L6(dx3);
    L2():
      dr2 = tryDispatchBuiltin.1("[", names1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(names3):
      names4 = ld names;
      names5 = force? names4;
      checkMissing(names5);
      file11 = ld file;
      file12 = force? file11;
      checkMissing(file12);
      r44 = `!=`(names5, file12);
      __ = ldf `[` in base;
      r45 = dyn __(names3, r44);
      goto L0(r45);
    L1(dx7):
      return dx7;
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      dr4 = tryDispatchBuiltin.1("[", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dx5):
      __1 = ldf `[` in base;
      r46 = dyn __1(dx5, 1);
      goto L1(r46);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx6);
    };
    r48 = dyn basename(p17);
    check L92() else D21();
  D21():
    deopt 79 [r48];
  L92():
    st name = r48;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L93() else L94();
  L27(r50):
    c12 = `as.logical`(r50);
    if c12 then L97() else L28();
  L93():
    name = ld name;
    check L95() else D22();
  L94():
    r49 = dyn base3(<sym name>);
    goto L27(r49);
  D22():
    deopt 83 [name];
  L28():
    goto L29();
  L29():
    encoding1 = ld encoding;
    check L101() else D26();
  L95():
    name1 = force? name;
    checkMissing(name1);
    is_na = ldf `is.na` in base;
    r51 = dyn is_na(name1);
    check L96() else D23();
  L97():
    stop2 = ldf stop;
    check L98() else D24();
  D23():
    deopt 86 [r51];
  D24():
    deopt 88 [];
  D26():
    deopt 95 [encoding1];
  L96():
    goto L27(r51);
  L98():
    p22 = prom<V +>{
      gettextf2 = ldf gettextf;
      p18 = prom<V +>{
        file13 = ld file;
        file14 = force? file13;
        checkMissing(file14);
        return file14;
      };
      p21 = prom<V +>{
        paste = ldf paste;
        p19 = prom<V +>{
          engine11 = ld engine;
          engine12 = force? engine11;
          checkMissing(engine12);
          c13 = `is.object`(engine12);
          if c13 then L1() else L2(engine12);
        L0(dx9):
          return dx9;
        L1():
          dr6 = tryDispatchBuiltin.1("$", engine12);
          dc3 = getTryDispatchBuiltinDispatched(dr6);
          if dc3 then L3() else L2(dr6);
        L2(engine14):
          r53 = `$`(engine14, <sym package>);
          goto L0(r53);
        L3():
          dx8 = getTryDispatchBuiltinValue(dr6);
          goto L0(dx8);
        };
        p20 = prom<V +>{
          engine15 = ld engine;
          engine16 = force? engine15;
          checkMissing(engine16);
          c14 = `is.object`(engine16);
          if c14 then L1() else L2(engine16);
        L0(dx11):
          return dx11;
        L1():
          dr8 = tryDispatchBuiltin.1("$", engine16);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L3() else L2(dr8);
        L2(engine18):
          r55 = `$`(engine18, <sym name>);
          goto L0(r55);
        L3():
          dx10 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx10);
        };
        r57 = dyn paste[, , sep](p19, p20, "::");
        return r57;
      };
      r59 = dyn gettextf2("vignette filename '%s' does not match any of the '%s' filename patterns", p18, p21);
      return r59;
    };
    r61 = dyn stop2[, domain](p22, NA_LGL);
    check L99() else D25();
  L101():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    r63 = `==`(encoding2, "non-ASCII");
    c15 = `as.logical`(r63);
    if c15 then L102() else L30();
  D25():
    deopt 92 [r61];
  L30():
    goto L31();
  L31():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L106() else D29();
  L99():
    goto L29();
  L102():
    stop3 = ldf stop;
    check L103() else D27();
  D27():
    deopt 100 [];
  D29():
    deopt 106 [];
  L103():
    p24 = prom<V +>{
      gettextf3 = ldf gettextf;
      p23 = prom<V +>{
        name2 = ld name;
        name3 = force? name2;
        checkMissing(name3);
        return name3;
      };
      r65 = dyn gettextf3("Vignette '%s' is non-ASCII but has no declared encoding", p23);
      return r65;
    };
    r67 = dyn stop3(p24);
    check L104() else D28();
  L106():
    p25 = prom<V +>{
      file15 = ld file;
      file16 = force? file15;
      checkMissing(file16);
      return file16;
    };
    r70 = dyn file_path_as_absolute(p25);
    check L107() else D30();
  D28():
    deopt 102 [r67];
  D30():
    deopt 108 [r70];
  L104():
    goto L31();
  L107():
    st file = r70;
    setwd = ldf setwd;
    check L108() else D31();
  D31():
    deopt 111 [];
  L108():
    p26 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r72 = dyn setwd(p26);
    check L109() else D32();
  D32():
    deopt 113 [r72];
  L109():
    st olddir = r72;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L110() else L111();
  L32(r74):
    r75 = `!`(r74);
    c17 = `as.logical`(r75);
    if c17 then L113() else L33();
  L110():
    olddir = ld olddir;
    check L112() else D33();
  L111():
    r73 = dyn base4(<sym olddir>);
    goto L32(r73);
  D33():
    deopt 116 [olddir];
  L33():
    goto L35();
  L35():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L117() else L118();
  L112():
    olddir1 = force? olddir;
    checkMissing(olddir1);
    c16 = `==`(olddir1, NULL);
    goto L32(c16);
  L113():
    sym5 = ldf `on.exit`;
    base5 = ldf `on.exit` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L114() else L115();
  L34(r77):
    goto L35();
  L36(r81):
    c18 = `as.logical`(r81);
    if c18 then L37(c18) else L121();
  L114():
    on_exit = ldf `on.exit` in base;
    r78 = dyn on_exit(<lang setwd(olddir)>);
    goto L34(r78);
  L115():
    r76 = dyn base5(<lang setwd(olddir)>);
    goto L34(r76);
  L117():
    clean1 = ld clean;
    check L119() else D34();
  L118():
    r80 = dyn base6(<sym clean>);
    goto L36(r80);
  D34():
    deopt 127 [clean1];
  L37(c19):
    c24 = `as.logical`(c19);
    if c24 then L124() else L38();
  L119():
    clean2 = force? clean1;
    checkMissing(clean2);
    is_na1 = ldf `is.na` in base;
    r82 = dyn is_na1(clean2);
    check L120() else D35();
  L121():
    clean3 = ld clean;
    check L122() else D36();
  D35():
    deopt 130 [r82];
  D36():
    deopt 131 [c18, clean3];
  L38():
    goto L39();
  L39():
    getwd = ldf getwd;
    check L128() else D39();
  L120():
    goto L36(r82);
  L122():
    clean4 = force? clean3;
    checkMissing(clean4);
    c21 = `as.logical`(clean4);
    c22 = `||`(c18, c21);
    goto L37(c22);
  L124():
    list_files = ldf `list.files`;
    check L125() else D37();
  D37():
    deopt 135 [];
  D39():
    deopt 143 [];
  L125():
    r83 = dyn list_files[`all.files`](TRUE);
    check L126() else D38();
  L128():
    r85 = dyn getwd();
    check L129() else D40();
  D38():
    deopt 138 [r83];
  D40():
    deopt 144 [r85];
  L126():
    st origfiles = r83;
    goto L39();
  L129():
    st tdir = r85;
    st output = NULL;
    weave1 = ld weave;
    check L130() else D41();
  D41():
    deopt 149 [weave1];
  L130():
    weave2 = force? weave1;
    checkMissing(weave2);
    c25 = `as.logical`(weave2);
    if c25 then L131() else L40();
  L40():
    goto L44(NULL);
  L44(r105):
    st final = r105;
    tangle1 = ld tangle;
    check L155() else D56();
  L131():
    engine19 = ld engine;
    check L132() else D42();
  D42():
    deopt 151 [engine19];
  D56():
    deopt 204 [tangle1];
  L132():
    engine20 = force? engine19;
    checkMissing(engine20);
    c26 = `is.object`(engine20);
    if c26 then L134() else L135(engine20);
  L155():
    tangle2 = force? tangle1;
    checkMissing(tangle2);
    c34 = `as.logical`(tangle2);
    if c34 then L156() else L45();
  L45():
    goto L46(NULL);
  L46(r116):
    st sources = r116;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L168() else L169();
  L133(dx13):
    checkFun.0(dx13);
    dx14 = dx13 as cls;
    p27 = prom<V +>{
      file17 = ld file;
      file18 = force? file17;
      checkMissing(file18);
      return file18;
    };
    p28 = prom<V +>{
      quiet1 = ld quiet;
      quiet2 = force? quiet1;
      checkMissing(quiet2);
      return quiet2;
    };
    p29 = prom<V +>{
      encoding3 = ld encoding;
      encoding4 = force? encoding3;
      checkMissing(encoding4);
      return encoding4;
    };
    ddd1 = ld `...`;
    r90 = dyn dx14[, quiet, encoding, `...`](p27, p28, p29, ddd1);
    check L137() else D43();
  L134():
    dr10 = tryDispatchBuiltin.1("$", engine20);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L136() else L135(dr10);
  L135(engine22):
    r86 = `$`(engine22, <sym weave>);
    goto L133(r86);
  L156():
    engine27 = ld engine;
    check L157() else D57();
  D43():
    deopt 161 [r90];
  D57():
    deopt 206 [engine27];
  L47(r118):
    st keep = r118;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L174() else L175();
  L136():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L133(dx12);
  L137():
    setwd1 = ldf setwd;
    check L138() else D44();
  L157():
    engine28 = force? engine27;
    checkMissing(engine28);
    c35 = `is.object`(engine28);
    if c35 then L159() else L160(engine28);
  L168():
    sources = ld sources;
    check L170() else D63();
  L169():
    r117 = dyn base7(<sym sources>, <sym final>, <sym keep>);
    goto L47(r117);
  D44():
    deopt 163 [];
  D63():
    deopt 236 [sources];
  L48(r121):
    c37 = `as.logical`(r121);
    if c37 then L178() else L49();
  L138():
    p30 = prom<V +>{
      tdir = ld tdir;
      tdir1 = force? tdir;
      checkMissing(tdir1);
      return tdir1;
    };
    r92 = dyn setwd1(p30);
    check L139() else D45();
  L158(dx16):
    checkFun.0(dx16);
    dx17 = dx16 as cls;
    p38 = prom<V +>{
      file19 = ld file;
      file20 = force? file19;
      checkMissing(file20);
      return file20;
    };
    p39 = prom<V +>{
      quiet5 = ld quiet;
      quiet6 = force? quiet5;
      checkMissing(quiet6);
      return quiet6;
    };
    p40 = prom<V +>{
      encoding5 = ld encoding;
      encoding6 = force? encoding5;
      checkMissing(encoding6);
      return encoding6;
    };
    ddd2 = ld `...`;
    r110 = dyn dx17[, quiet, encoding, `...`](p38, p39, p40, ddd2);
    check L162() else D58();
  L159():
    dr12 = tryDispatchBuiltin.1("$", engine28);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L161() else L160(dr12);
  L160(engine30):
    r106 = `$`(engine30, <sym tangle>);
    goto L158(r106);
  L170():
    sources1 = force? sources;
    checkMissing(sources1);
    final = ld final;
    check L171() else D64();
  L174():
    clean5 = ld clean;
    check L176() else D67();
  L175():
    r120 = dyn base8(<sym clean>);
    goto L48(r120);
  D45():
    deopt 165 [r92];
  D58():
    deopt 216 [r110];
  D64():
    deopt 238 [final];
  D67():
    deopt 247 [clean5];
  L49():
    goto L51();
  L51():
    clean7 = ld clean;
    check L185() else D72();
  L139():
    find_vignette_product = ldf find_vignette_product;
    check L140() else D46();
  L161():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L158(dx15);
  L162():
    setwd2 = ldf setwd;
    check L163() else D59();
  L171():
    final1 = force? final;
    checkMissing(final1);
    keep1 = ld keep;
    check L172() else D65();
  L176():
    clean6 = force? clean5;
    checkMissing(clean6);
    is_na2 = ldf `is.na` in base;
    r122 = dyn is_na2(clean6);
    check L177() else D68();
  L178():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L179() else L180();
  D46():
    deopt 167 [];
  D59():
    deopt 218 [];
  D65():
    deopt 240 [keep1];
  D68():
    deopt 250 [r122];
  D72():
    deopt 265 [clean7];
  L50(r124):
    st keep = r124;
    st clean = TRUE;
    goto L51();
  L140():
    p31 = prom<V +>{
      name4 = ld name;
      name5 = force? name4;
      checkMissing(name5);
      return name5;
    };
    p32 = prom<V +>{
      engine23 = ld engine;
      engine24 = force? engine23;
      checkMissing(engine24);
      return engine24;
    };
    r95 = dyn find_vignette_product[, by, engine](p31, "weave", p32);
    check L141() else D47();
  L163():
    p41 = prom<V +>{
      tdir2 = ld tdir;
      tdir3 = force? tdir2;
      checkMissing(tdir3);
      return tdir3;
    };
    r112 = dyn setwd2(p41);
    check L164() else D60();
  L172():
    keep2 = force? keep1;
    checkMissing(keep2);
    c36 = ldf c in base;
    r119 = dyn c36(sources1, final1, keep2);
    check L173() else D66();
  L177():
    goto L48(r122);
  L179():
    keep3 = ld keep;
    check L181() else D69();
  L180():
    r123 = dyn base9(<sym keep>, <sym output>);
    goto L50(r123);
  L185():
    clean8 = force? clean7;
    checkMissing(clean8);
    c39 = `as.logical`(clean8);
    if c39 then L186() else L52();
  D47():
    deopt 173 [r95];
  D60():
    deopt 220 [r112];
  D66():
    deopt 243 [r119];
  D69():
    deopt 253 [keep3];
  L52():
    goto L53();
  L53():
    unique = ldf unique;
    check L192() else D77();
  L141():
    st output = r95;
    latex1 = ld latex;
    check L142() else D48();
  L164():
    find_vignette_product2 = ldf find_vignette_product;
    check L165() else D61();
  L173():
    goto L47(r119);
  L181():
    keep4 = force? keep3;
    checkMissing(keep4);
    output6 = ld output;
    check L182() else D70();
  L186():
    setdiff = ldf setdiff;
    check L187() else D73();
  D48():
    deopt 175 [latex1];
  D61():
    deopt 222 [];
  D70():
    deopt 255 [output6];
  D73():
    deopt 268 [];
  D77():
    deopt 282 [];
  L142():
    latex2 = force? latex1;
    checkMissing(latex2);
    c27 = `as.logical`(latex2);
    if c27 then L143() else L41(c27);
  L165():
    p42 = prom<V +>{
      name8 = ld name;
      name9 = force? name8;
      checkMissing(name9);
      return name9;
    };
    p43 = prom<V +>{
      engine31 = ld engine;
      engine32 = force? engine31;
      checkMissing(engine32);
      return engine32;
    };
    r115 = dyn find_vignette_product2[, by, main, engine](p42, "tangle", FALSE, p43);
    check L166() else D62();
  L182():
    output7 = force? output6;
    checkMissing(output7);
    c38 = ldf c in base;
    r125 = dyn c38(keep4, output7);
    check L183() else D71();
  L187():
    p44 = prom<V +>{
      list_files1 = ldf `list.files`;
      r127 = dyn list_files1[`all.files`, `no..`](TRUE, TRUE);
      return r127;
    };
    p45 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r130):
      return r130;
    L1():
      keep5 = ld keep;
      keep6 = force? keep5;
      checkMissing(keep6);
      origfiles = ld origfiles;
      origfiles1 = force? origfiles;
      checkMissing(origfiles1);
      c40 = ldf c in base;
      r131 = dyn c40(keep6, origfiles1);
      goto L0(r131);
    L2():
      r129 = dyn base10(<sym keep>, <sym origfiles>);
      goto L0(r129);
    };
    r133 = dyn setdiff(p44, p45);
    check L188() else D74();
  L192():
    p47 = prom<V +>{
      keep7 = ld keep;
      keep8 = force? keep7;
      checkMissing(keep8);
      return keep8;
    };
    r138 = dyn unique(p47);
    check L193() else D78();
  D62():
    deopt 230 [r115];
  D71():
    deopt 258 [r125];
  D74():
    deopt 271 [r133];
  D78():
    deopt 284 [r138];
  L41(c29):
    c33 = `as.logical`(c29);
    if c33 then L147() else L42();
  L143():
    vignette_is_tex = ldf vignette_is_tex;
    check L144() else D49();
  L166():
    goto L46(r115);
  L183():
    goto L50(r125);
  L188():
    st f = r133;
    unlink = ldf unlink;
    check L189() else D75();
  L193():
    popenv;
    return r138;
  D49():
    deopt 178 [c27];
  D75():
    deopt 274 [];
  L42():
    output4 = ld output;
    check L153() else D55();
  L43(r104):
    goto L44(r104);
  L144():
    p33 = prom<V +>{
      output = ld output;
      output1 = force? output;
      checkMissing(output1);
      return output1;
    };
    r97 = dyn vignette_is_tex(p33);
    check L145() else D50();
  L147():
    texi2pdf = ldf texi2pdf;
    check L148() else D51();
  L189():
    p46 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r135 = dyn unlink[, recursive](p46, TRUE);
    check L190() else D76();
  D50():
    deopt 180 [c27, r97];
  D51():
    deopt 183 [];
  D55():
    deopt 199 [output4];
  D76():
    deopt 278 [r135];
  L145():
    c30 = `as.logical`(r97);
    c31 = `&&`(c27, c30);
    goto L41(c31);
  L148():
    p34 = prom<V +>{
      output2 = ld output;
      output3 = force? output2;
      checkMissing(output3);
      return output3;
    };
    p35 = prom<V +>{
      quiet3 = ld quiet;
      quiet4 = force? quiet3;
      checkMissing(quiet4);
      return quiet4;
    };
    r100 = dyn texi2pdf[file, clean, quiet](p34, FALSE, p35);
    check L149() else D52();
  L153():
    output5 = force? output4;
    checkMissing(output5);
    goto L43(output5);
  L190():
    goto L53();
  D52():
    deopt 190 [r100];
  L149():
    find_vignette_product1 = ldf find_vignette_product;
    check L150() else D53();
  D53():
    deopt 192 [];
  L150():
    p36 = prom<V +>{
      name6 = ld name;
      name7 = force? name6;
      checkMissing(name7);
      return name7;
    };
    p37 = prom<V +>{
      engine25 = ld engine;
      engine26 = force? engine25;
      checkMissing(engine26);
      return engine26;
    };
    r103 = dyn find_vignette_product1[, by, engine](p36, "texi2pdf", p37);
    check L151() else D54();
  D54():
    deopt 198 [r103];
  L151():
    goto L43(r103);
  }
}