fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.get_repositories` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg Sys_getenv:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg rfile:*, reg rfile1:V, reg is_na:cls, reg r3:V, reg c:L, reg c1:V, reg rfile2:*, reg rfile3:V, reg r4:V, reg c3:L, reg c4:V, reg c6:L, reg c7:V, reg file_test:cls, reg rfile4:*, reg rfile5:V, reg p:p(V +), reg r6:V, reg r7:V, reg c9:L, reg c10:V, reg c12:L, reg file_path:cls, reg Sys_getenv1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg file_test1:cls, reg rfile6:*, reg rfile7:V, reg p2:p(V +), reg r12:V, reg r13:V, reg c13:L, reg file_path1:cls, reg R_home:cls, reg r14:V, reg p3:p(V +), reg r16:V, reg r17:V, reg _read_repositories:cls, reg rfile8:*, reg rfile9:V, reg p4:p(V +), reg r20:V |
    mkenv;
    Sys_getenv = ldf `Sys.getenv`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    r = dyn Sys_getenv[, unset]("R_REPOSITORIES", NA_STR);
    check L8() else D1();
  D1():
    deopt 5 [r];
  L8():
    st rfile = r;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r2):
    c = `as.logical`(r2);
    if c then L1(c) else L13();
  L9():
    rfile = ld rfile;
    check L11() else D2();
  L10():
    r1 = dyn base(<sym rfile>);
    goto L0(r1);
  D2():
    deopt 9 [rfile];
  L1(c1):
    c6 = `as.logical`(c1);
    if c6 then L2(c6) else L16();
  L11():
    rfile1 = force? rfile;
    checkMissing(rfile1);
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(rfile1);
    check L12() else D3();
  L13():
    rfile2 = ld rfile;
    check L14() else D4();
  D3():
    deopt 12 [r3];
  D4():
    deopt 13 [c, rfile2];
  L2(c7):
    c12 = `as.logical`(c7);
    if c12 then L20() else L3();
  L12():
    goto L0(r3);
  L14():
    rfile3 = force? rfile2;
    checkMissing(rfile3);
    r4 = `==`(rfile3, "NULL");
    c3 = `as.logical`(r4);
    c4 = `||`(c, c3);
    goto L1(c4);
  L16():
    file_test = ldf file_test;
    check L17() else D5();
  D5():
    deopt 19 [c6];
  L3():
    goto L6();
  L6():
    _read_repositories = ldf `.read_repositories`;
    check L30() else D13();
  L17():
    p = prom<V +>{
      rfile4 = ld rfile;
      rfile5 = force? rfile4;
      checkMissing(rfile5);
      return rfile5;
    };
    r6 = dyn file_test("-f", p);
    check L18() else D6();
  L20():
    file_path = ldf `file.path`;
    check L21() else D7();
  D6():
    deopt 22 [c6, r6];
  D7():
    deopt 26 [];
  D13():
    deopt 49 [];
  L18():
    r7 = `!`(r6);
    c9 = `as.logical`(r7);
    c10 = `||`(c6, c9);
    goto L2(c10);
  L21():
    p1 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r8 = dyn Sys_getenv1("HOME");
      return r8;
    };
    r10 = dyn file_path(p1, ".R", "repositories");
    check L22() else D8();
  L30():
    p4 = prom<V +>{
      rfile8 = ld rfile;
      rfile9 = force? rfile8;
      checkMissing(rfile9);
      return rfile9;
    };
    r20 = dyn _read_repositories(p4);
    check L31() else D14();
  D8():
    deopt 30 [r10];
  D14():
    deopt 51 [r20];
  L22():
    st rfile = r10;
    file_test1 = ldf file_test;
    check L23() else D9();
  L31():
    popenv;
    return r20;
  D9():
    deopt 33 [];
  L23():
    p2 = prom<V +>{
      rfile6 = ld rfile;
      rfile7 = force? rfile6;
      checkMissing(rfile7);
      return rfile7;
    };
    r12 = dyn file_test1("-f", p2);
    check L24() else D10();
  D10():
    deopt 36 [r12];
  L24():
    r13 = `!`(r12);
    c13 = `as.logical`(r13);
    if c13 then L25() else L4();
  L4():
    goto L5(NULL);
  L5(r17):
    goto L6();
  L25():
    file_path1 = ldf `file.path`;
    check L26() else D11();
  D11():
    deopt 39 [];
  L26():
    p3 = prom<V +>{
      R_home = ldf `R.home`;
      r14 = dyn R_home("etc");
      return r14;
    };
    r16 = dyn file_path1(p3, "repositories");
    check L27() else D12();
  D12():
    deopt 42 [r16];
  L27():
    st rfile = r16;
    goto L5(r16);
  }
}