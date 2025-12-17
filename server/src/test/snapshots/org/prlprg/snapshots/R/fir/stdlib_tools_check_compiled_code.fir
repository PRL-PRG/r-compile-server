fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st check_compiled_code = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg config_val_to_logical:cls, reg Sys_getenv:cls, reg r1:V, reg p:p(V +), reg r3:V, reg config_val_to_logical1:cls, reg Sys_getenv1:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg r7:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg r_arch:*, reg r_arch1:V, reg nzchar:cls, reg r10:V, reg c1:L, reg Sys_glob:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r_arch2:*, reg r_arch3:V, reg p3:p(V +), reg sprintf:cls, reg _Platform4:*, reg _Platform5:V, reg c2:L, reg _Platform7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg r20:V, reg Sys_glob1:cls, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p7:p(V +), reg sprintf1:cls, reg _Platform8:*, reg _Platform9:V, reg c3:L, reg _Platform11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r22:V, reg p8:p(V +), reg r24:V, reg p9:p(V +), reg r26:V, reg p10:p(V +), reg r28:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r29:V, reg r30:V, reg so_files:*, reg so_files1:V, reg length:cls, reg r31:V, reg r32:V, reg c4:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg invisible:cls, reg r35:V, reg Filter:cls, reg length1:*, reg length2:V, reg p11:p(V +), reg lapply:cls, reg so_files2:*, reg so_files3:V, reg p12:p(V +), reg check_so_symbols:*, reg check_so_symbols1:V, reg p13:p(V +), reg r41:V, reg p14:p(V +), reg r43:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg r45:V, reg r_arch4:*, reg r_arch5:V, reg nzchar1:cls, reg r46:V, reg c5:L, reg file_path2:cls, reg dir5:*, reg dir6:V, reg p15:p(V +), reg r_arch6:*, reg r_arch7:V, reg p16:p(V +), reg r49:V, reg r50:V, reg file_path3:cls, reg dir7:*, reg dir8:V, reg p17:p(V +), reg r52:V, reg file_test:cls, reg objects_symbol_tables_file:*, reg objects_symbol_tables_file1:V, reg p18:p(V +), reg r54:V, reg c6:L, reg readRDS:cls, reg objects_symbol_tables_file2:*, reg objects_symbol_tables_file3:V, reg p19:p(V +), reg r56:V, reg Filter1:cls, reg length3:*, reg length4:V, reg p20:p(V +), reg lapply1:cls, reg bad:*, reg bad1:V, reg p21:p(V +), reg compare:*, reg compare1:V, reg p22:p(V +), reg r60:V, reg p23:p(V +), reg r62:V, reg useST:*, reg useST1:V, reg c7:L, reg cat:cls, reg r64:V, reg lapply2:cls, reg lapply3:cls, reg so_files4:*, reg so_files5:V, reg p24:p(V +), reg check_so_symbols2:*, reg check_so_symbols3:V, reg p25:p(V +), reg r67:V, reg p26:p(V +), reg r69:cls, reg p27:p(V +), reg r71:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r72:V, reg r73:V, reg bad2:*, reg bad3:V, reg Filter2:cls, reg length5:*, reg length6:V, reg p28:p(V +), reg nAPIs:*, reg nAPIs1:V, reg p29:p(V +), reg r76:V, reg c8:cls, reg r77:V, reg useSR:*, reg useSR1:V, reg c9:L, reg lapply4:cls, reg lapply5:cls, reg so_files6:*, reg so_files7:V, reg p30:p(V +), reg check_so_symbols4:*, reg check_so_symbols5:V, reg p31:p(V +), reg r80:V, reg p32:p(V +), reg r82:cls, reg p33:p(V +), reg r84:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r85:V, reg r86:V, reg bad4:*, reg bad5:V, reg Filter3:cls, reg length7:*, reg length8:V, reg p34:p(V +), reg nRS:*, reg nRS1:V, reg p35:p(V +), reg r89:V, reg c10:cls, reg r90:V, reg l:*, reg class__:cls, reg r92:V, reg bad6:*, reg bad7:V |
    mkenv;
    st dir = dir;
    _Platform = ld `.Platform`;
    check L17() else D0();
  D0():
    deopt 0 [_Platform];
  L17():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L19() else L20(_Platform1);
  L18(dx1):
    st r_arch = dx1;
    config_val_to_logical = ldf config_val_to_logical;
    check L22() else D1();
  L19():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(_Platform3):
    r = `$`(_Platform3, <sym r_arch>);
    goto L18(r);
  D1():
    deopt 5 [];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L22():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r1 = dyn Sys_getenv("_R_SHLIB_BUILD_OBJECTS_SYMBOL_TABLES_", "FALSE");
      return r1;
    };
    r3 = dyn config_val_to_logical(p);
    check L23() else D2();
  D2():
    deopt 7 [r3];
  L23():
    st useST = r3;
    config_val_to_logical1 = ldf config_val_to_logical;
    check L24() else D3();
  D3():
    deopt 10 [];
  L24():
    p1 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r4 = dyn Sys_getenv1("_R_CHECK_NATIVE_ROUTINE_REGISTRATION_", "FALSE");
      return r4;
    };
    r6 = dyn config_val_to_logical1(p1);
    check L25() else D4();
  D4():
    deopt 12 [r6];
  L25():
    st useSR = r6;
    r7 = clos inner2501545716;
    st compare = r7;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r9):
    c1 = `as.logical`(r9);
    if c1 then L30() else L1();
  L26():
    r_arch = ld r_arch;
    check L28() else D5();
  L27():
    r8 = dyn base(<sym r_arch>);
    goto L0(r8);
  D5():
    deopt 19 [r_arch];
  L1():
    Sys_glob1 = ldf `Sys.glob`;
    check L34() else D9();
  L2(r20):
    st so_files = r20;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L28():
    r_arch1 = force? r_arch;
    checkMissing(r_arch1);
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(r_arch1);
    check L29() else D6();
  L30():
    Sys_glob = ldf `Sys.glob`;
    check L31() else D7();
  D6():
    deopt 22 [r10];
  D7():
    deopt 24 [];
  D9():
    deopt 28 [];
  L3(r30):
    r32 = `!`(r30);
    c4 = `as.logical`(r32);
    if c4 then L40() else L4();
  L29():
    goto L0(r10);
  L31():
    p6 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      p3 = prom<V +>{
        r_arch2 = ld r_arch;
        r_arch3 = force? r_arch2;
        checkMissing(r_arch3);
        return r_arch3;
      };
      p5 = prom<V +>{
        sprintf = ldf sprintf;
        p4 = prom<V +>{
          _Platform4 = ld `.Platform`;
          _Platform5 = force? _Platform4;
          checkMissing(_Platform5);
          c2 = `is.object`(_Platform5);
          if c2 then L1() else L2(_Platform5);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("$", _Platform5);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(_Platform7):
          r13 = `$`(_Platform7, <sym dynlib.ext>);
          goto L0(r13);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r15 = dyn sprintf("*%s", p4);
        return r15;
      };
      r17 = dyn file_path(p2, "libs", p3, p5);
      return r17;
    };
    r19 = dyn Sys_glob(p6);
    check L32() else D8();
  L34():
    p10 = prom<V +>{
      file_path1 = ldf `file.path`;
      p7 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      p9 = prom<V +>{
        sprintf1 = ldf sprintf;
        p8 = prom<V +>{
          _Platform8 = ld `.Platform`;
          _Platform9 = force? _Platform8;
          checkMissing(_Platform9);
          c3 = `is.object`(_Platform9);
          if c3 then L1() else L2(_Platform9);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("$", _Platform9);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(_Platform11):
          r22 = `$`(_Platform11, <sym dynlib.ext>);
          goto L0(r22);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r24 = dyn sprintf1("*%s", p8);
        return r24;
      };
      r26 = dyn file_path1(p7, "libs", p9);
      return r26;
    };
    r28 = dyn Sys_glob1(p10);
    check L35() else D10();
  L36():
    so_files = ld so_files;
    check L38() else D11();
  L37():
    r29 = dyn base1(<sym so_files>);
    goto L3(r29);
  D8():
    deopt 26 [r19];
  D10():
    deopt 30 [r28];
  D11():
    deopt 34 [so_files];
  L4():
    Filter = ldf Filter;
    check L46() else D14();
  L32():
    goto L2(r19);
  L35():
    goto L2(r28);
  L38():
    so_files1 = force? so_files;
    checkMissing(so_files1);
    length = ldf length in base;
    r31 = dyn length(so_files1);
    check L39() else D12();
  L40():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  D12():
    deopt 37 [r31];
  D14():
    deopt 48 [];
  L5(r34):
    popenv;
    return r34;
  L39():
    goto L3(r31);
  L41():
    invisible = ldf invisible in base;
    r35 = dyn invisible(NULL);
    check L43() else D13();
  L42():
    r33 = dyn base2(NULL);
    goto L5(r33);
  L46():
    p11 = prom<V +>{
      length1 = ld length;
      length2 = force? length1;
      checkMissing(length2);
      return length2;
    };
    p14 = prom<V +>{
      lapply = ldf lapply;
      p12 = prom<V +>{
        so_files2 = ld so_files;
        so_files3 = force? so_files2;
        checkMissing(so_files3);
        return so_files3;
      };
      p13 = prom<V +>{
        check_so_symbols = ld check_so_symbols;
        check_so_symbols1 = force? check_so_symbols;
        checkMissing(check_so_symbols1);
        return check_so_symbols1;
      };
      r41 = dyn lapply(p12, p13);
      return r41;
    };
    r43 = dyn Filter(p11, p14);
    check L47() else D15();
  D13():
    deopt 43 [r35];
  D15():
    deopt 51 [r43];
  L43():
    goto L5(r35);
  L47():
    st bad = r43;
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L7(r45):
    c5 = `as.logical`(r45);
    if c5 then L52() else L8();
  L48():
    r_arch4 = ld r_arch;
    check L50() else D16();
  L49():
    r44 = dyn base3(<sym r_arch>);
    goto L7(r44);
  D16():
    deopt 55 [r_arch4];
  L8():
    file_path3 = ldf `file.path`;
    check L56() else D20();
  L9(r50):
    st objects_symbol_tables_file = r50;
    file_test = ldf file_test;
    check L58() else D22();
  L50():
    r_arch5 = force? r_arch4;
    checkMissing(r_arch5);
    nzchar1 = ldf nzchar in base;
    r46 = dyn nzchar1(r_arch5);
    check L51() else D17();
  L52():
    file_path2 = ldf `file.path`;
    check L53() else D18();
  D17():
    deopt 58 [r46];
  D18():
    deopt 60 [];
  D20():
    deopt 67 [];
  D22():
    deopt 74 [];
  L51():
    goto L7(r46);
  L53():
    p15 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    p16 = prom<V +>{
      r_arch6 = ld r_arch;
      r_arch7 = force? r_arch6;
      checkMissing(r_arch7);
      return r_arch7;
    };
    r49 = dyn file_path2(p15, "libs", p16, "symbols.rds");
    check L54() else D19();
  L56():
    p17 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r52 = dyn file_path3(p17, "libs", "symbols.rds");
    check L57() else D21();
  L58():
    p18 = prom<V +>{
      objects_symbol_tables_file = ld objects_symbol_tables_file;
      objects_symbol_tables_file1 = force? objects_symbol_tables_file;
      checkMissing(objects_symbol_tables_file1);
      return objects_symbol_tables_file1;
    };
    r54 = dyn file_test("-f", p18);
    check L59() else D23();
  D19():
    deopt 65 [r49];
  D21():
    deopt 71 [r52];
  D23():
    deopt 77 [r54];
  L54():
    goto L9(r49);
  L57():
    goto L9(r52);
  L59():
    c6 = `as.logical`(r54);
    if c6 then L60() else L10();
  L10():
    useST = ld useST;
    check L66() else D28();
  L11():
    lapply2 = ldf lapply;
    check L71() else D31();
  L60():
    readRDS = ldf readRDS;
    check L61() else D24();
  D24():
    deopt 79 [];
  D28():
    deopt 89 [useST];
  D31():
    deopt 98 [];
  L61():
    p19 = prom<V +>{
      objects_symbol_tables_file2 = ld objects_symbol_tables_file;
      objects_symbol_tables_file3 = force? objects_symbol_tables_file2;
      checkMissing(objects_symbol_tables_file3);
      return objects_symbol_tables_file3;
    };
    r56 = dyn readRDS(p19);
    check L62() else D25();
  L66():
    useST1 = force? useST;
    checkMissing(useST1);
    c7 = `as.logical`(useST1);
    if c7 then L67() else L12();
  L71():
    p26 = prom<V +>{
      lapply3 = ldf lapply;
      p24 = prom<V +>{
        so_files4 = ld so_files;
        so_files5 = force? so_files4;
        checkMissing(so_files5);
        return so_files5;
      };
      p25 = prom<V +>{
        check_so_symbols2 = ld check_so_symbols;
        check_so_symbols3 = force? check_so_symbols2;
        checkMissing(check_so_symbols3);
        return check_so_symbols3;
      };
      r67 = dyn lapply3(p24, p25);
      return r67;
    };
    p27 = prom<V +>{
      r69 = clos inner2501545716;
      return r69;
    };
    r71 = dyn lapply2(p26, p27);
    check L72() else D32();
  D25():
    deopt 81 [r56];
  D32():
    deopt 101 [r71];
  L12():
    goto L11();
  L62():
    st tables = r56;
    Filter1 = ldf Filter;
    check L63() else D26();
  L67():
    cat = ldf cat;
    check L68() else D29();
  L72():
    st nAPIs = r71;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L73() else L74();
  D26():
    deopt 84 [];
  D29():
    deopt 92 [];
  L13(r73):
    st bad = r73;
    useSR = ld useSR;
    check L79() else D37();
  L63():
    p20 = prom<V +>{
      length3 = ld length;
      length4 = force? length3;
      checkMissing(length4);
      return length4;
    };
    p23 = prom<V +>{
      lapply1 = ldf lapply;
      p21 = prom<V +>{
        bad = ld bad;
        bad1 = force? bad;
        checkMissing(bad1);
        return bad1;
      };
      p22 = prom<V +>{
        compare = ld compare;
        compare1 = force? compare;
        checkMissing(compare1);
        return compare1;
      };
      r60 = dyn lapply1(p21, p22);
      return r60;
    };
    r62 = dyn Filter1(p20, p23);
    check L64() else D27();
  L68():
    r64 = dyn cat("Note: information on .o files is not available\n");
    check L69() else D30();
  L73():
    bad2 = ld bad;
    check L75() else D33();
  L74():
    r72 = dyn base4(<sym bad>, <lang Filter(length, nAPIs)>);
    goto L13(r72);
  D27():
    deopt 87 [r62];
  D30():
    deopt 94 [r64];
  D33():
    deopt 105 [bad2];
  D37():
    deopt 115 [useSR];
  L64():
    st bad = r62;
    goto L11();
  L69():
    goto L11();
  L75():
    bad3 = force? bad2;
    checkMissing(bad3);
    Filter2 = ldf Filter;
    check L76() else D34();
  L79():
    useSR1 = force? useSR;
    checkMissing(useSR1);
    c9 = `as.logical`(useSR1);
    if c9 then L80() else L14();
  D34():
    deopt 108 [];
  L14():
    goto L16();
  L16():
    l = ld bad;
    class__ = ldf `class<-`;
    check L90() else D44();
  L76():
    p28 = prom<V +>{
      length5 = ld length;
      length6 = force? length5;
      checkMissing(length6);
      return length6;
    };
    p29 = prom<V +>{
      nAPIs = ld nAPIs;
      nAPIs1 = force? nAPIs;
      checkMissing(nAPIs1);
      return nAPIs1;
    };
    r76 = dyn Filter2(p28, p29);
    check L77() else D35();
  L80():
    lapply4 = ldf lapply;
    check L81() else D38();
  D35():
    deopt 111 [r76];
  D38():
    deopt 118 [];
  D44():
    deopt 140 ["check_compiled_code", l, "check_compiled_code"];
  L77():
    c8 = ldf c in base;
    r77 = dyn c8(bad3, r76);
    check L78() else D36();
  L81():
    p32 = prom<V +>{
      lapply5 = ldf lapply;
      p30 = prom<V +>{
        so_files6 = ld so_files;
        so_files7 = force? so_files6;
        checkMissing(so_files7);
        return so_files7;
      };
      p31 = prom<V +>{
        check_so_symbols4 = ld check_so_symbols;
        check_so_symbols5 = force? check_so_symbols4;
        checkMissing(check_so_symbols5);
        return check_so_symbols5;
      };
      r80 = dyn lapply5(p30, p31);
      return r80;
    };
    p33 = prom<V +>{
      r82 = clos inner2501545716;
      return r82;
    };
    r84 = dyn lapply4(p32, p33);
    check L82() else D39();
  L90():
    r92 = dyn class__(l, NULL, "check_compiled_code");
    check L91() else D45();
  D36():
    deopt 113 [r77];
  D39():
    deopt 121 [r84];
  D45():
    deopt 142 ["check_compiled_code", r92];
  L78():
    goto L13(r77);
  L82():
    st nRS = r84;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L83() else L84();
  L91():
    st bad = r92;
    bad6 = ld bad;
    check L92() else D46();
  D46():
    deopt 144 [bad6];
  L15(r86):
    st bad = r86;
    goto L16();
  L83():
    bad4 = ld bad;
    check L85() else D40();
  L84():
    r85 = dyn base5(<sym bad>, <lang Filter(length, nRS)>);
    goto L15(r85);
  L92():
    bad7 = force? bad6;
    checkMissing(bad7);
    popenv;
    return bad7;
  D40():
    deopt 125 [bad4];
  L85():
    bad5 = force? bad4;
    checkMissing(bad5);
    Filter3 = ldf Filter;
    check L86() else D41();
  D41():
    deopt 128 [];
  L86():
    p34 = prom<V +>{
      length7 = ld length;
      length8 = force? length7;
      checkMissing(length8);
      return length8;
    };
    p35 = prom<V +>{
      nRS = ld nRS;
      nRS1 = force? nRS;
      checkMissing(nRS1);
      return nRS1;
    };
    r89 = dyn Filter3(p34, p35);
    check L87() else D42();
  D42():
    deopt 131 [r89];
  L87():
    c10 = ldf c in base;
    r90 = dyn c10(bad5, r89);
    check L88() else D43();
  D43():
    deopt 133 [r90];
  L88():
    goto L15(r90);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg Filter:cls, reg length:*, reg length1:V, reg p:p(V +), reg lapply:cls, reg tables:*, reg tables1:V, reg p1:p(V +), reg r2:cls, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg x1:*, reg x2:V, reg attr:cls, reg r9:V, reg unique:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg unlist:cls, reg symbols:*, reg symbols1:V, reg p4:p(V +), reg r13:V, reg as_character:cls, reg r14:V, reg p5:p(V +), reg r16:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg x12:V, reg r20:V, reg x13:*, reg x14:V, reg c1:L, reg x17:V, reg dr2:V, reg dc1:L, reg dx2:V, reg x20:V, reg dx3:V, reg __:cls, reg r21:V, reg osnames_in_objects:*, reg osnames_in_objects1:V, reg match:cls, reg r22:V, reg is_na:cls, reg r23:V, reg r24:V, reg __1:cls, reg r25:V, reg _file_path_relative_to_dir:cls, reg so:*, reg so1:V, reg p6:p(V +), reg dir:*, reg dir1:V, reg p7:p(V +), reg r28:V, reg l:*, reg attr__:cls, reg r29:V, reg split:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg symbols2:*, reg symbols3:V, reg names:cls, reg r34:V, reg lengths:cls, reg symbols4:*, reg symbols5:V, reg p8:p(V +), reg r36:V, reg rep_int:cls, reg r37:V, reg p9:p(V +), reg unlist1:cls, reg symbols6:*, reg symbols7:V, reg p10:p(V +), reg r40:V, reg p11:p(V +), reg r42:V, reg l1:*, reg attr__1:cls, reg r43:V, reg l2:*, reg class__:cls, reg r44:V, reg x21:*, reg x22:V |
    mkenv;
    st x = x;
    Filter = ldf Filter;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        tables = ld tables;
        tables1 = force? tables;
        checkMissing(tables1);
        return tables1;
      };
      p2 = prom<V +>{
        r2 = clos inner2316593105;
        return r2;
      };
      r4 = dyn lapply(p1, p2);
      return r4;
    };
    r6 = dyn Filter(p, p3);
    check L6() else D1();
  D1():
    deopt 4 [r6];
  L6():
    st symbols = r6;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r8):
    st so = r8;
    unique = ldf unique;
    check L11() else D4();
  L7():
    x1 = ld x;
    check L9() else D2();
  L8():
    r7 = dyn base(<sym x>, "file");
    goto L0(r7);
  D2():
    deopt 8 [x1];
  D4():
    deopt 15 [];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r9 = dyn attr(x2, "file");
    check L10() else D3();
  L11():
    p5 = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      unlist = ldf unlist;
      p4 = prom<V +>{
        symbols = ld symbols;
        symbols1 = force? symbols;
        checkMissing(symbols1);
        return symbols1;
      };
      r13 = dyn unlist(p4);
      as_character = ldf `as.character` in base;
      r14 = dyn as_character(r13);
      goto L0(r14);
    L2():
      r10 = dyn base1(<lang unlist(symbols)>);
      goto L0(r10);
    };
    r16 = dyn unique(p5);
    check L12() else D5();
  D3():
    deopt 12 [r9];
  D5():
    deopt 17 [r16];
  L10():
    goto L0(r9);
  L12():
    st osnames_in_objects = r16;
    x3 = ld x;
    check L13() else D6();
  D6():
    deopt 19 [x3];
  L13():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L14() else L15(x4);
  L1(dx1):
    st x = dx1;
    _file_path_relative_to_dir = ldf `.file_path_relative_to_dir`;
    check L28() else D11();
  L14():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(x6):
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  D11():
    deopt 47 [];
  L2(r18):
    r24 = `!`(r18);
    __1 = ldf `[` in base;
    r25 = dyn __1(x4, r24, <missing>, FALSE);
    goto L1(r25);
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L17():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L18():
    r17 = dyn base2(<lang match(`[`(x, , "osname"), osnames_in_objects)>);
    goto L2(r17);
  L28():
    p6 = prom<V +>{
      so = ld so;
      so1 = force? so;
      checkMissing(so1);
      return so1;
    };
    p7 = prom<V +>{
      dir = ld dir;
      dir1 = force? dir;
      checkMissing(dir1);
      return dir1;
    };
    r28 = dyn _file_path_relative_to_dir(p6, p7, TRUE);
    check L29() else D12();
  D12():
    deopt 51 [r28];
  L3(x12, r20):
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(r20);
    check L27() else D10();
  L19():
    x13 = ld x;
    check L21() else D7();
  L20():
    r19 = dyn base3(<lang `[`(x, , "osname")>, <sym osnames_in_objects>);
    goto L3(x6, r19);
  L29():
    l = ld x;
    attr__ = ldf `attr<-`;
    check L30() else D13();
  D7():
    deopt 25 [x6, x13];
  D10():
    deopt 38 [x12, r23];
  D13():
    deopt 53 [r28, l, r28];
  L21():
    x14 = force? x13;
    checkMissing(x14);
    c1 = `is.object`(x14);
    if c1 then L22() else L23(x6);
  L27():
    goto L2(r23);
  L30():
    r29 = dyn attr__(l, NULL, "file", r28);
    check L31() else D14();
  D14():
    deopt 56 [r28, r29];
  L4(x20, dx3):
    osnames_in_objects = ld osnames_in_objects;
    check L25() else D8();
  L22():
    dr2 = tryDispatchBuiltin.1("[", x14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(x6);
  L23(x17):
    __ = ldf `[` in base;
    r21 = dyn __(x14, <missing>, "osname");
    goto L4(x17, r21);
  L31():
    st x = r29;
    split = ldf split;
    check L32() else D15();
  D8():
    deopt 31 [x20, osnames_in_objects];
  D15():
    deopt 59 [];
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(x6, dx2);
  L25():
    osnames_in_objects1 = force? osnames_in_objects;
    checkMissing(osnames_in_objects1);
    match = ldf match in base;
    r22 = dyn match(dx3, osnames_in_objects1, NA_INT, NULL);
    check L26() else D9();
  L32():
    p9 = prom<V +>{
      sym4 = ldf `rep.int`;
      base4 = ldf `rep.int` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r31):
      return r31;
    L2():
      sym5 = ldf names;
      base5 = ldf names in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r30 = dyn base4(<lang names(symbols)>, <lang lengths(symbols)>);
      goto L0(r30);
    L1(r33):
      lengths = ldf lengths;
      p8 = prom<V +>{
        symbols4 = ld symbols;
        symbols5 = force? symbols4;
        checkMissing(symbols5);
        return symbols5;
      };
      r36 = dyn lengths(p8);
      rep_int = ldf `rep.int` in base;
      r37 = dyn rep_int(r33, r36);
      goto L0(r37);
    L4():
      symbols2 = ld symbols;
      symbols3 = force? symbols2;
      checkMissing(symbols3);
      names = ldf names in base;
      r34 = dyn names(symbols3);
      goto L1(r34);
    L5():
      r32 = dyn base5(<sym symbols>);
      goto L1(r32);
    };
    p11 = prom<V +>{
      unlist1 = ldf unlist;
      p10 = prom<V +>{
        symbols6 = ld symbols;
        symbols7 = force? symbols6;
        checkMissing(symbols7);
        return symbols7;
      };
      r40 = dyn unlist1(p10);
      return r40;
    };
    r42 = dyn split(p9, p11);
    check L33() else D16();
  D9():
    deopt 36 [x20, r22];
  D16():
    deopt 62 [r42];
  L26():
    goto L3(x20, r22);
  L33():
    l1 = ld x;
    attr__1 = ldf `attr<-`;
    check L34() else D17();
  D17():
    deopt 64 [r42, l1, r42];
  L34():
    r43 = dyn attr__1(l1, NULL, "objects", r42);
    check L35() else D18();
  D18():
    deopt 67 [r42, r43];
  L35():
    st x = r43;
    l2 = ld x;
    class__ = ldf `class<-`;
    check L36() else D19();
  D19():
    deopt 72 ["check_so_symbols", l2, "check_so_symbols"];
  L36():
    r44 = dyn class__(l2, NULL, "check_so_symbols");
    check L37() else D20();
  D20():
    deopt 74 ["check_so_symbols", r44];
  L37():
    st x = r44;
    x21 = ld x;
    check L38() else D21();
  D21():
    deopt 76 [x21];
  L38():
    x22 = force? x21;
    checkMissing(x22);
    popenv;
    return x22;
  }
}
fun inner2316593105(tab) {
  (reg tab:*) -+> V { var tab:*, reg tab1:*, reg tab2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg intersect:cls, reg x:*, reg x1:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r1:V, reg p:p(V +), reg nm:*, reg nm1:V, reg p1:p(V +), reg r4:V |
    mkenv;
    st tab = tab;
    tab1 = ld tab;
    check L1() else D0();
  D0():
    deopt 0 [tab1];
  L1():
    tab2 = force? tab1;
    checkMissing(tab2);
    c = `is.object`(tab2);
    if c then L2() else L3();
  L0(dx1):
    st nm = dx1;
    intersect = ldf intersect;
    check L5() else D1();
  L2():
    dr = tryDispatchBuiltin.1("[", tab2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3();
  L3():
    __ = ldf `[` in base;
    r = dyn __(tab2, <missing>, "name");
    goto L0(r);
  D1():
    deopt 8 [];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      c1 = `is.object`(x1);
      if c1 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r1 = dyn __1(x1, <missing>, "osname");
      goto L0(r1);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p1 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    r4 = dyn intersect(p, p1);
    check L6() else D2();
  D2():
    deopt 11 [r4];
  L6():
    popenv;
    return r4;
  }
}