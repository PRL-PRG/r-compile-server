fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st BioC_package_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _get_standard_repository_URLs:cls, reg r:V, reg urls:*, reg urls1:V, reg c:L, reg urls3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg startsWith:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg urls4:*, reg urls5:V, reg names:cls, reg r3:V, reg p:p(V +), reg r5:V, reg __:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg urls6:*, reg urls7:V, reg length:cls, reg r9:V, reg r10:V, reg c1:L, reg lapply:cls, reg urls8:*, reg urls9:V, reg p1:p(V +), reg r14:cls, reg p2:p(V +), reg r16:V, reg Reduce:cls, reg r17:cls, reg p3:p(V +), reg lapply1:cls, reg info:*, reg info1:V, reg p4:p(V +), reg as_data_frame:*, reg as_data_frame1:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg r23:V |
    mkenv;
    _get_standard_repository_URLs = ldf `.get_standard_repository_URLs`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    r = dyn _get_standard_repository_URLs();
    check L5() else D1();
  D1():
    deopt 2 [r];
  L5():
    st urls = r;
    urls = ld urls;
    check L6() else D2();
  D2():
    deopt 4 [urls];
  L6():
    urls1 = force? urls;
    checkMissing(urls1);
    c = `is.object`(urls1);
    if c then L7() else L8(urls1);
  L0(dx1):
    st urls = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L7():
    dr = tryDispatchBuiltin.1("[", urls1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(urls3):
    startsWith = ldf startsWith;
    check L10() else D3();
  D3():
    deopt 7 [urls3];
  L1(r8):
    r10 = `!`(r8);
    c1 = `as.logical`(r10);
    if c1 then L16() else L2();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      urls4 = ld urls;
      urls5 = force? urls4;
      checkMissing(urls5);
      names = ldf names in base;
      r3 = dyn names(urls5);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym urls>);
      goto L0(r1);
    };
    r5 = dyn startsWith(p, "BioC");
    check L11() else D4();
  L12():
    urls6 = ld urls;
    check L14() else D5();
  L13():
    r7 = dyn base1(<sym urls>);
    goto L1(r7);
  D4():
    deopt 10 [urls3, r5];
  D5():
    deopt 15 [urls6];
  L2():
    lapply = ldf lapply;
    check L19() else D7();
  L11():
    __ = ldf `[` in base;
    r6 = dyn __(urls3, r5);
    goto L0(r6);
  L14():
    urls7 = force? urls6;
    checkMissing(urls7);
    length = ldf length in base;
    r9 = dyn length(urls7);
    check L15() else D6();
  L16():
    popenv;
    return NULL;
  D6():
    deopt 18 [r9];
  D7():
    deopt 26 [];
  L15():
    goto L1(r9);
  L19():
    p1 = prom<V +>{
      urls8 = ld urls;
      urls9 = force? urls8;
      checkMissing(urls9);
      return urls9;
    };
    p2 = prom<V +>{
      r14 = clos inner883694641;
      return r14;
    };
    r16 = dyn lapply(p1, p2);
    check L20() else D8();
  D8():
    deopt 29 [r16];
  L20():
    st info = r16;
    Reduce = ldf Reduce;
    check L21() else D9();
  D9():
    deopt 32 [];
  L21():
    p3 = prom<V +>{
      r17 = clos inner4198313549;
      return r17;
    };
    p6 = prom<V +>{
      lapply1 = ldf lapply;
      p4 = prom<V +>{
        info = ld info;
        info1 = force? info;
        checkMissing(info1);
        return info1;
      };
      p5 = prom<V +>{
        as_data_frame = ld `as.data.frame`;
        as_data_frame1 = force? as_data_frame;
        checkMissing(as_data_frame1);
        return as_data_frame1;
      };
      r21 = dyn lapply1[, , stringsAsFactors](p4, p5, FALSE);
      return r21;
    };
    r23 = dyn Reduce(p3, p6);
    check L22() else D10();
  D10():
    deopt 35 [r23];
  L22():
    popenv;
    return r23;
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg url:cls, reg paste0:cls, reg u1:*, reg u2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg on_exit:cls, reg r6:V, reg read_dcf:cls, reg con:*, reg con1:V, reg p2:p(V +), reg r8:V |
    mkenv;
    st u = u;
    url = ldf url;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      paste0 = ldf paste0;
      p = prom<V +>{
        u1 = ld u;
        u2 = force? u1;
        checkMissing(u2);
        return u2;
      };
      r1 = dyn paste0(p, "/VIEWS");
      return r1;
    };
    r3 = dyn url(p1);
    check L2() else D1();
  D1():
    deopt 3 [r3];
  L2():
    st con = r3;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    read_dcf = ldf `read.dcf`;
    check L5() else D2();
  L3():
    on_exit = ldf `on.exit` in base;
    r6 = dyn on_exit(<lang close(con)>);
    goto L0();
  L4():
    r4 = dyn base(<lang close(con)>);
    goto L0();
  D2():
    deopt 9 [];
  L5():
    p2 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r8 = dyn read_dcf(p2);
    check L6() else D3();
  D3():
    deopt 11 [r8];
  L6():
    popenv;
    return r8;
  }
}
fun inner4198313549(u, v) {
  (reg u:*, reg v:*) -+> V { var u:*, var v:*, reg merge:cls, reg u1:*, reg u2:V, reg p:p(V +), reg v1:*, reg v2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st u = u;
    st v = v;
    merge = ldf merge;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      return u2;
    };
    p1 = prom<V +>{
      v1 = ld v;
      v2 = force? v1;
      checkMissing(v2);
      return v2;
    };
    r2 = dyn merge[, , all](p, p1, TRUE);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}