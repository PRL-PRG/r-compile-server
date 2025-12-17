fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st makevars_site = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg character:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg Sys_getenv:cls, reg r3:V, reg is_na:cls, reg r4:V, reg c:L, reg file_path:cls, reg paste0:cls, reg R_home:cls, reg r5:V, reg p:p(V +), reg Sys_getenv1:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg r11:V, reg file_exists:cls, reg f:*, reg f1:V, reg p3:p(V +), reg r14:V, reg c1:L, reg f2:*, reg f3:V, reg m:*, reg m1:V |
    mkenv;
    character = ldf character;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn character();
    check L6() else D1();
  D1():
    deopt 2 [r];
  L6():
    st m = r;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r2):
    c = `as.logical`(r2);
    if c then L12() else L1();
  L7():
    Sys_getenv = ldf `Sys.getenv`;
    check L9() else D2();
  L8():
    r1 = dyn base(<lang `<-`(f, Sys.getenv("R_MAKEVARS_SITE", NA_STR))>);
    goto L0(r1);
  D2():
    deopt 7 [];
  L1():
    goto L2();
  L2():
    file_exists = ldf `file.exists`;
    check L16() else D7();
  L9():
    r3 = dyn Sys_getenv("R_MAKEVARS_SITE", NA_STR);
    check L10() else D3();
  L12():
    file_path = ldf `file.path`;
    check L13() else D5();
  D3():
    deopt 10 [r3];
  D5():
    deopt 15 [];
  D7():
    deopt 23 [];
  L10():
    st f = r3;
    is_na = ldf `is.na` in base;
    r4 = dyn is_na(r3);
    check L11() else D4();
  L13():
    p2 = prom<V +>{
      paste0 = ldf paste0;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r5 = dyn R_home("etc");
        return r5;
      };
      p1 = prom<V +>{
        Sys_getenv1 = ldf `Sys.getenv`;
        r7 = dyn Sys_getenv1("R_ARCH");
        return r7;
      };
      r9 = dyn paste0(p, p1);
      return r9;
    };
    r11 = dyn file_path(p2, "Makevars.site");
    check L14() else D6();
  L16():
    p3 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r14 = dyn file_exists(p3);
    check L17() else D8();
  D4():
    deopt 13 [r4];
  D6():
    deopt 18 [r11];
  D8():
    deopt 25 [r14];
  L11():
    goto L0(r4);
  L14():
    st f = r11;
    goto L2();
  L17():
    c1 = `as.logical`(r14);
    if c1 then L18() else L3();
  L3():
    goto L4();
  L4():
    m = ld m;
    check L21() else D10();
  L18():
    f2 = ld f;
    check L19() else D9();
  D9():
    deopt 26 [f2];
  D10():
    deopt 31 [m];
  L19():
    f3 = force? f2;
    checkMissing(f3);
    st m = f3;
    goto L4();
  L21():
    m1 = force? m;
    checkMissing(m1);
    popenv;
    return m1;
  }
}