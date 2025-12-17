fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2217123378;
    st make_translations_pkg = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2217123378(srcdir, outDir, append) {
  (reg srcdir:*, reg outDir:*, reg append:*) -+> V { var srcdir:*, var outDir:*, reg outDir_isMissing:L, reg outDir_orDefault:*, var append:*, reg append_isMissing:L, reg append_orDefault:*, reg file_path:cls, reg srcdir1:*, reg srcdir2:V, reg p:p(V +), reg r1:V, reg file_path1:cls, reg tempdir:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg dir_create:cls, reg dest:*, reg dest1:V, reg p2:p(V +), reg r6:V, reg file_copy:cls, reg file_path2:cls, reg src:*, reg src1:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg dest2:*, reg dest3:V, reg p5:p(V +), reg r11:V, reg readLines:cls, reg file_path3:cls, reg src2:*, reg src3:V, reg p6:p(V +), reg r13:V, reg p7:p(V +), reg r15:V, reg getRversion:cls, reg r16:V, reg gsub:cls, reg ver:*, reg ver1:V, reg p8:p(V +), reg lines:*, reg lines1:V, reg p9:p(V +), reg r19:V, reg paste0:cls, reg lines2:*, reg lines3:V, reg c:L, reg lines5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r20:V, reg p10:p(V +), reg append1:*, reg append2:V, reg p11:p(V +), reg r23:V, reg l:*, reg c1:L, reg r25:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r28:V, reg sym:cls, reg base:cls, reg guard:L, reg r29:V, reg r30:V, reg getRversion1:cls, reg r31:V, reg unclass:cls, reg r32:V, reg c2:L, reg r34:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r35:V, reg sprintf:cls, reg ver2:*, reg ver3:V, reg c3:L, reg ver5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r36:V, reg p12:p(V +), reg ver6:*, reg ver7:V, reg c4:L, reg ver9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r38:V, reg p13:p(V +), reg ver10:*, reg ver11:V, reg c5:L, reg ver13:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r40:V, reg p14:p(V +), reg ver14:*, reg ver15:V, reg c6:L, reg ver17:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r42:V, reg r43:V, reg p15:p(V +), reg r45:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r46:V, reg r47:V, reg lines6:*, reg lines7:V, reg deps:*, reg deps1:V, reg c7:cls, reg r48:V, reg writeLines:cls, reg lines8:*, reg lines9:V, reg p16:p(V +), reg file_path4:cls, reg dest4:*, reg dest5:V, reg p17:p(V +), reg r51:V, reg p18:p(V +), reg r53:V, reg shQuote:cls, reg file_path5:cls, reg R_home:cls, reg r54:V, reg p19:p(V +), reg r56:V, reg p20:p(V +), reg r58:V, reg paste1:cls, reg cmd:*, reg cmd1:V, reg p21:p(V +), reg shQuote1:cls, reg dest6:*, reg dest7:V, reg p22:p(V +), reg r61:V, reg p23:p(V +), reg r63:V, reg system:cls, reg cmd2:*, reg cmd3:V, reg p24:p(V +), reg r65:V, reg r66:V, reg c8:L, reg stop:cls, reg r67:V, reg Sys_glob:cls, reg file_path6:cls, reg tempdir1:cls, reg r69:V, reg p25:p(V +), reg r71:V, reg p26:p(V +), reg r73:V, reg file_rename:cls, reg tarball:*, reg tarball1:V, reg p27:p(V +), reg file_path7:cls, reg outDir1:*, reg outDir2:V, reg p28:p(V +), reg basename:cls, reg tarball2:*, reg tarball3:V, reg p29:p(V +), reg r77:V, reg p30:p(V +), reg r79:V, reg p31:p(V +), reg r81:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r82:V, reg r83:V, reg invisible:cls, reg r84:V |
    mkenv;
    st srcdir = srcdir;
    outDir_isMissing = missing.0(outDir);
    if outDir_isMissing then L0(".") else L0(outDir);
  L0(outDir_orDefault):
    st outDir = outDir_orDefault;
    append_isMissing = missing.0(append);
    if append_isMissing then L1("-1") else L1(append);
  L1(append_orDefault):
    st append = append_orDefault;
    file_path = ldf `file.path`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      srcdir1 = ld srcdir;
      srcdir2 = force? srcdir1;
      checkMissing(srcdir2);
      return srcdir2;
    };
    r1 = dyn file_path(p, "src/library/translations");
    check L10() else D1();
  D1():
    deopt 4 [r1];
  L10():
    st src = r1;
    file_path1 = ldf `file.path`;
    check L11() else D2();
  D2():
    deopt 7 [];
  L11():
    p1 = prom<V +>{
      tempdir = ldf tempdir;
      r2 = dyn tempdir();
      return r2;
    };
    r4 = dyn file_path1(p1, "translations");
    check L12() else D3();
  D3():
    deopt 10 [r4];
  L12():
    st dest = r4;
    dir_create = ldf `dir.create`;
    check L13() else D4();
  D4():
    deopt 13 [];
  L13():
    p2 = prom<V +>{
      dest = ld dest;
      dest1 = force? dest;
      checkMissing(dest1);
      return dest1;
    };
    r6 = dyn dir_create(p2, FALSE);
    check L14() else D5();
  D5():
    deopt 16 [r6];
  L14():
    file_copy = ldf `file.copy`;
    check L15() else D6();
  D6():
    deopt 18 [];
  L15():
    p4 = prom<V +>{
      file_path2 = ldf `file.path`;
      p3 = prom<V +>{
        src = ld src;
        src1 = force? src;
        checkMissing(src1);
        return src1;
      };
      r8 = dyn file_path2(p3, "inst");
      return r8;
    };
    p5 = prom<V +>{
      dest2 = ld dest;
      dest3 = force? dest2;
      checkMissing(dest3);
      return dest3;
    };
    r11 = dyn file_copy[, , recursive](p4, p5, TRUE);
    check L16() else D7();
  D7():
    deopt 23 [r11];
  L16():
    readLines = ldf readLines;
    check L17() else D8();
  D8():
    deopt 25 [];
  L17():
    p7 = prom<V +>{
      file_path3 = ldf `file.path`;
      p6 = prom<V +>{
        src2 = ld src;
        src3 = force? src2;
        checkMissing(src3);
        return src3;
      };
      r13 = dyn file_path3(p6, "DESCRIPTION.in");
      return r13;
    };
    r15 = dyn readLines(p7);
    check L18() else D9();
  D9():
    deopt 27 [r15];
  L18():
    st lines = r15;
    getRversion = ldf getRversion;
    check L19() else D10();
  D10():
    deopt 30 [];
  L19():
    r16 = dyn getRversion();
    check L20() else D11();
  D11():
    deopt 31 [r16];
  L20():
    st ver = r16;
    gsub = ldf gsub;
    check L21() else D12();
  D12():
    deopt 34 [];
  L21():
    p8 = prom<V +>{
      ver = ld ver;
      ver1 = force? ver;
      checkMissing(ver1);
      return ver1;
    };
    p9 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    r19 = dyn gsub[, , , fixed]("@VERSION@", p8, p9, TRUE);
    check L22() else D13();
  D13():
    deopt 40 [r19];
  L22():
    st lines = r19;
    paste0 = ldf paste0;
    check L23() else D14();
  D14():
    deopt 43 [];
  L23():
    p10 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      c = `is.object`(lines3);
      if c then L1() else L2(lines3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", lines3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(lines5):
      __ = ldf `[` in base;
      r20 = dyn __(lines5, 2.0);
      goto L0(r20);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p11 = prom<V +>{
      append1 = ld append;
      append2 = force? append1;
      checkMissing(append2);
      return append2;
    };
    r23 = dyn paste0(p10, p11);
    check L24() else D15();
  D15():
    deopt 46 [r23];
  L24():
    l = ld lines;
    c1 = `is.object`(l);
    if c1 then L25() else L26(r23, l);
  L2(dx3):
    st lines = dx3;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L25():
    dr2 = tryDispatchBuiltin.0("[<-", l, r23);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(r23, dr2);
  L26(r25, l2):
    ___ = ldf `[<-` in base;
    r28 = dyn ___(l2, r23, 2.0);
    goto L2(r28);
  L3(r30):
    c2 = `is.object`(r30);
    if c2 then L33() else L34(r30);
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L28():
    getRversion1 = ldf getRversion;
    check L30() else D16();
  L29():
    r29 = dyn base(<lang getRversion()>);
    goto L3(r29);
  D16():
    deopt 55 [];
  L4(dx5):
    st ver = dx5;
    sprintf = ldf sprintf;
    check L36() else D19();
  L30():
    r31 = dyn getRversion1();
    check L31() else D17();
  L33():
    dr4 = tryDispatchBuiltin.1("[[", r30);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(dr4);
  L34(r34):
    __1 = ldf `[[` in base;
    r35 = dyn __1(r34, 1.0);
    goto L4(r35);
  D17():
    deopt 56 [r31];
  D19():
    deopt 64 [];
  L31():
    unclass = ldf unclass in base;
    r32 = dyn unclass(r31);
    check L32() else D18();
  L35():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx4);
  L36():
    p12 = prom<V +>{
      ver2 = ld ver;
      ver3 = force? ver2;
      checkMissing(ver3);
      c3 = `is.object`(ver3);
      if c3 then L1() else L2(ver3);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", ver3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(ver5):
      __2 = ldf `[` in base;
      r36 = dyn __2(ver5, 1.0);
      goto L0(r36);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p13 = prom<V +>{
      ver6 = ld ver;
      ver7 = force? ver6;
      checkMissing(ver7);
      c4 = `is.object`(ver7);
      if c4 then L1() else L2(ver7);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", ver7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(ver9):
      __3 = ldf `[` in base;
      r38 = dyn __3(ver9, 2.0);
      goto L0(r38);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p14 = prom<V +>{
      ver10 = ld ver;
      ver11 = force? ver10;
      checkMissing(ver11);
      c5 = `is.object`(ver11);
      if c5 then L1() else L2(ver11);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", ver11);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(ver13):
      __4 = ldf `[` in base;
      r40 = dyn __4(ver13, 1.0);
      goto L0(r40);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p15 = prom<V +>{
      ver14 = ld ver;
      ver15 = force? ver14;
      checkMissing(ver15);
      c6 = `is.object`(ver15);
      if c6 then L1() else L2(ver15);
    L0(dx13):
      r43 = `+`(dx13, 1.0);
      return r43;
    L1():
      dr12 = tryDispatchBuiltin.1("[", ver15);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(ver17):
      __5 = ldf `[` in base;
      r42 = dyn __5(ver17, 2.0);
      goto L0(r42);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r45 = dyn sprintf("Depends: R (>= %s.%d.0), R (< %d.%d.0)", p12, p13, p14, p15);
    check L37() else D20();
  D18():
    deopt 58 [r32];
  D20():
    deopt 70 [r45];
  L32():
    goto L3(r32);
  L37():
    st deps = r45;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L5(r47):
    st lines = r47;
    writeLines = ldf writeLines;
    check L43() else D24();
  L38():
    lines6 = ld lines;
    check L40() else D21();
  L39():
    r46 = dyn base1(<sym lines>, <sym deps>);
    goto L5(r46);
  D21():
    deopt 74 [lines6];
  D24():
    deopt 82 [];
  L40():
    lines7 = force? lines6;
    checkMissing(lines7);
    deps = ld deps;
    check L41() else D22();
  L43():
    p16 = prom<V +>{
      lines8 = ld lines;
      lines9 = force? lines8;
      checkMissing(lines9);
      return lines9;
    };
    p18 = prom<V +>{
      file_path4 = ldf `file.path`;
      p17 = prom<V +>{
        dest4 = ld dest;
        dest5 = force? dest4;
        checkMissing(dest5);
        return dest5;
      };
      r51 = dyn file_path4(p17, "DESCRIPTION");
      return r51;
    };
    r53 = dyn writeLines(p16, p18);
    check L44() else D25();
  D22():
    deopt 76 [deps];
  D25():
    deopt 85 [r53];
  L41():
    deps1 = force? deps;
    checkMissing(deps1);
    c7 = ldf c in base;
    r48 = dyn c7(lines7, deps1);
    check L42() else D23();
  L44():
    shQuote = ldf shQuote;
    check L45() else D26();
  D23():
    deopt 79 [r48];
  D26():
    deopt 87 [];
  L42():
    goto L5(r48);
  L45():
    p20 = prom<V +>{
      file_path5 = ldf `file.path`;
      p19 = prom<V +>{
        R_home = ldf `R.home`;
        r54 = dyn R_home();
        return r54;
      };
      r56 = dyn file_path5(p19, "bin", "R");
      return r56;
    };
    r58 = dyn shQuote(p20);
    check L46() else D27();
  D27():
    deopt 89 [r58];
  L46():
    st cmd = r58;
    paste1 = ldf paste;
    check L47() else D28();
  D28():
    deopt 92 [];
  L47():
    p21 = prom<V +>{
      cmd = ld cmd;
      cmd1 = force? cmd;
      checkMissing(cmd1);
      return cmd1;
    };
    p23 = prom<V +>{
      shQuote1 = ldf shQuote;
      p22 = prom<V +>{
        dest6 = ld dest;
        dest7 = force? dest6;
        checkMissing(dest7);
        return dest7;
      };
      r61 = dyn shQuote1(p22);
      return r61;
    };
    r63 = dyn paste1(p21, "CMD", "build", p23);
    check L48() else D29();
  D29():
    deopt 97 [r63];
  L48():
    st cmd = r63;
    system = ldf system;
    check L49() else D30();
  D30():
    deopt 100 [];
  L49():
    p24 = prom<V +>{
      cmd2 = ld cmd;
      cmd3 = force? cmd2;
      checkMissing(cmd3);
      return cmd3;
    };
    r65 = dyn system(p24);
    check L50() else D31();
  D31():
    deopt 102 [r65];
  L50():
    r66 = `!=`(r65, 0);
    c8 = `as.logical`(r66);
    if c8 then L51() else L6();
  L6():
    goto L7();
  L7():
    Sys_glob = ldf `Sys.glob`;
    check L55() else D34();
  L51():
    stop = ldf stop;
    check L52() else D32();
  D32():
    deopt 106 [];
  D34():
    deopt 112 [];
  L52():
    r67 = dyn stop("R CMD build failed");
    check L53() else D33();
  L55():
    p26 = prom<V +>{
      file_path6 = ldf `file.path`;
      p25 = prom<V +>{
        tempdir1 = ldf tempdir;
        r69 = dyn tempdir1();
        return r69;
      };
      r71 = dyn file_path6(p25, "translations_*.tar.gz");
      return r71;
    };
    r73 = dyn Sys_glob(p26);
    check L56() else D35();
  D33():
    deopt 108 [r67];
  D35():
    deopt 114 [r73];
  L53():
    goto L7();
  L56():
    st tarball = r73;
    file_rename = ldf `file.rename`;
    check L57() else D36();
  D36():
    deopt 117 [];
  L57():
    p27 = prom<V +>{
      tarball = ld tarball;
      tarball1 = force? tarball;
      checkMissing(tarball1);
      return tarball1;
    };
    p31 = prom<V +>{
      file_path7 = ldf `file.path`;
      p28 = prom<V +>{
        outDir1 = ld outDir;
        outDir2 = force? outDir1;
        checkMissing(outDir2);
        return outDir2;
      };
      p30 = prom<V +>{
        basename = ldf basename;
        p29 = prom<V +>{
          tarball2 = ld tarball;
          tarball3 = force? tarball2;
          checkMissing(tarball3);
          return tarball3;
        };
        r77 = dyn basename(p29);
        return r77;
      };
      r79 = dyn file_path7(p28, p30);
      return r79;
    };
    r81 = dyn file_rename(p27, p31);
    check L58() else D37();
  D37():
    deopt 120 [r81];
  L58():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L8(r83):
    popenv;
    return r83;
  L59():
    invisible = ldf invisible in base;
    r84 = dyn invisible();
    check L61() else D38();
  L60():
    r82 = dyn base2();
    goto L8(r82);
  D38():
    deopt 124 [r84];
  L61():
    goto L8(r84);
  }
}