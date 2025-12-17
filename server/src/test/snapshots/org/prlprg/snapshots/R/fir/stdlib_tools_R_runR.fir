fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner34752693;
    st R_runR = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner34752693(cmd, Ropts, env, stdout, stderr, stdin, arch, timeout) {
  (reg cmd:*, reg Ropts:*, reg env:*, reg stdout:*, reg stderr:*, reg stdin:*, reg arch:*, reg timeout:*) -+> V { var cmd:*, reg cmd_isMissing:L, reg cmd_orDefault:*, var Ropts:*, reg Ropts_isMissing:L, reg Ropts_orDefault:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, var stdout:*, reg stdout_isMissing:L, reg stdout_orDefault:*, var stderr:*, reg stderr_isMissing:L, reg stderr_orDefault:*, var stdin:*, reg stdin_isMissing:L, reg stdin_orDefault:*, var arch:*, reg arch_isMissing:L, reg arch_orDefault:*, var timeout:*, reg timeout_isMissing:L, reg timeout_orDefault:*, reg get_timeout:cls, reg timeout1:*, reg timeout2:V, reg p:p(V +), reg r1:V, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg cmd1:*, reg cmd2:V, reg c2:V, reg r6:V, reg c3:L, reg tempfile:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg on_exit:cls, reg r10:V, reg writeLines:cls, reg cmd3:*, reg cmd4:V, reg p1:p(V +), reg Rin:*, reg Rin1:V, reg p2:p(V +), reg r13:V, reg stdin1:*, reg stdin2:V, reg suppressWarnings:cls, reg system2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg arch1:*, reg arch2:V, reg nzchar:cls, reg r17:V, reg c4:L, reg file_path:cls, reg R_home:cls, reg r18:V, reg p3:p(V +), reg arch3:*, reg arch4:V, reg p4:p(V +), reg r21:V, reg file_path1:cls, reg R_home1:cls, reg r22:V, reg p5:p(V +), reg r24:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg Ropts1:*, reg Ropts2:V, reg paste:cls, reg shQuote:cls, reg Rin2:*, reg Rin3:V, reg p7:p(V +), reg r29:V, reg p8:p(V +), reg r31:V, reg c5:cls, reg r32:V, reg p9:p(V +), reg stdout1:*, reg stdout2:V, reg p10:p(V +), reg stderr1:*, reg stderr2:V, reg p11:p(V +), reg env1:*, reg env2:V, reg p12:p(V +), reg timeout3:*, reg timeout4:V, reg p13:p(V +), reg r38:V, reg p14:p(V +), reg r40:V, reg r41:V, reg suppressWarnings1:cls, reg system3:cls, reg file_path2:cls, reg R_home2:cls, reg r42:V, reg p15:p(V +), reg r44:V, reg p16:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg arch5:*, reg arch6:V, reg nzchar1:cls, reg r50:V, reg c6:L, reg paste1:cls, reg arch7:*, reg arch8:V, reg p17:p(V +), reg r52:V, reg r53:V, reg Ropts3:*, reg Ropts4:V, reg c7:cls, reg r54:V, reg p18:p(V +), reg stdout3:*, reg stdout4:V, reg p19:p(V +), reg stderr3:*, reg stderr4:V, reg p20:p(V +), reg stdin3:*, reg stdin4:V, reg p21:p(V +), reg cmd5:*, reg cmd6:V, reg p22:p(V +), reg env3:*, reg env4:V, reg p23:p(V +), reg timeout5:*, reg timeout6:V, reg p24:p(V +), reg r62:V, reg p25:p(V +), reg r64:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r65:V, reg r66:V, reg out:*, reg out1:V, reg identical:cls, reg r67:V, reg c8:L, reg c9:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r68:V, reg c13:L, reg r69:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg c16:L, reg r71:V, reg out2:*, reg out3:V, reg attr:cls, reg r72:V, reg identical1:cls, reg r73:V, reg c17:L, reg c18:V, reg c20:L, reg report_timeout:cls, reg timeout7:*, reg timeout8:V, reg p26:p(V +), reg r75:V, reg out4:*, reg out5:V |
    mkenv;
    cmd_isMissing = missing.0(cmd);
    if cmd_isMissing then L0(NULL) else L0(cmd);
  L0(cmd_orDefault):
    st cmd = cmd_orDefault;
    Ropts_isMissing = missing.0(Ropts);
    if Ropts_isMissing then L1("") else L1(Ropts);
  L1(Ropts_orDefault):
    st Ropts = Ropts_orDefault;
    env_isMissing = missing.0(env);
    if env_isMissing then L2("") else L2(env);
  L2(env_orDefault):
    st env = env_orDefault;
    stdout_isMissing = missing.0(stdout);
    if stdout_isMissing then L3(TRUE) else L3(stdout);
  L3(stdout_orDefault):
    st stdout = stdout_orDefault;
    stderr_isMissing = missing.0(stderr);
    if stderr_isMissing then L4(TRUE) else L4(stderr);
  L4(stderr_orDefault):
    st stderr = stderr_orDefault;
    stdin_isMissing = missing.0(stdin);
    if stdin_isMissing then L5(NULL) else L5(stdin);
  L5(stdin_orDefault):
    st stdin = stdin_orDefault;
    arch_isMissing = missing.0(arch);
    if arch_isMissing then L6("") else L6(arch);
  L6(arch_orDefault):
    st arch = arch_orDefault;
    timeout_isMissing = missing.0(timeout);
    if timeout_isMissing then L7(0.0) else L7(timeout);
  L7(timeout_orDefault):
    st timeout = timeout_orDefault;
    get_timeout = ldf get_timeout;
    check L20() else D0();
  D0():
    deopt 1 [];
  L20():
    p = prom<V +>{
      timeout1 = ld timeout;
      timeout2 = force? timeout1;
      checkMissing(timeout2);
      return timeout2;
    };
    r1 = dyn get_timeout(p);
    check L21() else D1();
  D1():
    deopt 3 [r1];
  L21():
    st timeout = r1;
    _Platform = ld `.Platform`;
    check L22() else D2();
  D2():
    deopt 5 [_Platform];
  L22():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L24() else L25(_Platform1);
  L23(dx1):
    r3 = `==`(dx1, "windows");
    c1 = `as.logical`(r3);
    if c1 then L27() else L8();
  L24():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(_Platform3):
    r2 = `$`(_Platform3, <sym OS.type>);
    goto L23(r2);
  L8():
    suppressWarnings1 = ldf suppressWarnings;
    check L43() else D11();
  L13(r41):
    st out = r41;
    sym6 = ldf identical;
    base6 = ldf identical in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L45() else L46();
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L27():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  D11():
    deopt 36 [];
  L9(r5):
    r6 = `!`(r5);
    c3 = `as.logical`(r6);
    if c3 then L31() else L10();
  L14(r66):
    c8 = `as.logical`(r66);
    if c8 then L15(c8) else L49();
  L28():
    cmd1 = ld cmd;
    check L30() else D3();
  L29():
    r4 = dyn base(<sym cmd>);
    goto L9(r4);
  L43():
    p25 = prom<V +>{
      system3 = ldf system2;
      p16 = prom<V +>{
        file_path2 = ldf `file.path`;
        p15 = prom<V +>{
          R_home2 = ldf `R.home`;
          r42 = dyn R_home2("bin");
          return r42;
        };
        r44 = dyn file_path2(p15, "R");
        return r44;
      };
      p18 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L4() else L5();
      L0(r47):
        return r47;
      L4():
        sym5 = ldf nzchar;
        base5 = ldf nzchar in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L6() else L7();
      L5():
        r46 = dyn base4(<lang if(nzchar(arch), paste0("--arch=", arch))>, <sym Ropts>);
        goto L0(r46);
      L1(r49):
        c6 = `as.logical`(r49);
        if c6 then L8() else L2();
      L6():
        arch5 = ld arch;
        arch6 = force? arch5;
        checkMissing(arch6);
        nzchar1 = ldf nzchar in base;
        r50 = dyn nzchar1(arch6);
        goto L1(r50);
      L7():
        r48 = dyn base5(<sym arch>);
        goto L1(r48);
      L2():
        goto L3(NULL);
      L3(r53):
        Ropts3 = ld Ropts;
        Ropts4 = force? Ropts3;
        checkMissing(Ropts4);
        c7 = ldf c in base;
        r54 = dyn c7(r53, Ropts4);
        goto L0(r54);
      L8():
        paste1 = ldf paste0;
        p17 = prom<V +>{
          arch7 = ld arch;
          arch8 = force? arch7;
          checkMissing(arch8);
          return arch8;
        };
        r52 = dyn paste1("--arch=", p17);
        goto L3(r52);
      };
      p19 = prom<V +>{
        stdout3 = ld stdout;
        stdout4 = force? stdout3;
        checkMissing(stdout4);
        return stdout4;
      };
      p20 = prom<V +>{
        stderr3 = ld stderr;
        stderr4 = force? stderr3;
        checkMissing(stderr4);
        return stderr4;
      };
      p21 = prom<V +>{
        stdin3 = ld stdin;
        stdin4 = force? stdin3;
        checkMissing(stdin4);
        return stdin4;
      };
      p22 = prom<V +>{
        cmd5 = ld cmd;
        cmd6 = force? cmd5;
        checkMissing(cmd6);
        return cmd6;
      };
      p23 = prom<V +>{
        env3 = ld env;
        env4 = force? env3;
        checkMissing(env4);
        return env4;
      };
      p24 = prom<V +>{
        timeout5 = ld timeout;
        timeout6 = force? timeout5;
        checkMissing(timeout6);
        return timeout6;
      };
      r62 = dyn system3[, , , , , input, env, timeout](p16, p18, p19, p20, p21, p22, p23, p24);
      return r62;
    };
    r64 = dyn suppressWarnings1(p25);
    check L44() else D12();
  L45():
    out = ld out;
    check L47() else D13();
  L46():
    r65 = dyn base6(<sym out>, 124);
    goto L14(r65);
  D3():
    deopt 11 [cmd1];
  D12():
    deopt 38 [r64];
  D13():
    deopt 42 [out];
  L10():
    stdin1 = ld stdin;
    check L39() else D8();
  L12():
    suppressWarnings = ldf suppressWarnings;
    check L40() else D9();
  L15(c9):
    c20 = `as.logical`(c9);
    if c20 then L58() else L18();
  L30():
    cmd2 = force? cmd1;
    checkMissing(cmd2);
    c2 = `==`(cmd2, NULL);
    goto L9(c2);
  L31():
    tempfile = ldf tempfile;
    check L32() else D4();
  L44():
    goto L13(r64);
  L47():
    out1 = force? out;
    checkMissing(out1);
    identical = ldf identical in base;
    r67 = dyn identical(out1, 124, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L48() else D14();
  L49():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L50() else L51();
  D4():
    deopt 16 [];
  D8():
    deopt 28 [stdin1];
  D9():
    deopt 32 [];
  D14():
    deopt 53 [r67];
  L16(c13, r69):
    c17 = `as.logical`(r69);
    c18 = `||`(c13, c17);
    goto L15(c18);
  L18():
    goto L19();
  L19():
    out4 = ld out;
    check L62() else D20();
  L32():
    r7 = dyn tempfile("Rin");
    check L33() else D5();
  L39():
    stdin2 = force? stdin1;
    checkMissing(stdin2);
    st Rin = stdin2;
    goto L12();
  L40():
    p14 = prom<V +>{
      system2 = ldf system2;
      p6 = prom<V +>{
        sym2 = ldf nzchar;
        base2 = ldf nzchar in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L2() else L3();
      L0(r16):
        c4 = `as.logical`(r16);
        if c4 then L4() else L1();
      L2():
        arch1 = ld arch;
        arch2 = force? arch1;
        checkMissing(arch2);
        nzchar = ldf nzchar in base;
        r17 = dyn nzchar(arch2);
        goto L0(r17);
      L3():
        r15 = dyn base2(<sym arch>);
        goto L0(r15);
      L1():
        file_path1 = ldf `file.path`;
        p5 = prom<V +>{
          R_home1 = ldf `R.home`;
          r22 = dyn R_home1("bin");
          return r22;
        };
        r24 = dyn file_path1(p5, "Rterm.exe");
        return r24;
      L4():
        file_path = ldf `file.path`;
        p3 = prom<V +>{
          R_home = ldf `R.home`;
          r18 = dyn R_home();
          return r18;
        };
        p4 = prom<V +>{
          arch3 = ld arch;
          arch4 = force? arch3;
          checkMissing(arch4);
          return arch4;
        };
        r21 = dyn file_path(p3, "bin", p4, "Rterm.exe");
        return r21;
      };
      p9 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r27):
        return r27;
      L1():
        Ropts1 = ld Ropts;
        Ropts2 = force? Ropts1;
        checkMissing(Ropts2);
        paste = ldf paste;
        p8 = prom<V +>{
          shQuote = ldf shQuote;
          p7 = prom<V +>{
            Rin2 = ld Rin;
            Rin3 = force? Rin2;
            checkMissing(Rin3);
            return Rin3;
          };
          r29 = dyn shQuote(p7);
          return r29;
        };
        r31 = dyn paste("-f", p8);
        c5 = ldf c in base;
        r32 = dyn c5(Ropts2, r31);
        goto L0(r32);
      L2():
        r26 = dyn base3(<sym Ropts>, <lang paste("-f", shQuote(Rin))>);
        goto L0(r26);
      };
      p10 = prom<V +>{
        stdout1 = ld stdout;
        stdout2 = force? stdout1;
        checkMissing(stdout2);
        return stdout2;
      };
      p11 = prom<V +>{
        stderr1 = ld stderr;
        stderr2 = force? stderr1;
        checkMissing(stderr2);
        return stderr2;
      };
      p12 = prom<V +>{
        env1 = ld env;
        env2 = force? env1;
        checkMissing(env2);
        return env2;
      };
      p13 = prom<V +>{
        timeout3 = ld timeout;
        timeout4 = force? timeout3;
        checkMissing(timeout4);
        return timeout4;
      };
      r38 = dyn system2[, , , , env, timeout](p6, p9, p10, p11, p12, p13);
      return r38;
    };
    r40 = dyn suppressWarnings(p14);
    check L41() else D10();
  L48():
    goto L14(r67);
  L50():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L52() else L53();
  L51():
    r68 = dyn base7(<lang attr(out, "status")>, 124);
    goto L16(c8, r68);
  L58():
    report_timeout = ldf report_timeout;
    check L59() else D18();
  D5():
    deopt 18 [r7];
  D10():
    deopt 34 [r40];
  D18():
    deopt 75 [];
  D20():
    deopt 80 [out4];
  L17(c16, r71):
    identical1 = ldf identical in base;
    r73 = dyn identical1(r71, 124, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L56() else D17();
  L33():
    st Rin = r7;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L41():
    goto L13(r40);
  L52():
    out2 = ld out;
    check L54() else D15();
  L53():
    r70 = dyn base8(<sym out>, "status");
    goto L17(c8, r70);
  L59():
    p26 = prom<V +>{
      timeout7 = ld timeout;
      timeout8 = force? timeout7;
      checkMissing(timeout8);
      return timeout8;
    };
    r75 = dyn report_timeout(p26);
    check L60() else D19();
  L62():
    out5 = force? out4;
    checkMissing(out5);
    popenv;
    return out5;
  D15():
    deopt 58 [c8, out2];
  D17():
    deopt 72 [c16, r73];
  D19():
    deopt 77 [r75];
  L11():
    writeLines = ldf writeLines;
    check L36() else D6();
  L34():
    on_exit = ldf `on.exit` in base;
    r10 = dyn on_exit(<lang unlink(Rin)>);
    goto L11();
  L35():
    r8 = dyn base1(<lang unlink(Rin)>);
    goto L11();
  L54():
    out3 = force? out2;
    checkMissing(out3);
    attr = ldf attr in base;
    r72 = dyn attr(out3, "status");
    check L55() else D16();
  L56():
    goto L16(c16, r73);
  L60():
    goto L19();
  D6():
    deopt 24 [];
  D16():
    deopt 62 [c8, r72];
  L36():
    p1 = prom<V +>{
      cmd3 = ld cmd;
      cmd4 = force? cmd3;
      checkMissing(cmd4);
      return cmd4;
    };
    p2 = prom<V +>{
      Rin = ld Rin;
      Rin1 = force? Rin;
      checkMissing(Rin1);
      return Rin1;
    };
    r13 = dyn writeLines(p1, p2);
    check L37() else D7();
  L55():
    goto L17(c8, r72);
  D7():
    deopt 27 [r13];
  L37():
    goto L12();
  }
}