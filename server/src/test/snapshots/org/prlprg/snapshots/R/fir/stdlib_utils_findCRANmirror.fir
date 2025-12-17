fun main() {
  () -+> V { reg r:cls, reg Sys_getenv:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg findCRANmirror:cls, reg r4:V, reg findCRANmirror1:cls, reg r5:V, reg c:cls, reg r6:V, reg Sys_setenv:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg findCRANmirror2:cls, reg r10:V, reg findCRANmirror3:cls, reg r11:V, reg c1:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg old:*, reg old1:V, reg is_na:cls, reg r15:V, reg c2:L, reg Sys_setenv1:cls, reg old2:*, reg old3:V, reg p:p(V +), reg r17:V, reg Sys_unsetenv:cls, reg r18:V |
    mkenv;
    r = clos inner1980554437;
    st findCRANmirror = r;
    Sys_getenv = ldf `Sys.getenv`;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    r1 = dyn Sys_getenv("R_CRAN_WEB", NA_STR);
    check L5() else D1();
  D1():
    deopt 7 [r1];
  L5():
    st old = r1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0():
    Sys_setenv = ldf `Sys.setenv`;
    check L13() else D7();
  L6():
    findCRANmirror = ldf findCRANmirror;
    check L8() else D2();
  L7():
    r2 = dyn base(<lang findCRANmirror("src")>, <lang findCRANmirror("web")>);
    goto L0();
  D2():
    deopt 12 [];
  D7():
    deopt 22 [];
  L8():
    r4 = dyn findCRANmirror("src");
    check L9() else D3();
  L13():
    r7 = dyn Sys_setenv[R_CRAN_WEB]("https://cloud.r-project.org");
    check L14() else D8();
  D3():
    deopt 14 [r4];
  D8():
    deopt 25 [r7];
  L9():
    findCRANmirror1 = ldf findCRANmirror;
    check L10() else D4();
  L14():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D4():
    deopt 16 [];
  L1():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L10():
    r5 = dyn findCRANmirror1("web");
    check L11() else D5();
  L15():
    findCRANmirror2 = ldf findCRANmirror;
    check L17() else D9();
  L16():
    r8 = dyn base1(<lang findCRANmirror("src")>, <lang findCRANmirror("web")>);
    goto L1();
  D5():
    deopt 18 [r5];
  D9():
    deopt 29 [];
  L2(r14):
    c2 = `as.logical`(r14);
    if c2 then L26() else L3();
  L11():
    c = ldf c in base;
    r6 = dyn c(r4, r5);
    check L12() else D6();
  L17():
    r10 = dyn findCRANmirror2("src");
    check L18() else D10();
  L22():
    old = ld old;
    check L24() else D14();
  L23():
    r13 = dyn base2(<sym old>);
    goto L2(r13);
  D6():
    deopt 20 [r6];
  D10():
    deopt 31 [r10];
  D14():
    deopt 40 [old];
  L3():
    Sys_unsetenv = ldf `Sys.unsetenv`;
    check L30() else D18();
  L12():
    goto L0();
  L18():
    findCRANmirror3 = ldf findCRANmirror;
    check L19() else D11();
  L24():
    old1 = force? old;
    checkMissing(old1);
    is_na = ldf `is.na` in base;
    r15 = dyn is_na(old1);
    check L25() else D15();
  L26():
    Sys_setenv1 = ldf `Sys.setenv`;
    check L27() else D16();
  D11():
    deopt 33 [];
  D15():
    deopt 43 [r15];
  D16():
    deopt 45 [];
  D18():
    deopt 50 [];
  L19():
    r11 = dyn findCRANmirror3("web");
    check L20() else D12();
  L25():
    goto L2(r15);
  L27():
    p = prom<V +>{
      old2 = ld old;
      old3 = force? old2;
      checkMissing(old3);
      return old3;
    };
    r17 = dyn Sys_setenv1[R_CRAN_WEB](p);
    check L28() else D17();
  L30():
    r18 = dyn Sys_unsetenv("R_CRAN_WEB");
    check L31() else D19();
  D12():
    deopt 35 [r11];
  D17():
    deopt 48 [r17];
  D19():
    deopt 52 [r18];
  L20():
    c1 = ldf c in base;
    r12 = dyn c1(r10, r11);
    check L21() else D13();
  L28():
    popenv;
    return r17;
  L31():
    popenv;
    return r18;
  D13():
    deopt 37 [r12];
  L21():
    goto L1();
  }
}
fun inner1980554437(type) {
  (reg type:*) -+> V { var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg paste0:cls, reg toupper:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg Sys_getenv:cls, reg e:*, reg e1:V, reg p3:p(V +), reg ___:cls, reg r9:V, reg r10:cls, reg r11:V, reg p4:p(V +), reg r13:V |
    mkenv;
    type_isMissing = missing.0(type);
    if type_isMissing then L0() else L1(type);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("src", "web");
      goto L0(r2);
    L2():
      r = dyn base("src", "web");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    paste0 = ldf paste0;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      toupper = ldf toupper;
      p1 = prom<V +>{
        type1 = ld type;
        type2 = force? type1;
        checkMissing(type2);
        return type2;
      };
      r5 = dyn toupper(p1);
      return r5;
    };
    r7 = dyn paste0("R_CRAN_", p2);
    check L3() else D1();
  D1():
    deopt 4 [r7];
  L3():
    st e = r7;
    Sys_getenv = ldf `Sys.getenv`;
    check L4() else D2();
  D2():
    deopt 7 [];
  L4():
    p3 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    p4 = prom<V +>{
      ___ = ldf `:::`;
      r9 = dyn ___("tools", ".get_CRAN_repository_URL");
      checkFun.0(r9);
      r10 = r9 as cls;
      r11 = dyn r10();
      return r11;
    };
    r13 = dyn Sys_getenv(p3, p4);
    check L5() else D3();
  D3():
    deopt 10 [r13];
  L5():
    popenv;
    return r13;
  }
}