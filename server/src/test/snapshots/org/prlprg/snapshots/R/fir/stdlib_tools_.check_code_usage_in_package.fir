fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3455886275;
    st `.check_code_usage_in_package` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3455886275(package, `lib.loc`) {
  (reg package:*, reg lib_loc:*) -+> V { var package:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg package1:*, reg package2:V, reg r:V, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r1:V, reg p:p(V +), reg r3:V, reg is_base:*, reg is_base1:V, reg r4:V, reg c:L, reg check_without_loading:*, reg check_without_loading1:V, reg r5:V, reg c1:L, reg _load_package_quietly:cls, reg package3:*, reg package4:V, reg p1:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p2:p(V +), reg r8:V, reg _eval_with_capture:cls, reg readRDS:cls, reg file_path:cls, reg find_package:cls, reg package5:*, reg package6:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg sapply:cls, reg desc:*, reg desc1:V, reg c2:L, reg desc3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg p6:p(V +), reg __:*, reg __1:V, reg p7:p(V +), reg r18:V, reg sapply1:cls, reg desc4:*, reg desc5:V, reg c3:L, reg desc7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r19:V, reg p8:p(V +), reg __2:*, reg __3:V, reg p9:p(V +), reg r22:V, reg unique:cls, reg sym:cls, reg base:cls, reg guard:L, reg r23:V, reg r24:V, reg pkgs1:*, reg pkgs2:V, reg pkgs3:*, reg pkgs4:V, reg c4:cls, reg r25:V, reg p10:p(V +), reg r27:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg suppressMessages:cls, reg tryCatch:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg require:cls, reg pkg:*, reg pkg1:V, reg p11:p(V +), reg r31:V, reg p12:p(V +), reg r33:cls, reg p13:p(V +), reg r35:cls, reg p14:p(V +), reg r37:V, reg p15:p(V +), reg p16:p(V +), reg r41:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r43:V, reg r44:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg c6:L, reg _GlobalEnv3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r45:V, reg c7:V, reg c8:L, reg __4:cls, reg r46:V, reg r47:cls, reg r48:V, reg attach:cls, reg compatibilityEnv:cls, reg r50:V, reg p17:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r52:V, reg r53:V, reg search:cls, reg r54:V, reg length:cls, reg r55:V, reg p18:p(V +), reg r57:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r58:V, reg r59:V, reg on_exit:cls, reg r60:V, reg character:cls, reg r62:V, reg r63:cls, reg r64:cls, reg r65:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r66:V, reg r67:V, reg list:cls, reg r68:V, reg unlist:cls, reg strsplit:cls, reg Sys_getenv1:cls, reg r69:V, reg p19:p(V +), reg r71:V, reg p20:p(V +), reg r73:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r74:V, reg r75:V, reg opts:*, reg opts1:V, reg length1:cls, reg r76:V, reg c9:L, reg lapply:cls, reg sub:cls, reg opts2:*, reg opts3:V, reg p21:p(V +), reg r78:V, reg p22:p(V +), reg config_val_to_logical1:*, reg config_val_to_logical2:V, reg p23:p(V +), reg r81:V, reg l1:*, reg c10:L, reg r83:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r85:V, reg dx7:V, reg sub1:cls, reg opts4:*, reg opts5:V, reg p24:p(V +), reg r87:V, reg ___:cls, reg r88:V, reg check_without_loading2:*, reg check_without_loading3:V, reg c11:L, reg suppressWarnings:cls, reg suppressMessages1:cls, reg getNamespace:cls, reg package7:*, reg package8:V, reg p25:p(V +), reg r91:V, reg p26:p(V +), reg r93:V, reg p27:p(V +), reg r95:V, reg suppressMessages2:cls, reg __5:cls, reg r97:V, reg r98:cls, reg package9:*, reg package10:V, reg p28:p(V +), reg r100:V, reg p29:p(V +), reg r102:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r103:V, reg r104:V, reg _glbs:*, reg _glbs1:V, reg length2:cls, reg r105:V, reg c12:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r106:V, reg r107:V, reg package11:*, reg package12:V, reg r108:V, reg c13:L, reg r109:V, reg c14:cls, reg r110:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r111:V, reg r112:V, reg dflt:*, reg dflt1:V, reg _glbs2:*, reg _glbs3:V, reg c15:cls, reg r113:V, reg l4:*, reg c16:L, reg r115:V, reg l6:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r117:V, reg dx9:V, reg r118:V, reg check_without_loading4:*, reg check_without_loading5:V, reg c17:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r120:V, reg r121:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r122:V, reg r123:V, reg env:*, reg env1:V, reg foo:*, reg foo1:V, reg list1:cls, reg r124:V, reg args:*, reg args1:V, reg c18:cls, reg r125:V, reg suppressMessages3:cls, reg do_call:cls, reg __6:cls, reg r126:V, reg p30:p(V +), reg args2:*, reg args3:V, reg p31:p(V +), reg r129:V, reg p32:p(V +), reg r131:V, reg suppressMessages4:cls, reg do_call1:cls, reg checkMethodUsageEnv:*, reg checkMethodUsageEnv1:V, reg p33:p(V +), reg args4:*, reg args5:V, reg p34:p(V +), reg r134:V, reg p35:p(V +), reg r136:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r138:V, reg r139:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r140:V, reg r141:V, reg package13:*, reg package14:V, reg foo2:*, reg foo3:V, reg list2:cls, reg r142:V, reg args6:*, reg args7:V, reg c19:cls, reg r143:V, reg suppressMessages5:cls, reg do_call2:cls, reg __7:cls, reg r144:V, reg p36:p(V +), reg args8:*, reg args9:V, reg p37:p(V +), reg r147:V, reg p38:p(V +), reg r149:V, reg suppressMessages6:cls, reg do_call3:cls, reg checkMethodUsagePackage:*, reg checkMethodUsagePackage1:V, reg p39:p(V +), reg args10:*, reg args11:V, reg p40:p(V +), reg r152:V, reg p41:p(V +), reg r154:V, reg unique1:cls, reg out:*, reg out1:V, reg p42:p(V +), reg r156:V, reg l7:*, reg class__:cls, reg r157:V, reg out2:*, reg out3:V |
    mkenv;
    st package = package;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    package1 = ld package;
    check L29() else D0();
  D0():
    deopt 0 [package1];
  L29():
    package2 = force? package1;
    checkMissing(package2);
    r = `==`(package2, "base");
    st is_base = r;
    config_val_to_logical = ldf config_val_to_logical;
    check L30() else D1();
  D1():
    deopt 6 [];
  L30():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r1 = dyn Sys_getenv("_R_CHECK_CODE_USAGE_VIA_NAMESPACES_", "TRUE");
      return r1;
    };
    r3 = dyn config_val_to_logical(p);
    check L31() else D2();
  D2():
    deopt 8 [r3];
  L31():
    st check_without_loading = r3;
    is_base = ld is_base;
    check L32() else D3();
  D3():
    deopt 10 [is_base];
  L32():
    is_base1 = force? is_base;
    checkMissing(is_base1);
    r4 = `!`(is_base1);
    c = `as.logical`(r4);
    if c then L33() else L1();
  L1():
    goto L8();
  L8():
    character = ldf character;
    check L58() else D15();
  L33():
    check_without_loading = ld check_without_loading;
    check L34() else D4();
  D4():
    deopt 13 [check_without_loading];
  D15():
    deopt 60 [];
  L34():
    check_without_loading1 = force? check_without_loading;
    checkMissing(check_without_loading1);
    r5 = `!`(check_without_loading1);
    c1 = `as.logical`(r5);
    if c1 then L35() else L2();
  L58():
    r62 = dyn character();
    check L59() else D16();
  D16():
    deopt 61 [r62];
  L2():
    goto L3();
  L3():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L35():
    _load_package_quietly = ldf `.load_package_quietly`;
    check L36() else D5();
  L59():
    st out = r62;
    r63 = clos inner2501545716;
    st foo = r63;
    r64 = clos inner28461069;
    st checkMethodUsageEnv = r64;
    r65 = clos inner2071783101;
    st checkMethodUsagePackage = r65;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  D5():
    deopt 17 [];
  L4(r44):
    c8 = `as.logical`(r44);
    if c8 then L48() else L5();
  L9(r67):
    st args = r67;
    unlist = ldf unlist;
    check L63() else D18();
  L36():
    p1 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p2 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r8 = dyn _load_package_quietly(p1, p2);
    check L37() else D6();
  L41():
    _GlobalEnv = ld `.GlobalEnv`;
    check L43() else D9();
  L42():
    r43 = dyn base2(<lang `$`(.GlobalEnv, .Random.seed)>);
    goto L4(r43);
  L60():
    list = ldf list in base;
    r68 = dyn list(TRUE, FALSE, TRUE);
    check L62() else D17();
  L61():
    r66 = dyn base5[skipWith, suppressPartialMatchArgs, suppressLocalUnused](TRUE, FALSE, TRUE);
    goto L9(r66);
  D6():
    deopt 20 [r8];
  D9():
    deopt 30 [_GlobalEnv];
  D17():
    deopt 81 [r68];
  D18():
    deopt 84 [];
  L5():
    goto L6();
  L6():
    attach = ldf attach;
    check L53() else D13();
  L37():
    _eval_with_capture = ldf `.eval_with_capture`;
    check L38() else D7();
  L43():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    c6 = `is.object`(_GlobalEnv1);
    if c6 then L45() else L46(_GlobalEnv1);
  L48():
    __4 = ldf `::`;
    check L49() else D10();
  L62():
    goto L9(r68);
  L63():
    p20 = prom<V +>{
      strsplit = ldf strsplit;
      p19 = prom<V +>{
        Sys_getenv1 = ldf `Sys.getenv`;
        r69 = dyn Sys_getenv1("_R_CHECK_CODETOOLS_PROFILE_");
        return r69;
      };
      r71 = dyn strsplit(p19, "[[:space:]]*,[[:space:]]*");
      return r71;
    };
    r73 = dyn unlist(p20);
    check L64() else D19();
  D7():
    deopt 22 [];
  D10():
    deopt 35 [];
  D13():
    deopt 45 [];
  D19():
    deopt 86 [r73];
  L38():
    p16 = prom<V +>{
      readRDS = ldf readRDS;
      p5 = prom<V +>{
        file_path = ldf `file.path`;
        p4 = prom<V +>{
          find_package = ldf `find.package`;
          p3 = prom<V +>{
            package5 = ld package;
            package6 = force? package5;
            checkMissing(package6);
            return package6;
          };
          r10 = dyn find_package(p3, NULL);
          return r10;
        };
        r12 = dyn file_path(p4, "Meta", "package.rds");
        return r12;
      };
      r14 = dyn readRDS(p5);
      st desc = r14;
      sapply = ldf sapply;
      p6 = prom<V +>{
        desc = ld desc;
        desc1 = force? desc;
        checkMissing(desc1);
        c2 = `is.object`(desc1);
        if c2 then L1() else L2(desc1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", desc1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(desc3):
        r15 = `$`(desc3, <sym Suggests>);
        goto L0(r15);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p7 = prom<V +>{
        __ = ld `[[`;
        __1 = force? __;
        checkMissing(__1);
        return __1;
      };
      r18 = dyn sapply(p6, p7, "name");
      st pkgs1 = r18;
      sapply1 = ldf sapply;
      p8 = prom<V +>{
        desc4 = ld desc;
        desc5 = force? desc4;
        checkMissing(desc5);
        c3 = `is.object`(desc5);
        if c3 then L1() else L2(desc5);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", desc5);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(desc7):
        r19 = `$`(desc7, <sym Enhances>);
        goto L0(r19);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p9 = prom<V +>{
        __2 = ld `[[`;
        __3 = force? __2;
        checkMissing(__3);
        return __3;
      };
      r22 = dyn sapply1(p8, p9, "name");
      st pkgs2 = r22;
      unique = ldf unique;
      p10 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r24):
        return r24;
      L1():
        pkgs1 = ld pkgs1;
        pkgs2 = force? pkgs1;
        checkMissing(pkgs2);
        pkgs3 = ld pkgs2;
        pkgs4 = force? pkgs3;
        checkMissing(pkgs4);
        c4 = ldf c in base;
        r25 = dyn c4(pkgs2, pkgs4);
        goto L0(r25);
      L2():
        r23 = dyn base(<sym pkgs1>, <sym pkgs2>);
        goto L0(r23);
      };
      r27 = dyn unique(p10);
      s = toForSeq(r27);
      l = length(s);
      i = 0;
      goto L0(i);
    L0(i1):
      i2 = `+`.1(i1, 1);
      c5 = `<`.1(l, i2);
      if c5 then L2() else L1();
    L1():
      x = `[[`(s, i2, NULL, TRUE);
      st pkg = x;
      suppressMessages = ldf suppressMessages;
      p15 = prom<V +>{
        tryCatch = ldf tryCatch;
        p12 = prom<V +>{
          sym1 = ldf require;
          base1 = ldf require in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r29):
          return r29;
        L1():
          require = ldf require;
          p11 = prom<V +>{
            pkg = ld pkg;
            pkg1 = force? pkg;
            checkMissing(pkg1);
            return pkg1;
          };
          r31 = dyn require[, `character.only`, quietly](p11, TRUE, TRUE);
          goto L0(r31);
        L2():
          r28 = dyn base1[, `character.only`, quietly](<sym pkg>, TRUE, TRUE);
          goto L0(r28);
        };
        p13 = prom<V +>{
          r33 = clos inner2680913962;
          return r33;
        };
        p14 = prom<V +>{
          r35 = clos inner2680913962;
          return r35;
        };
        r37 = dyn tryCatch[, error, warning](p12, p13, p14);
        return r37;
      };
      dyn suppressMessages(p15);
      goto L0(i2);
    L2():
      invisible.0();
      return i2;
    };
    r41 = dyn _eval_with_capture[, type](p16, "output");
    check L39() else D8();
  L44(dx5):
    c7 = `==`(dx5, NULL);
    goto L4(c7);
  L45():
    dr4 = tryDispatchBuiltin.1("$", _GlobalEnv1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L47() else L46(dr4);
  L46(_GlobalEnv3):
    r45 = `$`(_GlobalEnv3, <sym .Random.seed>);
    goto L44(r45);
  L49():
    r46 = dyn __4("stats", "runif");
    check L50() else D11();
  L53():
    p17 = prom<V +>{
      compatibilityEnv = ldf compatibilityEnv;
      r50 = dyn compatibilityEnv();
      return r50;
    };
    p18 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      search = ldf search;
      r54 = dyn search();
      length = ldf length in base;
      r55 = dyn length(r54);
      goto L0(r55);
    L2():
      r52 = dyn base3(<lang search()>);
      goto L0(r52);
    };
    r57 = dyn attach[, name, pos, `warn.conflicts`](p17, "compat", p18, FALSE);
    check L54() else D14();
  L64():
    st opts = r73;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  D8():
    deopt 26 [r41];
  D11():
    deopt 38 [r46];
  D14():
    deopt 53 [r57];
  L10(r75):
    c9 = `as.logical`(r75);
    if c9 then L69() else L11();
  L39():
    goto L3();
  L47():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L44(dx4);
  L50():
    checkFun.0(r46);
    r47 = r46 as cls;
    r48 = dyn r47(1.0);
    check L51() else D12();
  L54():
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L65():
    opts = ld opts;
    check L67() else D20();
  L66():
    r74 = dyn base6(<sym opts>);
    goto L10(r74);
  D12():
    deopt 41 [r48];
  D20():
    deopt 90 [opts];
  L7(r59):
    goto L8();
  L11():
    goto L13();
  L13():
    check_without_loading2 = ld check_without_loading;
    check L78() else D26();
  L51():
    goto L6();
  L55():
    on_exit = ldf `on.exit` in base;
    r60 = dyn on_exit(<lang detach("compat")>);
    goto L7(r60);
  L56():
    r58 = dyn base4(<lang detach("compat")>);
    goto L7(r58);
  L67():
    opts1 = force? opts;
    checkMissing(opts1);
    length1 = ldf length in base;
    r76 = dyn length1(opts1);
    check L68() else D21();
  L69():
    lapply = ldf lapply;
    check L70() else D22();
  D21():
    deopt 93 [r76];
  D22():
    deopt 95 [];
  D26():
    deopt 110 [check_without_loading2];
  L68():
    goto L10(r76);
  L70():
    p22 = prom<V +>{
      sub = ldf sub;
      p21 = prom<V +>{
        opts2 = ld opts;
        opts3 = force? opts2;
        checkMissing(opts3);
        return opts3;
      };
      r78 = dyn sub(".*=[[:space:]]*", "", p21);
      return r78;
    };
    p23 = prom<V +>{
      config_val_to_logical1 = ld config_val_to_logical;
      config_val_to_logical2 = force? config_val_to_logical1;
      checkMissing(config_val_to_logical2);
      return config_val_to_logical2;
    };
    r81 = dyn lapply(p22, p23);
    check L71() else D23();
  L78():
    check_without_loading3 = force? check_without_loading2;
    checkMissing(check_without_loading3);
    c11 = `as.logical`(check_without_loading3);
    if c11 then L79() else L14();
  D23():
    deopt 98 [r81];
  L14():
    goto L15();
  L15():
    suppressMessages2 = ldf suppressMessages;
    check L83() else D29();
  L71():
    l1 = ld args;
    c10 = `is.object`(l1);
    if c10 then L72() else L73(r81, l1);
  L79():
    suppressWarnings = ldf suppressWarnings;
    check L80() else D27();
  D27():
    deopt 113 [];
  D29():
    deopt 120 [];
  L12(r85, dx7):
    st args = dx7;
    goto L13();
  L72():
    dr6 = tryDispatchBuiltin.0("[<-", l1, r81);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L74() else L73(r81, dr6);
  L73(r83, l3):
    sub1 = ldf sub;
    check L75() else D24();
  L80():
    p27 = prom<V +>{
      suppressMessages1 = ldf suppressMessages;
      p26 = prom<V +>{
        getNamespace = ldf getNamespace;
        p25 = prom<V +>{
          package7 = ld package;
          package8 = force? package7;
          checkMissing(package8);
          return package8;
        };
        r91 = dyn getNamespace(p25);
        return r91;
      };
      r93 = dyn suppressMessages1(p26);
      return r93;
    };
    r95 = dyn suppressWarnings(p27);
    check L81() else D28();
  L83():
    p29 = prom<V +>{
      __5 = ldf `::`;
      r97 = dyn __5("utils", "globalVariables");
      checkFun.0(r97);
      r98 = r97 as cls;
      p28 = prom<V +>{
        package9 = ld package;
        package10 = force? package9;
        checkMissing(package10);
        return package10;
      };
      r100 = dyn r98(<missing>, p28);
      return r100;
    };
    r102 = dyn suppressMessages2(p29);
    check L84() else D30();
  D24():
    deopt 101 [r83, l3, r81];
  D28():
    deopt 115 [r95];
  D30():
    deopt 122 [r102];
  L74():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(r81, dx6);
  L75():
    p24 = prom<V +>{
      opts4 = ld opts;
      opts5 = force? opts4;
      checkMissing(opts5);
      return opts5;
    };
    r87 = dyn sub1("[[:space:]]*=.*", "", p24);
    check L76() else D25();
  L81():
    st env = r95;
    goto L15();
  L84():
    st `.glbs` = r102;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L85() else L86();
  D25():
    deopt 105 [r83, l3, r81, r87];
  L16(r104):
    c12 = `as.logical`(r104);
    if c12 then L89() else L17();
  L76():
    ___ = ldf `[<-` in base;
    r88 = dyn ___(l3, r81, r87);
    goto L12(r83, r88);
  L85():
    _glbs = ld `.glbs`;
    check L87() else D31();
  L86():
    r103 = dyn base7(<sym .glbs>);
    goto L16(r103);
  D31():
    deopt 126 [_glbs];
  L17():
    goto L22();
  L22():
    check_without_loading4 = ld check_without_loading;
    check L106() else D38();
  L87():
    _glbs1 = force? _glbs;
    checkMissing(_glbs1);
    length2 = ldf length in base;
    r105 = dyn length2(_glbs1);
    check L88() else D32();
  L89():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L90() else L91();
  D32():
    deopt 129 [r105];
  D38():
    deopt 159 [check_without_loading4];
  L18(r107):
    st dflt = r107;
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L96() else L97();
  L88():
    goto L16(r105);
  L90():
    package11 = ld package;
    check L92() else D33();
  L91():
    r106 = dyn base8(<lang if(`==`(package, "base"), "last.dump")>, ".Generic", ".Method", ".Class");
    goto L18(r106);
  L106():
    check_without_loading5 = force? check_without_loading4;
    checkMissing(check_without_loading5);
    c17 = `as.logical`(check_without_loading5);
    if c17 then L107() else L23();
  D33():
    deopt 132 [package11];
  L21(r112):
    l4 = ld args;
    c16 = `is.object`(l4);
    if c16 then L102() else L103(r112, l4);
  L23():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L122() else L123();
  L26():
    unique1 = ldf unique;
    check L135() else D57();
  L92():
    package12 = force? package11;
    checkMissing(package12);
    r108 = `==`(package12, "base");
    c13 = `as.logical`(r108);
    if c13 then L93() else L19();
  L96():
    dflt = ld dflt;
    check L98() else D35();
  L97():
    r111 = dyn base9(<sym dflt>, <sym .glbs>);
    goto L21(r111);
  L107():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L108() else L109();
  D35():
    deopt 148 [dflt];
  D57():
    deopt 210 [];
  L19():
    goto L20(NULL);
  L20(r109):
    c14 = ldf c in base;
    r110 = dyn c14(r109, ".Generic", ".Method", ".Class");
    check L95() else D34();
  L24(r121):
    st args = r121;
    suppressMessages3 = ldf suppressMessages;
    check L117() else D44();
  L27(r139):
    st args = r139;
    suppressMessages5 = ldf suppressMessages;
    check L131() else D53();
  L93():
    goto L20("last.dump");
  L98():
    dflt1 = force? dflt;
    checkMissing(dflt1);
    _glbs2 = ld `.glbs`;
    check L99() else D36();
  L101(r117, dx9):
    st args = dx9;
    goto L22();
  L102():
    dr8 = tryDispatchBuiltin.0("$<-", l4, r112);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L104() else L103(r112, dr8);
  L103(r115, l6):
    r118 = `$<-`(l6, <sym suppressUndefined>, r112);
    goto L101(r115, r118);
  L108():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L110() else L111();
  L109():
    r120 = dyn base10(<lang list(env, report=foo)>, <sym args>);
    goto L24(r120);
  L122():
    sym13 = ldf list;
    base13 = ldf list in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L124() else L125();
  L123():
    r138 = dyn base12(<lang list(package, report=foo)>, <sym args>);
    goto L27(r138);
  L135():
    p42 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r156 = dyn unique1(p42);
    check L136() else D58();
  D34():
    deopt 144 [r110];
  D36():
    deopt 150 [_glbs2];
  D44():
    deopt 178 [];
  D53():
    deopt 202 [];
  D58():
    deopt 212 [r156];
  L25(r123):
    args = ld args;
    check L115() else D42();
  L28(r141):
    args6 = ld args;
    check L129() else D51();
  L95():
    goto L18(r110);
  L99():
    _glbs3 = force? _glbs2;
    checkMissing(_glbs3);
    c15 = ldf c in base;
    r113 = dyn c15(dflt1, _glbs3);
    check L100() else D37();
  L104():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L101(r112, dx8);
  L110():
    env = ld env;
    check L112() else D39();
  L111():
    r122 = dyn base11[, report](<sym env>, <sym foo>);
    goto L25(r122);
  L117():
    p32 = prom<V +>{
      do_call = ldf `do.call`;
      p30 = prom<V +>{
        __6 = ldf `::`;
        r126 = dyn __6("codetools", "checkUsageEnv");
        return r126;
      };
      p31 = prom<V +>{
        args2 = ld args;
        args3 = force? args2;
        checkMissing(args3);
        return args3;
      };
      r129 = dyn do_call(p30, p31);
      return r129;
    };
    r131 = dyn suppressMessages3(p32);
    check L118() else D45();
  L124():
    package13 = ld package;
    check L126() else D48();
  L125():
    r140 = dyn base13[, report](<sym package>, <sym foo>);
    goto L28(r140);
  L131():
    p38 = prom<V +>{
      do_call2 = ldf `do.call`;
      p36 = prom<V +>{
        __7 = ldf `::`;
        r144 = dyn __7("codetools", "checkUsagePackage");
        return r144;
      };
      p37 = prom<V +>{
        args8 = ld args;
        args9 = force? args8;
        checkMissing(args9);
        return args9;
      };
      r147 = dyn do_call2(p36, p37);
      return r147;
    };
    r149 = dyn suppressMessages5(p38);
    check L132() else D54();
  L136():
    st out = r156;
    l7 = ld out;
    class__ = ldf `class<-`;
    check L137() else D59();
  D37():
    deopt 153 [r113];
  D39():
    deopt 165 [env];
  D42():
    deopt 172 [args];
  D45():
    deopt 180 [r131];
  D48():
    deopt 189 [package13];
  D51():
    deopt 196 [args6];
  D54():
    deopt 204 [r149];
  D59():
    deopt 217 ["check_code_usage_in_package", l7, "check_code_usage_in_package"];
  L100():
    goto L21(r113);
  L112():
    env1 = force? env;
    checkMissing(env1);
    foo = ld foo;
    check L113() else D40();
  L115():
    args1 = force? args;
    checkMissing(args1);
    c18 = ldf c in base;
    r125 = dyn c18(r123, args1);
    check L116() else D43();
  L118():
    suppressMessages4 = ldf suppressMessages;
    check L119() else D46();
  L126():
    package14 = force? package13;
    checkMissing(package14);
    foo2 = ld foo;
    check L127() else D49();
  L129():
    args7 = force? args6;
    checkMissing(args7);
    c19 = ldf c in base;
    r143 = dyn c19(r141, args7);
    check L130() else D52();
  L132():
    suppressMessages6 = ldf suppressMessages;
    check L133() else D55();
  L137():
    r157 = dyn class__(l7, NULL, "check_code_usage_in_package");
    check L138() else D60();
  D40():
    deopt 167 [foo];
  D43():
    deopt 175 [r125];
  D46():
    deopt 182 [];
  D49():
    deopt 191 [foo2];
  D52():
    deopt 199 [r143];
  D55():
    deopt 206 [];
  D60():
    deopt 219 ["check_code_usage_in_package", r157];
  L113():
    foo1 = force? foo;
    checkMissing(foo1);
    list1 = ldf list in base;
    r124 = dyn list1(env1, foo1);
    check L114() else D41();
  L116():
    goto L24(r125);
  L119():
    p35 = prom<V +>{
      do_call1 = ldf `do.call`;
      p33 = prom<V +>{
        checkMethodUsageEnv = ld checkMethodUsageEnv;
        checkMethodUsageEnv1 = force? checkMethodUsageEnv;
        checkMissing(checkMethodUsageEnv1);
        return checkMethodUsageEnv1;
      };
      p34 = prom<V +>{
        args4 = ld args;
        args5 = force? args4;
        checkMissing(args5);
        return args5;
      };
      r134 = dyn do_call1(p33, p34);
      return r134;
    };
    r136 = dyn suppressMessages4(p35);
    check L120() else D47();
  L127():
    foo3 = force? foo2;
    checkMissing(foo3);
    list2 = ldf list in base;
    r142 = dyn list2(package14, foo3);
    check L128() else D50();
  L130():
    goto L27(r143);
  L133():
    p41 = prom<V +>{
      do_call3 = ldf `do.call`;
      p39 = prom<V +>{
        checkMethodUsagePackage = ld checkMethodUsagePackage;
        checkMethodUsagePackage1 = force? checkMethodUsagePackage;
        checkMissing(checkMethodUsagePackage1);
        return checkMethodUsagePackage1;
      };
      p40 = prom<V +>{
        args10 = ld args;
        args11 = force? args10;
        checkMissing(args11);
        return args11;
      };
      r152 = dyn do_call3(p39, p40);
      return r152;
    };
    r154 = dyn suppressMessages6(p41);
    check L134() else D56();
  L138():
    st out = r157;
    out2 = ld out;
    check L139() else D61();
  D41():
    deopt 171 [r124];
  D47():
    deopt 184 [r136];
  D50():
    deopt 195 [r142];
  D56():
    deopt 208 [r154];
  D61():
    deopt 221 [out2];
  L114():
    goto L25(r124);
  L120():
    goto L26();
  L128():
    goto L28(r142);
  L134():
    goto L26();
  L139():
    out3 = force? out2;
    checkMissing(out3);
    popenv;
    return out3;
  }
}
fun inner2680913962(`.`) {
  (reg __:*) -+> V { var `.`:* |
    mkenv;
    st `.` = __;
    popenv;
    return NULL;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg out:*, reg out1:V, reg x1:*, reg x2:V, reg c:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    sst out = r1;
    invisible.0();
    popenv;
    return r1;
  L1():
    out = ld out;
    check L3() else D0();
  L2():
    r = dyn base(<sym out>, <sym x>);
    goto L0(r);
  D0():
    deopt 2 [out];
  L3():
    out1 = force? out;
    checkMissing(out1);
    x1 = ld x;
    check L4() else D1();
  D1():
    deopt 4 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    c = ldf c in base;
    r2 = dyn c(out1, x2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}
fun inner28461069(env, `...`) {
  (reg env:*, reg ddd:dots) -+> V { var env:*, var `...`:dots?, reg _get_S4_generics:cls, reg env1:*, reg env2:V, reg p:p(V +), reg r1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg _get_S4_methods_list:cls, reg g:*, reg g1:V, reg p1:p(V +), reg env3:*, reg env4:V, reg p2:p(V +), reg r4:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c1:L, reg x1:V, reg __:cls, reg r5:V, reg r6:cls, reg __1:cls, reg r7:V, reg r8:cls, reg m:*, reg m1:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg paste:cls, reg __2:cls, reg r13:V, reg p5:p(V +), reg paste1:cls, reg __3:cls, reg r15:V, reg p6:p(V +), reg r17:V, reg p7:p(V +), reg r19:V, reg __4:cls, reg r20:V, reg r21:cls, reg fun:*, reg fun1:V, reg p8:p(V +), reg signature:*, reg signature1:V, reg p9:p(V +), reg ddd1:dots?, reg r24:V |
    mkenv;
    st env = env;
    st `...` = ddd;
    _get_S4_generics = ldf `.get_S4_generics`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r1 = dyn _get_S4_generics(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L6() else L3();
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st g = x;
    _get_S4_methods_list = ldf `.get_S4_methods_list`;
    check L7() else D2();
  L6():
    invisible.0();
    popenv;
    return i2;
  D2():
    deopt 5 [i2];
  L7():
    p1 = prom<V +>{
      g = ld g;
      g1 = force? g;
      checkMissing(g1);
      return g1;
    };
    p2 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r4 = dyn _get_S4_methods_list(p1, p2);
    check L8() else D3();
  D3():
    deopt 8 [i2, r4];
  L8():
    s1 = toForSeq(r4);
    l1 = length(s1);
    i5 = 0;
    goto L1(i2, i5);
  L1(i6, i7):
    i8 = `+`.1(i7, 1);
    c1 = `<`.1(l1, i8);
    if c1 then L9() else L2();
  L2():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st m = x1;
    __ = ldf `::`;
    check L10() else D4();
  L9():
    goto L0(i6);
  D4():
    deopt 10 [i6, i8];
  L10():
    r5 = dyn __("methods", "unRematchDefinition");
    check L11() else D5();
  D5():
    deopt 13 [i6, i8, r5];
  L11():
    checkFun.0(r5);
    r6 = r5 as cls;
    p4 = prom<V +>{
      __1 = ldf `::`;
      r7 = dyn __1("methods", "getDataPart");
      checkFun.0(r7);
      r8 = r7 as cls;
      p3 = prom<V +>{
        m = ld m;
        m1 = force? m;
        checkMissing(m1);
        return m1;
      };
      r10 = dyn r8(p3);
      return r10;
    };
    r12 = dyn r6(p4);
    check L12() else D6();
  D6():
    deopt 16 [i6, i8, r12];
  L12():
    st fun = r12;
    paste = ldf paste;
    check L13() else D7();
  D7():
    deopt 19 [i6, i8];
  L13():
    p5 = prom<V +>{
      __2 = ldf `@` in base;
      r13 = dyn __2(<sym m>, <sym generic>);
      return r13;
    };
    p7 = prom<V +>{
      paste1 = ldf paste;
      p6 = prom<V +>{
        __3 = ldf `@` in base;
        r15 = dyn __3(<sym m>, <sym target>);
        return r15;
      };
      r17 = dyn paste1[, collapse](p6, "-");
      return r17;
    };
    r19 = dyn paste[, , sep](p5, p7, ",");
    check L14() else D8();
  D8():
    deopt 24 [i6, i8, r19];
  L14():
    st signature = r19;
    __4 = ldf `::`;
    check L15() else D9();
  D9():
    deopt 27 [i6, i8];
  L15():
    r20 = dyn __4("codetools", "checkUsage");
    check L16() else D10();
  D10():
    deopt 30 [i6, i8, r20];
  L16():
    checkFun.0(r20);
    r21 = r20 as cls;
    p8 = prom<V +>{
      fun = ld fun;
      fun1 = force? fun;
      checkMissing(fun1);
      return fun1;
    };
    p9 = prom<V +>{
      signature = ld signature;
      signature1 = force? signature;
      checkMissing(signature1);
      return signature1;
    };
    ddd1 = ld `...`;
    r24 = dyn r21[, , `...`](p8, p9, ddd1);
    check L17() else D11();
  D11():
    deopt 35 [i6, i8, r24];
  L17():
    goto L1(i6, i8);
  }
}
fun inner2071783101(pack, `...`) {
  (reg pack:*, reg ddd:dots) -+> V { var pack:*, var `...`:dots?, reg paste0:cls, reg pack1:*, reg pack2:V, reg p:p(V +), reg r1:V, reg _notin_:cls, reg pname:*, reg pname1:V, reg p1:p(V +), reg search:cls, reg r3:V, reg p2:p(V +), reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg checkMethodUsageEnv:cls, reg isNamespaceLoaded:cls, reg pack3:*, reg pack4:V, reg p3:p(V +), reg r9:V, reg c1:L, reg getNamespace:cls, reg pack5:*, reg pack6:V, reg p4:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg pname2:*, reg pname3:V, reg as_environment:cls, reg r14:V, reg p5:p(V +), reg ddd1:dots?, reg r16:V |
    mkenv;
    st pack = pack;
    st `...` = ddd;
    paste0 = ldf paste0;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      pack1 = ld pack;
      pack2 = force? pack1;
      checkMissing(pack2);
      return pack2;
    };
    r1 = dyn paste0("package:", p);
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    st pname = r1;
    _notin_ = ldf `%notin%`;
    check L4() else D2();
  D2():
    deopt 7 [];
  L4():
    p1 = prom<V +>{
      pname = ld pname;
      pname1 = force? pname;
      checkMissing(pname1);
      return pname1;
    };
    p2 = prom<V +>{
      search = ldf search;
      r3 = dyn search();
      return r3;
    };
    r5 = dyn _notin_(p1, p2);
    check L5() else D3();
  D3():
    deopt 10 [r5];
  L5():
    c = `as.logical`(r5);
    if c then L6() else L0();
  L0():
    goto L1();
  L1():
    checkMethodUsageEnv = ldf checkMethodUsageEnv;
    check L10() else D6();
  L6():
    stop = ldf stop;
    check L7() else D4();
  D4():
    deopt 12 [];
  D6():
    deopt 20 [];
  L7():
    r6 = dyn stop[, domain]("package must be loaded", NA_LGL);
    check L8() else D5();
  L10():
    p5 = prom<V +>{
      isNamespaceLoaded = ldf isNamespaceLoaded;
      p3 = prom<V +>{
        pack3 = ld pack;
        pack4 = force? pack3;
        checkMissing(pack4);
        return pack4;
      };
      r9 = dyn isNamespaceLoaded(p3);
      c1 = `as.logical`(r9);
      if c1 then L2() else L0();
    L0():
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L4() else L5();
    L2():
      getNamespace = ldf getNamespace;
      p4 = prom<V +>{
        pack5 = ld pack;
        pack6 = force? pack5;
        checkMissing(pack6);
        return pack6;
      };
      r11 = dyn getNamespace(p4);
      return r11;
    L1(r13):
      return r13;
    L4():
      pname2 = ld pname;
      pname3 = force? pname2;
      checkMissing(pname3);
      as_environment = ldf `as.environment` in base;
      r14 = dyn as_environment(pname3);
      goto L1(r14);
    L5():
      r12 = dyn base(<sym pname>);
      goto L1(r12);
    };
    ddd1 = ld `...`;
    r16 = dyn checkMethodUsageEnv[, `...`](p5, ddd1);
    check L11() else D7();
  D5():
    deopt 16 [r6];
  D7():
    deopt 23 [r16];
  L8():
    goto L1();
  L11():
    popenv;
    return r16;
  }
}