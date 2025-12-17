fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3167199635;
    st `library.dynam` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3167199635(chname, package, `lib.loc`, verbose, `file.ext`, `...`) {
  (reg chname:*, reg package:*, reg lib_loc:*, reg verbose:*, reg file_ext:*, reg ddd:dots) -+> V { var chname:*, var package:*, var `lib.loc`:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `file.ext`:*, reg file_ext_isMissing:L, reg file_ext_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p1:p(V +), var `...`:dots?, reg _dynLibs:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg c6:L, reg r9:V, reg chname1:*, reg chname2:V, reg nzchar:cls, reg r10:V, reg r11:V, reg c7:L, reg c8:V, reg c10:L, reg dll_list:*, reg dll_list1:V, reg package1:*, reg package2:V, reg lib_loc1:*, reg lib_loc2:V, reg _Platform4:*, reg _Platform5:V, reg c11:L, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r14:V, reg paste0:cls, reg chname3:*, reg chname4:V, reg p2:p(V +), reg file_ext1:*, reg file_ext2:V, reg p3:p(V +), reg r17:V, reg find_package:cls, reg package3:*, reg package4:V, reg p4:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p5:p(V +), reg verbose1:*, reg verbose2:V, reg p6:p(V +), reg r21:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c12:L, reg x:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg i7:I, reg r23:V, reg r_arch:*, reg r_arch1:V, reg nzchar1:cls, reg r24:V, reg c13:L, reg file_path:cls, reg pkg:*, reg pkg1:V, reg p7:p(V +), reg r_arch2:*, reg r_arch3:V, reg p8:p(V +), reg r27:V, reg i10:I, reg r28:V, reg file_path1:cls, reg pkg2:*, reg pkg3:V, reg p9:p(V +), reg r30:V, reg file_path2:cls, reg DLLpath:*, reg DLLpath1:V, reg p10:p(V +), reg chname5:*, reg chname6:V, reg p11:p(V +), reg r33:V, reg file_exists:cls, reg file:*, reg file1:V, reg p12:p(V +), reg r35:V, reg c14:L, reg file2:*, reg file3:V, reg r37:V, reg c15:L, reg _Platform8:*, reg _Platform9:V, reg c16:L, reg _Platform11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r38:V, reg r39:V, reg c17:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg chname7:*, reg chname8:V, reg p13:p(V +), reg r41:V, reg p14:p(V +), reg r43:V, reg p15:p(V +), reg r45:V, reg r46:V, reg stop1:cls, reg gettextf1:cls, reg sQuote1:cls, reg chname9:*, reg chname10:V, reg p16:p(V +), reg r48:V, reg p17:p(V +), reg r50:V, reg p18:p(V +), reg r52:V, reg file_path3:cls, reg normalizePath:cls, reg DLLpath2:*, reg DLLpath3:V, reg p19:p(V +), reg r55:V, reg p20:p(V +), reg chname11:*, reg chname12:V, reg p21:p(V +), reg r58:V, reg vapply:cls, reg dll_list2:*, reg dll_list3:V, reg p22:p(V +), reg r60:cls, reg p23:p(V +), reg r62:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r63:V, reg r64:V, reg ind:*, reg ind1:V, reg length:cls, reg r65:V, reg c18:L, reg c20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r66:V, reg c23:L, reg r67:V, reg ind2:*, reg ind3:V, reg any:cls, reg r68:V, reg c24:L, reg c25:V, reg c27:L, reg verbose3:*, reg verbose4:V, reg c28:L, reg _Platform12:*, reg _Platform13:V, reg c29:L, reg _Platform15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r69:V, reg r70:V, reg c30:L, reg message:cls, reg gettextf2:cls, reg sQuote2:cls, reg chname13:*, reg chname14:V, reg p24:p(V +), reg r72:V, reg p25:p(V +), reg r74:V, reg p26:p(V +), reg r76:V, reg r77:V, reg message1:cls, reg gettextf3:cls, reg sQuote3:cls, reg chname15:*, reg chname16:V, reg p27:p(V +), reg r79:V, reg p28:p(V +), reg r81:V, reg p29:p(V +), reg r83:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r85:V, reg r86:V, reg dll_list4:*, reg dll_list5:V, reg c31:L, reg dll_list7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r87:V, reg dll_list10:V, reg r88:V, reg dll_list11:*, reg dll_list12:V, reg r89:I, reg c32:L, reg dll_list14:V, reg r91:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dll_list16:V, reg dx11:V, reg ind4:*, reg ind5:V, reg __:cls, reg r92:V, reg __1:cls, reg r93:V, reg invisible:cls, reg r94:V, reg _Platform16:*, reg _Platform17:V, reg c33:L, reg _Platform19:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r97:V, reg r98:V, reg c34:L, reg Sys_getenv:cls, reg r99:V, reg Sys_setenv:cls, reg paste1:cls, reg gsub:cls, reg DLLpath4:*, reg DLLpath5:V, reg p30:p(V +), reg r101:V, reg p31:p(V +), reg PATH:*, reg PATH1:V, reg p32:p(V +), reg r104:V, reg p33:p(V +), reg r106:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r107:V, reg r108:V, reg on_exit:cls, reg r109:V, reg verbose5:*, reg verbose6:V, reg c35:L, reg message2:cls, reg gettextf4:cls, reg file4:*, reg file5:V, reg p34:p(V +), reg r112:V, reg p35:p(V +), reg r114:V, reg _in_:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r116:V, reg r117:V, reg ___names:cls, reg r118:V, reg p36:p(V +), reg r120:V, reg c36:L, reg dyn_load:cls, reg file6:*, reg file7:V, reg p37:p(V +), reg ddd1:dots?, reg r122:V, reg r123:V, reg dyn_load1:cls, reg file8:*, reg file9:V, reg p38:p(V +), reg DLLpath6:*, reg DLLpath7:V, reg p39:p(V +), reg ddd2:dots?, reg r126:V, reg _dynLibs1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r127:V, reg r128:V, reg dll_list17:*, reg dll_list18:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r129:V, reg r130:V, reg dll:*, reg dll1:V, reg list:cls, reg r131:V, reg c37:cls, reg r132:V, reg p40:p(V +), reg r134:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r135:V, reg r136:V, reg dll2:*, reg dll3:V, reg invisible1:cls, reg r137:V |
    mkenv;
    st chname = chname;
    st package = package;
    st `lib.loc` = lib_loc;
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
    st `...` = ddd;
    _dynLibs = ldf `.dynLibs`;
    check L42() else D0();
  D0():
    deopt 1 [];
  L42():
    r4 = dyn _dynLibs();
    check L43() else D1();
  D1():
    deopt 2 [r4];
  L43():
    st dll_list = r4;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L44() else L45();
  L4(r6):
    c1 = `as.logical`(r6);
    if c1 then L5(c1) else L46();
  L44():
    missing = ldf missing in base;
    r7 = dyn missing(<sym chname>);
    goto L4(r7);
  L45():
    r5 = dyn base(<sym chname>);
    goto L4(r5);
  L5(c2):
    c10 = `as.logical`(c2);
    if c10 then L52() else L7();
  L46():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L6(c6, r9):
    r11 = `!`(r9);
    c7 = `as.logical`(r11);
    c8 = `||`(c6, c7);
    goto L5(c8);
  L7():
    package1 = ld package;
    check L56() else D5();
  L47():
    chname1 = ld chname;
    check L49() else D2();
  L48():
    r8 = dyn base1(<sym chname>);
    goto L6(c1, r8);
  L52():
    dll_list = ld dll_list;
    check L53() else D4();
  D2():
    deopt 9 [c1, chname1];
  D4():
    deopt 15 [dll_list];
  D5():
    deopt 20 [package1];
  L49():
    chname2 = force? chname1;
    checkMissing(chname2);
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(chname2);
    check L50() else D3();
  L53():
    dll_list1 = force? dll_list;
    checkMissing(dll_list1);
    popenv;
    return dll_list1;
  L56():
    package2 = force? package1;
    checkMissing(package2);
    lib_loc1 = ld `lib.loc`;
    check L57() else D6();
  D3():
    deopt 12 [c1, r10];
  D6():
    deopt 22 [lib_loc1];
  L50():
    goto L6(c1, r10);
  L57():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    _Platform4 = ld `.Platform`;
    check L58() else D7();
  D7():
    deopt 24 [_Platform4];
  L58():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c11 = `is.object`(_Platform5);
    if c11 then L60() else L61(_Platform5);
  L59(dx3):
    st r_arch = dx3;
    paste0 = ldf paste0;
    check L63() else D8();
  L60():
    dr2 = tryDispatchBuiltin.1("$", _Platform5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L62() else L61(dr2);
  L61(_Platform7):
    r14 = `$`(_Platform7, <sym r_arch>);
    goto L59(r14);
  D8():
    deopt 29 [];
  L62():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L59(dx2);
  L63():
    p2 = prom<V +>{
      chname3 = ld chname;
      chname4 = force? chname3;
      checkMissing(chname4);
      return chname4;
    };
    p3 = prom<V +>{
      file_ext1 = ld `file.ext`;
      file_ext2 = force? file_ext1;
      checkMissing(file_ext2);
      return file_ext2;
    };
    r17 = dyn paste0(p2, p3);
    check L64() else D9();
  D9():
    deopt 32 [r17];
  L64():
    st chname1 = r17;
    find_package = ldf `find.package`;
    check L65() else D10();
  D10():
    deopt 35 [];
  L65():
    p4 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p5 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    p6 = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    r21 = dyn find_package[, , verbose](p4, p5, p6);
    check L66() else D11();
  D11():
    deopt 40 [r21];
  L66():
    s = toForSeq(r21);
    l = length(s);
    i = 0;
    goto L9(i);
  L9(i1):
    i2 = `+`.1(i1, 1);
    c12 = `<`.1(l, i2);
    if c12 then L67() else L16();
  L14():
    file2 = ld file;
    check L85() else D22();
  L16():
    x = `[[`(s, i2, NULL, TRUE);
    st pkg = x;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  L67():
    goto L14();
  D22():
    deopt 77 [file2];
  L10(i7, r23):
    c13 = `as.logical`(r23);
    if c13 then L72() else L11();
  L68():
    r_arch = ld r_arch;
    check L70() else D12();
  L69():
    r22 = dyn base2(<sym r_arch>);
    goto L10(i2, r22);
  L85():
    file3 = force? file2;
    checkMissing(file3);
    r37 = `==`(file3, "");
    c15 = `as.logical`(r37);
    if c15 then L86() else L17();
  D12():
    deopt 43 [i2, r_arch];
  L11():
    file_path1 = ldf `file.path`;
    check L76() else D16();
  L12(i10, r28):
    st DLLpath = r28;
    file_path2 = ldf `file.path`;
    check L78() else D18();
  L17():
    goto L20();
  L20():
    file_path3 = ldf `file.path`;
    check L99() else D28();
  L70():
    r_arch1 = force? r_arch;
    checkMissing(r_arch1);
    nzchar1 = ldf nzchar in base;
    r24 = dyn nzchar1(r_arch1);
    check L71() else D13();
  L72():
    file_path = ldf `file.path`;
    check L73() else D14();
  L86():
    _Platform8 = ld `.Platform`;
    check L87() else D23();
  D13():
    deopt 46 [i2, r24];
  D14():
    deopt 48 [i7];
  D16():
    deopt 54 [i7];
  D18():
    deopt 60 [i10];
  D23():
    deopt 81 [_Platform8];
  D28():
    deopt 101 [];
  L71():
    goto L10(i2, r24);
  L73():
    p7 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    p8 = prom<V +>{
      r_arch2 = ld r_arch;
      r_arch3 = force? r_arch2;
      checkMissing(r_arch3);
      return r_arch3;
    };
    r27 = dyn file_path(p7, "libs", p8);
    check L74() else D15();
  L76():
    p9 = prom<V +>{
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      return pkg3;
    };
    r30 = dyn file_path1(p9, "libs");
    check L77() else D17();
  L78():
    p10 = prom<V +>{
      DLLpath = ld DLLpath;
      DLLpath1 = force? DLLpath;
      checkMissing(DLLpath1);
      return DLLpath1;
    };
    p11 = prom<V +>{
      chname5 = ld chname1;
      chname6 = force? chname5;
      checkMissing(chname6);
      return chname6;
    };
    r33 = dyn file_path2(p10, p11);
    check L79() else D19();
  L87():
    _Platform9 = force? _Platform8;
    checkMissing(_Platform9);
    c16 = `is.object`(_Platform9);
    if c16 then L89() else L90(_Platform9);
  L99():
    p20 = prom<V +>{
      normalizePath = ldf normalizePath;
      p19 = prom<V +>{
        DLLpath2 = ld DLLpath;
        DLLpath3 = force? DLLpath2;
        checkMissing(DLLpath3);
        return DLLpath3;
      };
      r55 = dyn normalizePath(p19, "/", TRUE);
      return r55;
    };
    p21 = prom<V +>{
      chname11 = ld chname1;
      chname12 = force? chname11;
      checkMissing(chname12);
      return chname12;
    };
    r58 = dyn file_path3(p20, p21);
    check L100() else D29();
  D15():
    deopt 52 [i7, r27];
  D17():
    deopt 57 [i7, r30];
  D19():
    deopt 63 [i10, r33];
  D29():
    deopt 104 [r58];
  L74():
    goto L12(i7, r27);
  L77():
    goto L12(i7, r30);
  L79():
    st file = r33;
    file_exists = ldf `file.exists`;
    check L80() else D20();
  L88(dx5):
    r39 = `==`(dx5, "windows");
    c17 = `as.logical`(r39);
    if c17 then L92() else L18();
  L89():
    dr4 = tryDispatchBuiltin.1("$", _Platform9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L91() else L90(dr4);
  L90(_Platform11):
    r38 = `$`(_Platform11, <sym OS.type>);
    goto L88(r38);
  L100():
    st file = r58;
    vapply = ldf vapply;
    check L101() else D30();
  D20():
    deopt 66 [i10];
  D30():
    deopt 107 [];
  L18():
    stop1 = ldf stop;
    check L96() else D26();
  L19(r46):
    goto L20();
  L80():
    p12 = prom<V +>{
      file = ld file;
      file1 = force? file;
      checkMissing(file1);
      return file1;
    };
    r35 = dyn file_exists(p12);
    check L81() else D21();
  L91():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L88(dx4);
  L92():
    stop = ldf stop;
    check L93() else D24();
  L101():
    p22 = prom<V +>{
      dll_list2 = ld dll_list;
      dll_list3 = force? dll_list2;
      checkMissing(dll_list3);
      return dll_list3;
    };
    p23 = prom<V +>{
      r60 = clos inner2501545716;
      return r60;
    };
    r62 = dyn vapply(p22, p23, NA_LGL);
    check L102() else D31();
  D21():
    deopt 68 [i10, r35];
  D24():
    deopt 87 [];
  D26():
    deopt 93 [];
  D31():
    deopt 111 [r62];
  L81():
    c14 = `as.logical`(r35);
    if c14 then L82() else L13();
  L93():
    p15 = prom<V +>{
      gettextf = ldf gettextf;
      p14 = prom<V +>{
        sQuote = ldf sQuote;
        p13 = prom<V +>{
          chname7 = ld chname;
          chname8 = force? chname7;
          checkMissing(chname8);
          return chname8;
        };
        r41 = dyn sQuote(p13);
        return r41;
      };
      r43 = dyn gettextf("DLL %s not found: maybe not installed for this architecture?", p14);
      return r43;
    };
    r45 = dyn stop[, domain](p15, NA_LGL);
    check L94() else D25();
  L96():
    p18 = prom<V +>{
      gettextf1 = ldf gettextf;
      p17 = prom<V +>{
        sQuote1 = ldf sQuote;
        p16 = prom<V +>{
          chname9 = ld chname1;
          chname10 = force? chname9;
          checkMissing(chname10);
          return chname10;
        };
        r48 = dyn sQuote1(p16);
        return r48;
      };
      r50 = dyn gettextf1("shared object %s not found", p17);
      return r50;
    };
    r52 = dyn stop1[, domain](p18, NA_LGL);
    check L97() else D27();
  L102():
    st ind = r62;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L103() else L104();
  D25():
    deopt 91 [r45];
  D27():
    deopt 97 [r52];
  L13():
    st file = "";
    goto L9(i10);
  L21(r64):
    c18 = `as.logical`(r64);
    if c18 then L107() else L22(c18);
  L82():
    goto L14();
  L94():
    goto L19(r45);
  L97():
    goto L19(r52);
  L103():
    ind = ld ind;
    check L105() else D32();
  L104():
    r63 = dyn base3(<sym ind>);
    goto L21(r63);
  D32():
    deopt 115 [ind];
  L22(c20):
    c27 = `as.logical`(c20);
    if c27 then L113() else L24();
  L105():
    ind1 = force? ind;
    checkMissing(ind1);
    length = ldf length in base;
    r65 = dyn length(ind1);
    check L106() else D33();
  L107():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L108() else L109();
  D33():
    deopt 118 [r65];
  L23(c23, r67):
    c24 = `as.logical`(r67);
    c25 = `&&`(c23, c24);
    goto L22(c25);
  L24():
    _Platform16 = ld `.Platform`;
    check L144() else D46();
  L106():
    goto L21(r65);
  L108():
    ind2 = ld ind;
    check L110() else D34();
  L109():
    r66 = dyn base4(<sym ind>);
    goto L23(c18, r66);
  L113():
    verbose3 = ld verbose;
    check L114() else D36();
  D34():
    deopt 121 [c18, ind2];
  D36():
    deopt 126 [verbose3];
  D46():
    deopt 164 [_Platform16];
  L110():
    ind3 = force? ind2;
    checkMissing(ind3);
    any = ldf any in base;
    r68 = dyn any(ind3);
    check L111() else D35();
  L114():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c28 = `as.logical`(verbose4);
    if c28 then L115() else L25();
  L144():
    _Platform17 = force? _Platform16;
    checkMissing(_Platform17);
    c33 = `is.object`(_Platform17);
    if c33 then L146() else L147(_Platform17);
  D35():
    deopt 124 [c18, r68];
  L25():
    goto L28();
  L28():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L128() else L129();
  L111():
    goto L23(c18, r68);
  L115():
    _Platform12 = ld `.Platform`;
    check L116() else D37();
  L145(dx13):
    r98 = `==`(dx13, "windows");
    c34 = `as.logical`(r98);
    if c34 then L149() else L34();
  L146():
    dr12 = tryDispatchBuiltin.1("$", _Platform17);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L148() else L147(dr12);
  L147(_Platform19):
    r97 = `$`(_Platform19, <sym OS.type>);
    goto L145(r97);
  D37():
    deopt 128 [_Platform12];
  L29(r86):
    popenv;
    return r86;
  L34():
    goto L36();
  L36():
    verbose5 = ld verbose;
    check L157() else D51();
  L116():
    _Platform13 = force? _Platform12;
    checkMissing(_Platform13);
    c29 = `is.object`(_Platform13);
    if c29 then L118() else L119(_Platform13);
  L128():
    dll_list4 = ld dll_list;
    check L130() else D42();
  L129():
    r85 = dyn base5(<lang `[[`(dll_list, `[`(seq_along(dll_list), ind))>);
    goto L29(r85);
  L148():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L145(dx12);
  L149():
    Sys_getenv = ldf `Sys.getenv`;
    check L150() else D47();
  D42():
    deopt 149 [dll_list4];
  D47():
    deopt 170 [];
  D51():
    deopt 184 [verbose5];
  L117(dx7):
    r70 = `==`(dx7, "windows");
    c30 = `as.logical`(r70);
    if c30 then L121() else L26();
  L118():
    dr6 = tryDispatchBuiltin.1("$", _Platform13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L120() else L119(dr6);
  L119(_Platform15):
    r69 = `$`(_Platform15, <sym OS.type>);
    goto L117(r69);
  L130():
    dll_list5 = force? dll_list4;
    checkMissing(dll_list5);
    c31 = `is.object`(dll_list5);
    if c31 then L131() else L132(dll_list5);
  L150():
    r99 = dyn Sys_getenv("PATH");
    check L151() else D48();
  L157():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    c35 = `as.logical`(verbose6);
    if c35 then L158() else L37();
  D48():
    deopt 172 [r99];
  L26():
    message1 = ldf message;
    check L125() else D40();
  L27(r77):
    goto L28();
  L30(dx9):
    invisible = ldf invisible in base;
    r94 = dyn invisible(dx9);
    check L141() else D45();
  L37():
    goto L38();
  L38():
    _in_ = ldf `%in%`;
    check L162() else D54();
  L120():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L117(dx6);
  L121():
    message = ldf message;
    check L122() else D38();
  L131():
    dr8 = tryDispatchBuiltin.1("[[", dll_list5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L133() else L132(dr8);
  L132(dll_list7):
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L134() else L135();
  L151():
    st PATH = r99;
    Sys_setenv = ldf `Sys.setenv`;
    check L152() else D49();
  L158():
    message2 = ldf message;
    check L159() else D52();
  D38():
    deopt 134 [];
  D40():
    deopt 140 [];
  D45():
    deopt 160 [r94];
  D49():
    deopt 175 [];
  D52():
    deopt 187 [];
  D54():
    deopt 195 [];
  L31(dll_list10, r88):
    c32 = `is.object`(r88);
    if c32 then L137() else L138(dll_list10, r88);
  L122():
    p26 = prom<V +>{
      gettextf2 = ldf gettextf;
      p25 = prom<V +>{
        sQuote2 = ldf sQuote;
        p24 = prom<V +>{
          chname13 = ld chname1;
          chname14 = force? chname13;
          checkMissing(chname14);
          return chname14;
        };
        r72 = dyn sQuote2(p24);
        return r72;
      };
      r74 = dyn gettextf2("DLL %s already loaded", p25);
      return r74;
    };
    r76 = dyn message[, domain](p26, NA_LGL);
    check L123() else D39();
  L125():
    p29 = prom<V +>{
      gettextf3 = ldf gettextf;
      p28 = prom<V +>{
        sQuote3 = ldf sQuote;
        p27 = prom<V +>{
          chname15 = ld chname1;
          chname16 = force? chname15;
          checkMissing(chname16);
          return chname16;
        };
        r79 = dyn sQuote3(p27);
        return r79;
      };
      r81 = dyn gettextf3("shared object '%s' already loaded", p28);
      return r81;
    };
    r83 = dyn message1[, domain](p29, NA_LGL);
    check L126() else D41();
  L133():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L30(dx8);
  L134():
    dll_list11 = ld dll_list;
    check L136() else D43();
  L135():
    r87 = dyn base6(<sym dll_list>);
    goto L31(dll_list7, r87);
  L141():
    goto L29(r94);
  L152():
    p33 = prom<V +>{
      paste1 = ldf paste;
      p31 = prom<V +>{
        gsub = ldf gsub;
        p30 = prom<V +>{
          DLLpath4 = ld DLLpath;
          DLLpath5 = force? DLLpath4;
          checkMissing(DLLpath5);
          return DLLpath5;
        };
        r101 = dyn gsub("/", "\\\\", p30);
        return r101;
      };
      p32 = prom<V +>{
        PATH = ld PATH;
        PATH1 = force? PATH;
        checkMissing(PATH1);
        return PATH1;
      };
      r104 = dyn paste1[, , sep](p31, p32, ";");
      return r104;
    };
    r106 = dyn Sys_setenv[PATH](p33);
    check L153() else D50();
  L159():
    p35 = prom<V +>{
      gettextf4 = ldf gettextf;
      p34 = prom<V +>{
        file4 = ld file;
        file5 = force? file4;
        checkMissing(file5);
        return file5;
      };
      r112 = dyn gettextf4("now dyn.load(\"%s\") ...", p34);
      return r112;
    };
    r114 = dyn message2[, domain](p35, NA_LGL);
    check L160() else D53();
  L162():
    p36 = prom<V +>{
      sym8 = ldf `...names`;
      base8 = ldf `...names` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r117):
      return r117;
    L1():
      ___names = ldf `...names` in base;
      r118 = dyn ___names();
      goto L0(r118);
    L2():
      r116 = dyn base8();
      goto L0(r116);
    };
    r120 = dyn _in_("DLLpath", p36);
    check L163() else D55();
  D39():
    deopt 138 [r76];
  D41():
    deopt 144 [r83];
  D43():
    deopt 152 [dll_list7, dll_list11];
  D50():
    deopt 178 [r106];
  D53():
    deopt 191 [r114];
  D55():
    deopt 198 [r120];
  L32(dll_list16, dx11):
    __1 = ldf `[[` in base;
    r93 = dyn __1(dll_list16, dx11);
    goto L30(r93);
  L123():
    goto L27(r76);
  L126():
    goto L27(r83);
  L136():
    dll_list12 = force? dll_list11;
    checkMissing(dll_list12);
    r89 = seq_along(dll_list12);
    goto L31(dll_list7, r89);
  L137():
    dr10 = tryDispatchBuiltin.1("[", r88);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L139() else L138(dll_list10, dr10);
  L138(dll_list14, r91):
    ind4 = ld ind;
    check L140() else D44();
  L153():
    sym7 = ldf `on.exit`;
    base7 = ldf `on.exit` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L154() else L155();
  L160():
    goto L38();
  L163():
    c36 = `as.logical`(r120);
    if c36 then L164() else L39();
  D44():
    deopt 155 [dll_list14, r91, ind4];
  L35(r108):
    goto L36();
  L39():
    dyn_load1 = ldf `dyn.load`;
    check L168() else D58();
  L40(r123):
    st dll = r123;
    _dynLibs1 = ldf `.dynLibs`;
    check L170() else D60();
  L139():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L32(dll_list10, dx10);
  L140():
    ind5 = force? ind4;
    __ = ldf `[` in base;
    r92 = dyn __(r91, ind5);
    goto L32(dll_list14, r92);
  L154():
    on_exit = ldf `on.exit` in base;
    r109 = dyn on_exit(<lang Sys.setenv(PATH=PATH)>);
    goto L35(r109);
  L155():
    r107 = dyn base7(<lang Sys.setenv(PATH=PATH)>);
    goto L35(r107);
  L164():
    dyn_load = ldf `dyn.load`;
    check L165() else D56();
  D56():
    deopt 200 [];
  D58():
    deopt 205 [];
  D60():
    deopt 213 [];
  L165():
    p37 = prom<V +>{
      file6 = ld file;
      file7 = force? file6;
      checkMissing(file7);
      return file7;
    };
    ddd1 = ld `...`;
    r122 = dyn dyn_load[, `...`](p37, ddd1);
    check L166() else D57();
  L168():
    p38 = prom<V +>{
      file8 = ld file;
      file9 = force? file8;
      checkMissing(file9);
      return file9;
    };
    p39 = prom<V +>{
      DLLpath6 = ld DLLpath;
      DLLpath7 = force? DLLpath6;
      checkMissing(DLLpath7);
      return DLLpath7;
    };
    ddd2 = ld `...`;
    r126 = dyn dyn_load1[, DLLpath, `...`](p38, p39, ddd2);
    check L169() else D59();
  L170():
    p40 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L2() else L3();
    L0(r128):
      return r128;
    L2():
      dll_list17 = ld dll_list;
      dll_list18 = force? dll_list17;
      checkMissing(dll_list18);
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L3():
      r127 = dyn base9(<sym dll_list>, <lang list(dll)>);
      goto L0(r127);
    L1(r130):
      c37 = ldf c in base;
      r132 = dyn c37(dll_list18, r130);
      goto L0(r132);
    L4():
      dll = ld dll;
      dll1 = force? dll;
      checkMissing(dll1);
      list = ldf list in base;
      r131 = dyn list(dll1);
      goto L1(r131);
    L5():
      r129 = dyn base10(<sym dll>);
      goto L1(r129);
    };
    r134 = dyn _dynLibs1(p40);
    check L171() else D61();
  D57():
    deopt 203 [r122];
  D59():
    deopt 210 [r126];
  D61():
    deopt 215 [r134];
  L166():
    goto L40(r122);
  L169():
    goto L40(r126);
  L171():
    sym11 = ldf invisible;
    base11 = ldf invisible in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L172() else L173();
  L41(r136):
    popenv;
    return r136;
  L172():
    dll2 = ld dll;
    check L174() else D62();
  L173():
    r135 = dyn base11(<sym dll>);
    goto L41(r135);
  D62():
    deopt 218 [dll2];
  L174():
    dll3 = force? dll2;
    checkMissing(dll3);
    invisible1 = ldf invisible in base;
    r137 = dyn invisible1(dll3);
    check L175() else D63();
  D63():
    deopt 221 [r137];
  L175():
    goto L41(r137);
  }
}
fun inner2501545716(x) {
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