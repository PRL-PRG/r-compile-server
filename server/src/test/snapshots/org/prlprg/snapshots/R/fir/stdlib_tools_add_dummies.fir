fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner886346403;
    st add_dummies = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner886346403(dir, Log) {
  (reg dir:*, reg Log:*) -+> V { var dir:*, var Log:*, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg dir_exists:cls, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg c:L, reg messageLog:cls, reg Log1:*, reg Log2:V, reg p3:p(V +), reg sQuote:cls, reg dir5:*, reg dir6:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg r10:V, reg dir_create:cls, reg dir7:*, reg dir8:V, reg p6:p(V +), reg r14:V, reg dir_exists1:cls, reg dir9:*, reg dir10:V, reg p7:p(V +), reg r16:V, reg r17:V, reg c1:L, reg messageLog1:cls, reg Log3:*, reg Log4:V, reg p8:p(V +), reg sQuote1:cls, reg dir11:*, reg dir12:V, reg p9:p(V +), reg r20:V, reg p10:p(V +), reg r22:V, reg Sys_setenv:cls, reg env_path:cls, reg dir13:*, reg dir14:V, reg p11:p(V +), reg Sys_getenv:cls, reg r26:V, reg p12:p(V +), reg r28:V, reg p13:p(V +), reg r30:V, reg _Platform:*, reg _Platform1:V, reg c2:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r31:V, reg r32:V, reg c3:L, reg writeLines:cls, reg sym:cls, reg base:cls, reg guard:L, reg r33:V, reg r34:V, reg c4:cls, reg r35:V, reg p14:p(V +), reg file_path2:cls, reg dir15:*, reg dir16:V, reg p15:p(V +), reg r38:V, reg p16:p(V +), reg r40:V, reg writeLines1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r41:V, reg r42:V, reg c5:cls, reg r43:V, reg p17:p(V +), reg file_path3:cls, reg dir17:*, reg dir18:V, reg p18:p(V +), reg r46:V, reg p19:p(V +), reg r48:V, reg Sys_chmod:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r49:V, reg r50:V, reg p20:*, reg p21:V, reg p22:*, reg p23:V, reg c6:cls, reg r51:V, reg p24:p(V +), reg r53:V, reg writeLines2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r54:V, reg r55:V, reg c7:cls, reg r56:V, reg p25:p(V +), reg file_path4:cls, reg dir19:*, reg dir20:V, reg p26:p(V +), reg r59:V, reg p27:p(V +), reg r61:V, reg writeLines3:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r62:V, reg r63:V, reg c8:cls, reg r64:V, reg p28:p(V +), reg file_path5:cls, reg dir21:*, reg dir22:V, reg p29:p(V +), reg r67:V, reg p30:p(V +), reg r69:V |
    mkenv;
    st dir = dir;
    st Log = Log;
    file_path = ldf `file.path`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path(p, "R_check_bin");
    check L6() else D1();
  D1():
    deopt 4 [r1];
  L6():
    st dir1 = r1;
    dir_exists = ldf `dir.exists`;
    check L7() else D2();
  D2():
    deopt 7 [];
  L7():
    p2 = prom<V +>{
      file_path1 = ldf `file.path`;
      p1 = prom<V +>{
        dir3 = ld dir1;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r3 = dyn file_path1(p1);
      return r3;
    };
    r5 = dyn dir_exists(p2);
    check L8() else D3();
  D3():
    deopt 9 [r5];
  L8():
    c = `as.logical`(r5);
    if c then L9() else L0();
  L0():
    dir_create = ldf `dir.create`;
    check L14() else D6();
  L9():
    messageLog = ldf messageLog;
    check L10() else D4();
  D4():
    deopt 11 [];
  D6():
    deopt 23 [];
  L10():
    p3 = prom<V +>{
      Log1 = ld Log;
      Log2 = force? Log1;
      checkMissing(Log2);
      return Log2;
    };
    p5 = prom<V +>{
      sQuote = ldf sQuote;
      p4 = prom<V +>{
        dir5 = ld dir1;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r8 = dyn sQuote(p4);
      return r8;
    };
    r10 = dyn messageLog(p3, "directory ", p5, " already exists");
    check L11() else D5();
  L14():
    p6 = prom<V +>{
      dir7 = ld dir1;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r14 = dyn dir_create(p6);
    check L15() else D7();
  D5():
    deopt 16 [r10];
  D7():
    deopt 25 [r14];
  L11():
    popenv;
    return NULL;
  L15():
    dir_exists1 = ldf `dir.exists`;
    check L16() else D8();
  D8():
    deopt 27 [];
  L16():
    p7 = prom<V +>{
      dir9 = ld dir1;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r16 = dyn dir_exists1(p7);
    check L17() else D9();
  D9():
    deopt 29 [r16];
  L17():
    r17 = `!`(r16);
    c1 = `as.logical`(r17);
    if c1 then L18() else L2();
  L2():
    Sys_setenv = ldf `Sys.setenv`;
    check L23() else D12();
  L18():
    messageLog1 = ldf messageLog;
    check L19() else D10();
  D10():
    deopt 32 [];
  D12():
    deopt 44 [];
  L19():
    p8 = prom<V +>{
      Log3 = ld Log;
      Log4 = force? Log3;
      checkMissing(Log4);
      return Log4;
    };
    p10 = prom<V +>{
      sQuote1 = ldf sQuote;
      p9 = prom<V +>{
        dir11 = ld dir1;
        dir12 = force? dir11;
        checkMissing(dir12);
        return dir12;
      };
      r20 = dyn sQuote1(p9);
      return r20;
    };
    r22 = dyn messageLog1(p8, "creation of directory ", p10, " failed");
    check L20() else D11();
  L23():
    p13 = prom<V +>{
      env_path = ldf env_path;
      p11 = prom<V +>{
        dir13 = ld dir1;
        dir14 = force? dir13;
        checkMissing(dir14);
        return dir14;
      };
      p12 = prom<V +>{
        Sys_getenv = ldf `Sys.getenv`;
        r26 = dyn Sys_getenv("PATH");
        return r26;
      };
      r28 = dyn env_path(p11, p12);
      return r28;
    };
    r30 = dyn Sys_setenv[PATH](p13);
    check L24() else D13();
  D11():
    deopt 37 [r22];
  D13():
    deopt 47 [r30];
  L20():
    popenv;
    return NULL;
  L24():
    _Platform = ld `.Platform`;
    check L25() else D14();
  D14():
    deopt 48 [_Platform];
  L25():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c2 = `is.object`(_Platform1);
    if c2 then L27() else L28(_Platform1);
  L26(dx1):
    r32 = `!=`(dx1, "windows");
    c3 = `as.logical`(r32);
    if c3 then L30() else L4();
  L27():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(_Platform3):
    r31 = `$`(_Platform3, <sym OS.type>);
    goto L26(r31);
  L4():
    writeLines2 = ldf writeLines;
    check L38() else D21();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L26(dx);
  L30():
    writeLines = ldf writeLines;
    check L31() else D15();
  D15():
    deopt 54 [];
  D21():
    deopt 69 [];
  L31():
    p14 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r34):
      return r34;
    L1():
      c4 = ldf c in base;
      r35 = dyn c4("echo \"'R' should not be used without a path -- see par. 1.6 of the manual\"", "exit 1");
      goto L0(r35);
    L2():
      r33 = dyn base("echo \"'R' should not be used without a path -- see par. 1.6 of the manual\"", "exit 1");
      goto L0(r33);
    };
    p16 = prom<V +>{
      file_path2 = ldf `file.path`;
      p15 = prom<V +>{
        dir15 = ld dir1;
        dir16 = force? dir15;
        checkMissing(dir16);
        return dir16;
      };
      r38 = dyn file_path2(p15, "R");
      st p1 = r38;
      invisible.0();
      return r38;
    };
    r40 = dyn writeLines(p14, p16);
    check L32() else D16();
  L38():
    p25 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      c7 = ldf c in base;
      r56 = dyn c7("@ECHO OFF", "echo \"'R' should not be used without a path -- see par. 1.6 of the manual\"", "exit /b 1");
      goto L0(r56);
    L2():
      r54 = dyn base3("@ECHO OFF", "echo \"'R' should not be used without a path -- see par. 1.6 of the manual\"", "exit /b 1");
      goto L0(r54);
    };
    p27 = prom<V +>{
      file_path4 = ldf `file.path`;
      p26 = prom<V +>{
        dir19 = ld dir1;
        dir20 = force? dir19;
        checkMissing(dir20);
        return dir20;
      };
      r59 = dyn file_path4(p26, "R.bat");
      st p1 = r59;
      invisible.0();
      return r59;
    };
    r61 = dyn writeLines2(p25, p27);
    check L39() else D22();
  D16():
    deopt 57 [r40];
  D22():
    deopt 72 [r61];
  L32():
    writeLines1 = ldf writeLines;
    check L33() else D17();
  L39():
    writeLines3 = ldf writeLines;
    check L40() else D23();
  D17():
    deopt 59 [];
  D23():
    deopt 74 [];
  L33():
    p17 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      c5 = ldf c in base;
      r43 = dyn c5("echo \"'Rscript' should not be used without a path -- see par. 1.6 of the manual\"", "exit 1");
      goto L0(r43);
    L2():
      r41 = dyn base1("echo \"'Rscript' should not be used without a path -- see par. 1.6 of the manual\"", "exit 1");
      goto L0(r41);
    };
    p19 = prom<V +>{
      file_path3 = ldf `file.path`;
      p18 = prom<V +>{
        dir17 = ld dir1;
        dir18 = force? dir17;
        checkMissing(dir18);
        return dir18;
      };
      r46 = dyn file_path3(p18, "Rscript");
      st p2 = r46;
      invisible.0();
      return r46;
    };
    r48 = dyn writeLines1(p17, p19);
    check L34() else D18();
  L40():
    p28 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r63):
      return r63;
    L1():
      c8 = ldf c in base;
      r64 = dyn c8("@ECHO OFF", "echo \"'Rscript' should not be used without a path -- see par. 1.6 of the manual\"", "exit /b 1");
      goto L0(r64);
    L2():
      r62 = dyn base4("@ECHO OFF", "echo \"'Rscript' should not be used without a path -- see par. 1.6 of the manual\"", "exit /b 1");
      goto L0(r62);
    };
    p30 = prom<V +>{
      file_path5 = ldf `file.path`;
      p29 = prom<V +>{
        dir21 = ld dir1;
        dir22 = force? dir21;
        checkMissing(dir22);
        return dir22;
      };
      r67 = dyn file_path5(p29, "Rscript.bat");
      st p2 = r67;
      invisible.0();
      return r67;
    };
    r69 = dyn writeLines3(p28, p30);
    check L41() else D24();
  D18():
    deopt 62 [r48];
  D24():
    deopt 77 [r69];
  L34():
    Sys_chmod = ldf `Sys.chmod`;
    check L35() else D19();
  L41():
    popenv;
    return r69;
  D19():
    deopt 64 [];
  L35():
    p24 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      p20 = ld p1;
      p21 = force? p20;
      checkMissing(p21);
      p22 = ld p2;
      p23 = force? p22;
      checkMissing(p23);
      c6 = ldf c in base;
      r51 = dyn c6(p21, p23);
      goto L0(r51);
    L2():
      r49 = dyn base2(<sym p1>, <sym p2>);
      goto L0(r49);
    };
    r53 = dyn Sys_chmod(p24, "0755");
    check L36() else D20();
  D20():
    deopt 67 [r53];
  L36():
    popenv;
    return r53;
  }
}