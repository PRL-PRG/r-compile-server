fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-387649469`;
    st `seek.connection` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-387649469`(con, where, origin, rw, `...`) {
  (reg con:*, reg where:*, reg origin:*, reg rw:*, reg ddd:dots) -+> V { var con:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, var origin:*, reg origin_isMissing:L, reg origin_orDefault:*, var rw:*, reg rw_isMissing:L, reg rw_orDefault:*, var `...`:dots?, reg pmatch:cls, reg origin1:*, reg origin2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg pmatch1:cls, reg rw1:*, reg rw2:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p3:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg origin3:*, reg origin4:V, reg is_na:cls, reg r14:V, reg c2:L, reg stop:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg con1:*, reg con2:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg where1:*, reg where2:V, reg as_double:cls, reg r21:V, reg origin5:*, reg origin6:V, reg rw3:*, reg rw4:V, reg seek:cls, reg r22:V |
    mkenv;
    st con = con;
    where_isMissing = missing.0(where);
    if where_isMissing then L0(NA_LGL) else L0(where);
  L0(where_orDefault):
    st where = where_orDefault;
    origin_isMissing = missing.0(origin);
    if origin_isMissing then L1("start") else L1(origin);
  L1(origin_orDefault):
    st origin = origin_orDefault;
    rw_isMissing = missing.0(rw);
    if rw_isMissing then L2("") else L2(rw);
  L2(rw_orDefault):
    st rw = rw_orDefault;
    st `...` = ddd;
    pmatch = ldf pmatch;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      origin1 = ld origin;
      origin2 = force? origin1;
      checkMissing(origin2);
      return origin2;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("start", "current", "end");
      goto L0(r3);
    L2():
      r1 = dyn base("start", "current", "end");
      goto L0(r1);
    };
    r5 = dyn pmatch(p, p1);
    check L9() else D1();
  D1():
    deopt 4 [r5];
  L9():
    st origin = r5;
    pmatch1 = ldf pmatch;
    check L10() else D2();
  D2():
    deopt 7 [];
  L10():
    p2 = prom<V +>{
      rw1 = ld rw;
      rw2 = force? rw1;
      checkMissing(rw2);
      return rw2;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1("read", "write");
      goto L0(r9);
    L2():
      r7 = dyn base1("read", "write");
      goto L0(r7);
    };
    r11 = dyn pmatch1(p2, p3, 0);
    check L11() else D3();
  D3():
    deopt 11 [r11];
  L11():
    st rw = r11;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L3(r13):
    c2 = `as.logical`(r13);
    if c2 then L16() else L4();
  L12():
    origin3 = ld origin;
    check L14() else D4();
  L13():
    r12 = dyn base2(<sym origin>);
    goto L3(r12);
  D4():
    deopt 15 [origin3];
  L4():
    goto L5();
  L5():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L14():
    origin4 = force? origin3;
    checkMissing(origin4);
    is_na = ldf `is.na` in base;
    r14 = dyn is_na(origin4);
    check L15() else D5();
  L16():
    stop = ldf stop;
    check L17() else D6();
  D5():
    deopt 18 [r14];
  D6():
    deopt 20 [];
  L6(r18):
    popenv;
    return r18;
  L15():
    goto L3(r14);
  L17():
    r15 = dyn stop("'origin' must be one of 'start', 'current' or 'end'");
    check L18() else D7();
  L20():
    con1 = ld con;
    check L22() else D8();
  L21():
    r17 = dyn base3(<lang seek(con, as.double(where), origin, rw)>);
    goto L6(r17);
  D7():
    deopt 22 [r15];
  D8():
    deopt 27 [con1];
  L18():
    goto L5();
  L22():
    con2 = force? con1;
    checkMissing(con2);
    sym4 = ldf `as.double`;
    base4 = ldf `as.double` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L23() else L24();
  L7(r20):
    origin5 = ld origin;
    check L27() else D11();
  L23():
    where1 = ld where;
    check L25() else D9();
  L24():
    r19 = dyn base4(<sym where>);
    goto L7(r19);
  D9():
    deopt 31 [where1];
  D11():
    deopt 35 [origin5];
  L25():
    where2 = force? where1;
    checkMissing(where2);
    as_double = ldf `as.double` in base;
    r21 = dyn as_double(where2);
    check L26() else D10();
  L27():
    origin6 = force? origin5;
    checkMissing(origin6);
    rw3 = ld rw;
    check L28() else D12();
  D10():
    deopt 34 [r21];
  D12():
    deopt 37 [rw3];
  L26():
    goto L7(r21);
  L28():
    rw4 = force? rw3;
    checkMissing(rw4);
    seek = ldf seek in base;
    r22 = dyn seek(con2, r20, origin6, rw4);
    check L29() else D13();
  D13():
    deopt 40 [r22];
  L29():
    goto L6(r22);
  }
}