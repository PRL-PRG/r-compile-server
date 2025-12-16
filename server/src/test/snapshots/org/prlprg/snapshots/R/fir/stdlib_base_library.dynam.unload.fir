fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1540339421`;
    st `library.dynam.unload` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1540339421`(chname, libpath, verbose, `file.ext`) {
  (reg chname:*, reg libpath:*, reg verbose:*, reg file_ext:*) -+> V { var chname:*, var libpath:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `file.ext`:*, reg file_ext_isMissing:L, reg file_ext_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p1:p(V +), reg _dynLibs:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg c6:L, reg r9:V, reg chname1:*, reg chname2:V, reg nchar:cls, reg r10:V, reg r11:V, reg c7:L, reg c8:V, reg c10:L, reg _Platform4:*, reg _Platform5:V, reg c11:L, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg r13:V, reg c12:L, reg stop:cls, reg r14:V, reg r15:V, reg stop1:cls, reg r16:V, reg normalizePath:cls, reg libpath1:*, reg libpath2:V, reg p2:p(V +), reg r19:V, reg paste0:cls, reg chname3:*, reg chname4:V, reg p3:p(V +), reg file_ext1:*, reg file_ext2:V, reg p4:p(V +), reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg _Platform8:*, reg _Platform9:V, reg c13:L, reg _Platform11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r25:V, reg nzchar:cls, reg r26:V, reg c14:L, reg file_path:cls, reg libpath3:*, reg libpath4:V, reg p5:p(V +), reg _Platform12:*, reg _Platform13:V, reg c15:L, reg _Platform15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r28:V, reg p6:p(V +), reg chname5:*, reg chname6:V, reg p7:p(V +), reg r31:V, reg r32:V, reg file_path1:cls, reg libpath5:*, reg libpath6:V, reg p8:p(V +), reg chname7:*, reg chname8:V, reg p9:p(V +), reg r35:V, reg which:cls, reg vapply:cls, reg dll_list:*, reg dll_list1:V, reg p10:p(V +), reg r37:cls, reg p11:p(V +), reg r39:V, reg p12:p(V +), reg r41:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r42:V, reg r43:V, reg pos:*, reg pos1:V, reg length:cls, reg r44:V, reg r45:V, reg c16:L, reg _Platform16:*, reg _Platform17:V, reg c17:L, reg _Platform19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r46:V, reg r47:V, reg c18:L, reg stop2:cls, reg gettextf:cls, reg sQuote:cls, reg chname9:*, reg chname10:V, reg p13:p(V +), reg r49:V, reg p14:p(V +), reg r51:V, reg p15:p(V +), reg r53:V, reg r54:V, reg stop3:cls, reg gettextf1:cls, reg sQuote1:cls, reg chname11:*, reg chname12:V, reg p16:p(V +), reg r56:V, reg p17:p(V +), reg r58:V, reg p18:p(V +), reg r60:V, reg file_exists:cls, reg file:*, reg file1:V, reg p19:p(V +), reg r63:V, reg r64:V, reg c19:L, reg _Platform20:*, reg _Platform21:V, reg c20:L, reg _Platform23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r65:V, reg r66:V, reg c21:L, reg stop4:cls, reg gettextf2:cls, reg sQuote2:cls, reg chname13:*, reg chname14:V, reg p20:p(V +), reg r68:V, reg p21:p(V +), reg r70:V, reg p22:p(V +), reg r72:V, reg r73:V, reg stop5:cls, reg gettextf3:cls, reg sQuote3:cls, reg chname15:*, reg chname16:V, reg p23:p(V +), reg r75:V, reg p24:p(V +), reg r77:V, reg p25:p(V +), reg r79:V, reg verbose1:*, reg verbose2:V, reg c22:L, reg message:cls, reg gettextf4:cls, reg file2:*, reg file3:V, reg p26:p(V +), reg r82:V, reg p27:p(V +), reg r84:V, reg dyn_unload:cls, reg file4:*, reg file5:V, reg p28:p(V +), reg r87:V, reg _dynLibs1:cls, reg dll_list2:*, reg dll_list3:V, reg c23:L, reg dll_list5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg pos2:*, reg pos3:V, reg r88:V, reg __:cls, reg r89:V, reg p29:p(V +), reg r91:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r92:V, reg r93:V, reg dll_list6:*, reg dll_list7:V, reg c24:L, reg dll_list9:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg pos4:*, reg pos5:V, reg __1:cls, reg r94:V, reg invisible:cls, reg r95:V |
    mkenv;
    st chname = chname;
    st libpath = libpath;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0() else L1(verbose);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("verbose");
      return r;
    };
    goto L1(p);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    file_ext_isMissing = missing.0(file_ext);
    if file_ext_isMissing then L2() else L3(file_ext);
  L2():
    p1 = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c = `is.object`(_Platform1);
      if c then L1() else L2(_Platform1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r2 = `$`(_Platform3, <sym dynlib.ext>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L3(p1);
  L3(file_ext_orDefault):
    st `file.ext` = file_ext_orDefault;
    _dynLibs = ldf `.dynLibs`;
    check L27() else D0();
  D0():
    deopt 1 [];
  L27():
    r4 = dyn _dynLibs();
    check L28() else D1();
  D1():
    deopt 2 [r4];
  L28():
    st dll_list = r4;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L4(r6):
    c1 = `as.logical`(r6);
    if c1 then L5(c1) else L31();
  L29():
    missing = ldf missing in base;
    r7 = dyn missing(<sym chname>);
    goto L4(r7);
  L30():
    r5 = dyn base(<sym chname>);
    goto L4(r5);
  L5(c2):
    c10 = `as.logical`(c2);
    if c10 then L37() else L7();
  L31():
    sym1 = ldf nchar;
    base1 = ldf nchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L6(c6, r9):
    r11 = `==`(r9, 0);
    c7 = `as.logical`(r11);
    c8 = `||`(c6, c7);
    goto L5(c8);
  L7():
    goto L10();
  L10():
    normalizePath = ldf normalizePath;
    check L50() else D9();
  L32():
    chname1 = ld chname;
    check L34() else D2();
  L33():
    r8 = dyn base1(<sym chname>, "c");
    goto L6(c1, r8);
  L37():
    _Platform4 = ld `.Platform`;
    check L38() else D4();
  D2():
    deopt 9 [c1, chname1];
  D4():
    deopt 19 [_Platform4];
  D9():
    deopt 35 [];
  L34():
    chname2 = force? chname1;
    checkMissing(chname2);
    nchar = ldf nchar in base;
    r10 = dyn nchar(chname2, "c", FALSE, NA_LGL);
    check L35() else D3();
  L38():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c11 = `is.object`(_Platform5);
    if c11 then L40() else L41(_Platform5);
  L50():
    p2 = prom<V +>{
      libpath1 = ld libpath;
      libpath2 = force? libpath1;
      checkMissing(libpath2);
      return libpath2;
    };
    r19 = dyn normalizePath(p2, "/", TRUE);
    check L51() else D10();
  D3():
    deopt 15 [c1, r10];
  D10():
    deopt 39 [r19];
  L35():
    goto L6(c1, r10);
  L39(dx3):
    r13 = `==`(dx3, "windows");
    c12 = `as.logical`(r13);
    if c12 then L43() else L8();
  L40():
    dr2 = tryDispatchBuiltin.1("$", _Platform5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(dr2);
  L41(_Platform7):
    r12 = `$`(_Platform7, <sym OS.type>);
    goto L39(r12);
  L51():
    st libpath = r19;
    paste0 = ldf paste0;
    check L52() else D11();
  D11():
    deopt 42 [];
  L8():
    stop1 = ldf stop;
    check L47() else D7();
  L9(r15):
    goto L10();
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L39(dx2);
  L43():
    stop = ldf stop;
    check L44() else D5();
  L52():
    p3 = prom<V +>{
      chname3 = ld chname;
      chname4 = force? chname3;
      checkMissing(chname4);
      return chname4;
    };
    p4 = prom<V +>{
      file_ext1 = ld `file.ext`;
      file_ext2 = force? file_ext1;
      checkMissing(file_ext2);
      return file_ext2;
    };
    r22 = dyn paste0(p3, p4);
    check L53() else D12();
  D5():
    deopt 25 [];
  D7():
    deopt 29 [];
  D12():
    deopt 45 [r22];
  L44():
    r14 = dyn stop("no DLL was specified");
    check L45() else D6();
  L47():
    r16 = dyn stop1("no shared object was specified");
    check L48() else D8();
  L53():
    st chname1 = r22;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  D6():
    deopt 27 [r14];
  D8():
    deopt 31 [r16];
  L11(r24):
    c14 = `as.logical`(r24);
    if c14 then L62() else L12();
  L45():
    goto L9(r14);
  L48():
    goto L9(r16);
  L54():
    _Platform8 = ld `.Platform`;
    check L56() else D13();
  L55():
    r23 = dyn base2(<lang `$`(.Platform, r_arch)>);
    goto L11(r23);
  D13():
    deopt 49 [_Platform8];
  L12():
    file_path1 = ldf `file.path`;
    check L66() else D17();
  L13(r32):
    st file = r32;
    which = ldf which;
    check L68() else D19();
  L56():
    _Platform9 = force? _Platform8;
    checkMissing(_Platform9);
    c13 = `is.object`(_Platform9);
    if c13 then L58() else L59(_Platform9);
  L62():
    file_path = ldf `file.path`;
    check L63() else D15();
  D15():
    deopt 55 [];
  D17():
    deopt 62 [];
  D19():
    deopt 69 [];
  L57(dx5):
    nzchar = ldf nzchar in base;
    r26 = dyn nzchar(dx5);
    check L61() else D14();
  L58():
    dr4 = tryDispatchBuiltin.1("$", _Platform9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L60() else L59(dr4);
  L59(_Platform11):
    r25 = `$`(_Platform11, <sym r_arch>);
    goto L57(r25);
  L63():
    p5 = prom<V +>{
      libpath3 = ld libpath;
      libpath4 = force? libpath3;
      checkMissing(libpath4);
      return libpath4;
    };
    p6 = prom<V +>{
      _Platform12 = ld `.Platform`;
      _Platform13 = force? _Platform12;
      checkMissing(_Platform13);
      c15 = `is.object`(_Platform13);
      if c15 then L1() else L2(_Platform13);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", _Platform13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(_Platform15):
      r28 = `$`(_Platform15, <sym r_arch>);
      goto L0(r28);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p7 = prom<V +>{
      chname5 = ld chname1;
      chname6 = force? chname5;
      checkMissing(chname6);
      return chname6;
    };
    r31 = dyn file_path(p5, "libs", p6, p7);
    check L64() else D16();
  L66():
    p8 = prom<V +>{
      libpath5 = ld libpath;
      libpath6 = force? libpath5;
      checkMissing(libpath6);
      return libpath6;
    };
    p9 = prom<V +>{
      chname7 = ld chname1;
      chname8 = force? chname7;
      checkMissing(chname8);
      return chname8;
    };
    r35 = dyn file_path1(p8, "libs", p9);
    check L67() else D18();
  L68():
    p12 = prom<V +>{
      vapply = ldf vapply;
      p10 = prom<V +>{
        dll_list = ld dll_list;
        dll_list1 = force? dll_list;
        checkMissing(dll_list1);
        return dll_list1;
      };
      p11 = prom<V +>{
        r37 = clos inner354062069;
        return r37;
      };
      r39 = dyn vapply(p10, p11, NA_LGL);
      return r39;
    };
    r41 = dyn which(p12);
    check L69() else D20();
  D14():
    deopt 53 [r26];
  D16():
    deopt 60 [r31];
  D18():
    deopt 66 [r35];
  D20():
    deopt 71 [r41];
  L60():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L57(dx4);
  L61():
    goto L11(r26);
  L64():
    goto L13(r31);
  L67():
    goto L13(r35);
  L69():
    st pos = r41;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L70() else L71();
  L14(r43):
    r45 = `!`(r43);
    c16 = `as.logical`(r45);
    if c16 then L74() else L15();
  L70():
    pos = ld pos;
    check L72() else D21();
  L71():
    r42 = dyn base3(<sym pos>);
    goto L14(r42);
  D21():
    deopt 75 [pos];
  L15():
    goto L18();
  L18():
    file_exists = ldf `file.exists`;
    check L87() else D28();
  L72():
    pos1 = force? pos;
    checkMissing(pos1);
    length = ldf length in base;
    r44 = dyn length(pos1);
    check L73() else D22();
  L74():
    _Platform16 = ld `.Platform`;
    check L75() else D23();
  D22():
    deopt 78 [r44];
  D23():
    deopt 80 [_Platform16];
  D28():
    deopt 100 [];
  L73():
    goto L14(r44);
  L75():
    _Platform17 = force? _Platform16;
    checkMissing(_Platform17);
    c17 = `is.object`(_Platform17);
    if c17 then L77() else L78(_Platform17);
  L87():
    p19 = prom<V +>{
      file = ld file;
      file1 = force? file;
      checkMissing(file1);
      return file1;
    };
    r63 = dyn file_exists(p19);
    check L88() else D29();
  D29():
    deopt 102 [r63];
  L76(dx9):
    r47 = `==`(dx9, "windows");
    c18 = `as.logical`(r47);
    if c18 then L80() else L16();
  L77():
    dr8 = tryDispatchBuiltin.1("$", _Platform17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L79() else L78(dr8);
  L78(_Platform19):
    r46 = `$`(_Platform19, <sym OS.type>);
    goto L76(r46);
  L88():
    r64 = `!`(r63);
    c19 = `as.logical`(r64);
    if c19 then L89() else L19();
  L16():
    stop3 = ldf stop;
    check L84() else D26();
  L17(r54):
    goto L18();
  L19():
    goto L22();
  L22():
    verbose1 = ld verbose;
    check L102() else D35();
  L79():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L76(dx8);
  L80():
    stop2 = ldf stop;
    check L81() else D24();
  L89():
    _Platform20 = ld `.Platform`;
    check L90() else D30();
  D24():
    deopt 86 [];
  D26():
    deopt 92 [];
  D30():
    deopt 104 [_Platform20];
  D35():
    deopt 123 [verbose1];
  L81():
    p15 = prom<V +>{
      gettextf = ldf gettextf;
      p14 = prom<V +>{
        sQuote = ldf sQuote;
        p13 = prom<V +>{
          chname9 = ld chname1;
          chname10 = force? chname9;
          checkMissing(chname10);
          return chname10;
        };
        r49 = dyn sQuote(p13);
        return r49;
      };
      r51 = dyn gettextf("DLL %s was not loaded", p14);
      return r51;
    };
    r53 = dyn stop2[, domain](p15, NA_LGL);
    check L82() else D25();
  L84():
    p18 = prom<V +>{
      gettextf1 = ldf gettextf;
      p17 = prom<V +>{
        sQuote1 = ldf sQuote;
        p16 = prom<V +>{
          chname11 = ld chname1;
          chname12 = force? chname11;
          checkMissing(chname12);
          return chname12;
        };
        r56 = dyn sQuote1(p16);
        return r56;
      };
      r58 = dyn gettextf1("shared object %s was not loaded", p17);
      return r58;
    };
    r60 = dyn stop3[, domain](p18, NA_LGL);
    check L85() else D27();
  L90():
    _Platform21 = force? _Platform20;
    checkMissing(_Platform21);
    c20 = `is.object`(_Platform21);
    if c20 then L92() else L93(_Platform21);
  L102():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c22 = `as.logical`(verbose2);
    if c22 then L103() else L23();
  D25():
    deopt 90 [r53];
  D27():
    deopt 96 [r60];
  L23():
    goto L24();
  L24():
    dyn_unload = ldf `dyn.unload`;
    check L107() else D38();
  L82():
    goto L17(r53);
  L85():
    goto L17(r60);
  L91(dx11):
    r66 = `==`(dx11, "windows");
    c21 = `as.logical`(r66);
    if c21 then L95() else L20();
  L92():
    dr10 = tryDispatchBuiltin.1("$", _Platform21);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L94() else L93(dr10);
  L93(_Platform23):
    r65 = `$`(_Platform23, <sym OS.type>);
    goto L91(r65);
  L103():
    message = ldf message;
    check L104() else D36();
  D36():
    deopt 126 [];
  D38():
    deopt 134 [];
  L20():
    stop5 = ldf stop;
    check L99() else D33();
  L21(r73):
    goto L22();
  L94():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L91(dx10);
  L95():
    stop4 = ldf stop;
    check L96() else D31();
  L104():
    p27 = prom<V +>{
      gettextf4 = ldf gettextf;
      p26 = prom<V +>{
        file2 = ld file;
        file3 = force? file2;
        checkMissing(file3);
        return file3;
      };
      r82 = dyn gettextf4("now dyn.unload(\"%s\") ...", p26);
      return r82;
    };
    r84 = dyn message[, domain](p27, NA_LGL);
    check L105() else D37();
  L107():
    p28 = prom<V +>{
      file4 = ld file;
      file5 = force? file4;
      checkMissing(file5);
      return file5;
    };
    r87 = dyn dyn_unload(p28);
    check L108() else D39();
  D31():
    deopt 110 [];
  D33():
    deopt 116 [];
  D37():
    deopt 130 [r84];
  D39():
    deopt 136 [r87];
  L96():
    p22 = prom<V +>{
      gettextf2 = ldf gettextf;
      p21 = prom<V +>{
        sQuote2 = ldf sQuote;
        p20 = prom<V +>{
          chname13 = ld chname1;
          chname14 = force? chname13;
          checkMissing(chname14);
          return chname14;
        };
        r68 = dyn sQuote2(p20);
        return r68;
      };
      r70 = dyn gettextf2("DLL %s not found", p21);
      return r70;
    };
    r72 = dyn stop4[, domain](p22, NA_LGL);
    check L97() else D32();
  L99():
    p25 = prom<V +>{
      gettextf3 = ldf gettextf;
      p24 = prom<V +>{
        sQuote3 = ldf sQuote;
        p23 = prom<V +>{
          chname15 = ld chname1;
          chname16 = force? chname15;
          checkMissing(chname16);
          return chname16;
        };
        r75 = dyn sQuote3(p23);
        return r75;
      };
      r77 = dyn gettextf3("shared object '%s' not found", p24);
      return r77;
    };
    r79 = dyn stop5[, domain](p25, NA_LGL);
    check L100() else D34();
  L105():
    goto L24();
  L108():
    _dynLibs1 = ldf `.dynLibs`;
    check L109() else D40();
  D32():
    deopt 114 [r72];
  D34():
    deopt 120 [r79];
  D40():
    deopt 138 [];
  L97():
    goto L21(r72);
  L100():
    goto L21(r79);
  L109():
    p29 = prom<V +>{
      dll_list2 = ld dll_list;
      dll_list3 = force? dll_list2;
      checkMissing(dll_list3);
      c23 = `is.object`(dll_list3);
      if c23 then L1() else L2(dll_list3);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", dll_list3);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(dll_list5):
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      r88 = `-`(<missing>, pos3);
      __ = ldf `[` in base;
      r89 = dyn __(dll_list5, r88);
      goto L0(r89);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r91 = dyn _dynLibs1(p29);
    check L110() else D41();
  D41():
    deopt 140 [r91];
  L110():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L111() else L112();
  L25(r93):
    popenv;
    return r93;
  L111():
    dll_list6 = ld dll_list;
    check L113() else D42();
  L112():
    r92 = dyn base4(<lang `[[`(dll_list, pos)>);
    goto L25(r92);
  D42():
    deopt 143 [dll_list6];
  L113():
    dll_list7 = force? dll_list6;
    checkMissing(dll_list7);
    c24 = `is.object`(dll_list7);
    if c24 then L114() else L115(dll_list7);
  L26(dx15):
    invisible = ldf invisible in base;
    r95 = dyn invisible(dx15);
    check L118() else D44();
  L114():
    dr14 = tryDispatchBuiltin.1("[[", dll_list7);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L116() else L115(dr14);
  L115(dll_list9):
    pos4 = ld pos;
    check L117() else D43();
  D43():
    deopt 145 [dll_list9, pos4];
  D44():
    deopt 149 [r95];
  L116():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L26(dx14);
  L117():
    pos5 = force? pos4;
    __1 = ldf `[[` in base;
    r94 = dyn __1(dll_list9, pos5);
    goto L26(r94);
  L118():
    goto L25(r95);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg file:*, reg file1:V, reg r1:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x1];
  L1():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L2() else L3(x2);
  L0(dx1):
    file = ld file;
    check L5() else D1();
  L2():
    dr = tryDispatchBuiltin.1("[[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    __ = ldf `[[` in base;
    r = dyn __(x4, "path");
    goto L0(r);
  D1():
    deopt 4 [dx1, file];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    file1 = force? file;
    checkMissing(file1);
    r1 = `==`(dx1, file1);
    popenv;
    return r1;
  }
}