fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner442228296;
    st ccE = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner442228296(lines, include, clean) {
  (reg lines:*, reg include:*, reg clean:*) -+> V { var lines:*, var include:*, reg include_isMissing:L, reg include_orDefault:*, reg R_home:cls, reg r:V, reg p:p(V +), var clean:*, reg clean_isMissing:L, reg clean_orDefault:*, reg Sys_which:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg tempfile:cls, reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg on_exit:cls, reg r9:V, reg writeLines:cls, reg lines1:*, reg lines2:V, reg p1:p(V +), reg tfile:*, reg tfile1:V, reg p2:p(V +), reg r12:V, reg sprintf:cls, reg include1:*, reg include2:V, reg p3:p(V +), reg tfile2:*, reg tfile3:V, reg p4:p(V +), reg r15:V, reg system:cls, reg cmd:*, reg cmd1:V, reg p5:p(V +), reg r17:V, reg clean1:*, reg clean2:V, reg c1:L, reg ccEclean:cls, reg val:*, reg val1:V, reg p6:p(V +), reg tfile4:*, reg tfile5:V, reg p7:p(V +), reg r20:V, reg val2:*, reg val3:V |
    mkenv;
    st lines = lines;
    include_isMissing = missing.0(include);
    if include_isMissing then L0() else L1(include);
  L0():
    p = prom<V +>{
      R_home = ldf `R.home`;
      r = dyn R_home("include");
      return r;
    };
    goto L1(p);
  L1(include_orDefault):
    st include = include_orDefault;
    clean_isMissing = missing.0(clean);
    if clean_isMissing then L2(TRUE) else L2(clean);
  L2(clean_orDefault):
    st clean = clean_orDefault;
    Sys_which = ldf `Sys.which`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    r2 = dyn Sys_which("cc");
    check L8() else D1();
  D1():
    deopt 3 [r2];
  L8():
    r3 = `==`(r2, "");
    c = `as.logical`(r3);
    if c then L9() else L3();
  L3():
    goto L4();
  L4():
    tempfile = ldf tempfile;
    check L13() else D4();
  L9():
    stop = ldf stop;
    check L10() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 13 [];
  L10():
    r4 = dyn stop("'cc' is not on the path");
    check L11() else D3();
  L13():
    r6 = dyn tempfile[fileext](".h");
    check L14() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 16 [r6];
  L11():
    goto L4();
  L14():
    st tfile = r6;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L5():
    writeLines = ldf writeLines;
    check L17() else D6();
  L15():
    on_exit = ldf `on.exit` in base;
    r9 = dyn on_exit(<lang unlink(tfile)>);
    goto L5();
  L16():
    r7 = dyn base(<lang unlink(tfile)>);
    goto L5();
  D6():
    deopt 22 [];
  L17():
    p1 = prom<V +>{
      lines1 = ld lines;
      lines2 = force? lines1;
      checkMissing(lines2);
      return lines2;
    };
    p2 = prom<V +>{
      tfile = ld tfile;
      tfile1 = force? tfile;
      checkMissing(tfile1);
      return tfile1;
    };
    r12 = dyn writeLines(p1, p2);
    check L18() else D7();
  D7():
    deopt 25 [r12];
  L18():
    sprintf = ldf sprintf;
    check L19() else D8();
  D8():
    deopt 27 [];
  L19():
    p3 = prom<V +>{
      include1 = ld include;
      include2 = force? include1;
      checkMissing(include2);
      return include2;
    };
    p4 = prom<V +>{
      tfile2 = ld tfile;
      tfile3 = force? tfile2;
      checkMissing(tfile3);
      return tfile3;
    };
    r15 = dyn sprintf("cc -E -I%s %s", p3, p4);
    check L20() else D9();
  D9():
    deopt 31 [r15];
  L20():
    st cmd = r15;
    system = ldf system;
    check L21() else D10();
  D10():
    deopt 34 [];
  L21():
    p5 = prom<V +>{
      cmd = ld cmd;
      cmd1 = force? cmd;
      checkMissing(cmd1);
      return cmd1;
    };
    r17 = dyn system[, intern](p5, TRUE);
    check L22() else D11();
  D11():
    deopt 38 [r17];
  L22():
    st val = r17;
    clean1 = ld clean;
    check L23() else D12();
  D12():
    deopt 40 [clean1];
  L23():
    clean2 = force? clean1;
    checkMissing(clean2);
    c1 = `as.logical`(clean2);
    if c1 then L24() else L6();
  L6():
    val2 = ld val;
    check L28() else D15();
  L24():
    ccEclean = ldf ccEclean;
    check L25() else D13();
  D13():
    deopt 43 [];
  D15():
    deopt 47 [val2];
  L25():
    p6 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      return val1;
    };
    p7 = prom<V +>{
      tfile4 = ld tfile;
      tfile5 = force? tfile4;
      checkMissing(tfile5);
      return tfile5;
    };
    r20 = dyn ccEclean(p6, p7);
    check L26() else D14();
  L28():
    val3 = force? val2;
    checkMissing(val3);
    popenv;
    return val3;
  D14():
    deopt 46 [r20];
  L26():
    popenv;
    return r20;
  }
}