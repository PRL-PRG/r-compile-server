fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2045738975;
    st url_db_from_package_news = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2045738975(dir, installed) {
  (reg dir:*, reg installed:*) -+> V { var dir:*, var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg installed1:*, reg installed2:V, reg c:L, reg r:V, reg file_path:cls, reg r1:V, reg file_path1:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg path:*, reg path1:V, reg p1:p(V +), reg r4:V, reg file_exists:cls, reg nfile:*, reg nfile1:V, reg p2:p(V +), reg r6:V, reg c1:L, reg initialRdMacros:cls, reg r7:V, reg _get_urls_from_Rd:cls, reg prepare_Rd:cls, reg parse_Rd:cls, reg nfile2:*, reg nfile3:V, reg p3:p(V +), reg macros:*, reg macros1:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg r12:V, reg p6:p(V +), reg r14:V, reg r15:V, reg character:cls, reg r16:V, reg url_db:cls, reg urls:*, reg urls1:V, reg p7:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg path2:*, reg path3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg urls2:*, reg urls3:V, reg length:cls, reg r22:V, reg rep_int:cls, reg r23:V, reg p8:p(V +), reg r25:V |
    mkenv;
    st dir = dir;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L0(FALSE) else L0(installed);
  L0(installed_orDefault):
    st installed = installed_orDefault;
    installed1 = ld installed;
    check L5() else D0();
  D0():
    deopt 0 [installed1];
  L5():
    installed2 = force? installed1;
    checkMissing(installed2);
    c = `as.logical`(installed2);
    if c then L6() else L1();
  L1():
    file_path = ldf `file.path`;
    check L8() else D1();
  L2(r):
    st path = r;
    file_path1 = ldf `file.path`;
    check L10() else D3();
  L6():
    goto L2("NEWS.Rd");
  D1():
    deopt 5 [];
  D3():
    deopt 11 [];
  L8():
    r1 = dyn file_path("inst", "NEWS.Rd");
    check L9() else D2();
  L10():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p1 = prom<V +>{
      path = ld path;
      path1 = force? path;
      checkMissing(path1);
      return path1;
    };
    r4 = dyn file_path1(p, p1);
    check L11() else D4();
  D2():
    deopt 8 [r1];
  D4():
    deopt 14 [r4];
  L9():
    goto L2(r1);
  L11():
    st nfile = r4;
    file_exists = ldf `file.exists`;
    check L12() else D5();
  D5():
    deopt 17 [];
  L12():
    p2 = prom<V +>{
      nfile = ld nfile;
      nfile1 = force? nfile;
      checkMissing(nfile1);
      return nfile1;
    };
    r6 = dyn file_exists(p2);
    check L13() else D6();
  D6():
    deopt 19 [r6];
  L13():
    c1 = `as.logical`(r6);
    if c1 then L14() else L3();
  L3():
    character = ldf character;
    check L20() else D11();
  L4(r15):
    st urls = r15;
    url_db = ldf url_db;
    check L22() else D13();
  L14():
    initialRdMacros = ldf initialRdMacros;
    check L15() else D7();
  D7():
    deopt 21 [];
  D11():
    deopt 29 [];
  D13():
    deopt 33 [];
  L15():
    r7 = dyn initialRdMacros();
    check L16() else D8();
  L20():
    r16 = dyn character();
    check L21() else D12();
  L22():
    p7 = prom<V +>{
      urls = ld urls;
      urls1 = force? urls;
      checkMissing(urls1);
      return urls1;
    };
    p8 = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r19):
      return r19;
    L2():
      path2 = ld path;
      path3 = force? path2;
      checkMissing(path3);
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r18 = dyn base(<sym path>, <lang length(urls)>);
      goto L0(r18);
    L1(r21):
      rep_int = ldf `rep.int` in base;
      r23 = dyn rep_int(path3, r21);
      goto L0(r23);
    L4():
      urls2 = ld urls;
      urls3 = force? urls2;
      checkMissing(urls3);
      length = ldf length in base;
      r22 = dyn length(urls3);
      goto L1(r22);
    L5():
      r20 = dyn base1(<sym urls>);
      goto L1(r20);
    };
    r25 = dyn url_db(p7, p8);
    check L23() else D14();
  D8():
    deopt 22 [r7];
  D12():
    deopt 30 [r16];
  D14():
    deopt 36 [r25];
  L16():
    st macros = r7;
    _get_urls_from_Rd = ldf `.get_urls_from_Rd`;
    check L17() else D9();
  L21():
    goto L4(r16);
  L23():
    popenv;
    return r25;
  D9():
    deopt 25 [];
  L17():
    p6 = prom<V +>{
      prepare_Rd = ldf prepare_Rd;
      p5 = prom<V +>{
        parse_Rd = ldf parse_Rd;
        p3 = prom<V +>{
          nfile2 = ld nfile;
          nfile3 = force? nfile2;
          checkMissing(nfile3);
          return nfile3;
        };
        p4 = prom<V +>{
          macros = ld macros;
          macros1 = force? macros;
          checkMissing(macros1);
          return macros1;
        };
        r10 = dyn parse_Rd[, macros](p3, p4);
        return r10;
      };
      r12 = dyn prepare_Rd[, stages](p5, "install");
      return r12;
    };
    r14 = dyn _get_urls_from_Rd(p6);
    check L18() else D10();
  D10():
    deopt 27 [r14];
  L18():
    goto L4(r14);
  }
}